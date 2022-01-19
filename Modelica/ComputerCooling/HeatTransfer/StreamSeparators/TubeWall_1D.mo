within ComputerCooling.HeatTransfer.StreamSeparators;

model TubeWall_1D
  Modelica.Thermal.HeatTransfer.Interfaces.HeatPort_a hp_in(each T(start = TStart)) annotation(
    Placement(visible = true, transformation(origin = {0, -70}, extent = {{-10, -10}, {10, 10}}, rotation = 0), iconTransformation(origin = {0, -120}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  Modelica.Thermal.HeatTransfer.Interfaces.HeatPort_a hp_ext(each T(start = TStart)) annotation(
    Placement(visible = true, transformation(origin = {0, 70}, extent = {{-10, -10}, {10, 10}}, rotation = 0), iconTransformation(origin = {0, 120}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));

  parameter Length L = 1 "Layer length";
  parameter Length W = 1 "Layer width";
  parameter Length t = 0.01 "Layer thickness";
  
  replaceable record materialRecord = SolidMaterials.Steel
              constrainedby SolidMaterials.BaseClasses.Base_solid_constant_props;
  materialRecord material;
  
  parameter Temperature TStart = 273.15 + 20 "Layer starting temperature";
  Temperature T[n](each start = TStart);
  
  parameter Integer n = 3 "Number of layers"; //1 inner -> n outer
  
protected
  final parameter Area A = L * W;
  final parameter ThermalConductance G = material.lambda * A / t / n;
  final parameter HeatCapacity C = material.c * material.d * A * t / n;

equation
  
  hp_in.Q_flow = G*(hp_in.T - T[1])/2;
  C*der(T[1]) = hp_in.Q_flow - G*(T[1] - T[2]);
  
  for j in 2:n-1 loop
    C*der(T[j]) = G*(T[j-1] - T[j]) - G*(T[j] - T[j+1]);
  end for;
  
  C*der(T[n]) = G*(T[n-1] - T[n]) + hp_ext.Q_flow;
  hp_ext.Q_flow = G*(hp_ext.T - T[n])/2;

end TubeWall_1D;