within ComputerCooling.Tutorial.T03_Library_structuring;

model foo
  ComputerCooling.OnePhaseLiquidCircuits.Transfer.Ducts.LiquidStream_1D LS1D_comp(redeclare model medium = Media.SubCooledWater_Bulk_VolExp, n = 5) annotation(
    Placement(visible = true, transformation(origin = {10, 30}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  ComputerCooling.OnePhaseLiquidCircuits.BoundaryConditions.BoundaryPrescribed_pT src_comp annotation(
    Placement(visible = true, transformation(origin = {-30, 30}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  ComputerCooling.OnePhaseLiquidCircuits.BoundaryConditions.BoundaryFixed_pT snk_comp annotation(
    Placement(visible = true, transformation(origin = {52, 30}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.RealExpression pi(y = 101325 + 5000 * sin(time / 20))  annotation(
    Placement(visible = true, transformation(origin = {-70, 50}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.RealExpression Ti(y = 273.15 + 20)  annotation(
    Placement(visible = true, transformation(origin = {-72, 10}, extent = {{-10, 10}, {10, -10}}, rotation = 0)));
  AES.ProcessComponents.Thermal.Liquid.surfTcond_fixed Tsurf(T = 313.15)  annotation(
    Placement(visible = true, transformation(origin = {10, 70}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
equation
  connect(LS1D_comp.pwh_b, snk_comp.pwh_a) annotation(
    Line(points = {{22, 30}, {40, 30}}));
  connect(src_comp.pwh_a, LS1D_comp.pwh_a) annotation(
    Line(points = {{-18, 30}, {-2, 30}}));
  connect(Tsurf.surf, LS1D_comp.surf) annotation(
    Line(points = {{10, 61.3333}, {10, 37.3333}}, color = {144, 5, 5}));
  connect(Ti.y, src_comp.T) annotation(
    Line(points = {{-60, 10}, {-52, 10}, {-52, 26}, {-36, 26}}, color = {0, 0, 127}));
  connect(pi.y, src_comp.p) annotation(
    Line(points = {{-58, 50}, {-48, 50}, {-48, 34}, {-36, 34}}, color = {0, 0, 127}));
  annotation(
    experiment(StartTime = 0, StopTime = 2000, Tolerance = 1e-6, Interval = 1),
    __OpenModelica_commandLineOptions = "--matchingAlgorithm=PFPlusExt --indexReductionMethod=dynamicStateSelection -d=initialization,NLSanalyticJacobian",
    __OpenModelica_simulationFlags(lv = "LOG_STATS", s = "dassl"));
end foo;