within ComputerCooling.DevelTest;

model test_ExpansionVessel
  extends Icons.TestModel;
  
  ComputerCooling.OnePhaseLiquidComponents.BoundaryConditions.BoundaryPrescribed_wT src annotation(
    Placement(visible = true, transformation(origin = {-80, 0}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  Modelica.Blocks.Sources.RealExpression w(y = 12 - 0.1 * time) annotation(
    Placement(visible = true, transformation(origin = {-130, 30}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.RealExpression T(y = 273.15 + 10 * time) annotation(
    Placement(visible = true, transformation(origin = {-130, -30}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  ComputerCooling.OnePhaseLiquidComponents.FlowControl.PressureDrops.DpLinear_NominalPoint dp_exit(dp_nom = 98099.99999999999, w_nom = 0.1) annotation(
    Placement(visible = true, transformation(origin = {40, 0}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  ComputerCooling.OnePhaseLiquidComponents.BoundaryConditions.BoundaryFixed_pT snk(T = 274.15, p(displayUnit = "Pa") = -1) annotation(
    Placement(visible = true, transformation(origin = {100, 0}, extent = {{20, -20}, {-20, 20}}, rotation = 0)));
  ComputerCooling.OnePhaseLiquidComponents.FlowControl.Pressurisers.ExpansionVessel expansionVessel annotation(
    Placement(visible = true, transformation(origin = {-20, 0}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
equation
  connect(dp_exit.pwh_b, snk.pwh_a) annotation(
    Line(points = {{64, 0}, {76, 0}}));
  connect(src.pwh_a, expansionVessel.pwh_a) annotation(
    Line(points = {{-56, -5.32908e-16}, {-44, -5.32908e-16}}));
  connect(expansionVessel.pwh_b, dp_exit.pwh_a) annotation(
    Line(points = {{4, 0}, {16, 0}}));
  connect(w.y, src.w) annotation(
    Line(points = {{-119, 30}, {-115, 30}, {-115, 8}, {-105, 8}}, color = {0, 0, 127}));
  connect(T.y, src.T) annotation(
    Line(points = {{-119, -30}, {-115, -30}, {-115, -8}, {-105, -8}}, color = {0, 0, 127}));
end test_ExpansionVessel;
