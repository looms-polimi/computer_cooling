within ComputerCooling.HeatSources;

model HeatSource_1D
  parameter Power Q=100;
  parameter Integer n=5;
  ComputerCooling.Interfaces.vHP port(n=n) annotation(
    Placement(visible = true, transformation(origin = {-2, 96}, extent = {{-10, -10}, {10, 10}}, rotation = 0), iconTransformation(origin = {0, 100}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
equation
  port.Q_flow = -Q/n*ones(n);
annotation(
    Icon(graphics = {Bitmap(extent = {{-80, -80}, {80, 80}}, imageSource = "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")}));
end HeatSource_1D;