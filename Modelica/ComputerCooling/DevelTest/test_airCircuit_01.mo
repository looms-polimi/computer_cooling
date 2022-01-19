within ComputerCooling.DevelTest;

model test_airCircuit_01
  MoistAirComponents.FlowControl.Fans.Axial_simplified axial_simplified(w_max = 300) annotation(
    Placement(visible = true, transformation(origin = {-60, 0}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  Modelica.Blocks.Sources.RealExpression qcmd(y = 0.5 + 0 * 0.4 * sin(time / 10)) annotation(
    Placement(visible = true, transformation(origin = {-90, 50}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  MoistAirComponents.Volumes.Plenum plenum annotation(
    Placement(visible = true, transformation(origin = {0, 0}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  MoistAirComponents.BoundaryConditions.BoundaryFixed_pTx src annotation(
    Placement(visible = true, transformation(origin = {-120, 0}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  MoistAirComponents.BoundaryConditions.BoundaryFixed_pTx snk annotation(
    Placement(visible = true, transformation(origin = {120, 0}, extent = {{20, -20}, {-20, 20}}, rotation = 0)));
  MoistAirComponents.FlowControl.PressureDrops.DpLinear_NominalPoint dpLinear_NominalPoint annotation(
    Placement(visible = true, transformation(origin = {60, 0}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
equation
  connect(dpLinear_NominalPoint.pwhx_b, snk.pwhx_a) annotation(
    Line(points = {{82.8, 0.8}, {90.8, 0.8}, {90.8, -0.2}, {99.8, -0.2}}));
  connect(qcmd.y, axial_simplified.cmd01) annotation(
    Line(points = {{-78, 50}, {-60, 50}, {-60, 8}}, color = {0, 0, 127}));
  connect(axial_simplified.pwhx_b, plenum.pwhx_a) annotation(
    Line(points = {{-38, 0}, {-24, 0}}));
  connect(plenum.pwhx_b, dpLinear_NominalPoint.pwhx_a) annotation(
    Line(points = {{22, 0}, {36, 0}}));
  connect(src.pwhx_a, axial_simplified.pwhx_a) annotation(
    Line(points = {{-100, 0}, {-84, 0}}));
end test_airCircuit_01;
