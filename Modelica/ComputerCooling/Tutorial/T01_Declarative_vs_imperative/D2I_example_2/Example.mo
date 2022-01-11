within ComputerCooling.Tutorial.T01_Declarative_vs_imperative.D2I_example_2;

model Example
  extends ComputerCooling.Icons.TutorialModel;
  parameter Integer n = 5 "cascaded duct elements";
  PrescribedwaTa src;
  ResistorInDuct rids[n];
  PrescribedpaTa snk;
  Modelica.Electrical.Analog.Sources.StepVoltage S;
  Modelica.Electrical.Analog.Basic.Ground gnd;
equation
  connect(src.air_a, rids[1].air_a);
  for i in 2:n loop /* ducts cascaded to one another */
    connect(rids[i - 1].air_b, rids[i].air_a);
  end for;
  connect(rids[n].air_b, snk.air_a);
  for i in 1:n loop /* all resistors in parallel */
    connect(rids[i].a, S.p);
    connect(rids[i].b, gnd.p);
  end for;
  connect(S.n, gnd.p);
  annotation(
    experiment(StartTime = 0, StopTime = 1000, Tolerance = 1e-6, Interval = 2),
    __OpenModelica_commandLineOptions = "--matchingAlgorithm=PFPlusExt --indexReductionMethod=dynamicStateSelection -d=initialization,NLSanalyticJacobian",
    __OpenModelica_simulationFlags(lv = "LOG_STATS", s = "dassl"));
end Example;