within ComputerCooling.DevelTest;

model test_tube1D
  extends Icons.TestModel;
  IncompressibleLiquidComponents.BoundaryConditions.BoundaryFixed_pT src(p = 110000)  annotation(
    Placement(visible = true, transformation(origin = {-80, 0}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  Modelica.Blocks.Sources.RealExpression iPh(y = 273.15 + 30 + 5 * sin(0.1 * time))  annotation(
    Placement(visible = true, transformation(origin = {-66, -50}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));

  replaceable record materialRecord = SolidMaterials.Copper 
    constrainedby SolidMaterials.BaseClasses.Base_solid_constant_props;
  ComputerCooling.IncompressibleLiquidComponents.BoundaryConditions.BoundaryFixed_wT snk(w = -0.1)  annotation(
    Placement(visible = true, transformation(origin = {80, 0}, extent = {{-20, -20}, {20, 20}}, rotation = 180)));
  ComputerCooling.HeatTransfer.BoundaryConditions.Prescribed_Temperature_1D_uniform prescribed_Temperature_1D_uniform annotation(
    Placement(visible = true, transformation(origin = {-26, -50}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  ComputerCooling.IncompressibleLiquidComponents.Ducts.Tube_cylindrical_uniform_w tube_cylindrical_uniform_w(l = 2)  annotation(
    Placement(visible = true, transformation(origin = {1, 1}, extent = {{-21, -21}, {21, 21}}, rotation = 0)));
equation
  connect(iPh.y, prescribed_Temperature_1D_uniform.T_input) annotation(
    Line(points = {{-54, -50}, {-38, -50}}, color = {0, 0, 127}));
  connect(src.pwh_a, tube_cylindrical_uniform_w.pwh_a) annotation(
    Line(points = {{-56, 0}, {-24, 0}, {-24, 1}}));
  connect(tube_cylindrical_uniform_w.pwh_b, snk.pwh_a) annotation(
    Line(points = {{26, 1}, {56, 1}, {56, 0}}));
  connect(prescribed_Temperature_1D_uniform.hp, tube_cylindrical_uniform_w.surf) annotation(
    Line(points = {{-14, -50}, {1, -50}, {1, -12}}, color = {191, 0, 0}));
protected
end test_tube1D;