within ComputerCooling.DevelTest;

model test_coolingCircuit_powerInput
  extends Icons.TestModel;
  ComputerCooling.HeatSources.Prescribed_Power_1D_uniform heatSource_processor(n = 5) annotation(
    Placement(visible = true, transformation(origin = {20, -20}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  IncompressibleLiquidComponents.Transfer.Ducts.Tube_1D tube_hot(L = 0.1, dp_nom(displayUnit = "bar") = 100, n = 5) annotation(
    Placement(visible = true, transformation(origin = {60, -60}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  Modelica.Blocks.Sources.RealExpression power(y = 400) annotation(
    Placement(visible = true, transformation(origin = {-30, -20}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  IncompressibleLiquidComponents.Transfer.Ducts.Tube_1D tube_cold(dp_nom = 100, fluidHeats = true, n = 5) annotation(
    Placement(visible = true, transformation(origin = {60, 60}, extent = {{20, 20}, {-20, -20}}, rotation = 0)));
  ComputerCooling.HeatSources.Prescribed_Temperature_1D_uniform heatSource_cooling(n = 5) annotation(
    Placement(visible = true, transformation(origin = {20, 20}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  Modelica.Blocks.Sources.RealExpression temp(y = 273.15 + 20) annotation(
    Placement(visible = true, transformation(origin = {-30, 20}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  IncompressibleLiquidComponents.FlowControl.Pumps.CentrifugalPump pump(dp_nom = 399999.9999999999) annotation(
    Placement(visible = true, transformation(origin = {-40, -60}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  IncompressibleLiquidComponents.Storage.Header tank annotation(
    Placement(visible = true, transformation(origin = {-40, 60}, extent = {{20, -20}, {-20, 20}}, rotation = 0)));
  Modelica.Blocks.Sources.RealExpression cmd(y = 1) annotation(
    Placement(visible = true, transformation(origin = {-84, -44}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
equation
  connect(pump.pwh_b, tube_hot.pwh_a) annotation(
    Line(points = {{-16, -60}, {36, -60}}));
  connect(tube_cold.pwh_b, tank.pwh_a) annotation(
    Line(points = {{36, 60}, {-16, 60}}));
  connect(cmd.y, pump.cmd) annotation(
    Line(points = {{-73, -44}, {-64, -44}}, color = {0, 0, 127}));
  connect(heatSource_cooling.hp, tube_cold.hp) annotation(
    Line(points = {{44, 20}, {60, 20}, {60, 36}}));
  connect(heatSource_processor.hp, tube_hot.hp) annotation(
    Line(points = {{44, -20}, {60, -20}, {60, -36}}));
  connect(tube_hot.pwh_b, tube_cold.pwh_a) annotation(
    Line(points = {{84, -60}, {100, -60}, {100, 60}, {84, 60}}));
  connect(temp.y, heatSource_cooling.T_input) annotation(
    Line(points = {{-19, 20}, {-4, 20}}, color = {0, 0, 127}));
  connect(tank.pwh_b, pump.pwh_a) annotation(
    Line(points = {{-64, 60}, {-100, 60}, {-100, -60}, {-64, -60}}));
  connect(power.y, heatSource_processor.P_input) annotation(
    Line(points = {{-18, -20}, {-4, -20}}, color = {0, 0, 127}));
end test_coolingCircuit_powerInput;