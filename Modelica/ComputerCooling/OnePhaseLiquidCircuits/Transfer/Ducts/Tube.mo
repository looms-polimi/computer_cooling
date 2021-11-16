within ComputerCooling.OnePhaseLiquidCircuits.Transfer.Ducts;

model Tube
  ComputerCooling.OnePhaseLiquidCircuits.Transfer.Ducts.LiquidStreamZeroD liquidStream(Dstream = D, L = L, dz = dz, w_nom = w_nom, dp_nom = dp_nom, TStart = TStart) annotation(
    Placement(visible = true, transformation(origin = {0, -20}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));

  ComputerCooling.Interfaces.pwh pwh_a annotation(
    Placement(visible = true, transformation(origin = {-120, -20}, extent = {{-20, -20}, {20, 20}}, rotation = 0), iconTransformation(origin = {-120, 0}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  ComputerCooling.Interfaces.pwh pwh_b annotation(
    Placement(visible = true, transformation(origin = {120, -20}, extent = {{-20, -20}, {20, 20}}, rotation = 0), iconTransformation(origin = {120, 0}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));

  ComputerCooling.HeatTransfer.StreamSeparators.TubeWall wall( TStart = TStart, L = L, W = 5, n = n)  annotation(
    Placement(visible = true, transformation(origin = {0, 40}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));

  Modelica.Thermal.HeatTransfer.Interfaces.HeatPort_a hp(T(start = TStart)) annotation(
    Placement(visible = true, transformation(origin = {0, 100}, extent = {{-20, -20}, {20, 20}}, rotation = 0), iconTransformation(origin = {0, 120}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));

  parameter Length D = 0.75 "";
  parameter Length L = 1;
  parameter Length dz = 0;
  
  parameter MassFlowRate w_nom = 0.1;
  parameter PressureDifference dp_nom = 0.1;
  
  parameter Temperature TStart = 273.15 + 20;
  
  parameter Integer n = 1;

equation
  connect(pwh_a, liquidStream.pwh_a) annotation(
    Line(points = {{-120, -20}, {-24, -20}}));
  connect(liquidStream.pwh_b, pwh_b) annotation(
    Line(points = {{24, -20}, {120, -20}}));
  connect(liquidStream.hp, wall.hp_in) annotation(
    Line(points = {{0, -8}, {0, 22}}, color = {191, 0, 0}));
  connect(wall.hp_ext, hp) annotation(
    Line(points = {{0, 58}, {0, 100}}, color = {191, 0, 0}));
end Tube;