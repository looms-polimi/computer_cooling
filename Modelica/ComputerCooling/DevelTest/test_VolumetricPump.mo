within ComputerCooling.DevelTest;

model test_VolumetricPump
  extends Icons.TestModel;
  
  ComputerCooling.OnePhaseLiquidComponents.FlowControl.PressureDrops.DpLinear_NominalPoint dp_upstream(w_nom = 0.1) annotation(
    Placement(visible = true, transformation(origin = {-60, 0}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  Modelica.Blocks.Sources.RealExpression cmd(y = 1 + sin(0.1 * time)) annotation(
    Placement(visible = true, transformation(origin = {-50, 30}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  ComputerCooling.OnePhaseLiquidComponents.BoundaryConditions.BoundaryFixed_pT src(p = 499999.9999999999) annotation(
    Placement(visible = true, transformation(origin = {-120, 0}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  ComputerCooling.OnePhaseLiquidComponents.FlowControl.PressureDrops.DpLinear_NominalPoint dp_downstream(w_nom = 0.1) annotation(
    Placement(visible = true, transformation(origin = {60, 0}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  ComputerCooling.OnePhaseLiquidComponents.FlowControl.Pumps.VolumetricPump volumetricPump(w_nom = 0.1)  annotation(
    Placement(visible = true, transformation(origin = {0, 0}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  ComputerCooling.OnePhaseLiquidComponents.BoundaryConditions.BoundaryFixed_pT snk(p(displayUnit = "Pa") = -5)  annotation(
    Placement(visible = true, transformation(origin = {120, 0}, extent = {{20, -20}, {-20, 20}}, rotation = 0)));
equation
  connect(src.pwh_a, dp_upstream.pwh_a) annotation(
    Line(points = {{-96, -5.32908e-16}, {-84, -5.32908e-16}}));
  connect(dp_upstream.pwh_b, volumetricPump.pwh_a) annotation(
    Line(points = {{-36, 0}, {-24, 0}}));
  connect(volumetricPump.pwh_b, dp_downstream.pwh_a) annotation(
    Line(points = {{24, 0}, {36, 0}}));
  connect(cmd.y, volumetricPump.cmd) annotation(
    Line(points = {{-38, 30}, {-34, 30}, {-34, 16}, {-24, 16}}, color = {0, 0, 127}));
  connect(dp_downstream.pwh_b, snk.pwh_a) annotation(
    Line(points = {{84, 0}, {96, 0}}));
end test_VolumetricPump;
