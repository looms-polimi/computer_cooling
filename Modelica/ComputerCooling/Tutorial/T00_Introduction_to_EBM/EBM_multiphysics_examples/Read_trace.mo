within ComputerCooling.Tutorial.T00_Introduction_to_EBM.EBM_multiphysics_examples;

model Read_trace
  parameter String fname = "EBM_intro_trace1.txt" "trace file name";
  parameter String fdir = "Data" "path to trace file within Resource folder";
  Modelica.Blocks.Interfaces.RealOutput y annotation(
    Placement(visible = true, transformation(origin = {50, -10}, extent = {{-10, -10}, {10, 10}}, rotation = 0), iconTransformation(origin = {121, -1}, extent = {{-21, -21}, {21, 21}}, rotation = 0)));
protected
  final parameter String fnamerel = Modelica.Utilities.Files.loadResource("modelica://ComputerCooling/Resources/" + fdir + "/" + fname);
  Modelica.Blocks.Sources.CombiTimeTable ctt(columns = {2},fileName = fnamerel, tableName = "data", tableOnFile = true) annotation(
    Placement(visible = true, transformation(origin = {-52, -10}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
equation
  connect(ctt.y[1], y) annotation(
    Line(points = {{-40, -10}, {50, -10}}, color = {0, 0, 127}));
  annotation(
    experiment(StartTime = 0, StopTime = 100, Tolerance = 1e-06, Interval = 0.2),
    __OpenModelica_commandLineOptions = "--matchingAlgorithm=PFPlusExt --indexReductionMethod=dynamicStateSelection -d=initialization,NLSanalyticJacobian",
    __OpenModelica_simulationFlags(lv = "LOG_STATS", s = "dassl"),
  Icon(graphics = {Rectangle(fillColor = {211, 215, 207}, fillPattern = FillPattern.Solid, extent = {{-100, 100}, {100, -100}}), Text(origin = {-5, 7}, extent = {{-75, 77}, {75, -77}}, textString = "read\ntrace")}));
end Read_trace;