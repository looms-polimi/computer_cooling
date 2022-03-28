within ComputerCooling.Interfaces;

model hpConnector
  ComputerCooling.Interfaces.vHP vHP(n = n) annotation(
    Placement(visible = true, transformation(origin = {0, 80}, extent = {{-20, -20}, {20, 20}}, rotation = 0), iconTransformation(origin = {0, 80}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  Modelica.Thermal.HeatTransfer.Interfaces.HeatPort_a mHP[n] annotation(
    Placement(visible = true, transformation(origin = {0, -80}, extent = {{-20, -20}, {20, 20}}, rotation = 0), iconTransformation(origin = {0, -80}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));

  parameter Integer n = 3;

equation
  for i in 1:n loop
    0 = vHP.Q_flow[i] + mHP[i].Q_flow;
    vHP.T[i]      = mHP[i].T;
  end for;

annotation(
    Icon(graphics = {Rectangle(origin = {1, 3}, fillColor = {240, 102, 3}, fillPattern = FillPattern.CrossDiag, extent = {{-7, -67}, {7, 67}})}));
end hpConnector;
