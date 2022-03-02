within ComputerCooling.DevelTest;

model test_VentedTank
  extends Icons.TestModel;
  
  ComputerCooling.OnePhaseLiquidComponents.Storage.VentedTank ventedTank(H = 1, V = 0.1, lstart = 0.5) annotation(
    Placement(visible = true, transformation(origin = {-30, 10}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  ComputerCooling.OnePhaseLiquidComponents.BoundaryConditions.BoundaryPrescribed_wT src annotation(
    Placement(visible = true, transformation(origin = {-90, 0}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  Modelica.Blocks.Sources.RealExpression w(y = 12) annotation(
    Placement(visible = true, transformation(origin = {-140, 10}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.RealExpression T(y = 273.15 + 30) annotation(
    Placement(visible = true, transformation(origin = {-140, -10}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  ComputerCooling.OnePhaseLiquidComponents.FlowControl.PressureDrops.DpLinear_NominalPoint dp_exit(dp_nom = 98099.99999999999, w_nom = 0.1) annotation(
    Placement(visible = true, transformation(origin = {30, 0}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  ComputerCooling.OnePhaseLiquidComponents.BoundaryConditions.BoundaryFixed_wT snk(w = -11)  annotation(
    Placement(visible = true, transformation(origin = {90, 0}, extent = {{20, -20}, {-20, 20}}, rotation = 0)));
  Modelica.Blocks.Sources.RealExpression iPcpu(y = 12000 + 10000 * sin(0.1 * time)) annotation(
    Placement(visible = true, transformation(origin = {-70, -50}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  ComputerCooling.HeatSources.HeatSource_0D heatSource_0D annotation(
    Placement(visible = true, transformation(origin = {-30, -50}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
equation
  connect(ventedTank.pwh_b, dp_exit.pwh_a) annotation(
    Line(points = {{-6, -0.4}, {-6, -0.9}, {6, -0.9}, {6, -0.4}}));
  connect(src.pwh_a, ventedTank.pwh_a) annotation(
    Line(points = {{-66, -5.32908e-16}, {-54, -5.32908e-16}}));
  connect(w.y, src.w) annotation(
    Line(points = {{-129, 10}, {-125, 10}, {-125, 8}, {-115, 8}}, color = {0, 0, 127}));
  connect(T.y, src.T) annotation(
    Line(points = {{-129, -10}, {-125, -10}, {-125, -8}, {-115, -8}}, color = {0, 0, 127}));
  connect(dp_exit.pwh_b, snk.pwh_a) annotation(
    Line(points = {{54, 0}, {66, 0}}));
  connect(iPcpu.y, heatSource_0D.P) annotation(
    Line(points = {{-58, -50}, {-42, -50}}, color = {0, 0, 127}));
  connect(heatSource_0D.hp_ext, ventedTank.hp) annotation(
    Line(points = {{-30, -38}, {-30, -14}}, color = {191, 0, 0}));
protected
end test_VentedTank;
