within ComputerCooling.DevelTest;

model test_CentrifugalPump_4
  extends Icons.TestModel;
  ComputerCooling.OnePhaseLiquidComponents.FlowControl.Pumps.CentrifugalPump centrifugalPump annotation(
    Placement(visible = true, transformation(origin = {0, 0}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  Modelica.Blocks.Sources.RealExpression cmd(y = 1) annotation(
    Placement(visible = true, transformation(origin = {-50, 30}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  ComputerCooling.OnePhaseLiquidComponents.BoundaryConditions.BoundaryFixed_pT src(p = 99999.99999999999) annotation(
    Placement(visible = true, transformation(origin = {-120, -1.77636e-15}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  ComputerCooling.OnePhaseLiquidComponents.BoundaryConditions.BoundaryPrescribed_pT snk annotation(
    Placement(visible = true, transformation(origin = {86, 0}, extent = {{20, -20}, {-20, 20}}, rotation = 0)));
  Modelica.Blocks.Sources.RealExpression To(y = 273.15 + 20) annotation(
    Placement(visible = true, transformation(origin = {70, -30}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.RealExpression wo(y = 1e5 * (1 + time)) annotation(
    Placement(visible = true, transformation(origin = {76, 42}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
equation
  connect(cmd.y, centrifugalPump.cmd) annotation(
    Line(points = {{-39, 30}, {-34, 30}, {-34, 16}, {-24, 16}}, color = {0, 0, 127}));
  connect(src.pwh_a, centrifugalPump.pwh_a) annotation(
    Line(points = {{-96, 0}, {-24, 0}}));
  connect(centrifugalPump.pwh_b, snk.pwh_a) annotation(
    Line(points = {{24, 0}, {62, 0}}));
  connect(snk.T, To.y) annotation(
    Line(points = {{110, -8}, {124, -8}, {124, -30}, {81, -30}}, color = {0, 0, 127}));
  connect(wo.y, snk.p) annotation(
    Line(points = {{88, 42}, {120, 42}, {120, 8}, {110, 8}}, color = {0, 0, 127}));
annotation(
    experiment(StartTime = 0, StopTime = 2, Tolerance = 1e-6, Interval = 0.004),
    __OpenModelica_commandLineOptions = "--matchingAlgorithm=PFPlusExt --indexReductionMethod=dynamicStateSelection -d=initialization,NLSanalyticJacobian",
    __OpenModelica_simulationFlags(lv = "LOG_STATS", s = "dassl"));
end test_CentrifugalPump_4;