within ComputerCooling.DevelTest;

model test_CentrifugalPump
  extends Icons.TestModel;
  ComputerCooling.IncompressibleLiquidComponents.FlowControl.Pumps.CentrifugalPump centrifugalPump annotation(
    Placement(visible = true, transformation(origin = {0, 0}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  Modelica.Blocks.Sources.RealExpression cmd(y = 1 + sin(10 * time)) annotation(
    Placement(visible = true, transformation(origin = {-50, 30}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  ComputerCooling.IncompressibleLiquidComponents.BoundaryConditions.BoundaryFixed_pT src(p = 499999.9999999999) annotation(
    Placement(visible = true, transformation(origin = {-120, -1.77636e-15}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  ComputerCooling.IncompressibleLiquidComponents.FlowControl.PressureDrops.DpLinear_NominalPoint dp_downstream(w_nom = 0.1) annotation(
    Placement(visible = true, transformation(origin = {60, 0}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  ComputerCooling.IncompressibleLiquidComponents.BoundaryConditions.BoundaryFixed_wT snk(w = -0.1)  annotation(
    Placement(visible = true, transformation(origin = {120, 0}, extent = {{20, -20}, {-20, 20}}, rotation = 0)));
  IncompressibleLiquidComponents.FlowControl.PressureDrops.DpLinear_NominalPoint dp_upstream(w_nom = 0.1) annotation(
    Placement(visible = true, transformation(origin = {-60, 0}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
equation
  connect(centrifugalPump.pwh_b, dp_downstream.pwh_a) annotation(
    Line(points = {{24, 0}, {36, 0}}));
  connect(dp_downstream.pwh_b, snk.pwh_a) annotation(
    Line(points = {{84, 0}, {96, 0}}));
  connect(cmd.y, centrifugalPump.cmd) annotation(
    Line(points = {{-39, 30}, {-34, 30}, {-34, 16}, {-24, 16}}, color = {0, 0, 127}));
  connect(dp_upstream.pwh_b, centrifugalPump.pwh_a) annotation(
    Line(points = {{-36, 0}, {-24, 0}}));
  connect(src.pwh_a, dp_upstream.pwh_a) annotation(
    Line(points = {{-96, 0}, {-84, 0}}));
annotation(
    experiment(StartTime = 0, StopTime = 1, Tolerance = 1e-6, Interval = 0.002),
    __OpenModelica_commandLineOptions = "--matchingAlgorithm=PFPlusExt --indexReductionMethod=dynamicStateSelection -d=initialization,NLSanalyticJacobian",
    __OpenModelica_simulationFlags(lv = "LOG_STATS", s = "dassl"));
end test_CentrifugalPump;