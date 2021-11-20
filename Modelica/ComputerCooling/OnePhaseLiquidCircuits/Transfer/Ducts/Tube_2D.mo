within ComputerCooling.OnePhaseLiquidCircuits.Transfer.Ducts;

model Tube_2D
  ComputerCooling.OnePhaseLiquidCircuits.Transfer.Ducts.LiquidStream_2D liquidStream(Dstream = D, L = L, dz = dz, w_nom = w_nom, dp_nom = dp_nom, TStart = TStart, s = s) annotation(
    Placement(visible = true, transformation(origin = {0, -20}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));

  ComputerCooling.Interfaces.pwh pwh_a annotation(
    Placement(visible = true, transformation(origin = {-120, -20}, extent = {{-20, -20}, {20, 20}}, rotation = 0), iconTransformation(origin = {-120, 0}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  ComputerCooling.Interfaces.pwh pwh_b annotation(
    Placement(visible = true, transformation(origin = {120, -20}, extent = {{-20, -20}, {20, 20}}, rotation = 0), iconTransformation(origin = {120, 0}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));

  Modelica.Thermal.HeatTransfer.Interfaces.HeatPort_a hp[s](each T(start = TStart)) annotation(
    Placement(visible = true, transformation(origin = {0, 100}, extent = {{-20, -20}, {20, 20}}, rotation = 0), iconTransformation(origin = {0, 120}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  ComputerCooling.HeatTransfer.StreamSeparators.TubeWall_2D tubeWall(L = L, W = W, t = t, material = material, TStart = TStart, n = n, s = s) annotation(
    Placement(visible = true, transformation(origin = {0, 50}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));

  parameter Integer n = 3 "Number of wall layers";
  parameter Integer s = 5 "Number of segments";

  parameter Length D = 0.75 "Tube inner diameter";
  parameter Length L = 1 "Tube length";
  parameter Length dz = 0 "Tube height difference [port b over port a]";
  parameter Length t = 0.01 "Tube wall thickness";
  parameter String material "Tube wall material";
  
  parameter MassFlowRate w_nom = 0.1 "Nominal mass flow rate through tube given nominal pressure differential";
  parameter PressureDifference dp_nom = 0.1 "Nominal pressure differential in tube";
  
  parameter Temperature TStart = 273.15 + 20 "Tube starting temperature";
  
protected
  parameter Length W = 2*Modelica.Constants.pi *(D/2 + t);
  
equation
  connect(pwh_a, liquidStream.pwh_a) annotation(
    Line(points = {{-120, -20}, {-24, -20}}));
  connect(liquidStream.pwh_b, pwh_b) annotation(
    Line(points = {{24, -20}, {120, -20}}));
  connect(liquidStream.hp, tubeWall.hp_in) annotation(
    Line(points = {{0, 4}, {0, 26}}, color = {191, 0, 0}, thickness = 0.5));
  connect(tubeWall.hp_ext, hp) annotation(
    Line(points = {{0, 74}, {0, 100}}, color = {191, 0, 0}, thickness = 0.5));
end Tube_2D;