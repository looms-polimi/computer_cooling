within ComputerCooling.DevelTest;

model test_tube1D
  extends Icons.TestModel;
  OnePhaseLiquidComponents.BoundaryConditions.BoundaryFixed_pT snk(p(displayUnit = "Pa") = -1) annotation(
    Placement(visible = true, transformation(origin = {80, 0}, extent = {{20, -20}, {-20, 20}}, rotation = 0)));
  HeatSources.HeatSource_Power heatSrc(n = 5) annotation(
    Placement(visible = true, transformation(origin = {-30, 50}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  OnePhaseLiquidComponents.BoundaryConditions.BoundaryFixed_pT src annotation(
    Placement(visible = true, transformation(origin = {-80, 0}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  OnePhaseLiquidComponents.Transfer.Ducts.Tube_1D tube_1D(n = 5) annotation(
    Placement(visible = true, transformation(origin = {0, 0}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  Modelica.Blocks.Sources.RealExpression iPh(y = 100 * (1 + 100 * sin(0.1 * time))) annotation(
    Placement(visible = true, transformation(origin = {-70, 50}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
equation
  connect(src.pwh_a, tube_1D.pwh_a) annotation(
    Line(points = {{-56, 0}, {-24, 0}}));
  connect(heatSrc.hp, tube_1D.hp) annotation(
    Line(points = {{-18, 50}, {0, 50}, {0, 18}}));
  connect(iPh.y, heatSrc.P) annotation(
    Line(points = {{-58, 50}, {-42, 50}}, color = {0, 0, 127}));
  connect(tube_1D.pwh_b, snk.pwh_a) annotation(
    Line(points = {{24, 0}, {56, 0}}));
end test_tube1D;
