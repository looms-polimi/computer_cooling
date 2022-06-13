within ComputerCooling.DevelTest;

model test_streamLiquid
  extends Icons.TestModel;
  ComputerCooling.OnePhaseLiquidComponents.BoundaryConditions.BoundaryFixed_pT boundaryFixed_pT(p(displayUnit = "bar") = 110000) annotation(
    Placement(visible = true, transformation(origin = {-80, 0}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  ComputerCooling.OnePhaseLiquidComponents.BoundaryConditions.BoundaryFixed_wT snk(w = -0.1)  annotation(
    Placement(visible = true, transformation(origin = {71, -1}, extent = {{-19, -19}, {19, 19}}, rotation = 180)));
  Modelica.Blocks.Sources.RealExpression iPcpu(y = 273.15 + 30 + 5 * sin(0.1 * time)) annotation(
    Placement(visible = true, transformation(origin = {-72, -48}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  ComputerCooling.OnePhaseLiquidComponents.Transfer.Ducts.LiquidStream_FiniteVolume_Cylindrical liquidStream_FiniteVolume_Cylindrical annotation(
    Placement(visible = true, transformation(origin = {-7, -1}, extent = {{-21, -21}, {21, 21}}, rotation = 0)));
  HeatSources.Prescribed_Temperature_1D_uniform prescribed_Temperature_1D_uniform annotation(
    Placement(visible = true, transformation(origin = {-34, -46}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
equation
  connect(liquidStream_FiniteVolume_Cylindrical.pwh_b, snk.pwh_a) annotation(
    Line(points = {{18, -2}, {48, -2}, {48, 0}}));
  connect(liquidStream_FiniteVolume_Cylindrical.pwh_a, boundaryFixed_pT.pwh_a) annotation(
    Line(points = {{-32, -2}, {-56, -2}, {-56, 0}}));
  connect(prescribed_Temperature_1D_uniform.hp, liquidStream_FiniteVolume_Cylindrical.hp) annotation(
    Line(points = {{-22, -46}, {-6, -46}, {-6, -14}}, color = {191, 0, 0}));
  connect(iPcpu.y, prescribed_Temperature_1D_uniform.T_input) annotation(
    Line(points = {{-60, -48}, {-46, -48}, {-46, -46}}, color = {0, 0, 127}));
protected
  annotation(
    experiment(StartTime = 0, StopTime = 100000, Tolerance = 1e-6, Interval = 200),
    __OpenModelica_commandLineOptions = "--matchingAlgorithm=PFPlusExt --indexReductionMethod=dynamicStateSelection -d=initialization,NLSanalyticJacobian",
    __OpenModelica_simulationFlags(lv = "LOG_STATS", s = "dassl"));
end test_streamLiquid;