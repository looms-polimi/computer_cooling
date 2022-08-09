within ComputerCooling.Tutorial.T04_Application_examples;

model AE005_example_controlled_circuit_02
  ComputerCooling.IncompressibleLiquidComponents.FlowControl.Pumps.CentrifugalPump pump1(w_nom = 0.5 / 60)  annotation(
    Placement(visible = true, transformation(origin = {-32, 30}, extent = {{-10, 10}, {10, -10}}, rotation = 0)));
  ComputerCooling.HeatTransfer.BoundaryConditions.Prescribed_Power_2D_uniform cpu1(cols = 4, rows = 5)  annotation(
    Placement(visible = true, transformation(origin = {30, 110}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.RealExpression P1(y = 40 + 30 * sin(time / 7))  annotation(
    Placement(visible = true, transformation(origin = {-22, 110}, extent = {{-10, 10}, {10, -10}}, rotation = 0)));
  ComputerCooling.HeatTransfer.BoundaryConditions.Prescribed_Temperature_1D_uniform amb(R = 0.05)  annotation(
    Placement(visible = true, transformation(origin = {-190, 148}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.RealExpression Tamb(y = 293.15)  annotation(
    Placement(visible = true, transformation(origin = {-232, 148}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  ComputerCooling.IncompressibleLiquidComponents.Storage.VentedTank tank(H = 0.2, V = 0.001)  annotation(
    Placement(visible = true, transformation(origin = {168, 94}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  ComputerCooling.IncompressibleLiquidComponents.WaterBlocks.WaterBlock_GenericSection_uniform_w wb1 annotation(
    Placement(visible = true, transformation(origin = {50, 30}, extent = {{-10, 10}, {10, -10}}, rotation = 0)));
  ComputerCooling.IncompressibleLiquidComponents.Ducts.FluidStream.LiquidStream_FiniteVolume_GenericSection_uniform_w p1wb1(Ac = 0.003 ^ 2, L = 0.4, dp_nom = 25000, per = 4 * 0.003, w_nom = 0.5 / 60)  annotation(
    Placement(visible = true, transformation(origin = {10, 30}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  ComputerCooling.IncompressibleLiquidComponents.WaterBlocks.WaterBlock_GenericSection_uniform_w wb2 annotation(
    Placement(visible = true, transformation(origin = {90, 10}, extent = {{-10, 10}, {10, -10}}, rotation = 0)));
  ComputerCooling.IncompressibleLiquidComponents.WaterBlocks.WaterBlock_GenericSection_uniform_w wb3 annotation(
    Placement(visible = true, transformation(origin = {130, -10}, extent = {{-10, 10}, {10, -10}}, rotation = 0)));
  ComputerCooling.IncompressibleLiquidComponents.FlowControl.Pumps.CentrifugalPump pump2(w_nom = 0.5 / 60)  annotation(
    Placement(visible = true, transformation(origin = {-32, 10}, extent = {{-10, 10}, {10, -10}}, rotation = 0)));
  ComputerCooling.IncompressibleLiquidComponents.FlowControl.Pumps.CentrifugalPump pump3(w_nom = 0.5 / 60)  annotation(
    Placement(visible = true, transformation(origin = {-32, -10}, extent = {{-10, 10}, {10, -10}}, rotation = 0)));
  ComputerCooling.IncompressibleLiquidComponents.Ducts.FluidStream.LiquidStream_FiniteVolume_GenericSection_uniform_w p2wb2(Ac = 0.003 ^ 2, L = 0.4, dp_nom = 25000, per = 4 * 0.003, w_nom = 0.5 / 60) annotation(
    Placement(visible = true, transformation(origin = {10, 10}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  ComputerCooling.IncompressibleLiquidComponents.Ducts.FluidStream.LiquidStream_FiniteVolume_GenericSection_uniform_w p3wb3(Ac = 0.003 ^ 2, L = 0.4, dp_nom = 25000, per = 4 * 0.003, w_nom = 0.5 / 60) annotation(
    Placement(visible = true, transformation(origin = {10, -10}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  ComputerCooling.IncompressibleLiquidComponents.Ducts.FluidStream.LiquidStream_FiniteVolume_GenericSection_uniform_w duct123(Ac = 0.006 ^ 2, L = 2, dp_nom = 20000, n = 3, per = 4 * 0.006, w_nom = 1.5 / 60) annotation(
    Placement(visible = true, transformation(origin = {-92, 30}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  ComputerCooling.HeatTransfer.BoundaryConditions.Prescribed_Power_2D_uniform cpu2(cols = 4, rows = 5) annotation(
    Placement(visible = true, transformation(origin = {78, 130}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.RealExpression P2(y = 80 + 10 * sin(time / 5)) annotation(
    Placement(visible = true, transformation(origin = {-22, 130}, extent = {{-10, 10}, {10, -10}}, rotation = 0)));
  ComputerCooling.HeatTransfer.BoundaryConditions.Prescribed_Power_2D_uniform cpu3(cols = 4, rows = 5) annotation(
    Placement(visible = true, transformation(origin = {118, 150}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.RealExpression P3(y = 50 + 50 * sin(time / 3)) annotation(
    Placement(visible = true, transformation(origin = {-22, 150}, extent = {{-10, 10}, {10, -10}}, rotation = 0)));
  ComputerCooling.IncompressibleLiquidComponents.Ducts.Tube_1D_cylindrical_uniform_w radiator1(Dstream = 0.003, L = 5, dp_nom = 20000, fluidHeats = true, t = 0.0005, w_nom = 0.5 / 60)  annotation(
    Placement(visible = true, transformation(origin = {-150, 130}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  ComputerCooling.Sensors.TemperatureSensor_liquid sTwbo(unitCelsius = true)  annotation(
    Placement(visible = true, transformation(origin = {220, -92}, extent = {{-10, 10}, {10, -10}}, rotation = -90)));
  ComputerCooling.IncompressibleLiquidComponents.Ducts.Tube_1D_cylindrical_uniform_w radiator2(Dstream = 0.003, L = 5, dp_nom = 20000, fluidHeats = true, t = 0.0005, w_nom = 0.5 / 60) annotation(
    Placement(visible = true, transformation(origin = {-130, 110}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  ComputerCooling.IncompressibleLiquidComponents.Ducts.Tube_1D_cylindrical_uniform_w radiator3(Dstream = 0.003, L = 5, dp_nom = 20000, fluidHeats = true, t = 0.0005, w_nom = 0.5 / 60) annotation(
    Placement(visible = true, transformation(origin = {-110, 90}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  ComputerCooling.Sensors.TemperatureSensor_liquid sTro(unitCelsius = true) annotation(
    Placement(visible = true, transformation(origin = {-180, 66}, extent = {{-10, 10}, {10, -10}}, rotation = -90)));
  ComputerCooling.Sensors.TemperatureDifferenceSensor_liquid sDTwb3 annotation(
    Placement(visible = true, transformation(origin = {130, -40}, extent = {{10, 10}, {-10, -10}}, rotation = 0)));
  Modelica.Blocks.Sources.RealExpression spDTwb(y = 4) annotation(
    Placement(visible = true, transformation(origin = {-224, -48}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  ComputerCooling.ControlBlocks.AnalogueControllers.PI_awfb_full PI_DTwb3(CSmin = 0.05, CSstart = 0.5, K = -0.2, Ti = 1)  annotation(
    Placement(visible = true, transformation(origin = {-90, -140}, extent = {{-10, -20}, {10, 20}}, rotation = 0)));
  Modelica.Blocks.Sources.RealExpression cmd(y = min(1, if time < 30 then 0.25 else 0.25 + 0.75 * (time - 30)))  annotation(
    Placement(visible = true, transformation(origin = {-170, 2}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  ComputerCooling.IncompressibleLiquidComponents.Ducts.FluidStream.LiquidStream_FiniteVolume_GenericSection_uniform_w wb1t(Ac = 0.003 ^ 2, L = 0.4, dp_nom = 25000, per = 4 * 0.003, w_nom = 0.5 / 60) annotation(
    Placement(visible = true, transformation(origin = {170, 30}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  ComputerCooling.IncompressibleLiquidComponents.Ducts.FluidStream.LiquidStream_FiniteVolume_GenericSection_uniform_w wb3t(Ac = 0.003 ^ 2, L = 0.4, dp_nom = 25000, per = 4 * 0.003, w_nom = 0.5 / 60) annotation(
    Placement(visible = true, transformation(origin = {170, -10}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  ComputerCooling.IncompressibleLiquidComponents.Ducts.FluidStream.LiquidStream_FiniteVolume_GenericSection_uniform_w wb2t(Ac = 0.003 ^ 2, L = 0.4, dp_nom = 25000, per = 4 * 0.003, w_nom = 0.5 / 60) annotation(
    Placement(visible = true, transformation(origin = {170, 10}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  ComputerCooling.Sensors.TemperatureDifferenceSensor_liquid sDTwb2 annotation(
    Placement(visible = true, transformation(origin = {90, -40}, extent = {{10, 10}, {-10, -10}}, rotation = 0)));
  ComputerCooling.Sensors.TemperatureDifferenceSensor_liquid sDTwb1 annotation(
    Placement(visible = true, transformation(origin = {50, -40}, extent = {{10, 10}, {-10, -10}}, rotation = 0)));
  ComputerCooling.ControlBlocks.AnalogueControllers.PI_awfb_full PI_DTwb2(CSmin = 0.05, CSstart = 0.5, K = -0.2, Ti = 1) annotation(
    Placement(visible = true, transformation(origin = {-120, -100}, extent = {{-10, -20}, {10, 20}}, rotation = 0)));
  ComputerCooling.ControlBlocks.AnalogueControllers.PI_awfb_full PI_DTwb1(CSmin = 0.05, CSstart = 0.5, K = -0.2, Ti = 1) annotation(
    Placement(visible = true, transformation(origin = {-148, -62}, extent = {{-10, -20}, {10, 20}}, rotation = 0)));
equation
  connect(P1.y, cpu1.P_input) annotation(
    Line(points = {{-11, 110}, {18, 110}}, color = {0, 0, 127}));
  connect(Tamb.y, amb.T_input) annotation(
    Line(points = {{-221, 148}, {-202, 148}}, color = {0, 0, 127}));
  connect(duct123.pwh_b, pump1.pwh_a) annotation(
    Line(points = {{-80, 30}, {-44, 30}}));
  connect(duct123.pwh_b, pump2.pwh_a) annotation(
    Line(points = {{-80, 30}, {-62, 30}, {-62, 10}, {-44, 10}}));
  connect(pump1.pwh_b, p1wb1.pwh_a) annotation(
    Line(points = {{-20, 30}, {-2, 30}}));
  connect(pump2.pwh_b, p2wb2.pwh_a) annotation(
    Line(points = {{-20, 10}, {-2, 10}}));
  connect(pump3.pwh_b, p3wb3.pwh_a) annotation(
    Line(points = {{-20, -10}, {-2, -10}}));
  connect(P2.y, cpu2.P_input) annotation(
    Line(points = {{-11, 130}, {66, 130}}, color = {0, 0, 127}));
  connect(P3.y, cpu3.P_input) annotation(
    Line(points = {{-11, 150}, {106, 150}}, color = {0, 0, 127}));
  connect(duct123.pwh_b, pump3.pwh_a) annotation(
    Line(points = {{-80, 30}, {-62, 30}, {-62, -10}, {-44, -10}}));
  connect(amb.hp, radiator1.hp) annotation(
    Line(points = {{-178, 148}, {-150, 148}, {-150, 142}}, color = {191, 0, 0}));
  connect(amb.hp, radiator2.hp) annotation(
    Line(points = {{-178, 148}, {-130, 148}, {-130, 122}}, color = {191, 0, 0}));
  connect(amb.hp, radiator3.hp) annotation(
    Line(points = {{-178, 148}, {-110, 148}, {-110, 102}}, color = {191, 0, 0}));
  connect(radiator1.pwh_b, radiator2.pwh_b) annotation(
    Line(points = {{-162, 130}, {-180, 130}, {-180, 110}, {-142, 110}}));
  connect(radiator2.pwh_b, radiator3.pwh_b) annotation(
    Line(points = {{-142, 110}, {-180, 110}, {-180, 90}, {-122, 90}}));
  connect(radiator1.pwh_a, radiator2.pwh_a) annotation(
    Line(points = {{-138, 130}, {-80, 130}, {-80, 110}, {-118, 110}}));
  connect(radiator2.pwh_a, radiator3.pwh_a) annotation(
    Line(points = {{-118, 110}, {-80, 110}, {-80, 90}, {-98, 90}}));
  connect(radiator3.pwh_b, sTro.pwh) annotation(
    Line(points = {{-122, 90}, {-180, 90}, {-180, 78}}));
  connect(cpu1.hp, wb1.mHP) annotation(
    Line(points = {{42, 110}, {50, 110}, {50, 38}}, color = {191, 0, 0}));
  connect(cpu2.hp, wb2.mHP) annotation(
    Line(points = {{90, 130}, {90, 18}}, color = {191, 0, 0}));
  connect(cpu3.hp, wb3.mHP) annotation(
    Line(points = {{130, 150}, {130, -2}}, color = {191, 0, 0}));
  connect(wb3.pwh_a, sDTwb3.pwh_b) annotation(
    Line(points = {{118, -10}, {118, -40}}));
  connect(wb3.pwh_b, sDTwb3.pwh_a) annotation(
    Line(points = {{142, -10}, {142, -40}}));
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
  connect(radiator3.pwh_a, tank.pwh_a) annotation(
    Line(points = {{-98, 90}, {156, 90}, {156, 89}}));
  connect(tank.pwh_b, wb1t.pwh_b) annotation(
    Line(points = {{180, 88}, {198, 88}, {198, 30}, {182, 30}}));
  connect(tank.pwh_b, wb2t.pwh_b) annotation(
    Line(points = {{180, 88}, {198, 88}, {198, 10}, {182, 10}}));
  connect(tank.pwh_b, wb3t.pwh_b) annotation(
    Line(points = {{180, 88}, {198, 88}, {198, -10}, {182, -10}}));
  connect(duct123.pwh_a, radiator3.pwh_b) annotation(
    Line(points = {{-104, 30}, {-220, 30}, {-220, 90}, {-122, 90}}));
  connect(wb3t.pwh_b, sTwbo.pwh) annotation(
    Line(points = {{182, -10}, {220, -10}, {220, -80}}));
  connect(wb1.pwh_a, sDTwb1.pwh_b) annotation(
    Line(points = {{38, 30}, {38, -40}}));
  connect(wb1.pwh_b, sDTwb1.pwh_a) annotation(
    Line(points = {{62, 30}, {62, -40}}));
  connect(wb2.pwh_a, sDTwb2.pwh_b) annotation(
    Line(points = {{78, 10}, {78, -40}}));
  connect(wb2.pwh_b, sDTwb2.pwh_a) annotation(
    Line(points = {{102, 10}, {102, -40}}));
  connect(PI_DTwb1.CS, pump1.cmd) annotation(
    Line(points = {{-138, -48}, {-100, -48}, {-100, 22}, {-44, 22}}, color = {0, 0, 127}));
  connect(PI_DTwb2.CS, pump2.cmd) annotation(
    Line(points = {{-110, -86}, {-80, -86}, {-80, 2}, {-44, 2}}, color = {0, 0, 127}));
  connect(PI_DTwb3.CS, pump3.cmd) annotation(
    Line(points = {{-80, -126}, {-60, -126}, {-60, -18}, {-44, -18}}, color = {0, 0, 127}));
  connect(PI_DTwb3.PV, sDTwb3.out) annotation(
    Line(points = {{-100, -130}, {-110, -130}, {-110, -170}, {130, -170}, {130, -52}}, color = {0, 0, 127}));
  connect(PI_DTwb2.PV, sDTwb2.out) annotation(
    Line(points = {{-130, -90}, {-140, -90}, {-140, -174}, {90, -174}, {90, -52}}, color = {0, 0, 127}));
  connect(PI_DTwb1.PV, sDTwb1.out) annotation(
    Line(points = {{-158, -52}, {-168, -52}, {-168, -178}, {50, -178}, {50, -52}}, color = {0, 0, 127}));
  connect(PI_DTwb1.SP, spDTwb.y) annotation(
    Line(points = {{-158, -48}, {-212, -48}}, color = {0, 0, 127}));
  connect(spDTwb.y, PI_DTwb2.SP) annotation(
    Line(points = {{-212, -48}, {-180, -48}, {-180, -86}, {-130, -86}}, color = {0, 0, 127}));
  connect(spDTwb.y, PI_DTwb3.SP) annotation(
    Line(points = {{-212, -48}, {-180, -48}, {-180, -126}, {-100, -126}}, color = {0, 0, 127}));
protected
  annotation(
    Diagram(coordinateSystem(extent = {{-300, -200}, {300, 200}})),
    experiment(StartTime = 0, StopTime = 60, Tolerance = 1e-6, Interval = 0.12),
    __OpenModelica_commandLineOptions = "--matchingAlgorithm=PFPlusExt --indexReductionMethod=dynamicStateSelection -d=initialization,NLSanalyticJacobian",
    __OpenModelica_simulationFlags(lv = "LOG_STATS", s = "dassl"));
end AE005_example_controlled_circuit_02;