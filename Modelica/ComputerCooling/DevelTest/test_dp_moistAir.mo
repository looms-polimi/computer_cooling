within ComputerCooling.DevelTest;

model test_dp_moistAir
  extends Icons.TestModel;
  
  ComputerCooling.MoistAirComponents.BoundaryConditions.BoundaryPrescribed_pTphi src annotation(
    Placement(visible = true, transformation(origin = {-80, 0}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  Modelica.Blocks.Sources.RealExpression p(y = 1e5 + 1e4 * sin(0.1 * time)) annotation(
    Placement(visible = true, transformation(origin = {-130, 30}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.RealExpression T(y = 273.15 + 20) annotation(
    Placement(visible = true, transformation(origin = {-130, 0}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.RealExpression phi(y = 0.05) annotation(
    Placement(visible = true, transformation(origin = {-130, -30}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  ComputerCooling.MoistAirComponents.BoundaryConditions.BoundaryFixed_wTphi snk annotation(
    Placement(visible = true, transformation(origin = {80, 1.9984e-15}, extent = {{20, -20}, {-20, 20}}, rotation = 0)));
  ComputerCooling.MoistAirComponents.FlowControl.PressureDrops.DpQuadratic_NominalPoint dpQuadratic_NominalPoint annotation(
    Placement(visible = true, transformation(origin = {0, 0}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
equation
  connect(p.y, src.p) annotation(
    Line(points = {{-118, 30}, {-114, 30}, {-114, 8}, {-104, 8}}, color = {0, 0, 127}));
  connect(T.y, src.T) annotation(
    Line(points = {{-118, 0}, {-104, 0}}, color = {0, 0, 127}));
  connect(phi.y, src.phi) annotation(
    Line(points = {{-118, -30}, {-114, -30}, {-114, -8}, {-104, -8}}, color = {0, 0, 127}));
  connect(src.pwhx_a, dpQuadratic_NominalPoint.pwhx_a) annotation(
    Line(points = {{-60, 0}, {-24, 0}}));
  connect(dpQuadratic_NominalPoint.pwhx_b, snk.pwhx_a) annotation(
    Line(points = {{24, 0}, {60, 0}}));
protected
end test_dp_moistAir;
