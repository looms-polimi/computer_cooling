within ComputerCooling.Tutorial.T04_Application_examples;

model AE008_example_controlled_circuit_05
  ComputerCooling.IncompressibleLiquidComponents.FlowControl.Pumps.CentrifugalPump pump1(dp_nom = 99999.99999999999, dp_zf = 200000, w_nom = 1.75 / 60) annotation(
    Placement(visible = true, transformation(origin = {-130, 30}, extent = {{-10, 10}, {10, -10}}, rotation = 0)));
  ComputerCooling.HeatSources.HeatSource_Power_2D_uniform cpu1(cols = 4, rows = 5) annotation(
    Placement(visible = true, transformation(origin = {30, 130}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  ComputerCooling.HeatSources.HeatSource_Temperature_1D_uniform amb(R = 0.1) annotation(
    Placement(visible = true, transformation(origin = {-230, 170}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.RealExpression Tamb(y = 293.15) annotation(
    Placement(visible = true, transformation(origin = {-278, 170}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  ComputerCooling.IncompressibleLiquidComponents.Transfer.WaterBlock_GenericSection_uniform_w wb1 annotation(
    Placement(visible = true, transformation(origin = {50, 30}, extent = {{-10, 10}, {10, -10}}, rotation = 0)));
  ComputerCooling.IncompressibleLiquidComponents.Transfer.Ducts.LiquidStream_FiniteVolume_GenericSection_uniform_w p1wb1(Ac = 0.003 ^ 2, L = 0.4, dp_nom = 25000, per = 4 * 0.003, w_nom = 0.5 / 60) annotation(
    Placement(visible = true, transformation(origin = {10, 30}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  ComputerCooling.IncompressibleLiquidComponents.Transfer.WaterBlock_GenericSection_uniform_w wb2 annotation(
    Placement(visible = true, transformation(origin = {90, 10}, extent = {{-10, 10}, {10, -10}}, rotation = 0)));
  ComputerCooling.IncompressibleLiquidComponents.Transfer.WaterBlock_GenericSection_uniform_w wb3 annotation(
    Placement(visible = true, transformation(origin = {130, -10}, extent = {{-10, 10}, {10, -10}}, rotation = 0)));
  ComputerCooling.IncompressibleLiquidComponents.Transfer.Ducts.LiquidStream_FiniteVolume_GenericSection_uniform_w p2wb2(Ac = 0.003 ^ 2, L = 0.4, dp_nom = 25000, per = 4 * 0.003, w_nom = 0.5 / 60) annotation(
    Placement(visible = true, transformation(origin = {10, 10}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  ComputerCooling.IncompressibleLiquidComponents.Transfer.Ducts.LiquidStream_FiniteVolume_GenericSection_uniform_w p3wb3(Ac = 0.003 ^ 2, L = 0.4, dp_nom = 25000, per = 4 * 0.003, w_nom = 0.5 / 60) annotation(
    Placement(visible = true, transformation(origin = {10, -10}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  ComputerCooling.IncompressibleLiquidComponents.Transfer.Ducts.LiquidStream_FiniteVolume_GenericSection_uniform_w duct123(Ac = 0.006 ^ 2, L = 2, dp_nom = 20000, n = 3, per = 4 * 0.006, w_nom = 1.5 / 60) annotation(
    Placement(visible = true, transformation(origin = {-170, 30}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  ComputerCooling.HeatSources.HeatSource_Power_2D_uniform cpu2(cols = 4, rows = 5) annotation(
    Placement(visible = true, transformation(origin = {70, 150}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  ComputerCooling.HeatSources.HeatSource_Power_2D_uniform cpu3(cols = 4, rows = 5) annotation(
    Placement(visible = true, transformation(origin = {110, 170}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  ComputerCooling.IncompressibleLiquidComponents.Transfer.Ducts.Tube_1D_cylindrical_uniform_w radiator1(Dstream = 0.003, L = 5, dp_nom = 20000, fluidHeats = true, t = 0.0005, w_nom = 0.5 / 60) annotation(
    Placement(visible = true, transformation(origin = {-190, 150}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  ComputerCooling.IncompressibleLiquidComponents.Transfer.Ducts.Tube_1D_cylindrical_uniform_w radiator2(Dstream = 0.003, L = 5, dp_nom = 20000, fluidHeats = true, t = 0.0005, w_nom = 0.5 / 60) annotation(
    Placement(visible = true, transformation(origin = {-170, 130}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  ComputerCooling.IncompressibleLiquidComponents.Transfer.Ducts.Tube_1D_cylindrical_uniform_w radiator3(Dstream = 0.003, L = 5, dp_nom = 20000, fluidHeats = true, t = 0.0005, w_nom = 0.5 / 60) annotation(
    Placement(visible = true, transformation(origin = {-150, 110}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.RealExpression spDTwb(y = 273.15 + 40) annotation(
    Placement(visible = true, transformation(origin = {-210, -46}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  ComputerCooling.ControlBlocks.AnalogueControllers.PI_awfb_full PI_DTwb3(CSmin = 0.02, CSstart = 0.5, K = -0.1, Ti = 4) annotation(
    Placement(visible = true, transformation(origin = {-90, -140}, extent = {{-10, -20}, {10, 20}}, rotation = 0)));
  Modelica.Blocks.Sources.RealExpression spp(y = 12) annotation(
    Placement(visible = true, transformation(origin = {-240, 6}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  ComputerCooling.IncompressibleLiquidComponents.Transfer.Ducts.LiquidStream_FiniteVolume_GenericSection_uniform_w wb1t(Ac = 0.003 ^ 2, L = 0.4, dp_nom = 25000, per = 4 * 0.003, w_nom = 0.5 / 60) annotation(
    Placement(visible = true, transformation(origin = {170, 30}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  ComputerCooling.IncompressibleLiquidComponents.Transfer.Ducts.LiquidStream_FiniteVolume_GenericSection_uniform_w wb3t(Ac = 0.003 ^ 2, L = 0.4, dp_nom = 25000, per = 4 * 0.003, w_nom = 0.5 / 60) annotation(
    Placement(visible = true, transformation(origin = {170, -10}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  ComputerCooling.IncompressibleLiquidComponents.Transfer.Ducts.LiquidStream_FiniteVolume_GenericSection_uniform_w wb2t(Ac = 0.003 ^ 2, L = 0.4, dp_nom = 25000, per = 4 * 0.003, w_nom = 0.5 / 60) annotation(
    Placement(visible = true, transformation(origin = {170, 10}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  ComputerCooling.ControlBlocks.AnalogueControllers.PI_awfb_full PI_DTwb2(CSmin = 0.02, CSstart = 0.5, K = -0.1, Ti = 4) annotation(
    Placement(visible = true, transformation(origin = {-120, -100}, extent = {{-10, -20}, {10, 20}}, rotation = 0)));
  ComputerCooling.ControlBlocks.AnalogueControllers.PI_awfb_full PI_DTwb1(CSmin = 0.02, CSstart = 0.5, K = -0.1, Ti = 4) annotation(
    Placement(visible = true, transformation(origin = {-150, -60}, extent = {{-10, -20}, {10, 20}}, rotation = 0)));
  ComputerCooling.IncompressibleLiquidComponents.Storage.VentedTank tank(H = 0.2, V = 0.001) annotation(
    Placement(visible = true, transformation(origin = {-210, 30}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.CombiTimeTable ptrace2(extrapolation = Modelica.Blocks.Types.Extrapolation.Periodic, fileName = Modelica.Utilities.Files.loadResource("modelica://ComputerCooling/Resources/Data/clover-parallel-powertrace-500ms.txt"), smoothness = Modelica.Blocks.Types.Smoothness.LinearSegments, startTime = 20, tableName = "data", tableOnFile = true, timeEvents = Modelica.Blocks.Types.TimeEvents.AtDiscontinuities, timeScale = 1.5, verboseRead = true) annotation(
    Placement(visible = true, transformation(origin = {-60, 150}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  ComputerCooling.IncompressibleLiquidComponents.FlowControl.Valves.ValveModulating_TwoPort valvewb1(dp_nom = 25000, w_nom = 0.5 / 60) annotation(
    Placement(visible = true, transformation(origin = {-80, 30}, extent = {{-10, 10}, {10, -10}}, rotation = 0)));
  ComputerCooling.IncompressibleLiquidComponents.FlowControl.Valves.ValveModulating_TwoPort valvewb2(dp_nom(displayUnit = "bar") = 25000, w_nom = 0.5 / 60) annotation(
    Placement(visible = true, transformation(origin = {-60, 10}, extent = {{-10, 10}, {10, -10}}, rotation = 0)));
  ComputerCooling.IncompressibleLiquidComponents.FlowControl.Valves.ValveModulating_TwoPort valvewb3(dp_nom = 25000, w_nom = 0.5 / 60) annotation(
    Placement(visible = true, transformation(origin = {-42, -10}, extent = {{-10, 10}, {10, -10}}, rotation = 0)));
  Modelica.Thermal.HeatTransfer.Sensors.TemperatureSensor sTspreader1 annotation(
    Placement(visible = true, transformation(origin = {70, -30}, extent = {{-10, -10}, {10, 10}}, rotation = -90)));
  Modelica.Thermal.HeatTransfer.Sensors.TemperatureSensor sTspreader2 annotation(
    Placement(visible = true, transformation(origin = {108, -50}, extent = {{-10, -10}, {10, 10}}, rotation = -90)));
  Modelica.Thermal.HeatTransfer.Sensors.TemperatureSensor sTspreader3 annotation(
    Placement(visible = true, transformation(origin = {150, -70}, extent = {{-10, -10}, {10, 10}}, rotation = -90)));
  Modelica.Blocks.Sources.CombiTimeTable ptrace3(extrapolation = Modelica.Blocks.Types.Extrapolation.Periodic, fileName = Modelica.Utilities.Files.loadResource("modelica://ComputerCooling/Resources/Data/clover-parallel-powertrace-500ms.txt"), smoothness = Modelica.Blocks.Types.Smoothness.LinearSegments, startTime = 5, tableName = "data", tableOnFile = true, timeEvents = Modelica.Blocks.Types.TimeEvents.AtDiscontinuities, timeScale = 0.7, verboseRead = true) annotation(
    Placement(visible = true, transformation(origin = {-30, 170}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.CombiTimeTable ptrace1(extrapolation = Modelica.Blocks.Types.Extrapolation.Periodic, fileName = Modelica.Utilities.Files.loadResource("modelica://ComputerCooling/Resources/Data/clover-parallel-powertrace-500ms.txt"), smoothness = Modelica.Blocks.Types.Smoothness.LinearSegments, tableName = "data", tableOnFile = true, timeEvents = Modelica.Blocks.Types.TimeEvents.AtDiscontinuities, verboseRead = true) annotation(
    Placement(visible = true, transformation(origin = {-90, 130}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Math.Gain g1(k = 1) annotation(
    Placement(visible = true, transformation(origin = {-30, 130}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Math.Gain g2(k = 0.8) annotation(
    Placement(visible = true, transformation(origin = {0, 150}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Math.Gain g3(k = 1.2) annotation(
    Placement(visible = true, transformation(origin = {30, 170}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  ComputerCooling.SolidComponents.Metal_layer_no_spread_uniform_grid chip1(rows = 5) annotation(
    Placement(visible = true, transformation(origin = {50, 94}, extent = {{-10, 10}, {10, -10}}, rotation = 0)));
  ComputerCooling.SolidComponents.Metal_layer_no_spread_uniform_grid chip2(rows = 5) annotation(
    Placement(visible = true, transformation(origin = {90, 94}, extent = {{-10, 10}, {10, -10}}, rotation = 0)));
  ComputerCooling.SolidComponents.Metal_layer_no_spread_uniform_grid chip3(rows = 5) annotation(
    Placement(visible = true, transformation(origin = {130, 94}, extent = {{-10, 10}, {10, -10}}, rotation = 0)));
  ComputerCooling.SolidComponents.material_layer_uniform_grid_Pnom_DTnom spreader3(DTnom = 10, rows = 5) annotation(
    Placement(visible = true, transformation(origin = {130, 70}, extent = {{-10, 10}, {10, -10}}, rotation = 0)));
  ComputerCooling.SolidComponents.material_layer_uniform_grid_Pnom_DTnom spreader2(DTnom = 10, rows = 5) annotation(
    Placement(visible = true, transformation(origin = {90, 70}, extent = {{-10, 10}, {10, -10}}, rotation = 0)));
  ComputerCooling.SolidComponents.material_layer_uniform_grid_Pnom_DTnom spreader1(DTnom = 10, rows = 5) annotation(
    Placement(visible = true, transformation(origin = {50, 70}, extent = {{-10, 10}, {10, -10}}, rotation = 0)));
  ComputerCooling.ControlBlocks.AnalogueControllers.PI_awfb_full PI_Tradin(CSmin = 0.05, CSstart = 0.5, K = -0.02, Ti = 20) annotation(
    Placement(visible = true, transformation(origin = {-184, -8}, extent = {{-10, -20}, {10, 20}}, rotation = 0)));
  ComputerCooling.Sensors.TemperatureSensor_liquid sTradin(unitCelsius = false) annotation(
    Placement(visible = true, transformation(origin = {-138, 76}, extent = {{-10, 10}, {10, -10}}, rotation = -90)));
  Modelica.Blocks.Math.Feedback DTra annotation(
    Placement(visible = true, transformation(origin = {-260, 76}, extent = {{-10, -10}, {10, 10}}, rotation = 180)));
equation
  connect(Tamb.y, amb.T_input) annotation(
    Line(points = {{-267, 170}, {-242, 170}}, color = {0, 0, 127}));
  connect(duct123.pwh_b, pump1.pwh_a) annotation(
    Line(points = {{-158, 30}, {-142, 30}}));
  connect(amb.hp, radiator1.hp) annotation(
    Line(points = {{-218, 170}, {-190, 170}, {-190, 162}}, color = {191, 0, 0}));
  connect(amb.hp, radiator2.hp) annotation(
    Line(points = {{-218, 170}, {-170, 170}, {-170, 142}}, color = {191, 0, 0}));
  connect(amb.hp, radiator3.hp) annotation(
    Line(points = {{-218, 170}, {-150, 170}, {-150, 122}}, color = {191, 0, 0}));
  connect(radiator1.pwh_b, radiator2.pwh_b) annotation(
    Line(points = {{-202, 150}, {-216, 150}, {-216, 130}, {-182, 130}}));
  connect(radiator2.pwh_b, radiator3.pwh_b) annotation(
    Line(points = {{-182, 130}, {-216, 130}, {-216, 110}, {-162, 110}}));
  connect(radiator1.pwh_a, radiator2.pwh_a) annotation(
    Line(points = {{-178, 150}, {-116, 150}, {-116, 130}, {-158, 130}}));
  connect(radiator2.pwh_a, radiator3.pwh_a) annotation(
    Line(points = {{-158, 130}, {-116, 130}, {-116, 110}, {-138, 110}}));
  connect(p2wb2.pwh_b, wb2.pwh_a) annotation(
    Line(points = {{22, 10}, {78, 10}}));
  connect(p3wb3.pwh_b, wb3.pwh_a) annotation(
    Line(points = {{22, -10}, {118, -10}}));
  connect(p1wb1.pwh_b, wb1.pwh_a) annotation(
    Line(points = {{22, 30}, {38, 30}}));
  connect(wb1.pwh_b, wb1t.pwh_a) annotation(
    Line(points = {{62, 30}, {158, 30}}));
  connect(wb2.pwh_b, wb2t.pwh_a) annotation(
    Line(points = {{102, 10}, {158, 10}}));
  connect(wb3.pwh_b, wb3t.pwh_a) annotation(
    Line(points = {{142, -10}, {158, -10}}));
  connect(PI_DTwb1.SP, spDTwb.y) annotation(
    Line(points = {{-160, -46}, {-199, -46}}, color = {0, 0, 127}));
  connect(spDTwb.y, PI_DTwb2.SP) annotation(
    Line(points = {{-199, -46}, {-180, -46}, {-180, -86}, {-130, -86}}, color = {0, 0, 127}));
  connect(spDTwb.y, PI_DTwb3.SP) annotation(
    Line(points = {{-199, -46}, {-180, -46}, {-180, -126}, {-100, -126}}, color = {0, 0, 127}));
  connect(wb3t.pwh_b, wb2t.pwh_b) annotation(
    Line(points = {{182, -10}, {200, -10}, {200, 10}, {182, 10}}));
  connect(wb2t.pwh_b, wb1t.pwh_b) annotation(
    Line(points = {{182, 10}, {200, 10}, {200, 30}, {182, 30}}));
  connect(tank.pwh_b, duct123.pwh_a) annotation(
    Line(points = {{-198, 30}, {-182, 30}}));
  connect(radiator3.pwh_b, tank.pwh_a) annotation(
    Line(points = {{-162, 110}, {-240, 110}, {-240, 30}, {-222, 30}}));
  connect(PI_DTwb1.CS, valvewb1.cmd) annotation(
    Line(points = {{-140, -46}, {-80, -46}, {-80, 20}}, color = {0, 0, 127}));
  connect(PI_DTwb2.CS, valvewb2.cmd) annotation(
    Line(points = {{-110, -86}, {-60, -86}, {-60, 0}}, color = {0, 0, 127}));
  connect(PI_DTwb3.CS, valvewb3.cmd) annotation(
    Line(points = {{-80, -126}, {-42, -126}, {-42, -20}}, color = {0, 0, 127}));
  connect(valvewb1.pwh_b, p1wb1.pwh_a) annotation(
    Line(points = {{-68, 30}, {-2, 30}}));
  connect(valvewb2.pwh_b, p2wb2.pwh_a) annotation(
    Line(points = {{-48, 10}, {-2, 10}}));
  connect(valvewb3.pwh_b, p3wb3.pwh_a) annotation(
    Line(points = {{-30, -10}, {-2, -10}}));
  connect(sTspreader1.T, PI_DTwb1.PV) annotation(
    Line(points = {{70, -40}, {70, -172}, {-176, -172}, {-176, -50}, {-160, -50}}, color = {0, 0, 127}));
  connect(sTspreader2.T, PI_DTwb2.PV) annotation(
    Line(points = {{108, -60}, {108, -176}, {-172, -176}, {-172, -90}, {-130, -90}}, color = {0, 0, 127}));
  connect(sTspreader3.T, PI_DTwb3.PV) annotation(
    Line(points = {{150, -80}, {150, -180}, {-168, -180}, {-168, -130}, {-100, -130}}, color = {0, 0, 127}));
  connect(ptrace1.y[1], g1.u) annotation(
    Line(points = {{-79, 130}, {-42, 130}}, color = {0, 0, 127}));
  connect(g1.y, cpu1.P_input) annotation(
    Line(points = {{-19, 130}, {18, 130}}, color = {0, 0, 127}));
  connect(ptrace2.y[1], g2.u) annotation(
    Line(points = {{-49, 150}, {-13, 150}}, color = {0, 0, 127}));
  connect(ptrace3.y[1], g3.u) annotation(
    Line(points = {{-19, 170}, {17, 170}}, color = {0, 0, 127}));
  connect(g3.y, cpu3.P_input) annotation(
    Line(points = {{41, 170}, {97, 170}}, color = {0, 0, 127}));
  connect(g2.y, cpu2.P_input) annotation(
    Line(points = {{11, 150}, {57, 150}}, color = {0, 0, 127}));
  connect(valvewb2.pwh_a, valvewb1.pwh_a) annotation(
    Line(points = {{-72, 10}, {-100, 10}, {-100, 30}, {-92, 30}}));
  connect(valvewb3.pwh_a, valvewb1.pwh_a) annotation(
    Line(points = {{-54, -10}, {-100, -10}, {-100, 30}, {-92, 30}}));
  connect(pump1.pwh_b, valvewb1.pwh_a) annotation(
    Line(points = {{-118, 30}, {-92, 30}}));
  connect(radiator3.pwh_a, wb1t.pwh_b) annotation(
    Line(points = {{-138, 110}, {200, 110}, {200, 30}, {182, 30}}));
  connect(cpu1.hp, chip1.cpu_side) annotation(
    Line(points = {{42, 130}, {50, 130}, {50, 97}}, color = {191, 0, 0}));
  connect(cpu2.hp, chip2.cpu_side) annotation(
    Line(points = {{82, 150}, {90, 150}, {90, 97}}, color = {191, 0, 0}));
  connect(cpu3.hp, chip3.cpu_side) annotation(
    Line(points = {{122, 170}, {130, 170}, {130, 97}}, color = {191, 0, 0}));
  connect(chip1.sink_side, spreader1.cpu_side) annotation(
    Line(points = {{50, 92}, {50, 74}}, color = {191, 0, 0}));
  connect(chip2.sink_side, spreader2.cpu_side) annotation(
    Line(points = {{90, 92}, {90, 74}}, color = {191, 0, 0}));
  connect(chip3.sink_side, spreader3.cpu_side) annotation(
    Line(points = {{130, 92}, {130, 74}}, color = {191, 0, 0}));
  connect(spreader1.sink_side, wb1.mHP) annotation(
    Line(points = {{50, 68}, {50, 38}}, color = {191, 0, 0}));
  connect(spreader2.sink_side, wb2.mHP) annotation(
    Line(points = {{90, 68}, {90, 18}}, color = {191, 0, 0}));
  connect(spreader3.sink_side, wb3.mHP) annotation(
    Line(points = {{130, 68}, {130, -2}}, color = {191, 0, 0}));
  connect(spreader1.cpu_side.port[2, 2], sTspreader1.port) annotation(
    Line(points = {{50, 74}, {50, 80}, {70, 80}, {70, -20}}, color = {191, 0, 0}));
  connect(spreader2.cpu_side.port[2, 2], sTspreader2.port) annotation(
    Line(points = {{90, 74}, {90, 80}, {108, 80}, {108, -40}}, color = {191, 0, 0}));
  connect(spreader3.cpu_side.port[2, 2], sTspreader3.port) annotation(
    Line(points = {{130, 74}, {130, 80}, {150, 80}, {150, -60}}, color = {191, 0, 0}));
  connect(PI_Tradin.CS, pump1.cmd) annotation(
    Line(points = {{-174, 6}, {-160, 6}, {-160, 22}, {-142, 22}}, color = {0, 0, 127}));
  connect(spp.y, PI_Tradin.SP) annotation(
    Line(points = {{-228, 6}, {-194, 6}}, color = {0, 0, 127}));
  connect(radiator3.pwh_a, sTradin.pwh) annotation(
    Line(points = {{-138, 110}, {-138, 88}}));
  connect(DTra.u1, sTradin.out) annotation(
    Line(points = {{-252, 76}, {-150, 76}}, color = {0, 0, 127}));
  connect(Tamb.y, DTra.u2) annotation(
    Line(points = {{-266, 170}, {-260, 170}, {-260, 84}}, color = {0, 0, 127}));
  connect(DTra.y, PI_Tradin.PV) annotation(
    Line(points = {{-268, 76}, {-280, 76}, {-280, -18}, {-218, -18}, {-218, 2}, {-194, 2}}, color = {0, 0, 127}));
protected
  annotation(
    Diagram(coordinateSystem(extent = {{-300, -200}, {300, 200}})),
    experiment(StartTime = 0, StopTime = 7200, Tolerance = 1e-06, Interval = 2),
    __OpenModelica_commandLineOptions = "--matchingAlgorithm=PFPlusExt --indexReductionMethod=dynamicStateSelection -d=initialization,NLSanalyticJacobian",
    __OpenModelica_simulationFlags(lv = "LOG_STATS", s = "dassl", noEquidistantTimeGrid = "()", noEventEmit = "()", noRestart = "()", noRootFinding = "()"));
end AE008_example_controlled_circuit_05;