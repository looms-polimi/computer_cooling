within ComputerCooling.DevelTest;

model test_Waterblock
  extends Icons.TestModel;
  IncompressibleLiquidComponents.BoundaryConditions.BoundaryFixed_pT src(p = 110000)  annotation(
    Placement(visible = true, transformation(origin = {-80, 0}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));

  replaceable record materialRecord = SolidMaterials.Copper 
    constrainedby SolidMaterials.BaseClasses.Base_solid_constant_props;
  ComputerCooling.IncompressibleLiquidComponents.BoundaryConditions.BoundaryFixed_wT snk(w = -0.1)  annotation(
    Placement(visible = true, transformation(origin = {80, 0}, extent = {{-20, -20}, {20, 20}}, rotation = 180)));
  ComputerCooling.HeatTransfer.BoundaryConditions.Prescribed_Power_2D_uniform prescribed_Power_2D_uniform(cols = 5, rows = 3)  annotation(
    Placement(visible = true, transformation(origin = {-30, -50}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.RealExpression iPh(y = 100 * (1 + 100 * sin(0.1 * time))) annotation(
    Placement(visible = true, transformation(origin = {-68, -50}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  ComputerCooling.IncompressibleLiquidComponents.WaterBlocks.WaterBlock waterBlock annotation(
    Placement(visible = true, transformation(origin = {-8, -3.55271e-15}, extent = {{-22, -22}, {22, 22}}, rotation = 0)));
equation
  connect(iPh.y, prescribed_Power_2D_uniform.P_input) annotation(
    Line(points = {{-56, -50}, {-42, -50}}, color = {0, 0, 127}));
  connect(src.pwh_a, waterBlock.pwh_a) annotation(
    Line(points = {{-56, 0}, {-34, 0}}));
  connect(waterBlock.pwh_b, snk.pwh_a) annotation(
    Line(points = {{18, 0}, {56, 0}}));
  connect(waterBlock.surf, prescribed_Power_2D_uniform.hp) annotation(
    Line(points = {{-8, -18}, {-8, -50}, {-18, -50}}, color = {191, 0, 0}));
protected
end test_Waterblock;