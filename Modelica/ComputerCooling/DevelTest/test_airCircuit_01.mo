within ComputerCooling.DevelTest;

model test_airCircuit_01
  extends Icons.TestModel;
  
  ComputerCooling.MoistAirComponents.FlowControl.PressureDrops.DpLinear_NominalPoint dpLinear_NominalPoint annotation(
    Placement(visible = true, transformation(origin = {54, 0}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  ComputerCooling.MoistAirComponents.BoundaryConditions.BoundaryFixed_wTphi snk(w = -0.1)   annotation(
    Placement(visible = true, transformation(origin = {120, 0}, extent = {{20, -20}, {-20, 20}}, rotation = 0)));
  Modelica.Blocks.Sources.RealExpression T(y = 273.15 + 20) annotation(
    Placement(visible = true, transformation(origin = {-130, 0}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  ComputerCooling.MoistAirComponents.BoundaryConditions.BoundaryPrescribed_pTphi src annotation(
    Placement(visible = true, transformation(origin = {-74, 0}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  Modelica.Blocks.Sources.RealExpression phi(y = 0.05) annotation(
    Placement(visible = true, transformation(origin = {-130, -30}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.RealExpression p(y = 1e5) annotation(
    Placement(visible = true, transformation(origin = {-130, 30}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.RealExpression iPcpu(y = 1000 * (1 + sin(time)))  annotation(
    Placement(visible = true, transformation(origin = {-90, -50}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  ComputerCooling.HeatTransfer.BoundaryConditions.Prescribed_Power_0D prescribed_Power_0D annotation(
    Placement(visible = true, transformation(origin = {-52, -52}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  ComputerCooling.IncompressibleLiquidComponents.Storage.Header header annotation(
    Placement(visible = true, transformation(origin = {-11, -1}, extent = {{-19, -19}, {19, 19}}, rotation = 0)));
equation
  connect(dpLinear_NominalPoint.pwhx_b, snk.pwhx_a) annotation(
    Line(points = {{78, 0}, {100, 0}}));
  connect(T.y, src.T) annotation(
    Line(points = {{-118, 0}, {-98, 0}}, color = {0, 0, 127}));
  connect(phi.y, src.phi) annotation(
    Line(points = {{-118, -30}, {-114, -30}, {-114, -8}, {-98, -8}}, color = {0, 0, 127}));
  connect(p.y, src.p) annotation(
    Line(points = {{-118, 30}, {-114, 30}, {-114, 8}, {-98, 8}}, color = {0, 0, 127}));
  connect(iPcpu.y, prescribed_Power_0D.P_input) annotation(
    Line(points = {{-78, -50}, {-70, -50}, {-70, -52}, {-64, -52}}, color = {0, 0, 127}));
  connect(src.pwhx_a, header.pwh_a) annotation(
    Line(points = {{-54, 0}, {-34, 0}, {-34, -1}}));
  connect(header.pwh_b, dpLinear_NominalPoint.pwhx_a) annotation(
    Line(points = {{12, -1}, {21, -1}, {21, 0}, {30, 0}}));
  connect(header.hp, prescribed_Power_0D.hp) annotation(
    Line(points = {{-10, -12}, {-40, -12}, {-40, -52}}, color = {191, 0, 0}));
  annotation(
    experiment(StartTime = 0, StopTime = 1000, Tolerance = 1e-6, Interval = 2),
    __OpenModelica_commandLineOptions = "--matchingAlgorithm=PFPlusExt --indexReductionMethod=dynamicStateSelection -d=initialization,NLSanalyticJacobian",
    __OpenModelica_simulationFlags(lv = "LOG_STATS", s = "dassl"));
end test_airCircuit_01;