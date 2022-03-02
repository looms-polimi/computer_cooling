within ComputerCooling.DevelTest;

model test_streamLiquid
  extends Icons.TestModel;
  
  OnePhaseLiquidComponents.BoundaryConditions.BoundaryFixed_pT snk(p (displayUnit = "Pa") = -1) annotation(
    Placement(visible = true, transformation(origin = {80, 0}, extent = {{20, -20}, {-20, 20}}, rotation = 0)));
  OnePhaseLiquidComponents.Transfer.Ducts.LiquidStream_0D liquidStream(Dstream = 0.025, dp_nom(displayUnit = "Pa") = 100)  annotation(
    Placement(visible = true, transformation(origin = {0, 0}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  ComputerCooling.OnePhaseLiquidComponents.BoundaryConditions.BoundaryFixed_wT src(w = 0.05)  annotation(
    Placement(visible = true, transformation(origin = {-80, -1.9984e-15}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  Modelica.Thermal.HeatTransfer.Sources.PrescribedHeatFlow Pcpu annotation(
    Placement(visible = true, transformation(origin = {-30, 70}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.RealExpression iPcpu(y = 12000 + 10000 * sin(0.1 * time)) annotation(
    Placement(visible = true, transformation(origin = {-70, 70}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
equation
  connect(liquidStream.pwh_b, snk.pwh_a) annotation(
    Line(points = {{24, 0}, {56, 0}}));
  connect(src.pwh_a, liquidStream.pwh_a) annotation(
    Line(points = {{-56, 0}, {-24, 0}}, color = {0, 0, 0}));
  connect(iPcpu.y, Pcpu.Q_flow) annotation(
    Line(points = {{-59, 70}, {-40, 70}}, color = {0, 0, 127}));
  connect(Pcpu.port, liquidStream.hp) annotation(
    Line(points = {{-20, 70}, {0, 70}, {0, 24}}, color = {191, 0, 0}));
  annotation(
    experiment(StartTime = 0, StopTime = 1e5, Tolerance = 1e-6, Interval = 200),
    __OpenModelica_commandLineOptions = "--matchingAlgorithm=PFPlusExt --indexReductionMethod=dynamicStateSelection -d=initialization,NLSanalyticJacobian",
    __OpenModelica_simulationFlags(lv = "LOG_STATS", s = "dassl"));
end test_streamLiquid;
