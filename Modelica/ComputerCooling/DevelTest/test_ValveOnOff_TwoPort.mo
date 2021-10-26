within ComputerCooling.DevelTest;

model test_ValveOnOff_TwoPort
  ComputerCooling.OnePhaseLiquidCircuits.FlowControl.PressureDrops.DpLinear_NominalPoint dpLinear_NominalPoint1(w_nom = 1) annotation(
    Placement(visible = true, transformation(origin = {30, 0}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  ComputerCooling.OnePhaseLiquidCircuits.BoundaryConditions.BoundaryFixed_pT boundaryFixed_pT1(p = 99999.99999999999) annotation(
    Placement(visible = true, transformation(origin = {70, 0}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  ComputerCooling.OnePhaseLiquidCircuits.FlowControl.Valves.ValveOnOff_TwoPort valveOnOff_TwoPort(dp_nom = 99999.99999999999) annotation(
    Placement(visible = true, transformation(origin = {0, 0}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  ComputerCooling.OnePhaseLiquidCircuits.BoundaryConditions.BoundaryFixed_pT boundaryFixed_pT(p = 499999.9999999999) annotation(
    Placement(visible = true, transformation(origin = {-70, 0}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.RealExpression realExpression(y = sin(0.1 * time)) annotation(
    Placement(visible = true, transformation(origin = {-42, 60}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  ComputerCooling.OnePhaseLiquidCircuits.FlowControl.PressureDrops.DpLinear_NominalPoint dpLinear_NominalPoint(w_nom = 1) annotation(
    Placement(visible = true, transformation(origin = {-30, 0}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
equation
  connect(valveOnOff_TwoPort.pwh_b, dpLinear_NominalPoint1.pwh_a) annotation(
    Line(points = {{12, 0}, {18, 0}}));
  connect(boundaryFixed_pT.pwh_a, dpLinear_NominalPoint.pwh_a) annotation(
    Line(points = {{-58, -2.66454e-16}, {-42, -2.66454e-16}}));
  connect(realExpression.y, valveOnOff_TwoPort.cmd) annotation(
    Line(points = {{-31, 60}, {-5, 60}, {-5, 10}}, color = {0, 0, 127}));
  connect(dpLinear_NominalPoint1.pwh_b, boundaryFixed_pT1.pwh_a) annotation(
    Line(points = {{42, 0}, {58, 0}}));
  connect(dpLinear_NominalPoint.pwh_b, valveOnOff_TwoPort.pwh_a) annotation(
    Line(points = {{-18, 0}, {-12, 0}}));
end test_ValveOnOff_TwoPort;