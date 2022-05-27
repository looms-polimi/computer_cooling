within ComputerCooling.Tutorial.T04_Application_examples;

model DataReadTest
  Modelica.Blocks.Sources.CombiTimeTable combiTimeTable( extrapolation = Modelica.Blocks.Types.Extrapolation.HoldLastPoint,fileName = Modelica.Utilities.Files.loadResource("modelica://ComputerCooling/Resources/Data/clover-parallel-powertrace.txt"),tableName = "data", tableOnFile = true, verboseRead = true)  annotation(
    Placement(visible = true, transformation(origin = {-70, 30}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
equation

annotation(
    experiment(StartTime = 0, StopTime = 1000, Tolerance = 1e-6, Interval = 2),
    __OpenModelica_commandLineOptions = "--matchingAlgorithm=PFPlusExt --indexReductionMethod=dynamicStateSelection -d=initialization,NLSanalyticJacobian",
    __OpenModelica_simulationFlags(lv = "LOG_STATS", s = "dassl")
  );
end DataReadTest;
