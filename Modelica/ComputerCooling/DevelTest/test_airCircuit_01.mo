within ComputerCooling.DevelTest;

model test_airCircuit_01
  MoistAirComponents.FlowControl.Fans.Axial axial annotation(
    Placement(visible = true, transformation(origin = {-60, 0}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  Modelica.Blocks.Sources.RealExpression qcmd(y = 0.5 + 0 * 0.4 * sin(time / 10)) annotation(
    Placement(visible = true, transformation(origin = {-90, 50}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  MoistAirComponents.Volumes.Plenum plenum annotation(
    Placement(visible = true, transformation(origin = {0, 0}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  MoistAirComponents.BoundaryConditions.BoundaryFixed_pTphi src annotation(
    Placement(visible = true, transformation(origin = {-120, 0}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  MoistAirComponents.BoundaryConditions.BoundaryFixed_pTphi snk annotation(
    Placement(visible = true, transformation(origin = {120, 0}, extent = {{20, -20}, {-20, 20}}, rotation = 0)));
  MoistAirComponents.FlowControl.PressureDrops.DpLinear_NominalPoint dpLinear_NominalPoint annotation(
    Placement(visible = true, transformation(origin = {60, 0}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
equation
  connect(src.pwhx_a, axial.pwhx_a) annotation(
    Line(points = {{-100, 0}, {-84, 0}}));
  connect(qcmd.y, axial.cmd01) annotation(
    Line(points = {{-78, 50}, {-60, 50}, {-60, 8}}, color = {0, 0, 127}));
  connect(axial.pwhx_b, plenum.pwhx_a) annotation(
    Line(points = {{-36, 0}, {-24, 0}}));
  connect(plenum.pwhx_b, dpLinear_NominalPoint.pwhx_a) annotation(
    Line(points = {{24, 0}, {36, 0}}));
  connect(dpLinear_NominalPoint.pwhx_b, snk.pwhx_a) annotation(
    Line(points = {{84, 0}, {100, 0}}));
end test_airCircuit_01;