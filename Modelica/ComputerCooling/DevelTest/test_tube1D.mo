within ComputerCooling.DevelTest;

model test_tube1D
  extends Icons.TestModel;
  OnePhaseLiquidComponents.BoundaryConditions.BoundaryFixed_pT snk(p(displayUnit = "bar") = 99999.99999999999) annotation(
    Placement(visible = true, transformation(origin = {80, 0}, extent = {{20, -20}, {-20, 20}}, rotation = 0)));
  HeatSources.HeatSource_Power heatSrc(n = 5) annotation(
    Placement(visible = true, transformation(origin = {-30, 50}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  OnePhaseLiquidComponents.BoundaryConditions.BoundaryFixed_pT src(p = 110000)  annotation(
    Placement(visible = true, transformation(origin = {-80, 0}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  OnePhaseLiquidComponents.Transfer.Ducts.Tube_1D tube_1D(n = 5) annotation(
    Placement(visible = true, transformation(origin = {0, 0}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  Modelica.Blocks.Sources.RealExpression iPh(y = 100 * (1 + 100 * sin(0.1 * time))) annotation(
    Placement(visible = true, transformation(origin = {-70, 50}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  ComputerCooling.Sensors.TemperatureSensor_liquid temperatureSensor_liquid annotation(
    Placement(visible = true, transformation(origin = {50, -50}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Utilities.Recorder recorder(Ndata = 1, Ts = 0.2)  annotation(
    Placement(visible = true, transformation(origin = {90, -50}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
equation
  connect(src.pwh_a, tube_1D.pwh_a) annotation(
    Line(points = {{-56, 0}, {-24, 0}}));
  connect(iPh.y, heatSrc.P) annotation(
    Line(points = {{-58, 50}, {-42, 50}}, color = {0, 0, 127}));
  connect(tube_1D.pwh_b, snk.pwh_a) annotation(
    Line(points = {{24, 0}, {56, 0}}));
  connect(heatSrc.hp, tube_1D.hp) annotation(
    Line(points = {{-18, 50}, {0, 50}, {0, 24}}));
  connect(tube_1D.pwh_b, temperatureSensor_liquid.pwh) annotation(
    Line(points = {{24, 0}, {32, 0}, {32, -50}, {38, -50}}));
  connect(temperatureSensor_liquid.out, recorder.data[1]) annotation(
    Line(points = {{62, -50}, {78, -50}}, color = {0, 0, 127}));
end test_tube1D;