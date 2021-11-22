within ComputerCooling.DevelTest;

model test_circuit_2021_11_22_e01
  ComputerCooling.OnePhaseLiquidCircuits.FlowControl.Pumps.CentrifugalPump pump(dp_nom (displayUnit = "Pa") = 10000, w_nom = 0.1) annotation(
    Placement(visible = true, transformation(origin = {-70, 10}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.RealExpression cmd_pump(y = 1) annotation(
    Placement(visible = true, transformation(origin = {-110, 30}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Thermal.HeatTransfer.Components.ThermalConductor Gext(G = 10)  annotation(
    Placement(visible = true, transformation(origin = {-90, 70}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Thermal.HeatTransfer.Sources.PrescribedHeatFlow Pcpu annotation(
    Placement(visible = true, transformation(origin = {-10, -30}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Thermal.HeatTransfer.Sources.FixedTemperature Text(T = 293.15)  annotation(
    Placement(visible = true, transformation(origin = {-150, 70}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.RealExpression iPcpu(y = 120)  annotation(
    Placement(visible = true, transformation(origin = {-50, -30}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
equation
  connect(cmd_pump.y, pump.cmd) annotation(
    Line(points = {{-99, 30}, {-90, 30}, {-90, 18}, {-78, 18}}, color = {0, 0, 127}));
  connect(Text.port, Gext.port_a) annotation(
    Line(points = {{-140, 70}, {-100, 70}}, color = {191, 0, 0}));
  connect(iPcpu.y, Pcpu.Q_flow) annotation(
    Line(points = {{-39, -30}, {-20, -30}}, color = {0, 0, 127}));
  annotation(
    Diagram(coordinateSystem(extent = {{-200, -100}, {200, 100}})),
    experiment(StartTime = 0, StopTime = 7200, Tolerance = 1e-6, Interval = 14.4),
    __OpenModelica_commandLineOptions = "--matchingAlgorithm=PFPlusExt --indexReductionMethod=dynamicStateSelection -d=initialization,NLSanalyticJacobian",
    __OpenModelica_simulationFlags(lv = "LOG_STATS", s = "dassl"));
end test_circuit_2021_11_22_e01;