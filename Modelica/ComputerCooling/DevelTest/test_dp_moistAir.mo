within ComputerCooling.DevelTest;

model test_dp_moistAir
  ComputerCooling.MoistAirComponents.BoundaryConditions.BoundaryFixed_pTphi src annotation(
    Placement(visible = true, transformation(origin = {-80, 0}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  ComputerCooling.MoistAirComponents.BoundaryConditions.BoundaryFixed_pTphi snk annotation(
    Placement(visible = true, transformation(origin = {80, 0}, extent = {{20, -20}, {-20, 20}}, rotation = 0)));
  ComputerCooling.MoistAirComponents.FlowControl.PressureDrops.DpQuadratic_NominalPoint dpQuadratic_NominalPoint annotation(
    Placement(visible = true, transformation(origin = {0, 0}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
equation
  connect(src.pwhx_a, dpQuadratic_NominalPoint.pwhx_a) annotation(
    Line(points = {{-60, 0}, {-24, 0}}));
  connect(dpQuadratic_NominalPoint.pwhx_b, snk.pwhx_a) annotation(
    Line(points = {{22, 0}, {60, 0}}));

end test_dp_moistAir;
