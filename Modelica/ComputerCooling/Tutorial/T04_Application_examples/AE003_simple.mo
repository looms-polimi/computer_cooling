within ComputerCooling.Tutorial.T04_Application_examples;

model AE003_simple
  ComputerCooling.IncompressibleLiquidComponents.FlowControl.Pumps.CentrifugalPump pump1(dp_nom = 20000, w_nom = 0.5)  annotation(
    Placement(visible = true, transformation(origin = {-90, -34}, extent = {{-10, 10}, {10, -10}}, rotation = 0)));
  ComputerCooling.HeatSources.HeatSource_Power_2D_uniform power1(cols = 4, rows = 5)  annotation(
    Placement(visible = true, transformation(origin = {42, 0}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.RealExpression P(y = 100)  annotation(
    Placement(visible = true, transformation(origin = {90, 0}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  ComputerCooling.HeatSources.HeatSource_Temperature_1D amb(R = 0.5, n = 10)  annotation(
    Placement(visible = true, transformation(origin = {-110, 70}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.RealExpression Tamb(y = 293.15)  annotation(
    Placement(visible = true, transformation(origin = {-150, 70}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  ComputerCooling.IncompressibleLiquidComponents.Storage.VentedTank tank(H = 0.2, V = 0.001)  annotation(
    Placement(visible = true, transformation(origin = {-150, -30}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  ComputerCooling.IncompressibleLiquidComponents.Transfer.WaterBlock_GenericSection_uniform_w wb1 annotation(
    Placement(visible = true, transformation(origin = {-10, -32}, extent = {{-10, 10}, {10, -10}}, rotation = 0)));
  ComputerCooling.IncompressibleLiquidComponents.Transfer.Ducts.LiquidStream_FiniteVolume_GenericSection_uniform_w duct1(Ac = 0.003 ^ 2, L = 1, dp_nom = 49999.99999999999, per = 4 * 0.003, w_nom = 0.5 / 60)  annotation(
    Placement(visible = true, transformation(origin = {-50, -32}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  IncompressibleLiquidComponents.Transfer.Ducts.Tube_1D_uniform_w radiator(Dstream = 0.003, L = 10, dp_nom = 49999.99999999999, fluidHeats = true, n = 10, w_nom = 0.5 / 60)  annotation(
    Placement(visible = true, transformation(origin = {-46, 34}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.RealExpression realExpression(y = 1) annotation(
    Placement(visible = true, transformation(origin = {-164, -62}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
equation
  connect(P.y, power1.P_input) annotation(
    Line(points = {{79, 0}, {54, 0}}, color = {0, 0, 127}));
  connect(Tamb.y, amb.T_input) annotation(
    Line(points = {{-138, 70}, {-122, 70}}, color = {0, 0, 127}));
  connect(tank.pwh_b, pump1.pwh_a) annotation(
    Line(points = {{-138, -35}, {-117, -35}, {-117, -34}, {-102, -34}}));
  connect(pump1.pwh_b, duct1.pwh_a) annotation(
    Line(points = {{-78, -34}, {-62, -34}, {-62, -32}}));
  connect(duct1.pwh_b, wb1.pwh_a) annotation(
    Line(points = {{-38, -32}, {-22, -32}}));
  connect(wb1.mHP, power1.hp) annotation(
    Line(points = {{-10, -24}, {-10, 0}, {30, 0}}, color = {191, 0, 0}));
  connect(radiator.pwh_b, wb1.pwh_b) annotation(
    Line(points = {{-34, 34}, {14, 34}, {14, -32}, {2, -32}}));
  connect(radiator.pwh_a, tank.pwh_a) annotation(
    Line(points = {{-58, 34}, {-178, 34}, {-178, -34}, {-162, -34}}));
  connect(amb.hp, radiator.hp) annotation(
    Line(points = {{-98, 70}, {-46, 70}, {-46, 46}}, color = {191, 0, 0}));
  connect(realExpression.y, pump1.cmd) annotation(
    Line(points = {{-152, -62}, {-132, -62}, {-132, -42}, {-102, -42}}, color = {0, 0, 127}));
  annotation(
    Diagram(coordinateSystem(extent = {{-200, -100}, {200, 100}})),
    experiment(StartTime = 0, StopTime = 200, Tolerance = 1e-6, Interval = 0.4),
    __OpenModelica_commandLineOptions = "--matchingAlgorithm=PFPlusExt --indexReductionMethod=dynamicStateSelection -d=initialization,NLSanalyticJacobian",
    __OpenModelica_simulationFlags(lv = "LOG_STATS", s = "dassl"));
end AE003_simple;