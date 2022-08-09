within ComputerCooling.DevelTest;

model test_TJunction
  extends Icons.TestModel;
  
  IncompressibleLiquidComponents.BoundaryConditions.BoundaryFixed_wT src_b(w = 0.2) annotation(
    Placement(visible = true, transformation(origin = {-80, 0}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  IncompressibleLiquidComponents.BoundaryConditions.BoundaryFixed_pT snk_c(p(displayUnit = "Pa") = -1) annotation(
    Placement(visible = true, transformation(origin = {80, 0}, extent = {{20, -20}, {-20, 20}}, rotation = 0)));
  Modelica.Blocks.Sources.RealExpression w(y = sin(0.1 * time)) annotation(
    Placement(visible = true, transformation(origin = {-90, 70}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.RealExpression T(y = 273.15 + 20) annotation(
    Placement(visible = true, transformation(origin = {-90, 50}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  ComputerCooling.IncompressibleLiquidComponents.BoundaryConditions.BoundaryPrescribed_wT boundaryPrescribed_wT annotation(
    Placement(visible = true, transformation(origin = {-40, 60}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  ComputerCooling.IncompressibleLiquidComponents.Junctions.JunctionT junctionT1 annotation(
    Placement(visible = true, transformation(origin = {-4, 3.55271e-15}, extent = {{-42, -42}, {42, 42}}, rotation = 0)));
equation
  connect(w.y, boundaryPrescribed_wT.w) annotation(
    Line(points = {{-78, 70}, {-76, 70}, {-76, 68}, {-64, 68}}, color = {0, 0, 127}));
  connect(T.y, boundaryPrescribed_wT.T) annotation(
    Line(points = {{-78, 50}, {-76, 50}, {-76, 52}, {-64, 52}}, color = {0, 0, 127}));
  connect(boundaryPrescribed_wT.pwh_a, junctionT1.pwh_a) annotation(
    Line(points = {{-16, 60}, {-4, 60}, {-4, 26}}));
  connect(src_b.pwh_a, junctionT1.pwh_b) annotation(
    Line(points = {{-56, 0}, {-30, 0}}));
  connect(junctionT1.pwh_c, snk_c.pwh_a) annotation(
    Line(points = {{22, 0}, {56, 0}}));
end test_TJunction;