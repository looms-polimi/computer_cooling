within ComputerCooling.Tutorial.T04_Application_examples;

model Test_waterblock_uniform_w
  Modelica.Blocks.Sources.RealExpression win(y = 0.6 / 60)  annotation(
    Placement(visible = true, transformation(origin = {-130, -6}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  ComputerCooling.OnePhaseLiquidComponents.BoundaryConditions.BoundaryPrescribed_pT snk annotation(
    Placement(visible = true, transformation(origin = {50, -10}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.RealExpression psnk(y = 1e5) annotation(
    Placement(visible = true, transformation(origin = {108, 26}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.RealExpression Tsnk(y = 273.15 + 20) annotation(
    Placement(visible = true, transformation(origin = {104, -22}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.RealExpression Tin(y = 273.15 + 20) annotation(
    Placement(visible = true, transformation(origin = {-130, -32}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  ComputerCooling.OnePhaseLiquidComponents.BoundaryConditions.BoundaryPrescribed_wT src annotation(
    Placement(visible = true, transformation(origin = {-50, -10}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  ComputerCooling.OnePhaseLiquidComponents.Transfer.WaterBlock_GenericSection_uniform_w wb annotation(
    Placement(visible = true, transformation(origin = {0, -10}, extent = {{-10, 10}, {10, -10}}, rotation = 0)));
  HeatSources.HeatSource_Power_2D_uniform pwr(cols = 4, rows = 5) annotation(
    Placement(visible = true, transformation(origin = {-34, 30}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.RealExpression P(y = 80 + 20 * sin(time)) annotation(
    Placement(visible = true, transformation(origin = {-130, 30}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  ComputerCooling.Sensors.TemperatureDifferenceSensor_liquid DTwb annotation(
    Placement(visible = true, transformation(origin = {0, -50}, extent = {{-10, -10}, {10, 10}}, rotation = 180)));
equation
  connect(snk.T, Tsnk.y) annotation(
    Line(points = {{62, -14}, {70, -14}, {70, -22}, {94, -22}}, color = {0, 0, 127}));
  connect(snk.p, psnk.y) annotation(
    Line(points = {{62, -6}, {80, -6}, {80, 26}, {98, 26}}, color = {0, 0, 127}));
  connect(win.y, src.w) annotation(
    Line(points = {{-118, -6}, {-62, -6}}, color = {0, 0, 127}));
  connect(Tin.y, src.T) annotation(
    Line(points = {{-118, -32}, {-80, -32}, {-80, -14}, {-62, -14}}, color = {0, 0, 127}));
  connect(src.pwh_a, wb.pwh_a) annotation(
    Line(points = {{-38, -10}, {-12, -10}}));
  connect(wb.pwh_b, snk.pwh_a) annotation(
    Line(points = {{12, -10}, {38, -10}}));
  connect(pwr.hp, wb.mHP) annotation(
    Line(points = {{-22, 30}, {0, 30}, {0, -2}}, color = {191, 0, 0}));
  connect(P.y, pwr.P_input) annotation(
    Line(points = {{-118, 30}, {-46, 30}}, color = {0, 0, 127}));
  connect(DTwb.pwh_a, wb.pwh_b) annotation(
    Line(points = {{12, -50}, {20, -50}, {20, -10}, {12, -10}}));
  connect(DTwb.pwh_b, wb.pwh_a) annotation(
    Line(points = {{-12, -50}, {-20, -50}, {-20, -10}, {-12, -10}}));
protected
  annotation(
    Diagram(coordinateSystem(extent = {{-200, -100}, {200, 100}})),
    experiment(StartTime = 0, StopTime = 5, Tolerance = 1e-6, Interval = 0.01),
    __OpenModelica_commandLineOptions = "--matchingAlgorithm=PFPlusExt --indexReductionMethod=dynamicStateSelection -d=initialization,NLSanalyticJacobian",
    __OpenModelica_simulationFlags(lv = "LOG_STATS", s = "dassl"));
end Test_waterblock_uniform_w;