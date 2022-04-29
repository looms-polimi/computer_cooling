within ComputerCooling.Tutorial.T04_Application_examples;

model AE001_simple
  ComputerCooling.OnePhaseLiquidComponents.Transfer.Ducts.Tube_1D tube1 annotation(
    Placement(visible = true, transformation(origin = {-50, -10}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  ComputerCooling.OnePhaseLiquidComponents.FlowControl.Pumps.CentrifugalPump pump1(dp_nom = 20000, w_nom = 0.005)  annotation(
    Placement(visible = true, transformation(origin = {-90, -10}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  ComputerCooling.OnePhaseLiquidComponents.Transfer.WaterBlock waterblock1 annotation(
    Placement(visible = true, transformation(origin = {10, -10}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
equation
  connect(pump1.pwh_b, tube1.pwh_a) annotation(
    Line(points = {{-78, -10}, {-62, -10}}));

annotation(
    Diagram(coordinateSystem(extent = {{-200, -100}, {200, 100}})));
end AE001_simple;