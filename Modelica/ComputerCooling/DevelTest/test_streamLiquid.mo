within ComputerCooling.DevelTest;

model test_streamLiquid
  extends Icons.TestModel;
  ComputerCooling.IncompressibleLiquidComponents.BoundaryConditions.BoundaryFixed_pT boundaryFixed_pT(p(displayUnit = "bar") = 110000) annotation(
    Placement(visible = true, transformation(origin = {-80, 0}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  ComputerCooling.IncompressibleLiquidComponents.BoundaryConditions.BoundaryFixed_wT snk(w = -0.1)  annotation(
    Placement(visible = true, transformation(origin = {71, -1}, extent = {{-19, -19}, {19, 19}}, rotation = 180)));
  Modelica.Blocks.Sources.RealExpression iPcpu(y = 273.15 + 30 + 5 * sin(0.1 * time)) annotation(
    Placement(visible = true, transformation(origin = {-68, 60}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  ComputerCooling.HeatTransfer.BoundaryConditions.Prescribed_Temperature_1D_uniform prescribed_Temperature_1D_uniform annotation(
    Placement(visible = true, transformation(origin = {-26, 60}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  ComputerCooling.IncompressibleLiquidComponents.Ducts.LiquidStream_FiniteVolume_Cylindrical liquidStream_FiniteVolume_Cylindrical annotation(
    Placement(visible = true, transformation(origin = {-6, 4}, extent = {{-22, -22}, {22, 22}}, rotation = 0)));
equation
  connect(iPcpu.y, prescribed_Temperature_1D_uniform.T_input) annotation(
    Line(points = {{-57, 60}, {-39, 60}}, color = {0, 0, 127}));
  connect(prescribed_Temperature_1D_uniform.hp, liquidStream_FiniteVolume_Cylindrical.surf) annotation(
    Line(points = {{-14, 60}, {-6, 60}, {-6, 26}}, color = {191, 0, 0}));
  connect(boundaryFixed_pT.pwh_a, liquidStream_FiniteVolume_Cylindrical.pwh_a) annotation(
    Line(points = {{-56, 0}, {-32, 0}}));
  connect(liquidStream_FiniteVolume_Cylindrical.pwh_b, snk.pwh_a) annotation(
    Line(points = {{20, 0}, {48, 0}}));
protected
  annotation(
    experiment(StartTime = 0, StopTime = 100000, Tolerance = 1e-6, Interval = 200),
    __OpenModelica_commandLineOptions = "--matchingAlgorithm=PFPlusExt --indexReductionMethod=dynamicStateSelection -d=initialization,NLSanalyticJacobian",
    __OpenModelica_simulationFlags(lv = "LOG_STATS", s = "dassl"));
end test_streamLiquid;