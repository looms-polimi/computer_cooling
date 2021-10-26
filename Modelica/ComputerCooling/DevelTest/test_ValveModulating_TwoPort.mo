within ComputerCooling.DevelTest;

model test_ValveModulating_TwoPort
  ComputerCooling.OnePhaseLiquidCircuits.FlowControl.PressureDrops.DpLinear_NominalPoint dpLinear_NominalPoint1(w_nom = 1) annotation(
    Placement(visible = true, transformation(origin = {30, 0}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  ComputerCooling.OnePhaseLiquidCircuits.BoundaryConditions.BoundaryFixed_pT boundaryFixed_pT1(p = 99999.99999999999) annotation(
    Placement(visible = true, transformation(origin = {70, 0}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  ComputerCooling.OnePhaseLiquidCircuits.BoundaryConditions.BoundaryFixed_pT boundaryFixed_pT(p = 499999.9999999999) annotation(
    Placement(visible = true, transformation(origin = {-70, 0}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.RealExpression realExpression(y = sin(0.1 * time)) annotation(
    Placement(visible = true, transformation(origin = {-42, 60}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  ComputerCooling.OnePhaseLiquidCircuits.FlowControl.PressureDrops.DpLinear_NominalPoint dpLinear_NominalPoint(w_nom = 1) annotation(
    Placement(visible = true, transformation(origin = {-30, 0}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  ComputerCooling.OnePhaseLiquidCircuits.FlowControl.Valves.ValveModulating_TwoPort valveModulating_TwoPort annotation(
    Placement(visible = true, transformation(origin = {0, 0}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
equation
  connect(boundaryFixed_pT.pwh_a, dpLinear_NominalPoint.pwh_a) annotation(
    Line(points = {{-58, -2.66454e-16}, {-42, -2.66454e-16}}));
  connect(dpLinear_NominalPoint1.pwh_b, boundaryFixed_pT1.pwh_a) annotation(
    Line(points = {{42, 0}, {58, 0}}));
  connect(dpLinear_NominalPoint.pwh_b, valveModulating_TwoPort.pwh_a) annotation(
    Line(points = {{-18, 0}, {-12, 0}}, color = {255, 255, 255}));
  connect(valveModulating_TwoPort.pwh_b, dpLinear_NominalPoint1.pwh_a) annotation(
    Line(points = {{12, 0}, {18, 0}}, color = {255, 255, 255}));
  connect(realExpression.y, valveModulating_TwoPort.cmd) annotation(
    Line(points = {{-30, 60}, {-4, 60}, {-4, 10}}, color = {0, 0, 127}));
end test_ValveModulating_TwoPort;