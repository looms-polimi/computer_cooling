within ComputerCooling.SolidComponents;

model Metal_layer_no_spread_uniform_grid
  parameter Integer rows = 4;
  parameter Integer cols = 4;
  
  parameter Length side=0.06;
  parameter Length thickness=0.002;
  parameter Temperature TStart = 273.15 + 20;

  ComputerCooling.Interfaces.HeatPortMatrix sink_side(rows=rows,cols=cols) annotation(
    Placement(visible = true, transformation(origin = {-2, 46}, extent = {{-10, -10}, {10, 10}}, rotation = 0), iconTransformation(origin = {0, 40}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  ComputerCooling.Interfaces.HeatPortMatrix cpu_side(rows=rows,cols=cols) annotation(
    Placement(visible = true, transformation(origin = {-8, -62}, extent = {{-10, -10}, {10, 10}}, rotation = 0), iconTransformation(origin = {0, -60}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  
  replaceable record materialRecord = SolidMaterials.Silicon
              constrainedby SolidMaterials.BaseClasses.Base_solid_constant_props;
  
  materialRecord material;
  Temperature T[rows,cols] (each start = TStart);

protected
  final parameter Area A=side^2;
  final parameter Volume V=A*thickness;
  final parameter Mass mvol=material.d*V/rows/cols;
  final parameter HeatCapacity cvol=material.c*mvol;
  final parameter ThermalConductance Gortho=material.lambda*A/rows/cols/(thickness/2);
  
equation
  for i in 1:rows loop
      for j in 1:cols loop
          cvol*der(T[i,j]) = cpu_side.port[i,j].Q_flow+sink_side.port[i,j].Q_flow;
          cpu_side.port[i,j].Q_flow = Gortho*(cpu_side.port[i,j].T-T[i,j]);
          sink_side.port[i,j].Q_flow = Gortho*(sink_side.port[i,j].T-T[i,j]);
      end for;
  end for;

annotation(
    Icon(graphics = {Rectangle(lineColor = {252, 175, 62}, fillColor = {238, 238, 236}, fillPattern = FillPattern.HorizontalCylinder, extent = {{-100, 20}, {100, -20}}), Rectangle(origin = {0, -30}, fillPattern = FillPattern.Solid, extent = {{-100, 10}, {100, -10}})}));
end Metal_layer_no_spread_uniform_grid;