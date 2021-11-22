within ComputerCooling.HeatTransfer.StreamSeparators;

model TubeWall_0D
  Modelica.Thermal.HeatTransfer.Interfaces.HeatPort_a hp_in annotation(
    Placement(visible = true, transformation(origin = {0, -70}, extent = {{-10, -10}, {10, 10}}, rotation = 0), iconTransformation(origin = {0, -120}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  Modelica.Thermal.HeatTransfer.Interfaces.HeatPort_a hp_ext annotation(
    Placement(visible = true, transformation(origin = {0, 70}, extent = {{-10, -10}, {10, 10}}, rotation = 0), iconTransformation(origin = {0, 120}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));

  parameter Length L = 1 "Layer length";
  parameter Length W = 1 "Layer width";
  parameter Length t = 0.01 "Layer thickness";
  
  replaceable record materialRecord = SolidMaterials.Steel;
  materialRecord material;
  
  parameter Temperature TStart = 273.15 + 20 "Layer starting temperature";
  Temperature T(start = TStart);
  
protected
  final parameter Area A = L * W;
  final parameter ThermalConductance G = material.lambda * A / t;
  final parameter HeatCapacity C = material.c * material.d * A * t;

equation
  hp_in.Q_flow = G*(hp_in.T - T)/2;
  C*der(T) = hp_in.Q_flow + hp_ext.Q_flow + G*(hp_in.T - T) + G*(hp_ext.T - T);
  hp_ext.Q_flow = G *(hp_ext.T - T)/2;

end TubeWall_0D;