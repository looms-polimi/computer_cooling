within ComputerCooling.DevelTest;

model test_TJunction
  OnePhaseLiquidCircuits.BoundaryConditions.BoundaryFixed_wT src_b(w = 0.2) annotation(
    Placement(visible = true, transformation(origin = {-80, 0}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  OnePhaseLiquidCircuits.Transfer.Junctions.JunctionT junctionT(junctionTFlow = ComputerCooling.OnePhaseLiquidCircuits.Transfer.Junctions.JunctionT.JunctionTFlow.SimpleConfluence_cIn, w_nom_a = 1, w_nom_b = 0.2, w_nom_c = -1.2) annotation(
    Placement(visible = true, transformation(origin = {0, 0}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  OnePhaseLiquidCircuits.BoundaryConditions.BoundaryFixed_wT src_a(w = 1) annotation(
    Placement(visible = true, transformation(origin = {-40, 60}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  OnePhaseLiquidCircuits.BoundaryConditions.BoundaryFixed_pT snk_c(p(displayUnit = "Pa") = -1) annotation(
    Placement(visible = true, transformation(origin = {80, 0}, extent = {{20, -20}, {-20, 20}}, rotation = 0)));
equation
  connect(src_b.pwh_a, junctionT.pwh_b) annotation(
    Line(points = {{-56, 0}, {-24, 0}}));
  connect(src_a.pwh_a, junctionT.pwh_a) annotation(
    Line(points = {{-16, 60}, {0, 60}, {0, 24}}));
  connect(junctionT.pwh_c, snk_c.pwh_a) annotation(
    Line(points = {{24, 0}, {56, 0}}));
end test_TJunction;