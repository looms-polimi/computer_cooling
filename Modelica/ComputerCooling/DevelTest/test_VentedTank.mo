within ComputerCooling.DevelTest;

model test_VentedTank
  OnePhaseLiquidCircuits.Storage.VentedTank ventedTank(H = 1, V = 0.1, lstart = 0.5) annotation(
    Placement(visible = true, transformation(origin = {0, 0}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  OnePhaseLiquidCircuits.BoundaryConditions.BoundaryPrescribed_wT src annotation(
    Placement(visible = true, transformation(origin = {-54, 0}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.RealExpression w(y = 12) annotation(
    Placement(visible = true, transformation(origin = {-84, 22}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.RealExpression T(y = 273.15 + 30) annotation(
    Placement(visible = true, transformation(origin = {-84, -32}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  OnePhaseLiquidCircuits.FlowControl.PressureDrops.DpLinear_NominalPoint dp_exit(dp_nom = 98099.99999999999, w_nom = 0.1) annotation(
    Placement(visible = true, transformation(origin = {40, 0}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  OnePhaseLiquidCircuits.BoundaryConditions.BoundaryFixed_pT snk(p(displayUnit = "Pa") = 0) annotation(
    Placement(visible = true, transformation(origin = {78, 0}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
equation
  connect(ventedTank.pwh_b, dp_exit.pwh_a) annotation(
    Line(points = {{14, 0}, {28, 0}}));
  connect(dp_exit.pwh_b, snk.pwh_a) annotation(
    Line(points = {{52, 0}, {66, 0}}));
  connect(w.y, src.w) annotation(
    Line(points = {{-73, 22}, {-60, 22}, {-60, 4}}, color = {0, 0, 127}));
  connect(src.pwh_a, ventedTank.pwh_a) annotation(
    Line(points = {{-42, 0}, {-12, 0}}));
  connect(T.y, src.T) annotation(
    Line(points = {{-72, -32}, {-60, -32}, {-60, -4}}, color = {0, 0, 127}));
end test_VentedTank;