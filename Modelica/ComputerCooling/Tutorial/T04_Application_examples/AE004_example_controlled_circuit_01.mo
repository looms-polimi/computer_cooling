within ComputerCooling.Tutorial.T04_Application_examples;

model AE004_example_controlled_circuit_01
  ComputerCooling.IncompressibleLiquidComponents.FlowControl.Pumps.CentrifugalPump pump1(w_nom = 0.5 / 60)  annotation(
    Placement(visible = true, transformation(origin = {-130, 30}, extent = {{-10, 10}, {10, -10}}, rotation = 0)));
  ComputerCooling.HeatSources.HeatSource_Power_2D_uniform cpu1(cols = 4, rows = 5)  annotation(
    Placement(visible = true, transformation(origin = {90, -40}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.RealExpression P1(y = 100)  annotation(
    Placement(visible = true, transformation(origin = {42, -40}, extent = {{-10, 10}, {10, -10}}, rotation = 0)));
  ComputerCooling.HeatSources.HeatSource_Temperature_1D amb(R = 0.05)  annotation(
    Placement(visible = true, transformation(origin = {-190, 148}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.RealExpression Tamb(y = 293.15)  annotation(
    Placement(visible = true, transformation(origin = {-232, 148}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  ComputerCooling.IncompressibleLiquidComponents.Storage.VentedTank tank(H = 0.2, V = 0.001)  annotation(
    Placement(visible = true, transformation(origin = {-232, 34}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  ComputerCooling.IncompressibleLiquidComponents.Transfer.WaterBlock_GenericSection_uniform_w wb1 annotation(
    Placement(visible = true, transformation(origin = {110, 30}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  ComputerCooling.IncompressibleLiquidComponents.Transfer.Ducts.LiquidStream_FiniteVolume_GenericSection_uniform_w duct1(Ac = 0.003 ^ 2, L = 1, dp_nom = 49999.99999999999, per = 4 * 0.003, w_nom = 0.5 / 60)  annotation(
    Placement(visible = true, transformation(origin = {-90, 30}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.RealExpression realExpression(y = 0.5) annotation(
    Placement(visible = true, transformation(origin = {-244, -42}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  ComputerCooling.IncompressibleLiquidComponents.Transfer.WaterBlock_GenericSection_uniform_w wb2 annotation(
    Placement(visible = true, transformation(origin = {150, 10}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  ComputerCooling.IncompressibleLiquidComponents.Transfer.WaterBlock_GenericSection_uniform_w wb3 annotation(
    Placement(visible = true, transformation(origin = {190, -10}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  ComputerCooling.IncompressibleLiquidComponents.FlowControl.Pumps.CentrifugalPump pump2(w_nom = 0.5 / 60)  annotation(
    Placement(visible = true, transformation(origin = {-130, 10}, extent = {{-10, 10}, {10, -10}}, rotation = 0)));
  ComputerCooling.IncompressibleLiquidComponents.FlowControl.Pumps.CentrifugalPump pump3(w_nom = 0.5 / 60)  annotation(
    Placement(visible = true, transformation(origin = {-130, -10}, extent = {{-10, 10}, {10, -10}}, rotation = 0)));
  ComputerCooling.IncompressibleLiquidComponents.Transfer.Ducts.LiquidStream_FiniteVolume_GenericSection_uniform_w duct2(Ac = 0.003 ^ 2, L = 1, dp_nom = 49999.99999999999, per = 4 * 0.003, w_nom = 0.5 / 60) annotation(
    Placement(visible = true, transformation(origin = {-90, 10}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  ComputerCooling.IncompressibleLiquidComponents.Transfer.Ducts.LiquidStream_FiniteVolume_GenericSection_uniform_w duct3(Ac = 0.003 ^ 2, L = 1, dp_nom = 49999.99999999999, per = 4 * 0.003, w_nom = 0.5 / 60) annotation(
    Placement(visible = true, transformation(origin = {-90, -10}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  ComputerCooling.IncompressibleLiquidComponents.Transfer.Ducts.LiquidStream_FiniteVolume_GenericSection_uniform_w duct123(Ac = 0.006 ^ 2, L = 2, dp_nom = 20000, n = 3, per = 4 * 0.006, w_nom = 1.5 / 60) annotation(
    Placement(visible = true, transformation(origin = {-190, 30}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  ComputerCooling.HeatSources.HeatSource_Power_2D_uniform cpu2(cols = 4, rows = 5) annotation(
    Placement(visible = true, transformation(origin = {130, -50}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.RealExpression P2(y = 100) annotation(
    Placement(visible = true, transformation(origin = {62, -50}, extent = {{-10, 10}, {10, -10}}, rotation = 0)));
  ComputerCooling.HeatSources.HeatSource_Power_2D_uniform cpu3(cols = 4, rows = 5) annotation(
    Placement(visible = true, transformation(origin = {170, -60}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.RealExpression P3(y = 100) annotation(
    Placement(visible = true, transformation(origin = {82, -60}, extent = {{-10, 10}, {10, -10}}, rotation = 0)));
  ComputerCooling.IncompressibleLiquidComponents.Transfer.Ducts.Tube_1D_cylindrical_uniform_w radiator1(Dstream = 0.003, L = 5, dp_nom = 20000, fluidHeats = true, t = 0.0005, w_nom = 0.5 / 60)  annotation(
    Placement(visible = true, transformation(origin = {-150, 130}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  ComputerCooling.Sensors.TemperatureSensor_liquid sTwbo(unitCelsius = true)  annotation(
    Placement(visible = true, transformation(origin = {220, -92}, extent = {{-10, 10}, {10, -10}}, rotation = -90)));
  ComputerCooling.IncompressibleLiquidComponents.Transfer.Ducts.Tube_1D_cylindrical_uniform_w radiator2(Dstream = 0.003, L = 5, dp_nom = 20000, fluidHeats = true, t = 0.0005, w_nom = 0.5 / 60) annotation(
    Placement(visible = true, transformation(origin = {-130, 110}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  ComputerCooling.IncompressibleLiquidComponents.Transfer.Ducts.Tube_1D_cylindrical_uniform_w radiator3(Dstream = 0.003, L = 5, dp_nom = 20000, fluidHeats = true, t = 0.0005, w_nom = 0.5 / 60) annotation(
    Placement(visible = true, transformation(origin = {-110, 90}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  ComputerCooling.Sensors.TemperatureSensor_liquid sTro(unitCelsius = true) annotation(
    Placement(visible = true, transformation(origin = {-180, 66}, extent = {{-10, 10}, {10, -10}}, rotation = -90)));
equation
  connect(P1.y, cpu1.P_input) annotation(
    Line(points = {{53, -40}, {78, -40}}, color = {0, 0, 127}));
  connect(Tamb.y, amb.T_input) annotation(
    Line(points = {{-221, 148}, {-202, 148}}, color = {0, 0, 127}));
  connect(duct123.pwh_b, pump1.pwh_a) annotation(
    Line(points = {{-178, 30}, {-142, 30}}));
  connect(duct123.pwh_b, pump2.pwh_a) annotation(
    Line(points = {{-178, 30}, {-160, 30}, {-160, 10}, {-142, 10}}));
  connect(pump1.pwh_b, duct1.pwh_a) annotation(
    Line(points = {{-118, 30}, {-102, 30}}));
  connect(duct1.pwh_b, wb1.pwh_a) annotation(
    Line(points = {{-78, 30}, {98, 30}}));
  connect(pump2.pwh_b, duct2.pwh_a) annotation(
    Line(points = {{-118, 10}, {-102, 10}}));
  connect(duct2.pwh_b, wb2.pwh_a) annotation(
    Line(points = {{-78, 10}, {138, 10}}));
  connect(pump3.pwh_b, duct3.pwh_a) annotation(
    Line(points = {{-118, -10}, {-102, -10}}));
  connect(duct3.pwh_b, wb3.pwh_a) annotation(
    Line(points = {{-78, -10}, {178, -10}}));
  connect(P2.y, cpu2.P_input) annotation(
    Line(points = {{73, -50}, {118, -50}}, color = {0, 0, 127}));
  connect(P3.y, cpu3.P_input) annotation(
    Line(points = {{93, -60}, {158, -60}}, color = {0, 0, 127}));
  connect(cpu1.hp, wb1.mHP) annotation(
    Line(points = {{102, -40}, {110, -40}, {110, 22}}, color = {191, 0, 0}));
  connect(cpu2.hp, wb2.mHP) annotation(
    Line(points = {{142, -50}, {150, -50}, {150, 2}}, color = {191, 0, 0}));
  connect(cpu3.hp, wb3.mHP) annotation(
    Line(points = {{182, -60}, {190, -60}, {190, -18}}, color = {191, 0, 0}));
  connect(wb1.pwh_b, wb2.pwh_b) annotation(
    Line(points = {{122, 30}, {220, 30}, {220, 10}, {162, 10}}));
  connect(wb2.pwh_b, wb3.pwh_b) annotation(
    Line(points = {{162, 10}, {220, 10}, {220, -10}, {202, -10}}));
  connect(tank.pwh_b, duct123.pwh_a) annotation(
    Line(points = {{-220, 28.8}, {-202, 28.8}, {-202, 30.8}}));
  connect(realExpression.y, pump1.cmd) annotation(
    Line(points = {{-233, -42}, {-191, -42}, {-191, 22}, {-143, 22}}, color = {0, 0, 127}));
  connect(realExpression.y, pump2.cmd) annotation(
    Line(points = {{-233, -42}, {-191, -42}, {-191, 2}, {-143, 2}}, color = {0, 0, 127}));
  connect(realExpression.y, pump3.cmd) annotation(
    Line(points = {{-233, -42}, {-191, -42}, {-191, -18}, {-143, -18}}, color = {0, 0, 127}));
  connect(duct123.pwh_b, pump3.pwh_a) annotation(
    Line(points = {{-178, 30}, {-160, 30}, {-160, -10}, {-142, -10}}));
  connect(amb.hp, radiator1.hp) annotation(
    Line(points = {{-178, 148}, {-150, 148}, {-150, 142}}, color = {191, 0, 0}));
  connect(wb3.pwh_b, sTwbo.pwh) annotation(
    Line(points = {{202, -10}, {220, -10}, {220, -80}}));
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
  connect(radiator3.pwh_a, wb1.pwh_b) annotation(
    Line(points = {{-98, 90}, {220, 90}, {220, 30}, {122, 30}}));
  connect(radiator3.pwh_b, tank.pwh_a) annotation(
    Line(points = {{-122, 90}, {-260, 90}, {-260, 30}, {-244, 30}}));
  connect(radiator3.pwh_b, sTro.pwh) annotation(
    Line(points = {{-122, 90}, {-180, 90}, {-180, 78}}));
  protected
  annotation(
    Diagram(coordinateSystem(extent = {{-300, -200}, {300, 200}})),
    experiment(StartTime = 0, StopTime = 1000, Tolerance = 1e-6, Interval = 2),
    __OpenModelica_commandLineOptions = "--matchingAlgorithm=PFPlusExt --indexReductionMethod=dynamicStateSelection -d=initialization,NLSanalyticJacobian",
    __OpenModelica_simulationFlags(lv = "LOG_STATS", s = "ida"));
end AE004_example_controlled_circuit_01;