within ComputerCooling.DevelTest;

model test_fan_Axial
  extends Icons.TestModel;
  
  ComputerCooling.MoistAirComponents.BoundaryConditions.BoundaryFixed_pTphi src(p = 499999.9999999999)  annotation(
    Placement(visible = true, transformation(origin = {-120, 0}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  ComputerCooling.MoistAirComponents.BoundaryConditions.BoundaryFixed_pTphi snk(p(displayUnit = "bar") = 49999.99999999999)  annotation(
    Placement(visible = true, transformation(origin = {120, 0}, extent = {{20, -20}, {-20, 20}}, rotation = 0)));
  ComputerCooling.MoistAirComponents.FlowControl.Fans.Axial axial annotation(
    Placement(visible = true, transformation(origin = {-60, 0}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  Modelica.Blocks.Sources.RealExpression cmd(y = 0.5 + 0.4 * sin(0.1 * time)) annotation(
    Placement(visible = true, transformation(origin = {-110, 30}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  ComputerCooling.MoistAirComponents.Volumes.Tank tank annotation(
    Placement(visible = true, transformation(origin = {0, 0}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  ComputerCooling.MoistAirComponents.FlowControl.PressureDrops.DpLinear_NominalPoint dpLinear_NominalPoint annotation(
    Placement(visible = true, transformation(origin = {60, 0}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  Modelica.Blocks.Sources.RealExpression iPh(y = 2500 + 1000 * time * sin(time)) annotation(
    Placement(visible = true, transformation(origin = {-70, -50}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  ComputerCooling.HeatSources.Prescribed_Power_1D_uniform heatSource_Power(n = 1)  annotation(
    Placement(visible = true, transformation(origin = {-30, -50}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
equation
  connect(cmd.y, axial.cmd01) annotation(
    Line(points = {{-99, 30}, {-93, 30}, {-93, 16}, {-85, 16}}, color = {0, 0, 127}));
  connect(src.pwhx_a, axial.pwhx_a) annotation(
    Line(points = {{-100, 0}, {-84, 0}}));
  connect(axial.pwhx_b, tank.pwhx_a) annotation(
    Line(points = {{-36, 0}, {-24, 0}}));
  connect(tank.pwhx_b, dpLinear_NominalPoint.pwhx_a) annotation(
    Line(points = {{24, 0}, {36, 0}}));
  connect(dpLinear_NominalPoint.pwhx_b, snk.pwhx_a) annotation(
    Line(points = {{84, 0}, {100, 0}}));
  connect(heatSource_Power.hp, tank.hp) annotation(
    Line(points = {{-18, -50}, {0, -50}, {0, -16}}));
  connect(iPh.y, heatSource_Power.P_input) annotation(
    Line(points = {{-58, -50}, {-42, -50}}, color = {0, 0, 127}));
protected
end test_fan_Axial;