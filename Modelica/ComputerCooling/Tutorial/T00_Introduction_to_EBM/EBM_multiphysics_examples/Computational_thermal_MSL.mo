within ComputerCooling.Tutorial.T00_Introduction_to_EBM.EBM_multiphysics_examples;

model Computational_thermal_MSL
  extends ComputerCooling.Icons.TutorialModel;
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
  Modelica.Blocks.Sources.RealExpression voltage(y = 1.1 + 0.25 * (frequency.y - 8e5) / (2.4e6 - 8e5)) annotation(
    Placement(visible = true, transformation(origin = {-170, 10}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.RealExpression Gconv(y = if time > 100 and time < 200 then 1 / 2 else 1 / 3) annotation(
    Placement(visible = true, transformation(origin = {72, -32}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.RealExpression Te(y = 273.15 + 25) annotation(
    Placement(visible = true, transformation(origin = {170, 10}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.RealExpression utilisation(y = max(0, min(1, 0.5 + 0.2 * sin(0.1 * time) + 0.25 * sign(sin(time)) + 0.15 * sin(57 * time))))  annotation(
    Placement(visible = true, transformation(origin = {-170, 50}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.RealExpression frequency(y = 8e5 + (2.4e6 - 8e5) * utilisation.y) annotation(
    Placement(visible = true, transformation(origin = {-170, -20}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Math.Gain C(k = 20e-6)  annotation(
    Placement(visible = true, transformation(origin = {-130, -20}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Math.Product V2 annotation(
    Placement(visible = true, transformation(origin = {-130, 10}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Math.MultiProduct Cv2fu(nu = 3) annotation(
    Placement(visible = true, transformation(origin = {-90, 10}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Thermal.HeatTransfer.Sources.PrescribedHeatFlow P annotation(
    Placement(visible = true, transformation(origin = {-58, 10}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
equation
  connect(G12.port_b, G23.port_a) annotation(
    Line(points = {{22, 10}, {42, 10}}, color = {191, 0, 0}));
  connect(G23.port_b, G3e.solid) annotation(
    Line(points = {{62, 10}, {82, 10}}, color = {191, 0, 0}));
  connect(G3e.fluid, E.port) annotation(
    Line(points = {{102, 10}, {122, 10}}, color = {191, 0, 0}));
  connect(Gconv.y, G3e.Rc) annotation(
    Line(points = {{83, -32}, {92, -32}, {92, 0}}, color = {0, 0, 127}));
  connect(E.T, Te.y) annotation(
    Line(points = {{144, 10}, {160, 10}}, color = {0, 0, 127}));
  connect(G12.port_b, HC2.port) annotation(
    Line(points = {{22, 10}, {32, 10}, {32, 30}}, color = {191, 0, 0}));
  connect(G23.port_b, HC3.port) annotation(
    Line(points = {{62, 10}, {72, 10}, {72, 30}}, color = {191, 0, 0}));
  connect(voltage.y, V2.u1) annotation(
    Line(points = {{-158, 10}, {-150, 10}, {-150, 16}, {-142, 16}}, color = {0, 0, 127}));
  connect(voltage.y, V2.u2) annotation(
    Line(points = {{-158, 10}, {-150, 10}, {-150, 4}, {-142, 4}}, color = {0, 0, 127}));
  connect(frequency.y, C.u) annotation(
    Line(points = {{-158, -20}, {-142, -20}}, color = {0, 0, 127}));
  connect(utilisation.y, Cv2fu.u[1]) annotation(
    Line(points = {{-158, 50}, {-110, 50}, {-110, 10}, {-100, 10}}, color = {0, 0, 127}));
  connect(V2.y, Cv2fu.u[2]) annotation(
    Line(points = {{-118, 10}, {-100, 10}}, color = {0, 0, 127}));
  connect(C.y, Cv2fu.u[3]) annotation(
    Line(points = {{-118, -20}, {-110, -20}, {-110, 10}, {-100, 10}}, color = {0, 0, 127}));
  connect(Cv2fu.y, P.Q_flow) annotation(
    Line(points = {{-78, 10}, {-68, 10}}, color = {0, 0, 127}));
  connect(P.port, G12.port_a) annotation(
    Line(points = {{-48, 10}, {2, 10}}, color = {191, 0, 0}));
  connect(P.port, HC1.port) annotation(
    Line(points = {{-48, 10}, {-8, 10}, {-8, 30}}, color = {191, 0, 0}));
  annotation(
    Diagram(coordinateSystem(extent = {{-200, -100}, {200, 100}}), graphics = {Rectangle(origin = {-114, 15}, lineColor = {115, 210, 22}, pattern = LinePattern.Dash, lineThickness = 0.5, extent = {{-74, 55}, {74, -55}}), Rectangle(origin = {80, 15}, lineColor = {245, 121, 0}, pattern = LinePattern.Dash, lineThickness = 0.5, extent = {{-110, 55}, {110, -55}}), Text(origin = {-125, 60}, lineColor = {115, 210, 22}, extent = {{65, 0}, {-65, 36}}, textString = "Computational part"), Text(origin = {11, 70}, lineColor = {245, 121, 0}, extent = {{43, 0}, {-43, 16}}, textString = "Thermal part"), Text(origin = {56, -57}, extent = {{-86, 27}, {86, -27}}, textString = "Minimalistic 3-capacities model:\nactive Si, bulk substrate, spreader+sink", horizontalAlignment = TextAlignment.Left), Text(origin = {174, -84}, extent = {{-60, 8}, {60, -8}}, textString = "Time-varying\nambient temperature", horizontalAlignment = TextAlignment.Left), Line(origin = {115, -25}, points = {{61, -55}, {25, 21}}, arrow = {Arrow.None, Arrow.Filled}, arrowSize = 6), Text(origin = {-114, -73}, extent = {{-78, 15}, {78, -15}}, textString = "Minimalistic governor:\nfrequency proportional to utilisation,\nvoltage proportional to frequency", horizontalAlignment = TextAlignment.Left), Text(origin = {-83, -52}, extent = {{-37, 4}, {37, -4}}, textString = "P=C*f^2*V*u"), Line(origin = {135, -4.5092}, points = {{-219, -41}, {-209, 5}}, arrow = {Arrow.None, Arrow.Filled}, arrowSize = 6), Line(origin = {116.436, -55.9422}, points = {{-271, 1}, {-267, 25}}, arrow = {Arrow.None, Arrow.Filled}, arrowSize = 6), Line(origin = {115, -25}, points = {{61, -55}, {25, 21}}, arrow = {Arrow.None, Arrow.Filled}, arrowSize = 6), Line(origin = {125, -15}, points = {{-107, -33}, {-97, 9}}, arrow = {Arrow.None, Arrow.Filled}, arrowSize = 6)}),
    experiment(StartTime = 0, StopTime = 300, Tolerance = 1e-06, Interval = 0.01),
    __OpenModelica_commandLineOptions = "--matchingAlgorithm=PFPlusExt --indexReductionMethod=dynamicStateSelection -d=initialization,NLSanalyticJacobian",
    __OpenModelica_simulationFlags(lv = "LOG_STATS", s = "dassl"));
end Computational_thermal_MSL;