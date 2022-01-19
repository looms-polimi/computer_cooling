within ComputerCooling.DevelTest;

model test_fan_Axial_simplified
  ComputerCooling.MoistAirComponents.BoundaryConditions.BoundaryFixed_pTx src annotation(
    Placement(visible = true, transformation(origin = {-98, 0}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  ComputerCooling.MoistAirComponents.BoundaryConditions.BoundaryFixed_pTx snk annotation(
    Placement(visible = true, transformation(origin = {102, 0}, extent = {{20, -20}, {-20, 20}}, rotation = 0)));
  Modelica.Blocks.Sources.RealExpression qcmd(y = 0.5 + 0 * 0.4 * sin(time / 10)) annotation(
    Placement(visible = true, transformation(origin = {-68, 50}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  ComputerCooling.MoistAirComponents.FlowControl.Fans.Axial_simplified axial_simplified annotation(
    Placement(visible = true, transformation(origin = {-38, 0}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  ComputerCooling.MoistAirComponents.FlowControl.PressureDrops.DpLinear_NominalPoint dpLinear_NominalPoint annotation(
    Placement(visible = true, transformation(origin = {42, 0}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
equation
  connect(axial_simplified.pwhx_b, dpLinear_NominalPoint.pwhx_a) annotation(
    Line(points = {{-15.2, 0.8}, {1.3, 0.8}, {1.3, -0.2}, {18.8, -0.2}}));
  connect(dpLinear_NominalPoint.pwhx_b, snk.pwhx_a) annotation(
    Line(points = {{64.8, 0.8}, {72.8, 0.8}, {72.8, -0.2}, {81.8, -0.2}}));
  connect(src.pwhx_a, axial_simplified.pwhx_a) annotation(
    Line(points = {{-78, 0}, {-61, 0}}));
  connect(qcmd.y, axial_simplified.cmd01) annotation(
    Line(points = {{-57, 50}, {-38, 50}, {-38, 9}}, color = {0, 0, 127}));
end test_fan_Axial_simplified;
