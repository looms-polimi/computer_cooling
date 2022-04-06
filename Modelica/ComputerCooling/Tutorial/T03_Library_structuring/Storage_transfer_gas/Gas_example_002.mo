within ComputerCooling.Tutorial.T03_Library_structuring.Storage_transfer_gas;

model Gas_example_002
  extends Icons.TutorialModel;
  ComputerCooling.IdealGasComponents.IdealgasNode_wT src annotation(
    Placement(visible = true, transformation(origin = {-90, 10}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  ComputerCooling.IdealGasComponents.IdealgasNode_pT snk annotation(
    Placement(visible = true, transformation(origin = {70, 10}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.RealExpression wi(y = 0.001 * sign(sin(time / 100)))  annotation(
    Placement(visible = true, transformation(origin = {-130, 30}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.RealExpression Ti(y = 303.15)  annotation(
    Placement(visible = true, transformation(origin = {-130, -10}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.RealExpression po(y = 101325)  annotation(
    Placement(visible = true, transformation(origin = {110, 30}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.RealExpression To(y = 293.15)  annotation(
    Placement(visible = true, transformation(origin = {110, -10}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  ComputerCooling.IdealGasComponents.IdealGasVolume V1(V = 0.02)  annotation(
    Placement(visible = true, transformation(origin = {-10, 10}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  ComputerCooling.IdealGasComponents.IdealGasPdropQ dp1 annotation(
    Placement(visible = true, transformation(origin = {30, 10}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Thermal.HeatTransfer.Components.ThermalConductor Ge(G = 1)  annotation(
    Placement(visible = true, transformation(origin = {10, 50}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  Modelica.Thermal.HeatTransfer.Sources.FixedTemperature Te(T = 298.15)  annotation(
    Placement(visible = true, transformation(origin = {50, 50}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  ComputerCooling.IdealGasComponents.IdealGasPdropQ dp0 annotation(
    Placement(visible = true, transformation(origin = {-50, 10}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
equation
  connect(wi.y, src.w) annotation(
    Line(points = {{-118, 30}, {-110, 30}, {-110, 14}, {-98, 14}}, color = {0, 0, 127}));
  connect(Ti.y, src.T) annotation(
    Line(points = {{-118, -10}, {-110, -10}, {-110, 6}, {-98, 6}}, color = {0, 0, 127}));
  connect(po.y, snk.p) annotation(
    Line(points = {{100, 30}, {90, 30}, {90, 14}, {78, 14}}, color = {0, 0, 127}));
  connect(To.y, snk.T) annotation(
    Line(points = {{100, -10}, {90, -10}, {90, 6}, {78, 6}}, color = {0, 0, 127}));
  connect(V1.pwh_b, dp1.pwh_a) annotation(
    Line(points = {{2, 10}, {18, 10}}));
  connect(dp1.pwh_b, snk.pwh_a) annotation(
    Line(points = {{42, 10}, {58, 10}}));
  connect(Ge.port_b, V1.hp) annotation(
    Line(points = {{0, 50}, {-10, 50}, {-10, 20}}, color = {191, 0, 0}));
  connect(Ge.port_a, Te.port) annotation(
    Line(points = {{20, 50}, {40, 50}}, color = {191, 0, 0}));
  connect(src.pwh_a, dp0.pwh_a) annotation(
    Line(points = {{-78, 10}, {-62, 10}}));
  connect(dp0.pwh_b, V1.pwh_a) annotation(
    Line(points = {{-38, 10}, {-22, 10}}));
  annotation(
    Diagram(coordinateSystem(extent = {{-200, -100}, {200, 100}})),
    experiment(StartTime = 0, StopTime = 2000, Tolerance = 1e-6, Interval = 4),
    __OpenModelica_commandLineOptions = "--matchingAlgorithm=PFPlusExt --indexReductionMethod=dynamicStateSelection -d=initialization,NLSanalyticJacobian",
    __OpenModelica_simulationFlags(lv = "LOG_STATS", s = "dassl"));
end Gas_example_002;