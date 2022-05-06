within ComputerCooling.Tutorial.T04_Application_examples;

model AE002_simple
  ComputerCooling.OnePhaseLiquidComponents.Transfer.Ducts.Tube_1D tube1(W = 0.015, dp_nom = 7000, w_nom = 0.25)  annotation(
    Placement(visible = true, transformation(origin = {-50, -10}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  ComputerCooling.OnePhaseLiquidComponents.FlowControl.Pumps.CentrifugalPump pump1(dp_nom = 20000, w_nom = 0.5)  annotation(
    Placement(visible = true, transformation(origin = {-90, -10}, extent = {{-10, 10}, {10, -10}}, rotation = 0)));
  ComputerCooling.OnePhaseLiquidComponents.Transfer.WaterBlock waterblock1(D = 0.0005, L = 0.04, W = 0.04,dp_nom = 999.9999999999999, w_nom = 0.25)  annotation(
    Placement(visible = true, transformation(origin = {10, -10}, extent = {{-10, 10}, {10, -10}}, rotation = 0)));
  ComputerCooling.HeatSources.HeatSource_Power_2D_uniform power1(cols = 5, rows = 3)  annotation(
    Placement(visible = true, transformation(origin = {22, 18}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.RealExpression DTsp(y = 0.3) annotation(
    Placement(visible = true, transformation(origin = {-170, -44}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.RealExpression P(y = 100)  annotation(
    Placement(visible = true, transformation(origin = {70, 18}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  ComputerCooling.OnePhaseLiquidComponents.Transfer.Ducts.Tube_1D radiator(L = 3, W = 0.015,dp_nom = 7000, fluidHeats = true, n = 10, w_nom = 0.25)  annotation(
    Placement(visible = true, transformation(origin = {-70, 30}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  ComputerCooling.HeatSources.HeatSource_Temperature_1D amb(R = 0.5, n = 10)  annotation(
    Placement(visible = true, transformation(origin = {-110, 70}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.RealExpression Tamb(y = 293.15)  annotation(
    Placement(visible = true, transformation(origin = {-150, 70}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  ComputerCooling.OnePhaseLiquidComponents.FlowControl.Pressurisers.ExpansionVessel expansionVessel(V = 0.001)  annotation(
    Placement(visible = true, transformation(origin = {-148, -10}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  ComputerCooling.Sensors.TemperatureDifferenceSensor_liquid DTwb1 annotation(
    Placement(visible = true, transformation(origin = {10, -30}, extent = {{10, 10}, {-10, -10}}, rotation = 0)));
  ComputerCooling.Sensors.TemperatureSensor_liquid sTci(unitCelsius = true)  annotation(
    Placement(visible = true, transformation(origin = {-40, 42}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  ComputerCooling.Sensors.TemperatureSensor_liquid sTco(unitCelsius = true)  annotation(
    Placement(visible = true, transformation(origin = {-100, 42}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  ComputerCooling.ControlBlocks.AnalogueControllers.PI_awfb_full C(CSmin = 0, CSstart = 0.1, K = -10, Ti = 10)  annotation(
    Placement(visible = true, transformation(origin = {-128, -58}, extent = {{-10, -20}, {10, 20}}, rotation = 0)));
equation
  connect(pump1.pwh_b, tube1.pwh_a) annotation(
    Line(points = {{-78, -10}, {-62, -10}}));
  connect(tube1.pwh_b, waterblock1.pwh_a) annotation(
    Line(points = {{-38, -10}, {-2, -10}}));
  connect(P.y, power1.P_input) annotation(
    Line(points = {{59, 18}, {34, 18}}, color = {0, 0, 127}));
  connect(power1.hp, waterblock1.mHP) annotation(
    Line(points = {{10, 18}, {10, -2}}, color = {191, 0, 0}));
  connect(amb.hp, radiator.hp) annotation(
    Line(points = {{-98, 70}, {-70, 70}, {-70, 42}}, color = {191, 0, 0}));
  connect(Tamb.y, amb.T_input) annotation(
    Line(points = {{-138, 70}, {-122, 70}}, color = {0, 0, 127}));
  connect(radiator.pwh_a, waterblock1.pwh_b) annotation(
    Line(points = {{-58, 30}, {48, 30}, {48, -10}, {22, -10}}));
  connect(expansionVessel.pwh_b, pump1.pwh_a) annotation(
    Line(points = {{-136, -10}, {-102, -10}}));
  connect(radiator.pwh_b, expansionVessel.pwh_a) annotation(
    Line(points = {{-82, 30}, {-174, 30}, {-174, -10}, {-160, -10}}));
  connect(waterblock1.pwh_b, DTwb1.pwh_a) annotation(
    Line(points = {{22, -10}, {22, -30}}));
  connect(waterblock1.pwh_a, DTwb1.pwh_b) annotation(
    Line(points = {{-2, -10}, {-2, -30}}));
  connect(radiator.pwh_a, sTci.pwh) annotation(
    Line(points = {{-58, 30}, {-58, 42}, {-52, 42}}));
  connect(sTco.pwh, radiator.pwh_b) annotation(
    Line(points = {{-88, 42}, {-82, 42}, {-82, 30}}));
  connect(DTsp.y, C.SP) annotation(
    Line(points = {{-158, -44}, {-138, -44}}, color = {0, 0, 127}));
  connect(DTwb1.out, C.PV) annotation(
    Line(points = {{10, -42}, {8, -42}, {8, -90}, {-154, -90}, {-154, -48}, {-138, -48}}, color = {0, 0, 127}));
  connect(C.CS, pump1.cmd) annotation(
    Line(points = {{-118, -44}, {-110, -44}, {-110, -18}, {-102, -18}}, color = {0, 0, 127}));
  annotation(
    Diagram(coordinateSystem(extent = {{-200, -100}, {200, 100}})),
    experiment(StartTime = 0, StopTime = 200, Tolerance = 1e-6, Interval = 0.4),
    __OpenModelica_commandLineOptions = "--matchingAlgorithm=PFPlusExt --indexReductionMethod=dynamicStateSelection -d=initialization,NLSanalyticJacobian",
    __OpenModelica_simulationFlags(lv = "LOG_STATS", s = "dassl"));
end AE002_simple;