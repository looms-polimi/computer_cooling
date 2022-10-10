within ComputerCooling.Tutorial.T04_Application_examples;

model Complex_cooling_circuit_with_controls
  extends Icons.TutorialModel;
  ComputerCooling.IncompressibleLiquidComponents.FlowControl.Pumps.CentrifugalPump pump1(dp_nom = 99999.99999999999, dp_zf = 200000, w_nom = 1.75 / 60) annotation(
    Placement(visible = true, transformation(origin = {-110, 30}, extent = {{-10, 10}, {10, -10}}, rotation = 0)));
  ComputerCooling.HeatTransfer.BoundaryConditions.Prescribed_Power_2D_uniform cpu1(cols = 4, rows = 5) annotation(
    Placement(visible = true, transformation(origin = {30, 130}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  ComputerCooling.HeatTransfer.BoundaryConditions.Prescribed_Temperature_1D_uniform amb(R = 0.1) annotation(
    Placement(visible = true, transformation(origin = {-210, 170}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.RealExpression Tamb(y = 293.15) annotation(
    Placement(visible = true, transformation(origin = {-278, 170}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  ComputerCooling.IncompressibleLiquidComponents.WaterBlocks.WaterBlock_GenericSection_uniform_w wb1 annotation(
    Placement(visible = true, transformation(origin = {50, 30}, extent = {{-10, 10}, {10, -10}}, rotation = 0)));
  ComputerCooling.IncompressibleLiquidComponents.Ducts.LiquidStream_FiniteVolume_GenericSection p1wb1(Ac = 0.003 ^ 2, L = 0.4, dp_nom = 25000, per = 4 * 0.003, w_nom = 0.5 / 60) annotation(
    Placement(visible = true, transformation(origin = {10, 30}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  ComputerCooling.IncompressibleLiquidComponents.WaterBlocks.WaterBlock_GenericSection_uniform_w wb2 annotation(
    Placement(visible = true, transformation(origin = {90, 10}, extent = {{-10, 10}, {10, -10}}, rotation = 0)));
  ComputerCooling.IncompressibleLiquidComponents.WaterBlocks.WaterBlock_GenericSection_uniform_w wb3 annotation(
    Placement(visible = true, transformation(origin = {130, -10}, extent = {{-10, 10}, {10, -10}}, rotation = 0)));
  ComputerCooling.IncompressibleLiquidComponents.Ducts.LiquidStream_FiniteVolume_GenericSection p2wb2(Ac = 0.003 ^ 2, L = 0.4, dp_nom = 25000, per = 4 * 0.003, w_nom = 0.5 / 60) annotation(
    Placement(visible = true, transformation(origin = {10, 10}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  ComputerCooling.IncompressibleLiquidComponents.Ducts.LiquidStream_FiniteVolume_GenericSection p3wb3(Ac = 0.003 ^ 2, L = 0.4, dp_nom = 25000, per = 4 * 0.003, w_nom = 0.5 / 60) annotation(
    Placement(visible = true, transformation(origin = {10, -10}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  ComputerCooling.IncompressibleLiquidComponents.Ducts.LiquidStream_FiniteVolume_GenericSection duct123(Ac = 0.006 ^ 2, L = 2, dp_nom = 20000, n = 3, per = 4 * 0.006, w_nom = 1.5 / 60) annotation(
    Placement(visible = true, transformation(origin = {-150, 30}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  ComputerCooling.HeatTransfer.BoundaryConditions.Prescribed_Power_2D_uniform cpu2(cols = 4, rows = 5) annotation(
    Placement(visible = true, transformation(origin = {70, 150}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  ComputerCooling.HeatTransfer.BoundaryConditions.Prescribed_Power_2D_uniform cpu3(cols = 4, rows = 5) annotation(
    Placement(visible = true, transformation(origin = {110, 170}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  ComputerCooling.IncompressibleLiquidComponents.Ducts.Tube_1D_Cylindrical radiator1(D = 0.003, L = 5, dp_nom = 20000, fluidHeats = true, t = 0.0005, w_nom = 0.5 / 60) annotation(
    Placement(visible = true, transformation(origin = {-180, 140}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  ComputerCooling.IncompressibleLiquidComponents.Ducts.Tube_1D_Cylindrical radiator2(D = 0.003, L = 5, dp_nom = 20000, fluidHeats = true, t = 0.0005, w_nom = 0.5 / 60) annotation(
    Placement(visible = true, transformation(origin = {-160, 120}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.RealExpression spDTwb(y = 273.15 + 40) annotation(
    Placement(visible = true, transformation(origin = {-210, -46}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  ComputerCooling.ControlBlocks.AnalogueControllers.PI_awfb_full PI_Twb3(CSmin = 0.02, CSstart = 0.5, K = -0.1, Ti = 4) annotation(
    Placement(visible = true, transformation(origin = {-160, -160}, extent = {{-10, -20}, {10, 20}}, rotation = 0)));
  ComputerCooling.IncompressibleLiquidComponents.Ducts.LiquidStream_FiniteVolume_GenericSection wb1t(Ac = 0.003 ^ 2, L = 0.4, dp_nom = 25000, per = 4 * 0.003, w_nom = 0.5 / 60) annotation(
    Placement(visible = true, transformation(origin = {170, 30}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  ComputerCooling.IncompressibleLiquidComponents.Ducts.LiquidStream_FiniteVolume_GenericSection wb3t(Ac = 0.003 ^ 2, L = 0.4, dp_nom = 25000, per = 4 * 0.003, w_nom = 0.5 / 60) annotation(
    Placement(visible = true, transformation(origin = {170, -10}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  ComputerCooling.IncompressibleLiquidComponents.Ducts.LiquidStream_FiniteVolume_GenericSection wb2t(Ac = 0.003 ^ 2, L = 0.4, dp_nom = 25000, per = 4 * 0.003, w_nom = 0.5 / 60) annotation(
    Placement(visible = true, transformation(origin = {170, 10}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  ComputerCooling.ControlBlocks.AnalogueControllers.PI_awfb_full PI_Twb2(CSmin = 0.02, CSstart = 0.5, K = -0.1, Ti = 4) annotation(
    Placement(visible = true, transformation(origin = {-160, -110}, extent = {{-10, -20}, {10, 20}}, rotation = 0)));
  ComputerCooling.ControlBlocks.AnalogueControllers.PI_awfb_full PI_Twb1(CSmin = 0.02, CSstart = 0.5, K = -0.1, Ti = 4) annotation(
    Placement(visible = true, transformation(origin = {-160, -60}, extent = {{-10, -20}, {10, 20}}, rotation = 0)));
  ComputerCooling.IncompressibleLiquidComponents.Storage.VentedTank tank(H = 0.2, V = 0.001) annotation(
    Placement(visible = true, transformation(origin = {-190, 30}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.CombiTimeTable ptrace2(extrapolation = Modelica.Blocks.Types.Extrapolation.Periodic, fileName = Modelica.Utilities.Files.loadResource("modelica://ComputerCooling/Resources/Data/clover-parallel-powertrace-500ms.txt"), smoothness = Modelica.Blocks.Types.Smoothness.LinearSegments, startTime = 20, tableName = "data", tableOnFile = true, timeEvents = Modelica.Blocks.Types.TimeEvents.AtDiscontinuities, timeScale = 1.5, verboseRead = true) annotation(
    Placement(visible = true, transformation(origin = {-60, 150}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  ComputerCooling.IncompressibleLiquidComponents.FlowControl.Valves.ValveModulating_TwoPort valvewb1(dp_nom = 25000, w_nom = 0.5 / 60) annotation(
    Placement(visible = true, transformation(origin = {-70, 30}, extent = {{-10, 10}, {10, -10}}, rotation = 0)));
  ComputerCooling.IncompressibleLiquidComponents.FlowControl.Valves.ValveModulating_TwoPort valvewb2(dp_nom(displayUnit = "bar") = 25000, w_nom = 0.5 / 60) annotation(
    Placement(visible = true, transformation(origin = {-50, 10}, extent = {{-10, 10}, {10, -10}}, rotation = 0)));
  ComputerCooling.IncompressibleLiquidComponents.FlowControl.Valves.ValveModulating_TwoPort valvewb3(dp_nom = 25000, w_nom = 0.5 / 60) annotation(
    Placement(visible = true, transformation(origin = {-30, -10}, extent = {{-10, 10}, {10, -10}}, rotation = 0)));
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
  Modelica.Blocks.Math.Gain g3(k = 1.1) annotation(
    Placement(visible = true, transformation(origin = {30, 170}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  ComputerCooling.SolidComponents.Metal_layer_no_spread_uniform_grid chip1(rows = 5) annotation(
    Placement(visible = true, transformation(origin = {50, 80}, extent = {{-10, 10}, {10, -10}}, rotation = 0)));
  ComputerCooling.SolidComponents.Metal_layer_no_spread_uniform_grid chip2(rows = 5) annotation(
    Placement(visible = true, transformation(origin = {90, 80}, extent = {{-10, 10}, {10, -10}}, rotation = 0)));
  ComputerCooling.SolidComponents.Metal_layer_no_spread_uniform_grid chip3(rows = 5) annotation(
    Placement(visible = true, transformation(origin = {130, 80}, extent = {{-10, 10}, {10, -10}}, rotation = 0)));
  ComputerCooling.SolidComponents.material_layer_uniform_grid_Pnom_DTnom spreader3(DTnom = 10, rows = 5) annotation(
    Placement(visible = true, transformation(origin = {130, 60}, extent = {{-10, 10}, {10, -10}}, rotation = 0)));
  ComputerCooling.SolidComponents.material_layer_uniform_grid_Pnom_DTnom spreader2(DTnom = 10, rows = 5) annotation(
    Placement(visible = true, transformation(origin = {90, 60}, extent = {{-10, 10}, {10, -10}}, rotation = 0)));
  ComputerCooling.SolidComponents.material_layer_uniform_grid_Pnom_DTnom spreader1(DTnom = 10, rows = 5) annotation(
    Placement(visible = true, transformation(origin = {50, 58}, extent = {{-10, 10}, {10, -10}}, rotation = 0)));
  ComputerCooling.IncompressibleLiquidComponents.Ducts.Tube_1D_Cylindrical radiator3(D = 0.003, L = 5, dp_nom = 20000, fluidHeats = true, t = 0.0005, w_nom = 0.5 / 60) annotation(
    Placement(visible = true, transformation(origin = {-140, 100}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  Modelica.Blocks.Math.Add3 add3(k1 = 1 / 3, k2 = 1 / 3, k3 = 1 / 3)  annotation(
    Placement(visible = true, transformation(origin = {-130, -10}, extent = {{-10, -10}, {10, 10}}, rotation = 90)));
equation
  connect(Tamb.y, amb.T_input) annotation(
    Line(points = {{-267, 170}, {-222, 170}}, color = {0, 0, 127}));
  connect(duct123.pwh_b, pump1.pwh_a) annotation(
    Line(points = {{-138, 30}, {-122, 30}}));
  connect(amb.hp, radiator1.surf) annotation(
    Line(points = {{-198, 170}, {-180, 170}, {-180, 152}}, color = {191, 0, 0}));
  connect(amb.hp, radiator2.surf) annotation(
    Line(points = {{-198, 170}, {-160, 170}, {-160, 132}}, color = {191, 0, 0}));
  connect(radiator1.pwh_b, radiator2.pwh_b) annotation(
    Line(points = {{-192, 140}, {-210, 140}, {-210, 120}, {-172, 120}}));
  connect(radiator1.pwh_a, radiator2.pwh_a) annotation(
    Line(points = {{-168, 140}, {-120, 140}, {-120, 120}, {-148, 120}}));
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
  connect(PI_Twb1.SP, spDTwb.y) annotation(
    Line(points = {{-170, -46}, {-199, -46}}, color = {0, 0, 127}));
  connect(spDTwb.y, PI_Twb2.SP) annotation(
    Line(points = {{-199, -46}, {-188, -46}, {-188, -96}, {-170, -96}}, color = {0, 0, 127}));
  connect(spDTwb.y, PI_Twb3.SP) annotation(
    Line(points = {{-199, -46}, {-188, -46}, {-188, -146}, {-170, -146}}, color = {0, 0, 127}));
  connect(wb3t.pwh_b, wb2t.pwh_b) annotation(
    Line(points = {{182, -10}, {190, -10}, {190, 10}, {182, 10}}));
  connect(wb2t.pwh_b, wb1t.pwh_b) annotation(
    Line(points = {{182, 10}, {190, 10}, {190, 30}, {182, 30}}));
  connect(tank.pwh_b, duct123.pwh_a) annotation(
    Line(points = {{-178, 30}, {-162, 30}}));
  connect(PI_Twb1.CS, valvewb1.cmd) annotation(
    Line(points = {{-150, -46}, {-70, -46}, {-70, 20}}, color = {0, 0, 127}));
  connect(PI_Twb2.CS, valvewb2.cmd) annotation(
    Line(points = {{-150, -96}, {-50, -96}, {-50, 0}}, color = {0, 0, 127}));
  connect(PI_Twb3.CS, valvewb3.cmd) annotation(
    Line(points = {{-150, -146}, {-30, -146}, {-30, -20}}, color = {0, 0, 127}));
  connect(valvewb1.pwh_b, p1wb1.pwh_a) annotation(
    Line(points = {{-58, 30}, {-2, 30}}));
  connect(valvewb2.pwh_b, p2wb2.pwh_a) annotation(
    Line(points = {{-38, 10}, {-2, 10}}));
  connect(valvewb3.pwh_b, p3wb3.pwh_a) annotation(
    Line(points = {{-18, -10}, {-2, -10}}));
  connect(sTspreader1.T, PI_Twb1.PV) annotation(
    Line(points = {{70, -40}, {70, -184}, {-180, -184}, {-180, -50}, {-170, -50}}, color = {0, 0, 127}));
  connect(sTspreader2.T, PI_Twb2.PV) annotation(
    Line(points = {{108, -60}, {108, -188}, {-184, -188}, {-184, -100}, {-170, -100}}, color = {0, 0, 127}));
  connect(sTspreader3.T, PI_Twb3.PV) annotation(
    Line(points = {{150, -80}, {150, -194}, {-188, -194}, {-188, -150}, {-170, -150}}, color = {0, 0, 127}));
  connect(ptrace1.y[1], g1.u) annotation(
    Line(points = {{-79, 130}, {-42, 130}}, color = {0, 0, 127}));
  connect(ptrace2.y[1], g2.u) annotation(
    Line(points = {{-49, 150}, {-13, 150}}, color = {0, 0, 127}));
  connect(ptrace3.y[1], g3.u) annotation(
    Line(points = {{-19, 170}, {17, 170}}, color = {0, 0, 127}));
  connect(valvewb2.pwh_a, valvewb1.pwh_a) annotation(
    Line(points = {{-62, 10}, {-90, 10}, {-90, 30}, {-82, 30}}));
  connect(valvewb3.pwh_a, valvewb1.pwh_a) annotation(
    Line(points = {{-42, -10}, {-90, -10}, {-90, 30}, {-82, 30}}));
  connect(pump1.pwh_b, valvewb1.pwh_a) annotation(
    Line(points = {{-98, 30}, {-82, 30}}));
  connect(cpu1.hp, chip1.cpu_side) annotation(
    Line(points = {{42, 130}, {50, 130}, {50, 86}}, color = {191, 0, 0}));
  connect(cpu2.hp, chip2.cpu_side) annotation(
    Line(points = {{82, 150}, {90, 150}, {90, 86}}, color = {191, 0, 0}));
  connect(cpu3.hp, chip3.cpu_side) annotation(
    Line(points = {{122, 170}, {130, 170}, {130, 86}}, color = {191, 0, 0}));
  connect(chip1.sink_side, spreader1.cpu_side) annotation(
    Line(points = {{50, 76}, {50, 61}}, color = {191, 0, 0}));
  connect(chip2.sink_side, spreader2.cpu_side) annotation(
    Line(points = {{90, 76}, {90, 63}}, color = {191, 0, 0}));
  connect(chip3.sink_side, spreader3.cpu_side) annotation(
    Line(points = {{130, 76}, {130, 63}}, color = {191, 0, 0}));
  connect(spreader1.sink_side, wb1.surf) annotation(
    Line(points = {{50, 55}, {50, 38}}, color = {191, 0, 0}));
  connect(spreader2.sink_side, wb2.surf) annotation(
    Line(points = {{90, 57}, {90, 18}}, color = {191, 0, 0}));
  connect(spreader3.sink_side, wb3.surf) annotation(
    Line(points = {{130, 57}, {130, -2}}, color = {191, 0, 0}));
  connect(spreader1.cpu_side.port[2, 2], sTspreader1.port) annotation(
    Line(points = {{50, 61}, {50, 70}, {70, 70}, {70, -20}}, color = {191, 0, 0}));
  connect(spreader2.cpu_side.port[2, 2], sTspreader2.port) annotation(
    Line(points = {{90, 63}, {90, 70}, {108, 70}, {108, -40}}, color = {191, 0, 0}));
  connect(spreader3.cpu_side.port[2, 2], sTspreader3.port) annotation(
    Line(points = {{130, 63}, {130, 70}, {150, 70}, {150, -60}}, color = {191, 0, 0}));
  connect(radiator3.pwh_a, wb1t.pwh_b) annotation(
    Line(points = {{-128, 100}, {190, 100}, {190, 30}, {182, 30}}));
  connect(radiator3.pwh_b, tank.pwh_a) annotation(
    Line(points = {{-152, 100}, {-210, 100}, {-210, 30}, {-202, 30}}));
  connect(radiator2.pwh_a, radiator3.pwh_a) annotation(
    Line(points = {{-148, 120}, {-120, 120}, {-120, 100}, {-128, 100}}));
  connect(radiator2.pwh_b, radiator3.pwh_b) annotation(
    Line(points = {{-172, 120}, {-210, 120}, {-210, 100}, {-152, 100}}));
  connect(amb.hp, radiator3.surf) annotation(
    Line(points = {{-198, 170}, {-140, 170}, {-140, 112}}, color = {191, 0, 0}));
  connect(add3.y, pump1.cmd) annotation(
    Line(points = {{-130, 1}, {-130, 22.5}, {-122, 22.5}, {-122, 22}}, color = {0, 0, 127}));
  connect(g3.y, cpu3.P_input) annotation(
    Line(points = {{42, 170}, {98, 170}}, color = {0, 0, 127}));
  connect(g2.y, cpu2.P_input) annotation(
    Line(points = {{12, 150}, {58, 150}}, color = {0, 0, 127}));
  connect(g1.y, cpu1.P_input) annotation(
    Line(points = {{-18, 130}, {18, 130}}, color = {0, 0, 127}));
  connect(PI_Twb1.CS, add3.u1) annotation(
    Line(points = {{-150, -46}, {-138, -46}, {-138, -22}}, color = {0, 0, 127}));
  connect(PI_Twb2.CS, add3.u2) annotation(
    Line(points = {{-150, -96}, {-130, -96}, {-130, -22}}, color = {0, 0, 127}));
  connect(PI_Twb3.CS, add3.u3) annotation(
    Line(points = {{-150, -146}, {-122, -146}, {-122, -22}}, color = {0, 0, 127}));
protected
  annotation(
    Diagram(coordinateSystem(extent = {{-300, -200}, {300, 200}})),
    experiment(StartTime = 0, StopTime = 14400, Tolerance = 1e-06, Interval = 4),
    __OpenModelica_commandLineOptions = "--matchingAlgorithm=PFPlusExt --indexReductionMethod=dynamicStateSelection -d=initialization,NLSanalyticJacobian",
    __OpenModelica_simulationFlags(lv = "LOG_STATS", s = "dassl", noEquidistantTimeGrid = "()", noEventEmit = "()", noRestart = "()", noRootFinding = "()"));
end Complex_cooling_circuit_with_controls;