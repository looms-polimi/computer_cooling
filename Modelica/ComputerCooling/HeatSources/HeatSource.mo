within ComputerCooling.HeatSources;

model HeatSource
  Modelica.Blocks.Interfaces.RealInput P annotation(
    Placement(visible = true, transformation(origin = {-120, 0}, extent = {{-20, -20}, {20, 20}}, rotation = 0), iconTransformation(origin = {-120, 0}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));

  ComputerCooling.Interfaces.vHP hp(n = n) annotation(
    Placement(visible = true, transformation(origin = {0, -80}, extent = {{-20, -20}, {20, 20}}, rotation = 0), iconTransformation(origin = {120, 0}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  ComputerCooling.HeatSources.PrescribedPower PrescribedPower(n = n) annotation(
    Placement(visible = true, transformation(origin = {-40, -3.55271e-15}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  ComputerCooling.HeatSources.HeatCapacitor HeatCapacitor(n = n, TStart = TStart, C = C) annotation(
    Placement(visible = true, transformation(origin = {0, 60}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));

  parameter Integer n = 3;
  parameter Temperature TStart = 273.15 + 20;
  parameter HeatCapacity C = 502;
  
equation
  connect(PrescribedPower.hp, hp) annotation(
    Line(points = {{-16, 0}, {0, 0}, {0, -80}}));
  connect(HeatCapacitor.hp, hp) annotation(
    Line(points = {{0, 44}, {0, -80}}));
  connect(P, PrescribedPower.P) annotation(
    Line(points = {{-120, 0}, {-64, 0}}, color = {0, 0, 127}));
end HeatSource;
