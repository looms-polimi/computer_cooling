within ComputerCooling.DevelTest;

model test_dp_header_liq
  extends Icons.TestModel;
  
  ComputerCooling.IncompressibleLiquidComponents.FlowControl.PressureDrops.DpQuadratic_NominalPoint dp1(dp_nom = 49999.99999999999, w_nom = 1) annotation(
    Placement(visible = true, transformation(origin = {-60, 0}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  ComputerCooling.IncompressibleLiquidComponents.BoundaryConditions.BoundaryPrescribed_pT src annotation(
    Placement(visible = true, transformation(origin = {-122, 0}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  Modelica.Blocks.Sources.RealExpression ip(y = 2e5) annotation(
    Placement(visible = true, transformation(origin = {-192, 28}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.RealExpression iT(y = 273.15 + 25) annotation(
    Placement(visible = true, transformation(origin = {-198, -10}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  ComputerCooling.IncompressibleLiquidComponents.FlowControl.PressureDrops.DpQuadratic_NominalPoint dp2(dp_nom = 49999.99999999999, w_nom = 1) annotation(
    Placement(visible = true, transformation(origin = {60, 0}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  ComputerCooling.IncompressibleLiquidComponents.BoundaryConditions.BoundaryFixed_wT snk(w = -0.1)  annotation(
    Placement(visible = true, transformation(origin = {120, 0}, extent = {{20, -20}, {-20, 20}}, rotation = 0)));
  Modelica.Blocks.Sources.RealExpression iPh(y = 2500 + 500 * sin(time)) annotation(
    Placement(visible = true, transformation(origin = {-70, -30}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  ComputerCooling.HeatTransfer.BoundaryConditions.Prescribed_Power_0D prescribed_Power_0D annotation(
    Placement(visible = true, transformation(origin = {-32, -30}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  ComputerCooling.IncompressibleLiquidComponents.Storage.Header header annotation(
    Placement(visible = true, transformation(origin = {-1, -1}, extent = {{-17, -17}, {17, 17}}, rotation = 0)));
equation
  connect(src.pwh_a, dp1.pwh_a) annotation(
    Line(points = {{-98, -5.32908e-16}, {-84, -5.32908e-16}}));
  connect(ip.y, src.p) annotation(
    Line(points = {{-181, 28}, {-165, 28}, {-165, 8}, {-146, 8}}, color = {0, 0, 127}));
  connect(iT.y, src.T) annotation(
    Line(points = {{-187, -10}, {-171, -10}, {-171, -8}, {-146, -8}}, color = {0, 0, 127}));
  connect(dp2.pwh_b, snk.pwh_a) annotation(
    Line(points = {{84, 0}, {96, 0}}));
  connect(iPh.y, prescribed_Power_0D.P_input) annotation(
    Line(points = {{-58, -30}, {-44, -30}}, color = {0, 0, 127}));
  connect(dp1.pwh_b, header.pwh_a) annotation(
    Line(points = {{-36, 0}, {-30, 0}, {-30, -1}, {-21, -1}}));
  connect(header.pwh_b, dp2.pwh_a) annotation(
    Line(points = {{19, -1}, {36, -1}, {36, 0}}));
  connect(prescribed_Power_0D.hp, header.hp) annotation(
    Line(points = {{-20, -30}, {-1, -30}, {-1, -11}}, color = {191, 0, 0}));
  annotation(
    experiment(StartTime = 0, StopTime = 10000, Tolerance = 1e-6, Interval = 20),
    __OpenModelica_commandLineOptions = "--matchingAlgorithm=PFPlusExt --indexReductionMethod=dynamicStateSelection -d=initialization,NLSanalyticJacobian",
    __OpenModelica_simulationFlags(lv = "LOG_STATS", s = "dassl"));
end test_dp_header_liq;