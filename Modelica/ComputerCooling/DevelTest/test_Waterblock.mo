within ComputerCooling.DevelTest;

model test_Waterblock
  extends Icons.TestModel;
  ComputerCooling.IncompressibleLiquidComponents.BoundaryConditions.BoundaryFixed_pT src(p = 110000)  annotation(
    Placement(visible = true, transformation(origin = {-82, 0}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));

  replaceable record materialRecord = SolidMaterials.Copper 
    constrainedby SolidMaterials.BaseClasses.Base_solid_constant_props;
  ComputerCooling.IncompressibleLiquidComponents.BoundaryConditions.BoundaryFixed_wT snk(w = -0.1)  annotation(
    Placement(visible = true, transformation(origin = {80, 0}, extent = {{-20, -20}, {20, 20}}, rotation = 180)));
  ComputerCooling.HeatTransfer.BoundaryConditions.Prescribed_Power_2D_uniform prescribed_Power_2D_uniform(cols = 5, rows = 3)  annotation(
    Placement(visible = true, transformation(origin = {-46, 64}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.RealExpression iPh(y = 100 * (1 + 100 * sin(0.1 * time))) annotation(
    Placement(visible = true, transformation(origin = {-84, 64}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  ComputerCooling.IncompressibleLiquidComponents.WaterBlocks.WaterBlock_GenericSection_uniform_w Waterblock(m = 3)  annotation(
    Placement(visible = true, transformation(origin = {1, -1}, extent = {{-21, -21}, {21, 21}}, rotation = 0)));
equation
  connect(iPh.y, prescribed_Power_2D_uniform.P_input) annotation(
    Line(points = {{-73, 64}, {-59, 64}}, color = {0, 0, 127}));
  connect(Waterblock.pwh_b, snk.pwh_a) annotation(
    Line(points = {{26, -1}, {56, -1}, {56, 0}}));
  connect(prescribed_Power_2D_uniform.hp, Waterblock.surf) annotation(
    Line(points = {{-34, 64}, {2, 64}, {2, 20}}, color = {191, 0, 0}));
  connect(src.pwh_a, Waterblock.pwh_a) annotation(
    Line(points = {{-58, 0}, {-24, 0}}));
protected
end test_Waterblock;