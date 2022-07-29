within ComputerCooling.DevelTest;

model test_liquidLoop
  extends Icons.TestModel;
  Modelica.Blocks.Sources.RealExpression cmd(y = 1) annotation(
    Placement(visible = true, transformation(origin = {-24, -32}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  ComputerCooling.IncompressibleLiquidComponents.FlowControl.Pressurisers.PressuriserIdeal pressuriserIdeal annotation(
    Placement(visible = true, transformation(origin = {-34, 32}, extent = {{20, -20}, {-20, 20}}, rotation = 0)));
  ComputerCooling.IncompressibleLiquidComponents.FlowControl.Pumps.CentrifugalPump pump(dp_nom = 49999.99999999999, w_nom = 2) annotation(
    Placement(visible = true, transformation(origin = {26, -48}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  ComputerCooling.IncompressibleLiquidComponents.Transfer.Ducts.Tube_1D tube_cold(L = 1, TStart (displayUnit = "K") = 300, W = 3.14 * 0.006 / 2, dp_nom(displayUnit = "bar") = 12500, fluidHeats = true, n = 5, t = 0.0005, w_nom = 0.002) annotation(
    Placement(visible = true, transformation(origin = {26, 32}, extent = {{20, -20}, {-20, 20}}, rotation = 0)));
equation
  connect(tube_cold.pwh_b, pressuriserIdeal.pwh_a) annotation(
    Line(points = {{2, 32}, {-10, 32}}));
  connect(tube_cold.pwh_a, pump.pwh_b) annotation(
    Line(points = {{50, 32}, {50, -48}}));
  connect(pressuriserIdeal.pwh_b, pump.pwh_a) annotation(
    Line(points = {{-58, 32}, {-74, 32}, {-74, -48}, {2, -48}}));
  connect(cmd.y, pump.cmd) annotation(
    Line(points = {{-13, -32}, {2, -32}}, color = {0, 0, 127}));
end test_liquidLoop;