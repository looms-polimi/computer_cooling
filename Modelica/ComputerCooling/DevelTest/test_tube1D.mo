within ComputerCooling.DevelTest;

model test_tube1D
  extends Icons.TestModel;
  OnePhaseLiquidComponents.BoundaryConditions.BoundaryFixed_pT src(p = 110000)  annotation(
    Placement(visible = true, transformation(origin = {-80, 0}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  Modelica.Blocks.Sources.RealExpression iPh(y = 273.15 + 30 + 5 * sin(0.1 * time))  annotation(
    Placement(visible = true, transformation(origin = {-66, -50}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));

  replaceable record materialRecord = SolidMaterials.Copper 
    constrainedby SolidMaterials.BaseClasses.Base_solid_constant_props;
  ComputerCooling.OnePhaseLiquidComponents.BoundaryConditions.BoundaryFixed_wT snk(w = -0.1)  annotation(
    Placement(visible = true, transformation(origin = {80, 0}, extent = {{-20, -20}, {20, 20}}, rotation = 180)));
  ComputerCooling.HeatSources.Prescribed_Temperature_1D_uniform prescribed_Temperature_1D_uniform(R = 0, n = 3)  annotation(
    Placement(visible = true, transformation(origin = {-28, -50}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  ComputerCooling.OnePhaseLiquidComponents.Transfer.Ducts.BaseClasses.cylindrical_duct_with_one_wall cylindrical_duct_with_one_wall annotation(
    Placement(visible = true, transformation(origin = {-5, -1}, extent = {{-21, -21}, {21, 21}}, rotation = 0)));
equation
  connect(iPh.y, prescribed_Temperature_1D_uniform.T_input) annotation(
    Line(points = {{-54, -50}, {-40, -50}}, color = {0, 0, 127}));
  connect(src.pwh_a, cylindrical_duct_with_one_wall.pwh_a) annotation(
    Line(points = {{-56, 0}, {-30, 0}}));
  connect(cylindrical_duct_with_one_wall.pwh_b, snk.pwh_a) annotation(
    Line(points = {{20, 0}, {56, 0}}));
  connect(cylindrical_duct_with_one_wall.hp, prescribed_Temperature_1D_uniform.hp) annotation(
    Line(points = {{-6, -14}, {-16, -14}, {-16, -50}}, color = {191, 0, 0}));
protected
end test_tube1D;