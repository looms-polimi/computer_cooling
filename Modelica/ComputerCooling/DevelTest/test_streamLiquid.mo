within ComputerCooling.DevelTest;

model test_streamLiquid
  OnePhaseLiquidCircuits.BoundaryConditions.BoundaryFixed_pT snk(p = 99999.99999999999) annotation(
    Placement(visible = true, transformation(origin = {80, 0}, extent = {{20, -20}, {-20, 20}}, rotation = 0)));
  OnePhaseLiquidCircuits.Transfer.Ducts.LiquidStream_0D liquidStream annotation(
    Placement(visible = true, transformation(origin = {0, 0}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  ComputerCooling.OnePhaseLiquidCircuits.BoundaryConditions.BoundaryFixed_wT src annotation(
    Placement(visible = true, transformation(origin = {-80, -1.9984e-15}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  Modelica.Thermal.HeatTransfer.Sources.FixedHeatFlow P(Q_flow = 10)  annotation(
    Placement(visible = true, transformation(origin = {-50, 70}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
equation
  connect(liquidStream.pwh_b, snk.pwh_a) annotation(
    Line(points = {{24, 0}, {56, 0}}));
  connect(src.pwh_a, liquidStream.pwh_a) annotation(
    Line(points = {{-56, 0}, {-24, 0}}, color = {0, 0, 0}));
  connect(P.port, liquidStream.hp) annotation(
    Line(points = {{-40, 70}, {0, 70}, {0, 24}}, color = {191, 0, 0}));
annotation(
    experiment(StartTime = 0, StopTime = 1e5, Tolerance = 1e-6, Interval = 200),
    __OpenModelica_commandLineOptions = "--matchingAlgorithm=PFPlusExt --indexReductionMethod=dynamicStateSelection -d=initialization,NLSanalyticJacobian",
    __OpenModelica_simulationFlags(lv = "LOG_STATS", s = "dassl"));
end test_streamLiquid;