within ComputerCooling.DevelTest;

model test_ValveModulating_TwoPort
  extends Icons.TestModel;
  
  ComputerCooling.IncompressibleLiquidComponents.FlowControl.PressureDrops.DpLinear_NominalPoint dpLinear_NominalPoint1(w_nom = 1) annotation(
    Placement(visible = true, transformation(origin = {60, 0}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  ComputerCooling.IncompressibleLiquidComponents.BoundaryConditions.BoundaryFixed_pT boundaryFixed_pT1(p = 99999.99999999999) annotation(
    Placement(visible = true, transformation(origin = {120, 0}, extent = {{20, -20}, {-20, 20}}, rotation = 0)));
  ComputerCooling.IncompressibleLiquidComponents.BoundaryConditions.BoundaryFixed_pT boundaryFixed_pT(p = 499999.9999999999) annotation(
    Placement(visible = true, transformation(origin = {-120, 0}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  Modelica.Blocks.Sources.RealExpression realExpression(y = sin(0.1 * time)) annotation(
    Placement(visible = true, transformation(origin = {-42, 60}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  ComputerCooling.IncompressibleLiquidComponents.FlowControl.PressureDrops.DpLinear_NominalPoint dpLinear_NominalPoint(w_nom = 1) annotation(
    Placement(visible = true, transformation(origin = {-60, 0}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  ComputerCooling.IncompressibleLiquidComponents.FlowControl.Valves.ValveModulating_TwoPort valveModulating_TwoPort annotation(
    Placement(visible = true, transformation(origin = {0, 0}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
equation
  connect(boundaryFixed_pT.pwh_a, dpLinear_NominalPoint.pwh_a) annotation(
    Line(points = {{-96, -5.32908e-16}, {-84, -5.32908e-16}, {-84, 0}}));
  connect(dpLinear_NominalPoint1.pwh_b, boundaryFixed_pT1.pwh_a) annotation(
    Line(points = {{84, 0}, {96, 0}}));
  connect(dpLinear_NominalPoint.pwh_b, valveModulating_TwoPort.pwh_a) annotation(
    Line(points = {{-36, 0}, {-24, 0}}, color = {0, 0, 0}));
  connect(valveModulating_TwoPort.pwh_b, dpLinear_NominalPoint1.pwh_a) annotation(
    Line(points = {{24, 0}, {36, 0}}, color = {0, 0, 0}));
  connect(realExpression.y, valveModulating_TwoPort.cmd) annotation(
    Line(points = {{-30, 60}, {0, 60}, {0, 24}}, color = {0, 0, 127}));
end test_ValveModulating_TwoPort;
