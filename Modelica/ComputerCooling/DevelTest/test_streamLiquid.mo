within ComputerCooling.DevelTest;

model test_streamLiquid
  OnePhaseLiquidCircuits.BoundaryConditions.BoundaryFixed_pT snk(p = 99999.99999999999) annotation(
    Placement(visible = true, transformation(origin = {80, 0}, extent = {{20, -20}, {-20, 20}}, rotation = 0)));
  Modelica.Thermal.HeatTransfer.Sources.FixedTemperature fixedTemperature(T = 273.15 + 90) annotation(
    Placement(visible = true, transformation(origin = {-36, 56}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  OnePhaseLiquidCircuits.Transfer.Ducts.LiquidStreamZeroD liquidStream annotation(
    Placement(visible = true, transformation(origin = {0, 0}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  OnePhaseLiquidCircuits.BoundaryConditions.BoundaryFixed_pT src(p = 110000) annotation(
    Placement(visible = true, transformation(origin = {-80, 0}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
equation
  connect(liquidStream.pwh_b, snk.pwh_a) annotation(
    Line(points = {{24, 0}, {56, 0}}));
  connect(fixedTemperature.port, liquidStream.hp) annotation(
    Line(points = {{-26, 56}, {0, 56}, {0, 12}}, color = {191, 0, 0}));
  connect(src.pwh_a, liquidStream.pwh_a) annotation(
    Line(points = {{-56, 0}, {-24, 0}}));
end test_streamLiquid;