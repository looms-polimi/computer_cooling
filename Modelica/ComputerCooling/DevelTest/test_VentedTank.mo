within ComputerCooling.DevelTest;

model test_VentedTank
  extends Icons.TestModel;
  ComputerCooling.IncompressibleLiquidComponents.BoundaryConditions.BoundaryPrescribed_wT src annotation(
    Placement(visible = true, transformation(origin = {-90, 0}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  Modelica.Blocks.Sources.RealExpression win(y = if time < 5 then 12 elseif time < 10 then 2
   elseif time < 70 then 0 else 0.0002) annotation(
    Placement(visible = true, transformation(origin = {-140, 10}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.RealExpression Tin(y = 273.15 + 30) annotation(
    Placement(visible = true, transformation(origin = {-140, -10}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  ComputerCooling.IncompressibleLiquidComponents.FlowControl.PressureDrops.DpLinear_NominalPoint dp_exit(dp_nom = 3000, w_nom = 1) annotation(
    Placement(visible = true, transformation(origin = {30, 0}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  Modelica.Blocks.Sources.RealExpression Tamb(y = 273.15 + 40 + 5 * sin(6.28 / 10 * time)) annotation(
    Placement(visible = true, transformation(origin = {-90, -50}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  ComputerCooling.IncompressibleLiquidComponents.Storage.VentedTank ventedTank(V = 0.005)  annotation(
    Placement(visible = true, transformation(origin = {-30, 0}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  ComputerCooling.IncompressibleLiquidComponents.BoundaryConditions.BoundaryFixed_pT snk annotation(
    Placement(visible = true, transformation(origin = {100, 0}, extent = {{20, -20}, {-20, 20}}, rotation = 0)));
  ComputerCooling.HeatTransfer.BoundaryConditions.Prescribed_Temperature_0D prescribed_Temperature_0D annotation(
    Placement(visible = true, transformation(origin = {-50, -52}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
equation
  connect(win.y, src.w) annotation(
    Line(points = {{-129, 10}, {-125, 10}, {-125, 8}, {-115, 8}}, color = {0, 0, 127}));
  connect(Tin.y, src.T) annotation(
    Line(points = {{-129, -10}, {-125, -10}, {-125, -8}, {-115, -8}}, color = {0, 0, 127}));
  connect(src.pwh_a, ventedTank.pwh_a) annotation(
    Line(points = {{-66, 0}, {-54, 0}}));
  connect(ventedTank.pwh_b, dp_exit.pwh_a) annotation(
    Line(points = {{-6, 0}, {6, 0}}));
  connect(dp_exit.pwh_b, snk.pwh_a) annotation(
    Line(points = {{54, 0}, {76, 0}}));
  connect(dp_exit.pwh_b, snk.pwh_a) annotation(
    Line(points = {{54, 0}, {76, 0}}));
  connect(prescribed_Temperature_0D.T_input, Tamb.y) annotation(
    Line(points = {{-62, -52}, {-78, -52}, {-78, -50}}, color = {0, 0, 127}));
  connect(prescribed_Temperature_0D.hp, ventedTank.hp) annotation(
    Line(points = {{-38, -52}, {-30, -52}, {-30, -12}}, color = {191, 0, 0}));
protected
  annotation(
    experiment(StartTime = 0, StopTime = 150, Tolerance = 1e-6, Interval = 0.3),
    __OpenModelica_commandLineOptions = "--matchingAlgorithm=PFPlusExt --indexReductionMethod=dynamicStateSelection -d=initialization,NLSanalyticJacobian",
    __OpenModelica_simulationFlags(lv = "LOG_STATS", s = "dassl"));
end test_VentedTank;