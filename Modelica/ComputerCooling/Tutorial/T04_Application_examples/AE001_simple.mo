within ComputerCooling.Tutorial.T04_Application_examples;

model AE001_simple
  ComputerCooling.OnePhaseLiquidComponents.Storage.VentedTank tank annotation(
    Placement(visible = true, transformation(origin = {-50, 10}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  ComputerCooling.OnePhaseLiquidComponents.Transfer.Ducts.Tube_1D tube1 annotation(
    Placement(visible = true, transformation(origin = {-4, 2}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
equation

annotation(
    Diagram(coordinateSystem(extent = {{-200, -100}, {200, 100}})));
end AE001_simple;