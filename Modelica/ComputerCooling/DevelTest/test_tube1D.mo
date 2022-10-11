within ComputerCooling.DevelTest;

model test_tube1D
  extends Icons.TestModel;
  IncompressibleLiquidComponents.BoundaryConditions.BoundaryFixed_pT src(p = 110000)  annotation(
    Placement(visible = true, transformation(origin = {-80, 0}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  Modelica.Blocks.Sources.RealExpression iPh(y = 273.15 + 30 + 5 * sin(0.1 * time))  annotation(
    Placement(visible = true, transformation(origin = {-72, 56}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));

  replaceable record materialRecord = SolidMaterials.Copper 
    constrainedby SolidMaterials.BaseClasses.Base_solid_constant_props;
  ComputerCooling.IncompressibleLiquidComponents.BoundaryConditions.BoundaryFixed_wT snk(w = -0.1)  annotation(
    Placement(visible = true, transformation(origin = {80, 0}, extent = {{-20, -20}, {20, 20}}, rotation = 180)));
  ComputerCooling.HeatTransfer.BoundaryConditions.Prescribed_Temperature_1D_uniform prescribed_Temperature_1D_uniform(R = 0, n = 3)  annotation(
    Placement(visible = true, transformation(origin = {-34, 56}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  ComputerCooling.IncompressibleLiquidComponents.Ducts.Tube_1D_Cylindrical tube_1D_cylindrical annotation(
    Placement(visible = true, transformation(origin = {-7, 5}, extent = {{-21, -21}, {21, 21}}, rotation = 0)));
equation
  connect(iPh.y, prescribed_Temperature_1D_uniform.T_input) annotation(
    Line(points = {{-61, 56}, {-47, 56}}, color = {0, 0, 127}));
  connect(src.pwh_a, tube_1D_cylindrical.pwh_a) annotation(
    Line(points = {{-56, 0}, {-32, 0}}));
  connect(tube_1D_cylindrical.pwh_b, snk.pwh_a) annotation(
    Line(points = {{18, 0}, {56, 0}}));
  connect(prescribed_Temperature_1D_uniform.hp, tube_1D_cylindrical.surf) annotation(
    Line(points = {{-22, 56}, {-6, 56}, {-6, 26}}, color = {191, 0, 0}));
protected
end test_tube1D;