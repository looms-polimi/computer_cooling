within ComputerCooling.Interfaces;

connector HeatPortVector
  parameter Integer n = 4;
  Modelica.Thermal.HeatTransfer.Interfaces.HeatPort_a port[n];
  annotation(
    defaultComponentName = "port",
    Icon(graphics = {Rectangle(lineColor = {191, 0, 0}, fillColor = {191, 0, 0}, fillPattern = FillPattern.Vertical, extent = {{-100, 100}, {100, -100}})}, coordinateSystem(initialScale = 0.1)));
end HeatPortVector;