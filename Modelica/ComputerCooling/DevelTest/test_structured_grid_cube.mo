within ComputerCooling.DevelTest;

model test_structured_grid_cube
  extends Icons.TestModel;
  Modelica.Blocks.Sources.RealExpression iT(y = if time < 100 then 293.15 else 313.15) annotation(
    Placement(visible = true, transformation(origin = {-36, -20}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  ComputerCooling.HeatTransfer.BoundaryConditions.Prescribed_Temperature_2D_uniform Tmatrix(cols = 4, rows = 5) annotation(
    Placement(visible = true, transformation(origin = {6, -20}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  ComputerCooling.SolidComponents.PlanarWall_MultiLayer_StructuredGrid planarWall_MultiLayer_StructuredGrid annotation(
    Placement(visible = true, transformation(origin = {34, 10}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
equation
  connect(Tmatrix.hp, planarWall_MultiLayer_StructuredGrid.hp_in) annotation(
    Line(points = {{18, -20}, {34, -20}, {34, 6}}, color = {191, 0, 0}));
  connect(iT.y, Tmatrix.T_input) annotation(
    Line(points = {{-25, -20}, {-7, -20}}, color = {0, 0, 127}));
  annotation(
    experiment(StartTime = 0, StopTime = 500, Tolerance = 1e-06, Interval = 1),
    __OpenModelica_commandLineOptions = "--matchingAlgorithm=PFPlusExt --indexReductionMethod=dynamicStateSelection -d=initialization,NLSanalyticJacobian",
    __OpenModelica_simulationFlags(lv = "LOG_STATS", s = "dassl"));
end test_structured_grid_cube;