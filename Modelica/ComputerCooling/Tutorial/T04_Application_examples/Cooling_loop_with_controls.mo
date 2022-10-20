within ComputerCooling.Tutorial.T04_Application_examples;

model Cooling_loop_with_controls
  extends Icons.TutorialModel;
  ComputerCooling.IncompressibleLiquidComponents.FlowControl.Pumps.CentrifugalPump pump(dp_nom = 59999.99999999999, dp_zf = 80000, w_nom = 0.5 / 60) annotation(
    Placement(visible = true, transformation(origin = {88, -70}, extent = {{-10, 10}, {10, -10}}, rotation = 0)));
  ComputerCooling.HeatTransfer.BoundaryConditions.Prescribed_Power_2D_uniform cpu_power(cols = 4, rows = 5) annotation(
    Placement(visible = true, transformation(origin = {170, 30}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  ComputerCooling.IncompressibleLiquidComponents.WaterBlocks.WaterBlock_GenericSection_uniform_w waterblock annotation(
    Placement(visible = true, transformation(origin = {190, -70}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  ComputerCooling.IncompressibleLiquidComponents.Ducts.LiquidStream_FiniteVolume_GenericSection duct_pump2waterblock(Ac = 0.003 ^ 2, L = 0.4, dp_nom = 25000, per = 4 * 0.003, w_nom = 0.5 / 60) annotation(
    Placement(visible = true, transformation(origin = {138, -68}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  ComputerCooling.IncompressibleLiquidComponents.Ducts.LiquidStream_FiniteVolume_GenericSection duct_tank2pump(Ac = 0.006 ^ 2, L = 2, dp_nom = 20000, n = 3, per = 4 * 0.006, w_nom = 1.5 / 60) annotation(
    Placement(visible = true, transformation(origin = {38, -68}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  ComputerCooling.IncompressibleLiquidComponents.Ducts.Tube_1D_Cylindrical radiator(D = 0.003, L = 5, dp_nom = 20000, fluidHeats = false, t = 0.0005, w_nom = 0.5 / 60) annotation(
    Placement(visible = true, transformation(origin = {-60, -38}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.RealExpression spDTwb(y = 273.15 + 45) annotation(
    Placement(visible = true, transformation(origin = {-20, -106}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  ComputerCooling.IncompressibleLiquidComponents.Ducts.LiquidStream_FiniteVolume_GenericSection duct_waterblock2radiator(Ac = 0.003 ^ 2, L = 0.4, dp_nom = 25000, per = 4 * 0.003, w_nom = 0.5 / 60) annotation(
    Placement(visible = true, transformation(origin = {250, -68}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  ComputerCooling.ControlBlocks.AnalogueControllers.PI_awfb_full PI_Tspreader(CSmin = 0.01, CSstart = 0.5, K = -0.1, Ti = 5) annotation(
    Placement(visible = true, transformation(origin = {30, -120}, extent = {{-10, -20}, {10, 20}}, rotation = 0)));
  ComputerCooling.IncompressibleLiquidComponents.Storage.VentedTank tank(H = 0.2, V = 0.001) annotation(
    Placement(visible = true, transformation(origin = {-12, -70}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.CombiTimeTable power_trace(extrapolation = Modelica.Blocks.Types.Extrapolation.Periodic, fileName = Modelica.Utilities.Files.loadResource("modelica://ComputerCooling/Resources/Data/clover-parallel-powertrace-500ms.txt"), smoothness = Modelica.Blocks.Types.Smoothness.LinearSegments, tableName = "data", tableOnFile = true, timeEvents = Modelica.Blocks.Types.TimeEvents.AtDiscontinuities, verboseRead = true) annotation(
    Placement(visible = true, transformation(origin = {128, 30}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  ComputerCooling.SolidComponents.Metal_layer_no_spread_uniform_grid chip(rows = 5) annotation(
    Placement(visible = true, transformation(origin = {190, -2}, extent = {{-10, 10}, {10, -10}}, rotation = 0)));
  ComputerCooling.SolidComponents.material_layer_uniform_grid_Pnom_DTnom spreader(DTnom = 14, rows = 5) annotation(
    Placement(visible = true, transformation(origin = {190, -26}, extent = {{-10, 10}, {10, -10}}, rotation = 0)));
  ComputerCooling.IncompressibleLiquidComponents.Ducts.LiquidStream_FiniteVolume_GenericSection duct_radiator2tank(Ac = 0.003 ^ 2, L = 0.4, dp_nom = 25000, per = 4 * 0.003, w_nom = 0.5 / 60) annotation(
    Placement(visible = true, transformation(origin = {-60, -68}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Thermal.HeatTransfer.Sensors.TemperatureSensor sTspreader annotation(
    Placement(visible = true, transformation(origin = {220, -110}, extent = {{-10, -10}, {10, 10}}, rotation = -90)));
  Modelica.Blocks.Sources.RealExpression To(y = 293.15) annotation(
    Placement(visible = true, transformation(origin = {50, 34}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.RealExpression po(y = 101325) annotation(
    Placement(visible = true, transformation(origin = {50, 26}, extent = {{10, 10}, {-10, -10}}, rotation = 0)));
  ComputerCooling.IdealGasComponents.IdealGasPdropQ dp1(dpnom(displayUnit = "Pa") = 200)  annotation(
    Placement(visible = true, transformation(origin = {-18, 30}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.RealExpression Ti(y = 273.15 + 20 + (if time > 3600 and time < 7200 then 5 else 0)) annotation(
    Placement(visible = true, transformation(origin = {-190, 34}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  ComputerCooling.IdealGasComponents.IdealgasNode_pT snk annotation(
    Placement(visible = true, transformation(origin = {20, 30}, extent = {{10, 10}, {-10, -10}}, rotation = 0)));
  Modelica.Blocks.Sources.RealExpression SP_Tair(y = 273.15 + 30) annotation(
    Placement(visible = true, transformation(origin = {-270, -10}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  ComputerCooling.IdealGasComponents.IdealGasPdropQ dp0(dpnom(displayUnit = "Pa") = 200)  annotation(
    Placement(visible = true, transformation(origin = {-100, 30}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  ComputerCooling.IdealGasComponents.IdealGasVolume V1(V = 0.01) annotation(
    Placement(visible = true, transformation(origin = {-60, 30}, extent = {{-10, 10}, {10, -10}}, rotation = 0)));
  ComputerCooling.IdealGasComponents.IdealgasNode_wT src annotation(
    Placement(visible = true, transformation(origin = {-140, 30}, extent = {{-10, 10}, {10, -10}}, rotation = 0)));
  ComputerCooling.ControlBlocks.AnalogueControllers.PI_awfb_full PI_Tair(CSmax = 1,CSmin = 0.01, CSstart = 0.5, K = -2, Ti = 5) annotation(
    Placement(visible = true, transformation(origin = {-230, -24}, extent = {{-10, -20}, {10, 20}}, rotation = 0)));
  ComputerCooling.Interfaces.HeatPort_VectorToScalar v2s_radiator annotation(
    Placement(visible = true, transformation(origin = {-60, -10}, extent = {{-10, 10}, {10, -10}}, rotation = 0)));
  Modelica.Blocks.Continuous.FirstOrder airflow(T = 1, k = 0.005)  annotation(
    Placement(visible = true, transformation(origin = {-190, -10}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Thermal.HeatTransfer.Sensors.TemperatureSensor sTair annotation(
    Placement(visible = true, transformation(origin = {-110, -10}, extent = {{-10, -10}, {10, 10}}, rotation = -90)));
equation
  connect(duct_tank2pump.pwh_b, pump.pwh_a) annotation(
    Line(points = {{50, -70.2}, {68, -70.2}, {68, -70.4}, {76, -70.4}}));
  connect(duct_pump2waterblock.pwh_b, waterblock.pwh_a) annotation(
    Line(points = {{150, -70}, {170, -70}, {170, -70.2}, {178, -70.2}}));
  connect(waterblock.pwh_b, duct_waterblock2radiator.pwh_a) annotation(
    Line(points = {{202, -70}, {238, -70}}));
  connect(PI_Tspreader.SP, spDTwb.y) annotation(
    Line(points = {{19.8, -106}, {-9.2, -106}}, color = {0, 0, 127}));
  connect(tank.pwh_b, duct_tank2pump.pwh_a) annotation(
    Line(points = {{0, -70}, {26, -70}}));
  connect(cpu_power.hp, chip.cpu_side) annotation(
    Line(points = {{182, 30}, {190, 30}, {190, 4}}, color = {191, 0, 0}));
  connect(chip.sink_side, spreader.cpu_side) annotation(
    Line(points = {{190, -6}, {190, -23}}, color = {191, 0, 0}));
  connect(spreader.sink_side, waterblock.surf) annotation(
    Line(points = {{190, -29}, {190, -60}}, color = {191, 0, 0}));
  connect(power_trace.y[1], cpu_power.P_input) annotation(
    Line(points = {{139, 30}, {158, 30}}, color = {0, 0, 127}));
  connect(pump.pwh_b, duct_pump2waterblock.pwh_a) annotation(
    Line(points = {{100, -70}, {126, -70}}));
  connect(duct_radiator2tank.pwh_b, tank.pwh_a) annotation(
    Line(points = {{-48, -70.2}, {-32, -70.2}, {-32, -70.4}, {-24, -70.4}}));
  connect(radiator.pwh_b, duct_radiator2tank.pwh_a) annotation(
    Line(points = {{-72, -40}, {-90, -40}, {-90, -70.2}, {-72, -70.2}}));
  connect(radiator.pwh_a, duct_waterblock2radiator.pwh_b) annotation(
    Line(points = {{-48, -40}, {280, -40}, {280, -70.2}, {262, -70.2}}));
  connect(sTspreader.T, PI_Tspreader.PV) annotation(
    Line(points = {{220, -120}, {220, -150}, {10, -150}, {10, -110}, {20, -110}}, color = {0, 0, 127}));
  connect(PI_Tspreader.CS, pump.cmd) annotation(
    Line(points = {{40, -106}, {76, -106}, {76, -78}}, color = {0, 0, 127}));
  connect(spreader.cpu_side.port[2, 2], sTspreader.port) annotation(
    Line(points = {{190, -23}, {190, -15}, {220, -15}, {220, -101}}, color = {191, 0, 0}));
  connect(To.y, snk.T) annotation(
    Line(points = {{39, 34}, {28, 34}}, color = {0, 0, 127}));
  connect(po.y, snk.p) annotation(
    Line(points = {{39, 26}, {28, 26}}, color = {0, 0, 127}));
  connect(dp1.pwh_b, snk.pwh_a) annotation(
    Line(points = {{-6, 30}, {8, 30}}));
  connect(Ti.y, src.T) annotation(
    Line(points = {{-179, 34}, {-148, 34}}, color = {0, 0, 127}));
  connect(V1.pwh_b, dp1.pwh_a) annotation(
    Line(points = {{-48, 30}, {-30, 30}}));
  connect(dp0.pwh_b, V1.pwh_a) annotation(
    Line(points = {{-88, 30}, {-72, 30}}));
  connect(src.pwh_a, dp0.pwh_a) annotation(
    Line(points = {{-128, 30}, {-112, 30}}));
  connect(SP_Tair.y, PI_Tair.SP) annotation(
    Line(points = {{-259, -10}, {-241, -10}}, color = {0, 0, 127}));
  connect(V1.hp, v2s_radiator.hp_sca) annotation(
    Line(points = {{-59.9, 20.3}, {-59.9, 0.3}}, color = {191, 0, 0}));
  connect(radiator.surf, v2s_radiator.hp_vec) annotation(
    Line(points = {{-60, -28}, {-60, -18}}, color = {191, 0, 0}));
  connect(PI_Tair.CS, airflow.u) annotation(
    Line(points = {{-220, -10}, {-202, -10}}, color = {0, 0, 127}));
  connect(airflow.y, src.w) annotation(
    Line(points = {{-178, -10}, {-160, -10}, {-160, 26}, {-148, 26}}, color = {0, 0, 127}));
  connect(V1.hp, sTair.port) annotation(
    Line(points = {{-60, 20}, {-60, 10}, {-110, 10}, {-110, 0}}, color = {191, 0, 0}));
  connect(sTair.T, PI_Tair.PV) annotation(
    Line(points = {{-110, -20}, {-110, -54}, {-250, -54}, {-250, -14}, {-240, -14}}, color = {0, 0, 127}));
  annotation(
    Diagram(coordinateSystem(extent = {{-300, -200}, {300, 200}})),
    experiment(StartTime = 0, StopTime = 10800, Tolerance = 1e-06, Interval = 3),
    __OpenModelica_commandLineOptions = "--matchingAlgorithm=PFPlusExt --indexReductionMethod=dynamicStateSelection -d=initialization,NLSanalyticJacobian",
    __OpenModelica_simulationFlags(lv = "LOG_STATS", s = "dassl", noEquidistantTimeGrid = "()", noEventEmit = "()", noRestart = "()", noRootFinding = "()"));
end Cooling_loop_with_controls;