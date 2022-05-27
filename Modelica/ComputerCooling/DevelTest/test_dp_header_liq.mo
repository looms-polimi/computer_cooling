within ComputerCooling.DevelTest;

model test_dp_header_liq
  extends Icons.TestModel;
  
  ComputerCooling.OnePhaseLiquidComponents.FlowControl.PressureDrops.DpQuadratic_NominalPoint dp1(dp_nom = 49999.99999999999, w_nom = 1) annotation(
    Placement(visible = true, transformation(origin = {-60, 0}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  ComputerCooling.OnePhaseLiquidComponents.BoundaryConditions.BoundaryPrescribed_pT src annotation(
    Placement(visible = true, transformation(origin = {-122, 0}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  Modelica.Blocks.Sources.RealExpression ip(y = 2e5) annotation(
    Placement(visible = true, transformation(origin = {-192, 28}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.RealExpression iT(y = 273.15 + 25) annotation(
    Placement(visible = true, transformation(origin = {-198, -10}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  ComputerCooling.OnePhaseLiquidComponents.FlowControl.PressureDrops.DpQuadratic_NominalPoint dp2(dp_nom = 49999.99999999999, w_nom = 1) annotation(
    Placement(visible = true, transformation(origin = {60, 0}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  ComputerCooling.OnePhaseLiquidComponents.Storage.Header h(TStart = 273.15 + 20) annotation(
    Placement(visible = true, transformation(origin = {0, 0}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  ComputerCooling.OnePhaseLiquidComponents.BoundaryConditions.BoundaryFixed_wT snk(w = -0.1)  annotation(
    Placement(visible = true, transformation(origin = {120, 0}, extent = {{20, -20}, {-20, 20}}, rotation = 0)));
  Modelica.Blocks.Sources.RealExpression iPh(y = 2500 + 500 * sin(time)) annotation(
    Placement(visible = true, transformation(origin = {-70, -30}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  ComputerCooling.HeatSources.HeatSource_Power_0D heatSource_Power_0D annotation(
    Placement(visible = true, transformation(origin = {-30, -30}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
equation
  connect(src.pwh_a, dp1.pwh_a) annotation(
    Line(points = {{-98, -5.32908e-16}, {-84, -5.32908e-16}}));
  connect(ip.y, src.p) annotation(
    Line(points = {{-181, 28}, {-165, 28}, {-165, 8}, {-146, 8}}, color = {0, 0, 127}));
  connect(iT.y, src.T) annotation(
    Line(points = {{-187, -10}, {-171, -10}, {-171, -8}, {-146, -8}}, color = {0, 0, 127}));
  connect(dp1.pwh_b, h.pwh_a) annotation(
    Line(points = {{-36, 0}, {-24, 0}}));
  connect(h.pwh_b, dp2.pwh_a) annotation(
    Line(points = {{24, 0}, {36, 0}}));
  connect(dp2.pwh_b, snk.pwh_a) annotation(
    Line(points = {{84, 0}, {96, 0}}));
  connect(iPh.y, heatSource_Power_0D.P_input) annotation(
    Line(points = {{-58, -30}, {-42, -30}}, color = {0, 0, 127}));
  connect(heatSource_Power_0D.hp, h.hp) annotation(
    Line(points = {{-18, -30}, {0, -30}, {0, -12}}, color = {191, 0, 0}));
  annotation(
    experiment(StartTime = 0, StopTime = 10000, Tolerance = 1e-6, Interval = 20),
    __OpenModelica_commandLineOptions = "--matchingAlgorithm=PFPlusExt --indexReductionMethod=dynamicStateSelection -d=initialization,NLSanalyticJacobian",
    __OpenModelica_simulationFlags(lv = "LOG_STATS", s = "dassl"));
end test_dp_header_liq;