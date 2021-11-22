within ComputerCooling.DevelTest;

model test_circuit_2021_11_22_e01
  ComputerCooling.OnePhaseLiquidCircuits.Storage.VentedTank tank(H = 0.2, V = 0.001, lstart = 0.1) annotation(
    Placement(visible = true, transformation(origin = {-32, 10}, extent = {{-10, 10}, {10, -10}}, rotation = 0)));
  ComputerCooling.OnePhaseLiquidCircuits.FlowControl.Pumps.CentrifugalPump pump(dp_nom = 10000, w_nom = 0.05) annotation(
    Placement(visible = true, transformation(origin = {-70, 10}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  ComputerCooling.OnePhaseLiquidCircuits.FlowControl.Valves.ValveModulating_TwoPort valve(dp_nom(displayUnit = "Pa") = 500, w_nom = 0.1) annotation(
    Placement(visible = true, transformation(origin = {50, 10}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  ComputerCooling.OnePhaseLiquidCircuits.Transfer.Ducts.Tube_1D t01(D = 0.005, L = 0.2, dp_nom(displayUnit = "Pa") = 250) annotation(
    Placement(visible = true, transformation(origin = {10, 10}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  ComputerCooling.OnePhaseLiquidCircuits.Transfer.Ducts.Tube_1D t02(D = 0.05, L = 0.2, dp_nom(displayUnit = "Pa") = 250) annotation(
    Placement(visible = true, transformation(origin = {90, 10}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.RealExpression cmd_pump(y = 1) annotation(
    Placement(visible = true, transformation(origin = {-122, 32}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  ComputerCooling.OnePhaseLiquidCircuits.Transfer.Ducts.Tube_1D t03(D = 0.05, L = 1, dp_nom (displayUnit = "Pa") = 2500) annotation(
    Placement(visible = true, transformation(origin = {50, -30}, extent = {{-10, 10}, {10, -10}}, rotation = 0)));
  Modelica.Blocks.Sources.RealExpression cmd_valve(y = 0.0001) annotation(
    Placement(visible = true, transformation(origin = {12, 38}, extent = {{-20, -10}, {20, 10}}, rotation = 0)));
  ComputerCooling.OnePhaseLiquidCircuits.Transfer.Ducts.Tube_1D t04(D = 0.05, L = 1, dp_nom (displayUnit = "Pa") = 2500) annotation(
    Placement(visible = true, transformation(origin = {-50, 50}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Thermal.HeatTransfer.Components.ThermalConductor Gext(G = 1)  annotation(
    Placement(visible = true, transformation(origin = {-90, 70}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Thermal.HeatTransfer.Sources.PrescribedHeatFlow Pcpu annotation(
    Placement(visible = true, transformation(origin = {10, -50}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Thermal.HeatTransfer.Sources.FixedTemperature Text(T = 293.15)  annotation(
    Placement(visible = true, transformation(origin = {-150, 70}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.RealExpression iPcpu(y = 120)  annotation(
    Placement(visible = true, transformation(origin = {-30, -50}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
equation
  connect(pump.pwh_b, tank.pwh_a) annotation(
    Line(points = {{-58, 10}, {-44, 10}}));
  connect(cmd_pump.y, pump.cmd) annotation(
    Line(points = {{-110, 32}, {-94, 32}, {-94, 18}, {-78, 18}}, color = {0, 0, 127}));
  connect(tank.pwh_b, t01.pwh_a) annotation(
    Line(points = {{-18, 10}, {-2, 10}}));
  connect(t01.pwh_b, valve.pwh_a) annotation(
    Line(points = {{22, 10}, {38, 10}}, color = {0, 0, 0}));
  connect(t01.pwh_b, valve.pwh_a) annotation(
    Line(points = {{22, 10}, {38, 10}}, color = {0, 0, 0}));
  connect(t01.pwh_b, t03.pwh_a) annotation(
    Line(points = {{22, 10}, {28, 10}, {28, -30}, {38, -30}}));
  connect(valve.pwh_b, t02.pwh_a) annotation(
    Line(points = {{62, 10}, {78, 10}}, color = {0, 0, 0}));
  connect(t02.pwh_b, t03.pwh_b) annotation(
    Line(points = {{102, 10}, {120, 10}, {120, -30}, {62, -30}}));
  connect(cmd_valve.y, valve.cmd) annotation(
    Line(points = {{34, 38}, {50, 38}, {50, 22}}, color = {0, 0, 127}));
  connect(t04.pwh_b, t02.pwh_b) annotation(
    Line(points = {{-38, 50}, {120, 50}, {120, 10}, {102, 10}}));
  connect(t04.pwh_a, pump.pwh_a) annotation(
    Line(points = {{-62, 50}, {-142, 50}, {-142, 10}, {-82, 10}}));
  connect(Gext.port_b, t04.hp) annotation(
    Line(points = {{-80, 70}, {-50, 70}, {-50, 62}}, color = {191, 0, 0}));
  connect(Pcpu.port, t03.hp) annotation(
    Line(points = {{20, -50}, {50, -50}, {50, -42}}, color = {191, 0, 0}));
  connect(Text.port, Gext.port_a) annotation(
    Line(points = {{-140, 70}, {-100, 70}}, color = {191, 0, 0}));
  connect(iPcpu.y, Pcpu.Q_flow) annotation(
    Line(points = {{-18, -50}, {0, -50}}, color = {0, 0, 127}));
  annotation(
    Diagram(coordinateSystem(extent = {{-200, -100}, {200, 100}})),
    experiment(StartTime = 0, StopTime = 7200, Tolerance = 1e-6, Interval = 14.4),
    __OpenModelica_commandLineOptions = "--matchingAlgorithm=PFPlusExt --indexReductionMethod=dynamicStateSelection -d=initialization,NLSanalyticJacobian",
    __OpenModelica_simulationFlags(lv = "LOG_STATS", s = "dassl"));
end test_circuit_2021_11_22_e01;