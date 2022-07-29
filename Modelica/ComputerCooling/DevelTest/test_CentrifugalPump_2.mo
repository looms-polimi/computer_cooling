within ComputerCooling.DevelTest;

model test_CentrifugalPump_2
  extends Icons.TestModel;
  ComputerCooling.IncompressibleLiquidComponents.FlowControl.Pumps.CentrifugalPump centrifugalPump(dp_nom = 99999.99999999999, w_nom = 1) annotation(
    Placement(visible = true, transformation(origin = {-14, 0}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  Modelica.Blocks.Sources.RealExpression cmd(y = 1) annotation(
    Placement(visible = true, transformation(origin = {-82, 32}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  ComputerCooling.IncompressibleLiquidComponents.BoundaryConditions.BoundaryFixed_pT src(p = 99999.99999999999) annotation(
    Placement(visible = true, transformation(origin = {-120, -1.77636e-15}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  ComputerCooling.IncompressibleLiquidComponents.FlowControl.PressureDrops.DpLinear_NominalPoint dp_downstream(w_nom = 1) annotation(
    Placement(visible = true, transformation(origin = {60, 0}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  ComputerCooling.IncompressibleLiquidComponents.BoundaryConditions.BoundaryFixed_pT snk(p = 99999.99999999999) annotation(
    Placement(visible = true, transformation(origin = {142, 0}, extent = {{20, -20}, {-20, 20}}, rotation = 0)));
equation
  connect(centrifugalPump.pwh_b, dp_downstream.pwh_a) annotation(
    Line(points = {{10, 0}, {36, 0}}));
  connect(src.pwh_a, centrifugalPump.pwh_a) annotation(
    Line(points = {{-96, 0}, {-38, 0}}));
  connect(dp_downstream.pwh_b, snk.pwh_a) annotation(
    Line(points = {{84, 0}, {118, 0}}));
  connect(cmd.y, centrifugalPump.cmd) annotation(
    Line(points = {{-70, 32}, {-52, 32}, {-52, 16}, {-38, 16}}, color = {0, 0, 127}));
annotation(
    experiment(StartTime = 0, StopTime = 5, Tolerance = 1e-6, Interval = 0.01),
    __OpenModelica_commandLineOptions = "--matchingAlgorithm=PFPlusExt --indexReductionMethod=dynamicStateSelection -d=initialization,NLSanalyticJacobian",
    __OpenModelica_simulationFlags(lv = "LOG_STATS", s = "dassl"));
end test_CentrifugalPump_2;