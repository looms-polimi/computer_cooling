within ComputerCooling.Tutorial.T01_Declarative_vs_imperative.D2I_example_1;

model D2I_Example_1_declarative
  extends Icons.TutorialModel;
  Modelica.Thermal.HeatTransfer.Sources.FixedHeatFlow    FQ(Q_flow=2);
  Modelica.Thermal.HeatTransfer.Sources.FixedTemperature FT(T=293.15);
  LumpedRod                                              rod(lumps=20);
equation
  connect(FQ.port,rod.a);
  connect(rod.b,FT.port);
annotation(
      experiment(StartTime = 0, StopTime = 1000, Tolerance = 1e-6, Interval = 2),
      __OpenModelica_commandLineOptions = "--matchingAlgorithm=PFPlusExt --indexReductionMethod=dynamicStateSelection -d=initialization,NLSanalyticJacobian",
      __OpenModelica_simulationFlags(lv = "LOG_STATS", s = "dassl"));
end D2I_Example_1_declarative;