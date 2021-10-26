within ComputerCooling.DevelTest;

model test_CentrifugalPump
  OnePhaseLiquidCircuits.FlowControl.PressureDrops.DpLinear_NominalPoint dp_upstream(w_nom = 0.1) annotation(
    Placement(visible = true, transformation(origin = {-50, 0}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  ComputerCooling.OnePhaseLiquidCircuits.FlowControl.Pumps.CentrifugalPump centrifugalPump(dp_nom = 200000, w_nom = 0.1) annotation(
    Placement(visible = true, transformation(origin = {0, 0}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.RealExpression cmd(y = 1 + sin(10 * time)) annotation(
    Placement(visible = true, transformation(origin = {-36, 44}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  OnePhaseLiquidCircuits.BoundaryConditions.BoundaryFixed_pT src(p = 499999.9999999999) annotation(
    Placement(visible = true, transformation(origin = {-90, 0}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  OnePhaseLiquidCircuits.FlowControl.PressureDrops.DpLinear_NominalPoint dp_downstream(w_nom = 0.1) annotation(
    Placement(visible = true, transformation(origin = {50, 0}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  OnePhaseLiquidCircuits.BoundaryConditions.BoundaryFixed_pT snk annotation(
    Placement(visible = true, transformation(origin = {90, 0}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
equation
  connect(centrifugalPump.pwh_b, dp_downstream.pwh_a) annotation(
    Line(points = {{12, 0}, {38, 0}}));
  connect(src.pwh_a, dp_upstream.pwh_a) annotation(
    Line(points = {{-78, 0}, {-62, 0}}));
  connect(dp_upstream.pwh_b, centrifugalPump.pwh_a) annotation(
    Line(points = {{-38, 0}, {-12, 0}}));
  connect(dp_downstream.pwh_b, snk.pwh_a) annotation(
    Line(points = {{62, 0}, {78, 0}}));
  connect(cmd.y, centrifugalPump.cmd) annotation(
    Line(points = {{-24, 44}, {-16, 44}, {-16, 8}, {-8, 8}}, color = {0, 0, 127}));
end test_CentrifugalPump;