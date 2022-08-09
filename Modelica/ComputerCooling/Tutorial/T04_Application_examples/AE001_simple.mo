within ComputerCooling.Tutorial.T04_Application_examples;

model AE001_simple
  ComputerCooling.IncompressibleLiquidComponents.Ducts.Tube_1D tube1(W = 0.015, dp_nom = 7000, w_nom = 0.25)  annotation(
    Placement(visible = true, transformation(origin = {-50, -10}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  ComputerCooling.IncompressibleLiquidComponents.FlowControl.Pumps.CentrifugalPump pump1(dp_nom = 20000, w_nom = 0.5)  annotation(
    Placement(visible = true, transformation(origin = {-90, -10}, extent = {{-10, 10}, {10, -10}}, rotation = 0)));
  ComputerCooling.IncompressibleLiquidComponents.WaterBlocks.WaterBlock waterblock1(D = 0.0005, L = 0.04, W = 0.04,dp_nom = 999.9999999999999, w_nom = 0.25)  annotation(
    Placement(visible = true, transformation(origin = {10, -10}, extent = {{-10, 10}, {10, -10}}, rotation = 0)));
  ComputerCooling.HeatTransfer.BoundaryConditions.Prescribed_Power_2D_uniform power1(cols = 5, rows = 3)  annotation(
    Placement(visible = true, transformation(origin = {22, 18}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.RealExpression DTsp(y = 1) annotation(
    Placement(visible = true, transformation(origin = {-170, -50}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.RealExpression P(y = 100 + 30 * sin(5 *time))  annotation(
    Placement(visible = true, transformation(origin = {70, 18}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  ComputerCooling.IncompressibleLiquidComponents.Ducts.Tube_1D radiator(L = 3, W = 0.015,dp_nom = 7000, fluidHeats = true, n = 10, w_nom = 0.25)  annotation(
    Placement(visible = true, transformation(origin = {-70, 30}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  ComputerCooling.HeatTransfer.BoundaryConditions.Prescribed_Temperature_1D_uniform amb(R = 0.5, n = 10)  annotation(
    Placement(visible = true, transformation(origin = {-110, 70}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.RealExpression Tamb(y = 293.15)  annotation(
    Placement(visible = true, transformation(origin = {-150, 70}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  ComputerCooling.Sensors.TemperatureSensor_liquid sTwbo annotation(
    Placement(visible = true, transformation(origin = {110, -10}, extent = {{-10, 10}, {10, -10}}, rotation = 0)));
  ComputerCooling.Sensors.TemperatureSensor_liquid sTwbi annotation(
    Placement(visible = true, transformation(origin = {110, -70}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Math.Add DTwb(k2 = -1)  annotation(
    Placement(visible = true, transformation(origin = {38, -42}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.RealExpression TR(y = 0.5 + 0.3 * sin(time / 10)) annotation(
    Placement(visible = true, transformation(origin = {-170, -84}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.BooleanExpression TS(y = time < 50) annotation(
    Placement(visible = true, transformation(origin = {-170, -70}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Continuous.FirstOrder Fp(T = 0.1, initType = Modelica.Blocks.Types.Init.InitialOutput, y_start = 1)  annotation(
    Placement(visible = true, transformation(origin = {-70, -50}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Math.Feedback e annotation(
    Placement(visible = true, transformation(origin = {-140, -50}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Continuous.TransferFunction C(a = {10, 0}, b = -10 * {10, 1}, initType = Modelica.Blocks.Types.Init.InitialOutput, y_start = 0.1)  annotation(
    Placement(visible = true, transformation(origin = {-110, -50}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  ComputerCooling.IncompressibleLiquidComponents.FlowControl.Pressurisers.ExpansionVessel expansionVessel(V = 0.001)  annotation(
    Placement(visible = true, transformation(origin = {-148, -10}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
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
  connect(tube1.pwh_b, sTwbi.pwh) annotation(
    Line(points = {{-38, -10}, {-12, -10}, {-12, -70}, {98, -70}}));
  connect(waterblock1.pwh_b, sTwbo.pwh) annotation(
    Line(points = {{22, -10}, {98, -10}}));
  connect(DTwb.u1, sTwbo.out) annotation(
    Line(points = {{50, -36}, {110, -36}, {110, -22}}, color = {0, 0, 127}));
  connect(DTwb.u2, sTwbi.out) annotation(
    Line(points = {{50, -48}, {110, -48}, {110, -58}}, color = {0, 0, 127}));
  connect(DTwb.y, e.u2) annotation(
    Line(points = {{28, -42}, {10, -42}, {10, -80}, {-140, -80}, {-140, -58}}, color = {0, 0, 127}));
  connect(DTsp.y, e.u1) annotation(
    Line(points = {{-159, -50}, {-148, -50}}, color = {0, 0, 127}));
  connect(e.y, C.u) annotation(
    Line(points = {{-130, -50}, {-122, -50}}, color = {0, 0, 127}));
  connect(expansionVessel.pwh_b, pump1.pwh_a) annotation(
    Line(points = {{-136, -10}, {-102, -10}}));
  connect(radiator.pwh_b, expansionVessel.pwh_a) annotation(
    Line(points = {{-82, 30}, {-174, 30}, {-174, -10}, {-160, -10}}));
  connect(C.y, pump1.cmd) annotation(
    Line(points = {{-98, -50}, {-88, -50}, {-88, -28}, {-114, -28}, {-114, -18}, {-102, -18}}, color = {0, 0, 127}));
  connect(C.y, Fp.u) annotation(
    Line(points = {{-98, -50}, {-82, -50}}, color = {0, 0, 127}));
  annotation(
    Diagram(coordinateSystem(extent = {{-200, -100}, {200, 100}})),
    experiment(StartTime = 0, StopTime = 100, Tolerance = 1e-6, Interval = 0.2),
    __OpenModelica_commandLineOptions = "--matchingAlgorithm=PFPlusExt --indexReductionMethod=dynamicStateSelection -d=initialization,NLSanalyticJacobian -d=stateselection,bltdump",
    __OpenModelica_simulationFlags(lv = "LOG_STATS", s = "dassl"));
end AE001_simple;