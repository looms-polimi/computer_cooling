within ComputerCooling.HeatSources;

model HeatSource_1D
  extends Icons.HeatSourceIcon;
  parameter Power Q=100;
  parameter Integer n=5;
  ComputerCooling.Interfaces.vHP port(n=n) annotation(
    Placement(visible = true, transformation(origin = {-2, 96}, extent = {{-10, -10}, {10, 10}}, rotation = 0), iconTransformation(origin = {0, 100}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
equation
  port.Q_flow = -Q/n*ones(n);
annotation(
    Icon);
end HeatSource_1D;
