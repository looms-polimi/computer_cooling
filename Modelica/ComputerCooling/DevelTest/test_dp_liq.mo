within ComputerCooling.DevelTest;

model test_dp_liq
  ComputerCooling.OnePhaseLiquidCircuits.FlowControl.PressureDrops.DpQuadratic_NominalPoint dp annotation(
    Placement(visible = true, transformation(origin = {-10, 10}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  ComputerCooling.OnePhaseLiquidCircuits.BoundaryConditions.BoundaryPrescribed_pT src annotation(
    Placement(visible = true, transformation(origin = {-70, 10}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  ComputerCooling.OnePhaseLiquidCircuits.BoundaryConditions.BoundaryFixed_pT snk(T = 283.15)  annotation(
    Placement(visible = true, transformation(origin = {50, 10}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.RealExpression ip(y = 1e5 * (1 + 0.5 * sin(time)))  annotation(
    Placement(visible = true, transformation(origin = {-130, 28}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.RealExpression iT(y = 300)  annotation(
    Placement(visible = true, transformation(origin = {-136, -10}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
equation
  connect(src.pwh_a, dp.pwh_a) annotation(
    Line(points = {{-58, 10}, {-22, 10}}, color = {0, 0, 0}));
  connect(dp.pwh_b, snk.pwh_a) annotation(
    Line(points = {{2, 10}, {38, 10}}, color = {0, 0, 0}));
  connect(ip.y, src.p) annotation(
    Line(points = {{-118, 28}, {-102, 28}, {-102, 14}, {-76, 14}}, color = {0, 0, 127}));
  connect(iT.y, src.T) annotation(
    Line(points = {{-124, -10}, {-108, -10}, {-108, 6}, {-76, 6}}, color = {0, 0, 127}));
end test_dp_liq;