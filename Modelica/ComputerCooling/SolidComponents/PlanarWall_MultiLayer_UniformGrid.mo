within ComputerCooling.SolidComponents;

model PlanarWall_MultiLayer_UniformGrid
  replaceable record Material = SolidMaterials.Copper constrainedby SolidMaterials.BaseClasses.Base_solid_constant_props;
  Material material;
  parameter Length l_w = 1 "Total width";
  parameter Length l_d = 1 "Total depth";
  parameter Length l_t = 0.001 "Wall thickness";
  parameter Integer w = 5  "number of lumps along width (left->right)" annotation(
    Evaluate = true);
  parameter Integer d = 4  "number of lumps along depth (front->rear)" annotation(
    Evaluate = true);
  parameter Integer t = 3  "number of lumps along thickness (bottom->top)" annotation(
    Evaluate = true);
  
  parameter Temperature TStart = 273.15 + 20 "Starting temperature";
  
  ComputerCooling.Interfaces.HeatPortMatrix hp_in(rows = w, cols = d) annotation(
    Placement(visible = true, transformation(origin = {0, -80}, extent = {{-20, -20}, {20, 20}}, rotation = 0), iconTransformation(origin = {0, -40}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  ComputerCooling.Interfaces.HeatPortMatrix hp_ext(rows = w, cols = d) annotation(
    Placement(visible = true, transformation(origin = {0, 80}, extent = {{-20, -20}, {20, 20}}, rotation = 0), iconTransformation(origin = {0, 40}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  
  Temperature T[w, d, t](each start = TStart, each fixed = true);

protected
  final parameter Area A_w = (l_d*l_t)/(d*t)  "lump section area along width";
  final parameter Area A_d = (l_w*l_t)/(w*t)  "lump section area along depth";
  final parameter Area A_t = (l_d*l_w)/(d*w)  "lump section area along thickness";

  final parameter ThermalConductance G_w = material.lambda * A_w /(l_w/w);
  final parameter ThermalConductance G_d = material.lambda * A_d /(l_d/d);
  final parameter ThermalConductance G_t = material.lambda * A_t /(l_t/t);
  final parameter Volume V_lump = (l_w*l_d*l_t)/(w*d*t) "Single lump volume";
  final parameter HeatCapacity C = material.c * material.d * V_lump "heat capacity of a single lump";

equation

  for i in 1:w loop
    for j in 1:d loop
      hp_in.port[i, j].Q_flow = 2*G_t * (hp_in.port[i, j].T - T[i, j, 1]);
      hp_ext.port[i, j].Q_flow = 2*G_t * (hp_ext.port[i, j].T - T[i, j, t]);
    end for;
  end for;
  
//we assume w,d,t > 1

//edge lumps on first thickness layer
  C * der(T[1, 1, 1]) = hp_in.port[1, 1].Q_flow - G_t * (T[1, 1, 1] - T[1, 1, 2]) - G_w * (T[1, 1, 1] - T[2, 1, 1]) - G_d * (T[1, 1, 1] - T[1, 2, 1]);
  C * der(T[w, 1, 1]) = hp_in.port[w, 1].Q_flow - G_t * (T[w, 1, 1] - T[w, 1, 2]) - G_w * (T[w, 1, 1] - T[w - 1, 1, 1]) - G_d * (T[w, 1, 1] - T[w, 2, 1]);
  C * der(T[1, d, 1]) = hp_in.port[1, d].Q_flow - G_t * (T[1, d, 1] - T[1, d, 2]) - G_w * (T[1, d, 1] - T[2, d, 1]) - G_d * (T[1, d, 1] - T[1, d - 1, 1]);
  C * der(T[w, d, 1]) = hp_in.port[w, d].Q_flow - G_t * (T[w, d, 1] - T[w, d, 2]) - G_w * (T[w, d, 1] - T[w - 1, d, 1]) - G_d * (T[w, d, 1] - T[w, d - 1, 1]);

//edge lumps along thickness
  for k in 2:t - 1 loop
    C * der(T[1, 1, k]) = G_t * (T[1, 1, k - 1] - 2*T[1, 1, k] + T[1, 1, k + 1]) - G_w * (T[1, 1, k] - T[2, 1, k]) - G_d * (T[1, 1, k] - T[1, 2, k]);
    C * der(T[w, 1, k]) = G_t * (T[w, 1, k - 1] - 2*T[w, 1, k] + T[w, 1, k + 1]) - G_w * (T[w, 1, k] - T[w - 1, 1, k]) - G_d * (T[w, 1, k] - T[w, 2, k]);  
    C * der(T[1, d, k]) = G_t * (T[1, d, k - 1] - 2*T[1, d, k] + T[1, d, k + 1]) - G_w * (T[1, d, k] - T[2, d, k]) - G_d * (T[1, d, k] - T[1, d - 1, k]);
    C * der(T[w, d, k]) = G_t * (T[w, d, k - 1] - 2*T[w, d, k] + T[w, d, k + 1]) - G_w * (T[w, d, k] - T[w - 1, d, k]) - G_d * (T[w, d, k] - T[w, d - 1, k]);
  end for;
  
//edge lumps on last thickness layer
  C * der(T[1, 1, t]) = G_t * (T[1, 1, t - 1] - T[1, 1, t]) + hp_ext.port[1, 1].Q_flow - G_w * (T[1, 1, t] - T[2, 1, t]) - G_d * (T[1, 1, t] - T[1, 2, t]);
  C * der(T[w, 1, t]) = G_t * (T[w, 1, t - 1] - T[w, 1, t]) + hp_ext.port[w, 1].Q_flow - G_w * (T[w, 1, t] - T[w - 1, 1, t]) - G_d * (T[w, 1, t] - T[w, 2, t]);
  C * der(T[1, d, t]) = G_t * (T[1, d, t - 1] - T[1, d, t]) + hp_ext.port[1, d].Q_flow - G_w * (T[1, d, t] - T[2, d, t]) - G_d * (T[1, d, t] - T[1, d - 1, t]);
  C * der(T[w, d, t]) = G_t * (T[w, d, t - 1] - T[w, d, t]) + hp_ext.port[w, d].Q_flow - G_w * (T[w, d, t] - T[w - 1, d, t]) - G_d * (T[w, d, t] - T[w, d - 1, t]);
//border lumps along width on first layer
  for i in 2:w - 1 loop
    C * der(T[i, 1, 1]) = hp_in.port[i, 1].Q_flow - G_t * (T[i, 1, 1] - T[i, 1, 2]) - G_w * (2*T[i, 1, 1] - T[i - 1, 1, 1] - T[i + 1, 1, 1]) - G_d * (T[i, 1, 1] - T[i, 2, 1]);
    C * der(T[i, d, 1]) = hp_in.port[i, d].Q_flow - G_t * (T[i, d, 1] - T[i, d, 2]) - G_w * (2*T[i, d, 1] - T[i - 1, d, 1] - T[i + 1, d, 1]) - G_d * (T[i, d, 1] - T[i, d - 1, 1]);

//border lumps along width and thickness
    for k in 2:t - 1 loop
      C * der(T[i, 1, k]) = G_t * (T[i, 1, k - 1] - 2*T[i, 1, k] + T[i, 1, k + 1]) - G_w * (2*T[i, 1, k] - T[i - 1, 1, k] - T[i + 1, 1, k]) - G_d * (T[i, 1, k] - T[i, 2, k]);
      C * der(T[i, d, k]) = G_t * (T[i, d, k - 1] - 2*T[i, d, k] + T[i, d, k + 1]) - G_w * (2*T[i, d, k] - T[i - 1, d, k] - T[i + 1, d, k]) - G_d * (T[i, d, k] - T[i, d - 1, k]);
    end for;
//border lumps along width on last layer
    C * der(T[i, 1, t]) = G_t * (T[i, 1, t - 1] - T[i, 1, t]) + hp_ext.port[i, 1].Q_flow - G_w * (2*T[i, 1, t] - T[i - 1, 1, t] - T[i + 1, 1, t]) - G_d * (T[i, 1, t] - T[i, 2, t]);
    C * der(T[i, d, t]) = G_t * (T[i, d, t - 1] - T[i, d, t]) + hp_ext.port[i, d].Q_flow - G_w * (2*T[i, d, t] - T[i - 1, d, t] - T[i + 1, d, t]) - G_d * (T[i, d, t] - T[i, d - 1, t]);
  end for;
//border lumps along depth on first layer
  for j in 2:d - 1 loop
    C * der(T[1, j, 1]) = hp_in.port[1, j].Q_flow - G_t * (T[1, j, 1] - T[1, j, 2]) - G_w * (T[1, j, 1] - T[2, j, 1]) - G_d * (2*T[1, j, 1] - T[1, j - 1, 1] - T[1, j + 1, 1]);
    C * der(T[w, j, 1]) = hp_in.port[w, j].Q_flow - G_t * (T[w, j, 1] - T[w, j, 2]) - G_w * (T[w, j, 1] - T[w - 1, j, 1]) - G_d * (2*T[w, j, 1] - T[w, j - 1, 1] - T[w, j + 1, 1]);
    
//border lumps along depth and thickness
    for k in 2:t - 1 loop
      C * der(T[1, j, k]) = G_t * (T[1, j, k - 1] - 2*T[1, j, k] + T[1, j, k + 1]) - G_w * (T[1, j, k] - T[2, j, k]) - G_d * (2*T[1, j, k] - T[1, j - 1, k] - T[1, j + 1, k]);
      C * der(T[w, j, k]) = G_t * (T[w, j, k - 1] - 2*T[w, j, k] + T[w, j, k + 1]) - G_w * (T[w, j, k] - T[w - 1, j, k]) - G_d * (2*T[w, j, k] - T[w, j - 1, k] - T[w, j + 1, k]);
    end for;
//border lumps along depth on last layer
    C * der(T[1, j, t]) = G_t * (T[1, j, t - 1] - T[1, j, t]) + hp_ext.port[1, j].Q_flow - G_w * (T[1, j, t] - T[2, j, t]) - G_d * (2*T[1, j, t] - T[1, j - 1, t] - T[1, j + 1, t]);
    C * der(T[w, j, t]) = G_t * (T[w, j, t - 1] - T[w, j, t]) + hp_ext.port[w, j].Q_flow - G_w * (T[w, j, t] - T[w - 1, j, t]) - G_d * (2*T[w, j, t] - T[w, j - 1, t] - T[w, j + 1, t]);
  end for;
  
//"central" lumps along all directions
  for i in 2:w - 1 loop
    for j in 2:d - 1 loop
      C * der(T[i, j, 1]) = hp_in.port[i, j].Q_flow - G_t * (T[i, j, 1] - T[i, j, 2]) - G_w * (2*T[i, j, 1] - T[i - 1, j, 1] - T[i + 1, j, 1]) - G_d * (2*T[i, j, 1] - T[i, j - 1, 1] - T[i, j + 1, 1]);
      for k in 2:t - 1 loop
        C * der(T[i, j, k]) = G_t * (T[i, j, k - 1] - 2*T[i, j, k] + T[i, j, k + 1]) - G_w * (2*T[i, j, k] - T[i - 1, j, k] - T[i + 1, j, k]) - G_d * (2*T[i, j, k] - T[i, j - 1, k] - T[i, j + 1, k]);
      end for;
      C * der(T[i, j, t]) = G_t * (T[i, j, t - 1] - T[i, j, t]) + hp_ext.port[i, j].Q_flow - G_w * (2*T[i, j, t] - T[i - 1, j, t] - T[i + 1, j, t]) - G_d * (2*T[i, j, t] - T[i, j - 1, t] - T[i, j + 1, t]);
    end for;
  end for;
  
 
  annotation(
    Icon(graphics = {Rectangle(fillColor = {211, 215, 207}, fillPattern = FillPattern.Solid, extent = {{-100, 20}, {100, -20}}), Line(origin = {-59.9875, -0.177375}, points = {{0, 20}, {0, -20}}), Line(origin = {-80.0707, 0.0234569}, points = {{0, 20}, {0, -20}}), Line(origin = {-40.1038, -0.197413}, points = {{0, 20}, {0, -20}}), Line(origin = {-2.00911, -0.21978}, points = {{4.44089e-16, 20}, {0, -20}}), Line(origin = {-20.1038, 0.0780571}, points = {{0, 20}, {0, -20}}), Line(origin = {39.912, -0.104411}, points = {{0, 20}, {0, -20}}), Line(origin = {19.6207, -0.00510068}, points = {{0, 20}, {0, -20}}), Line(origin = {59.9055, 0.0942101}, points = {{0, 20}, {0, -20}}), Line(origin = {79.9055, 0.0494768}, points = {{0, 20}, {0, -20}}), Line(origin = {0.179316, -9.97301}, points = {{-100, 0}, {100, 0}}), Line(origin = {-0.0200608, -0.144588}, points = {{-100, 0}, {100, 0}}), Line(origin = {-0.0616396, 11.1106}, points = {{-100, 0}, {100, 0}})}));
end PlanarWall_MultiLayer_UniformGrid;