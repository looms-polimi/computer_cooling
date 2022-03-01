within ComputerCooling.Tutorial.T03_Library_structuring.Storage_transfer_gas;

model Gas_example_001
  extends Icons.TutorialModel;
  ComputerCooling.IdealGasComponents.IdealgasNode_pT snk annotation(
    Placement(visible = true, transformation(origin = {70, 10}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.RealExpression po(y = 101325)  annotation(
    Placement(visible = true, transformation(origin = {110, 30}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.RealExpression To(y = 293.15)  annotation(
    Placement(visible = true, transformation(origin = {110, -10}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  ComputerCooling.IdealGasComponents.IdealGasVolume V1 annotation(
    Placement(visible = true, transformation(origin = {-10, 10}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  ComputerCooling.IdealGasComponents.IdealGasPdropQ dp1 annotation(
    Placement(visible = true, transformation(origin = {30, 10}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Thermal.HeatTransfer.Components.ThermalConductor Ge(G = 1)  annotation(
    Placement(visible = true, transformation(origin = {-30, 50}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Thermal.HeatTransfer.Sources.PrescribedTemperature pTe  annotation(
    Placement(visible = true, transformation(origin = {-70, 50}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.Trapezoid Te(amplitude = 40, falling = 30, offset = 263.15, period = 120, rising = 30, width = 60)  annotation(
    Placement(visible = true, transformation(origin = {-130, 50}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
equation
  connect(po.y, snk.p) annotation(
    Line(points = {{100, 30}, {90, 30}, {90, 14}, {78, 14}}, color = {0, 0, 127}));
  connect(To.y, snk.T) annotation(
    Line(points = {{100, -10}, {90, -10}, {90, 6}, {78, 6}}, color = {0, 0, 127}));
  connect(V1.pwh_b, dp1.pwh_a) annotation(
    Line(points = {{2, 10}, {18, 10}}));
  connect(dp1.pwh_b, snk.pwh_a) annotation(
    Line(points = {{42, 10}, {58, 10}}));
  connect(Ge.port_b, V1.hp) annotation(
    Line(points = {{-20, 50}, {-10, 50}, {-10, 20}}, color = {191, 0, 0}));
  connect(pTe.port, Ge.port_a) annotation(
    Line(points = {{-60, 50}, {-40, 50}}, color = {191, 0, 0}));
  connect(Te.y, pTe.T) annotation(
    Line(points = {{-118, 50}, {-82, 50}}, color = {0, 0, 127}));
  annotation(
    Diagram(coordinateSystem(extent = {{-200, -100}, {200, 100}})),
    experiment(StartTime = 0, StopTime = 500, Tolerance = 1e-6, Interval = 0.1),
    __OpenModelica_commandLineOptions = "--matchingAlgorithm=PFPlusExt --indexReductionMethod=dynamicStateSelection -d=initialization,NLSanalyticJacobian",
    __OpenModelica_simulationFlags(lv = "LOG_STATS", s = "dassl"));
end Gas_example_001;
