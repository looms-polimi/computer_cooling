within ComputerCooling.DevelTest;

model test_pressuriser
  extends Icons.TestModel;
  
  ComputerCooling.IncompressibleLiquidComponents.FlowControl.Pressurisers.PressuriserIdeal pressuriserIdeal(p = 499999.9999999999)  annotation(
    Placement(visible = true, transformation(origin = {0, 0}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  ComputerCooling.IncompressibleLiquidComponents.BoundaryConditions.BoundaryFixed_wT snk(w = -0.1)  annotation(
    Placement(visible = true, transformation(origin = {80, 0}, extent = {{20, -20}, {-20, 20}}, rotation = 0)));
  ComputerCooling.IncompressibleLiquidComponents.BoundaryConditions.BoundaryFixed_wT src(w = 1)  annotation(
    Placement(visible = true, transformation(origin = {-80, 0}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
equation
  connect(pressuriserIdeal.pwh_b, snk.pwh_a) annotation(
    Line(points = {{24, 0}, {56, 0}}));
  connect(src.pwh_a, pressuriserIdeal.pwh_a) annotation(
    Line(points = {{-56, 0}, {-24, 0}}));
end test_pressuriser;
