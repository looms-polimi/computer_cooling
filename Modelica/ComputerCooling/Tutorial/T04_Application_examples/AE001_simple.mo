within ComputerCooling.Tutorial.T04_Application_examples;

model AE001_simple
  ComputerCooling.OnePhaseLiquidComponents.Transfer.Ducts.Tube_1D tube1(W = 0.015, dp_nom = 10000, w_nom = 0.005)  annotation(
    Placement(visible = true, transformation(origin = {-50, -10}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  ComputerCooling.OnePhaseLiquidComponents.FlowControl.Pumps.CentrifugalPump pump1(dp_nom = 20000, w_nom = 0.005)  annotation(
    Placement(visible = true, transformation(origin = {-90, -10}, extent = {{-10, 10}, {10, -10}}, rotation = 0)));
  ComputerCooling.OnePhaseLiquidComponents.Transfer.WaterBlock waterblock1(dp_nom = 200, w_nom = 0.2)  annotation(
    Placement(visible = true, transformation(origin = {10, -10}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  ComputerCooling.HeatSources.HeatSource_Power_2D_uniform power1(cols = 5, rows = 3)  annotation(
    Placement(visible = true, transformation(origin = {-26, -56}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.RealExpression cmd_pump(y = 0.5)  annotation(
    Placement(visible = true, transformation(origin = {-130, -30}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.RealExpression P annotation(
    Placement(visible = true, transformation(origin = {-90, -56}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  ComputerCooling.OnePhaseLiquidComponents.FlowControl.Pressurisers.ExpansionVessel vessel(V = 0.001)  annotation(
    Placement(visible = true, transformation(origin = {-148, -10}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  ComputerCooling.OnePhaseLiquidComponents.Transfer.Ducts.Tube_1D radiator(L = 3, W = 0.015,dp_nom = 10000, fluidHeats = true, n = 10, w_nom = 0.005)  annotation(
    Placement(visible = true, transformation(origin = {-70, 30}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  ComputerCooling.HeatSources.HeatSource_Temperature_1D amb(R = 0.5, n = 10)  annotation(
    Placement(visible = true, transformation(origin = {-110, 70}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.RealExpression Tamb(y = 293.15)  annotation(
    Placement(visible = true, transformation(origin = {-150, 70}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
equation
  connect(pump1.pwh_b, tube1.pwh_a) annotation(
    Line(points = {{-78, -10}, {-62, -10}}));
  connect(tube1.pwh_b, waterblock1.pwh_a) annotation(
    Line(points = {{-38, -10}, {-2, -10}}));
  connect(cmd_pump.y, pump1.cmd) annotation(
    Line(points = {{-119, -30}, {-112, -30}, {-112, -18}, {-102, -18}}, color = {0, 0, 127}));
  connect(P.y, power1.P_input) annotation(
    Line(points = {{-79, -56}, {-38, -56}}, color = {0, 0, 127}));
  connect(power1.hp, waterblock1.mHP) annotation(
    Line(points = {{-14, -56}, {10, -56}, {10, -18}}, color = {191, 0, 0}));
  connect(vessel.pwh_b, pump1.pwh_a) annotation(
    Line(points = {{-136, -10}, {-102, -10}}));
  connect(radiator.pwh_b, waterblock1.pwh_b) annotation(
    Line(points = {{-58, 30}, {32, 30}, {32, -10}, {22, -10}}));
  connect(vessel.pwh_a, radiator.pwh_a) annotation(
    Line(points = {{-160, -10}, {-174, -10}, {-174, 30}, {-82, 30}}));
  connect(amb.hp, radiator.hp) annotation(
    Line(points = {{-98, 70}, {-70, 70}, {-70, 42}}, color = {191, 0, 0}));
  connect(Tamb.y, amb.T_input) annotation(
    Line(points = {{-138, 70}, {-122, 70}}, color = {0, 0, 127}));
  annotation(
    Diagram(coordinateSystem(extent = {{-200, -100}, {200, 100}})),
    experiment(StartTime = 0, StopTime = 100, Tolerance = 1e-6, Interval = 0.2),
    __OpenModelica_commandLineOptions = "--matchingAlgorithm=PFPlusExt --indexReductionMethod=dynamicStateSelection -d=initialization,NLSanalyticJacobian",
    __OpenModelica_simulationFlags(lv = "LOG_STATS", s = "dassl"));
end AE001_simple;