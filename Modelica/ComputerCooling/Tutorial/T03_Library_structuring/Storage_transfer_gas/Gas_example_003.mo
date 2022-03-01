within ComputerCooling.Tutorial.T03_Library_structuring.Storage_transfer_gas;

model Gas_example_003
  extends Icons.TutorialModel;
  ComputerCooling.IdealGasComponents.IdealgasNode_wT src annotation(
    Placement(visible = true, transformation(origin = {-150, -30}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  ComputerCooling.IdealGasComponents.IdealGasPdropQ dpi1 annotation(
    Placement(visible = true, transformation(origin = {-120, -30}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  ComputerCooling.IdealGasComponents.IdealgasNode_pT snk annotation(
    Placement(visible = true, transformation(origin = {150, -30}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.RealExpression wi(y = 0.001 * sign(sin(time / 100)))  annotation(
    Placement(visible = true, transformation(origin = {-180, -20}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.RealExpression Ti(y = 303.15)  annotation(
    Placement(visible = true, transformation(origin = {-180, -40}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.RealExpression po(y = 101325)  annotation(
    Placement(visible = true, transformation(origin = {180, -20}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.RealExpression To(y = 293.15)  annotation(
    Placement(visible = true, transformation(origin = {180, -42}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  ComputerCooling.IdealGasComponents.IdealGasVolume V1(V = 0.02)  annotation(
    Placement(visible = true, transformation(origin = {-90, -30}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  ComputerCooling.IdealGasComponents.IdealGasPdropQ dp4o annotation(
    Placement(visible = true, transformation(origin = {120, -30}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Thermal.HeatTransfer.Components.ThermalConductor Ge1(G = 1)  annotation(
    Placement(visible = true, transformation(origin = {-90, 10}, extent = {{10, -10}, {-10, 10}}, rotation = 90)));
  Modelica.Thermal.HeatTransfer.Sources.FixedTemperature Te(T = 298.15)  annotation(
    Placement(visible = true, transformation(origin = {-150, 50}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  ComputerCooling.IdealGasComponents.IdealGasPdropQ dp12 annotation(
    Placement(visible = true, transformation(origin = {-60, -30}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  ComputerCooling.IdealGasComponents.IdealGasVolume V2(V = 0.02) annotation(
    Placement(visible = true, transformation(origin = {-30, -30}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  ComputerCooling.IdealGasComponents.IdealGasVolume V3(V = 0.02) annotation(
    Placement(visible = true, transformation(origin = {30, -30}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  ComputerCooling.IdealGasComponents.IdealGasPdropQ dp23 annotation(
    Placement(visible = true, transformation(origin = {0, -30}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  ComputerCooling.IdealGasComponents.IdealGasPdropQ dp34 annotation(
    Placement(visible = true, transformation(origin = {60, -30}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  ComputerCooling.IdealGasComponents.IdealGasVolume V4(V = 0.02) annotation(
    Placement(visible = true, transformation(origin = {90, -30}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Thermal.HeatTransfer.Components.ThermalConductor Ge2(G = 1) annotation(
    Placement(visible = true, transformation(origin = {-30, 10}, extent = {{10, -10}, {-10, 10}}, rotation = 90)));
  Modelica.Thermal.HeatTransfer.Components.ThermalConductor Ge3(G = 1) annotation(
    Placement(visible = true, transformation(origin = {30, 10}, extent = {{10, -10}, {-10, 10}}, rotation = 90)));
  Modelica.Thermal.HeatTransfer.Components.ThermalConductor Ge4(G = 1) annotation(
    Placement(visible = true, transformation(origin = {90, 10}, extent = {{10, -10}, {-10, 10}}, rotation = 90)));
equation
  connect(wi.y, src.w) annotation(
    Line(points = {{-169, -20}, {-165, -20}, {-165, -26}, {-158, -26}}, color = {0, 0, 127}));
  connect(Ti.y, src.T) annotation(
    Line(points = {{-169, -40}, {-165, -40}, {-165, -34}, {-158, -34}}, color = {0, 0, 127}));
  connect(po.y, snk.p) annotation(
    Line(points = {{169, -20}, {164, -20}, {164, -26}, {158, -26}}, color = {0, 0, 127}));
  connect(To.y, snk.T) annotation(
    Line(points = {{169, -42}, {164, -42}, {164, -34}, {158, -34}}, color = {0, 0, 127}));
  connect(src.pwh_a, dpi1.pwh_a) annotation(
    Line(points = {{-138, -30}, {-132, -30}}));
  connect(dpi1.pwh_b, V1.pwh_a) annotation(
    Line(points = {{-108, -30}, {-102, -30}}));
  connect(dp4o.pwh_b, snk.pwh_a) annotation(
    Line(points = {{132, -30}, {138, -30}}));
  connect(V1.pwh_b, dp12.pwh_a) annotation(
    Line(points = {{-78, -30}, {-72, -30}}));
  connect(dp12.pwh_b, V2.pwh_a) annotation(
    Line(points = {{-48, -30}, {-42, -30}}));
  connect(V2.pwh_b, dp23.pwh_a) annotation(
    Line(points = {{-18, -30}, {-12, -30}}));
  connect(dp23.pwh_b, V3.pwh_a) annotation(
    Line(points = {{12, -30}, {18, -30}}));
  connect(V3.pwh_b, dp34.pwh_a) annotation(
    Line(points = {{42, -30}, {48, -30}}));
  connect(dp34.pwh_b, V4.pwh_a) annotation(
    Line(points = {{72, -30}, {78, -30}}));
  connect(V4.pwh_b, dp4o.pwh_a) annotation(
    Line(points = {{102, -30}, {108, -30}}));
  connect(Ge1.port_b, V1.hp) annotation(
    Line(points = {{-90, 0}, {-90, -20}}, color = {191, 0, 0}));
  connect(Ge2.port_b, V2.hp) annotation(
    Line(points = {{-30, 0}, {-30, -20}}, color = {191, 0, 0}));
  connect(Ge3.port_b, V3.hp) annotation(
    Line(points = {{30, 0}, {30, -20}}, color = {191, 0, 0}));
  connect(Ge4.port_b, V4.hp) annotation(
    Line(points = {{90, 0}, {90, -20}}, color = {191, 0, 0}));
  connect(Te.port, Ge1.port_a) annotation(
    Line(points = {{-140, 50}, {-90, 50}, {-90, 20}}, color = {191, 0, 0}));
  connect(Te.port, Ge2.port_a) annotation(
    Line(points = {{-140, 50}, {-30, 50}, {-30, 20}}, color = {191, 0, 0}));
  connect(Te.port, Ge3.port_a) annotation(
    Line(points = {{-140, 50}, {30, 50}, {30, 20}}, color = {191, 0, 0}));
  connect(Te.port, Ge4.port_a) annotation(
    Line(points = {{-140, 50}, {90, 50}, {90, 20}}, color = {191, 0, 0}));
  annotation(
    Diagram(coordinateSystem(extent = {{-200, -100}, {200, 100}})),
    experiment(StartTime = 0, StopTime = 2000, Tolerance = 1e-6, Interval = 4),
    __OpenModelica_commandLineOptions = "--matchingAlgorithm=PFPlusExt --indexReductionMethod=dynamicStateSelection -d=initialization,NLSanalyticJacobian",
    __OpenModelica_simulationFlags(lv = "LOG_STATS", s = "dassl"));
end Gas_example_003;
