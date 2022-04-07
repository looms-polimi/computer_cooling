within ComputerCooling.DevelTest;

model test_VentedTank
  extends Icons.TestModel;
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
    Placement(visible = true, transformation(origin = {-90, -50}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  ComputerCooling.OnePhaseLiquidComponents.Storage.VentedTank ventedTank annotation(
    Placement(visible = true, transformation(origin = {-30, 10}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  ComputerCooling.HeatSources.HeatSource_Power heatSource_Power(n = 1)  annotation(
    Placement(visible = true, transformation(origin = {-50, -50}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
equation
  connect(w.y, src.w) annotation(
    Line(points = {{-129, 10}, {-125, 10}, {-125, 8}, {-115, 8}}, color = {0, 0, 127}));
  connect(T.y, src.T) annotation(
    Line(points = {{-129, -10}, {-125, -10}, {-125, -8}, {-115, -8}}, color = {0, 0, 127}));
  connect(dp_exit.pwh_b, snk.pwh_a) annotation(
    Line(points = {{54, 0}, {66, 0}}));
  connect(src.pwh_a, ventedTank.pwh_a) annotation(
    Line(points = {{-66, 0}, {-54, 0}}));
  connect(ventedTank.pwh_b, dp_exit.pwh_a) annotation(
    Line(points = {{-6, 0}, {6, 0}}));
  connect(heatSource_Power.hp, ventedTank.hp) annotation(
    Line(points = {{-38, -50}, {-30, -50}, {-30, -10}}));
  connect(iPcpu.y, heatSource_Power.P) annotation(
    Line(points = {{-78, -50}, {-62, -50}}, color = {0, 0, 127}));
protected
  annotation(
    experiment(StartTime = 0, StopTime = 100, Tolerance = 1e-6, Interval = 0.2),
    __OpenModelica_commandLineOptions = "--matchingAlgorithm=PFPlusExt --indexReductionMethod=dynamicStateSelection -d=initialization,NLSanalyticJacobian",
    __OpenModelica_simulationFlags(lv = "LOG_STATS", s = "dassl"));
end test_VentedTank;
