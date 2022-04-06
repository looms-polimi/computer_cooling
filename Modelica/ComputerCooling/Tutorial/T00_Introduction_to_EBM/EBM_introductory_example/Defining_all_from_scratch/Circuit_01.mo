within ComputerCooling.Tutorial.T00_Introduction_to_EBM.EBM_introductory_example.Defining_all_from_scratch;

model Circuit_01
    extends Icons.TutorialModel;
    StepVoltage S(t_sw=0.1);
    Capacitor   C(C=1e-5);
    Conductor   G(G=1e-4);
    Ground      gnd;
equation
  connect(S.a,G.a);
  connect(G.b,C.a);
  connect(C.b,gnd.a);
  connect(S.b,gnd.a);
  annotation(
      experiment(StartTime = 0, StopTime = 1, Tolerance = 1e-6, Interval = 0.00100503),
      __OpenModelica_commandLineOptions = "--matchingAlgorithm=PFPlusExt --indexReductionMethod=dynamicStateSelection -d=initialization,NLSanalyticJacobian",
      __OpenModelica_simulationFlags(lv = "LOG_STATS", s = "dassl"));
end Circuit_01;