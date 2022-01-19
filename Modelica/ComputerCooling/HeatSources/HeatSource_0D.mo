within ComputerCooling.HeatSources;

model HeatSource_0D
  Modelica.Thermal.HeatTransfer.Interfaces.HeatPort_a hp_ext annotation(
    Placement(visible = true, transformation(origin = {0, 70}, extent = {{-10, -10}, {10, 10}}, rotation = 0), iconTransformation(origin = {0, 120}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  Modelica.Blocks.Interfaces.RealInput P annotation(
    Placement(visible = true, transformation(origin = {-120, -60}, extent = {{-20, -20}, {20, 20}}, rotation = 0), iconTransformation(origin = {-118, 40}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));

  parameter Temperature TStart = 273.15 + 20;
  Temperature T(start = TStart);
  parameter HeatCapacity C;
  
equation

  hp_ext.T = T;
  C * der(T) = P + hp_ext.Q_flow;

end HeatSource_0D;
