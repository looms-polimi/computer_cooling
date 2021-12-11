within ComputerCooling.Tutorial.T00_Introduction_to_EBM.EBM_multiphysics_examples;

model Electrical_thermal_MSL
  extends ComputerCooling.Icons.TutorialModel;
  Modelica.Electrical.Analog.Basic.HeatingResistor R(R_ref = 0.02, useHeatPort = true) annotation(
    Placement(visible = true, transformation(origin = {-58, 10}, extent = {{-10, 10}, {10, -10}}, rotation = -90)));
  Modelica.Electrical.Analog.Basic.Ground gnd annotation(
    Placement(visible = true, transformation(origin = {-58, -30}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Electrical.Analog.Basic.Capacitor C(C = 100e-9) annotation(
    Placement(visible = true, transformation(origin = {-88, 10}, extent = {{-10, -10}, {10, 10}}, rotation = -90)));
  Modelica.Electrical.Analog.Basic.Inductor L(L = 2e-6) annotation(
    Placement(visible = true, transformation(origin = {-108, 30}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Electrical.Analog.Sources.SignalVoltage VG annotation(
    Placement(visible = true, transformation(origin = {-128, 10}, extent = {{-10, 10}, {10, -10}}, rotation = -90)));
  Modelica.Thermal.HeatTransfer.Components.HeatCapacitor HC1(C = 1e-6, T(displayUnit = "K")) annotation(
    Placement(visible = true, transformation(origin = {-8, 40}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Thermal.HeatTransfer.Components.HeatCapacitor HC2(C = 0.1, T(displayUnit = "K")) annotation(
    Placement(visible = true, transformation(origin = {32, 40}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Thermal.HeatTransfer.Components.HeatCapacitor HC3(C = 50, T(displayUnit = "K")) annotation(
    Placement(visible = true, transformation(origin = {72, 40}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Thermal.HeatTransfer.Components.ThermalConductor G12(G = 50) annotation(
    Placement(visible = true, transformation(origin = {12, 10}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Thermal.HeatTransfer.Components.ThermalConductor G23(G = 4) annotation(
    Placement(visible = true, transformation(origin = {52, 10}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Thermal.HeatTransfer.Components.ConvectiveResistor G3e annotation(
    Placement(visible = true, transformation(origin = {92, 10}, extent = {{-10, 10}, {10, -10}}, rotation = 0)));
  Modelica.Thermal.HeatTransfer.Sources.PrescribedTemperature E annotation(
    Placement(visible = true, transformation(origin = {132, 10}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.RealExpression V(y = 1.2 + 0.15 * sign(sin(20 * time))) annotation(
    Placement(visible = true, transformation(origin = {-170, 10}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.RealExpression Gconv(y = if time > 100 and time < 200 then 1 / 2 else 1 / 3) annotation(
    Placement(visible = true, transformation(origin = {72, -32}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.RealExpression Te(y = 273.15 + 25) annotation(
    Placement(visible = true, transformation(origin = {170, 10}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
equation
  connect(L.n, C.p) annotation(
    Line(points = {{-98, 30}, {-88, 30}, {-88, 20}}, color = {0, 0, 255}));
  connect(L.n, R.p) annotation(
    Line(points = {{-98, 30}, {-58, 30}, {-58, 20}}, color = {0, 0, 255}));
  connect(R.n, gnd.p) annotation(
    Line(points = {{-58, 0}, {-58, -20}}, color = {0, 0, 255}));
  connect(C.n, gnd.p) annotation(
    Line(points = {{-88, 0}, {-88, -10}, {-58, -10}, {-58, -20}}, color = {0, 0, 255}));
  connect(VG.p, L.p) annotation(
    Line(points = {{-128, 20}, {-128, 30}, {-118, 30}}, color = {0, 0, 255}));
  connect(VG.n, gnd.p) annotation(
    Line(points = {{-128, 0}, {-128, -10}, {-58, -10}, {-58, -20}}, color = {0, 0, 255}));
  connect(G12.port_b, G23.port_a) annotation(
    Line(points = {{22, 10}, {42, 10}}, color = {191, 0, 0}));
  connect(G23.port_b, G3e.solid) annotation(
    Line(points = {{62, 10}, {82, 10}}, color = {191, 0, 0}));
  connect(G3e.fluid, E.port) annotation(
    Line(points = {{102, 10}, {122, 10}}, color = {191, 0, 0}));
  connect(V.y, VG.v) annotation(
    Line(points = {{-159, 10}, {-141, 10}}, color = {0, 0, 127}));
  connect(Gconv.y, G3e.Rc) annotation(
    Line(points = {{83, -32}, {91, -32}, {91, 0}}, color = {0, 0, 127}));
  connect(E.T, Te.y) annotation(
    Line(points = {{144, 10}, {160, 10}}, color = {0, 0, 127}));
  connect(R.heatPort, G12.port_a) annotation(
    Line(points = {{-48, 10}, {2, 10}}, color = {191, 0, 0}));
  connect(R.heatPort, HC1.port) annotation(
    Line(points = {{-48, 10}, {-8, 10}, {-8, 30}}, color = {191, 0, 0}));
  connect(G12.port_b, HC2.port) annotation(
    Line(points = {{22, 10}, {32, 10}, {32, 30}}, color = {191, 0, 0}));
  connect(G23.port_b, HC3.port) annotation(
    Line(points = {{62, 10}, {72, 10}, {72, 30}}, color = {191, 0, 0}));
  annotation(
    Diagram(coordinateSystem(extent = {{-200, -100}, {200, 100}}), graphics = {Rectangle(origin = {-114, 15}, lineColor = {115, 210, 22}, pattern = LinePattern.Dash, lineThickness = 0.5, extent = {{-74, 55}, {74, -55}}), Rectangle(origin = {80, 15}, lineColor = {245, 121, 0}, pattern = LinePattern.Dash, lineThickness = 0.5, extent = {{-110, 55}, {110, -55}}), Text(origin = {-137, 70}, lineColor = {115, 210, 22}, extent = {{53, 0}, {-53, 16}}, textString = "Electrical part"), Text(origin = {11, 70}, lineColor = {245, 121, 0}, extent = {{43, 0}, {-43, 16}}, textString = "Thermal part"), Text(origin = {136, 82}, extent = {{-54, 4}, {54, -4}}, textString = "Thermal capacitors"), Text(origin = {-76, -84}, extent = {{-60, 4}, {60, -4}}, textString = "Constant thermal conductors"), Text(origin = {125, -84}, extent = {{-85, 4}, {85, -4}}, textString = "Time-varying ambient temperature"), Line(origin = {16.22, -31.63}, points = {{-14.2185, 25.6336}, {-86.2185, -46.3664}, {25.7815, 27.6336}}, arrow = {Arrow.Filled, Arrow.Filled}, arrowSize = 6), Line(origin = {115, -25}, points = {{65, -53}, {25, 21}}, arrow = {Arrow.None, Arrow.Filled}, arrowSize = 6), Text(origin = {-140, -54}, extent = {{-66, 4}, {66, -4}}, textString = "Time-varying supply voltage"), Line(origin = {125, -15}, points = {{-279, -33}, {-261, 15}}, arrow = {Arrow.None, Arrow.Filled}, arrowSize = 6), Text(origin = {66, -60}, extent = {{-82, 4}, {82, -4}}, textString = "Time-varying (convective) conductor"), Line(origin = {125, -14.5092}, points = {{-13, -39}, {-25, 7}}, arrow = {Arrow.None, Arrow.Filled}, arrowSize = 6), Line(origin = {39.66, 63.82}, points = {{-35.6565, -17.8188}, {60.3435, 14.1812}, {2.3435, -17.8188}}, arrow = {Arrow.Filled, Arrow.Filled}, arrowSize = 6), Line(origin = {138.677, -13.5054}, points = {{-39, 91}, {-57, 61}}, arrow = {Arrow.None, Arrow.Filled}, arrowSize = 6)}),
    experiment(StartTime = 0, StopTime = 300, Tolerance = 1e-6, Interval = 0.03),
    __OpenModelica_commandLineOptions = "--matchingAlgorithm=PFPlusExt --indexReductionMethod=dynamicStateSelection -d=initialization,NLSanalyticJacobian",
    __OpenModelica_simulationFlags(lv = "LOG_STATS", s = "dassl"));
end Electrical_thermal_MSL;