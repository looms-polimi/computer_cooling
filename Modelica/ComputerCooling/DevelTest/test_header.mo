within ComputerCooling.DevelTest;

model test_header
  extends Icons.TestModel;
  
  ComputerCooling.HeatSources.HeatSource_0D heatSource_0D annotation(
    Placement(visible = true, transformation(origin = {-50, -30}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.RealExpression T(y = 273.15 + 30) annotation(
    Placement(visible = true, transformation(origin = {-140, -10}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  OnePhaseLiquidComponents.BoundaryConditions.BoundaryFixed_wT snk(w = -10) annotation(
    Placement(visible = true, transformation(origin = {90, 0}, extent = {{20, -20}, {-20, 20}}, rotation = 0)));
  Modelica.Blocks.Sources.RealExpression iPcpu(y = 12000 + 10000 * sin(0.1 * time)) annotation(
    Placement(visible = true, transformation(origin = {-90, -30}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.RealExpression p(y = 4e5) annotation(
    Placement(visible = true, transformation(origin = {-140, 10}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  OnePhaseLiquidComponents.FlowControl.PressureDrops.DpLinear_NominalPoint dp_exit(dp_nom = 98099.99999999999, w_nom = 0.1) annotation(
    Placement(visible = true, transformation(origin = {30, 0}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  ComputerCooling.OnePhaseLiquidComponents.Storage.Header header annotation(
    Placement(visible = true, transformation(origin = {-30, 0}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  ComputerCooling.OnePhaseLiquidComponents.BoundaryConditions.BoundaryPrescribed_pT src annotation(
    Placement(visible = true, transformation(origin = {-90, 0}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
equation
  connect(dp_exit.pwh_b, snk.pwh_a) annotation(
    Line(points = {{54, 0}, {66, 0}}));
  connect(iPcpu.y, heatSource_0D.P) annotation(
    Line(points = {{-79, -30}, {-62, -30}}, color = {0, 0, 127}));
  connect(header.pwh_b, dp_exit.pwh_a) annotation(
    Line(points = {{-6, 0}, {6, 0}}));
  connect(heatSource_0D.hp_ext, header.hp) annotation(
    Line(points = {{-50, -40}, {-30, -40}, {-30, -24}}, color = {191, 0, 0}));
  connect(p.y, src.p) annotation(
    Line(points = {{-128, 10}, {-124, 10}, {-124, 8}, {-114, 8}}, color = {0, 0, 127}));
  connect(T.y, src.T) annotation(
    Line(points = {{-128, -10}, {-124, -10}, {-124, -8}, {-114, -8}}, color = {0, 0, 127}));
  connect(src.pwh_a, header.pwh_a) annotation(
    Line(points = {{-66, 0}, {-54, 0}}));
end test_header;
