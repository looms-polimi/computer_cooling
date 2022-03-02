within ComputerCooling.DevelTest;

model test_dp_liq
  extends Icons.TestModel;
  
  ComputerCooling.OnePhaseLiquidComponents.FlowControl.PressureDrops.DpQuadratic_NominalPoint dp annotation(
    Placement(visible = true, transformation(origin = {0, 0}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  ComputerCooling.OnePhaseLiquidComponents.BoundaryConditions.BoundaryPrescribed_pT src annotation(
    Placement(visible = true, transformation(origin = {-60, 0}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  Modelica.Blocks.Sources.RealExpression ip(y = 1e5 * (1 + 0.5 * sin(time)))  annotation(
    Placement(visible = true, transformation(origin = {-130, 28}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.RealExpression iT(y = 300 + 10 * time)  annotation(
    Placement(visible = true, transformation(origin = {-136, -10}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  ComputerCooling.OnePhaseLiquidComponents.BoundaryConditions.BoundaryFixed_wT snk(w = -0.1)  annotation(
    Placement(visible = true, transformation(origin = {80, 0}, extent = {{20, -20}, {-20, 20}}, rotation = 0)));
equation
  connect(src.pwh_a, dp.pwh_a) annotation(
    Line(points = {{-36, 0}, {-24, 0}}));
  connect(ip.y, src.p) annotation(
    Line(points = {{-118, 28}, {-102, 28}, {-102, 8}, {-84, 8}}, color = {0, 0, 127}));
  connect(iT.y, src.T) annotation(
    Line(points = {{-124, -10}, {-108, -10}, {-108, -8}, {-84, -8}}, color = {0, 0, 127}));
  connect(dp.pwh_b, snk.pwh_a) annotation(
    Line(points = {{24, 0}, {56, 0}}));
end test_dp_liq;
