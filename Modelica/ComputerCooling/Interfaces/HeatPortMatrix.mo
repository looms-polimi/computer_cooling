within ComputerCooling.Interfaces;

connector HeatPortMatrix
  parameter Integer rows = 4;
  parameter Integer cols = 4;
  Modelica.Thermal.HeatTransfer.Interfaces.HeatPort_a port[rows, cols];
  annotation(
    defaultComponentName = "port",
    Icon(graphics = {Rectangle(lineColor = {191, 0, 0}, fillColor = {191, 0, 0}, fillPattern = FillPattern.Cross, extent = {{-100, 100}, {100, -100}})}, coordinateSystem(initialScale = 0.1)));
end HeatPortMatrix;