within ComputerCooling.Interfaces;

model hpConnector
  ComputerCooling.Interfaces.vHP vHP(n = n) annotation(
    Placement(visible = true, transformation(origin = {0, 80}, extent = {{-20, -20}, {20, 20}}, rotation = 0), iconTransformation(origin = {0, 80}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  Modelica.Thermal.HeatTransfer.Interfaces.HeatPort_a mHP[n] annotation(
    Placement(visible = true, transformation(origin = {0, -80}, extent = {{-20, -20}, {20, 20}}, rotation = 0), iconTransformation(origin = {0, -80}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));

  parameter Integer n = 3;
  parameter Temperature TStart = 273.15 + 20;
  
initial equation
  for i in 1:n loop
    vHP.T[i]      = TStart;
    mHP[i].T      = TStart;
  end for;

equation
  for i in 1:n loop
    vHP.Q_flow[i] = mHP[i].Q_flow;
    vHP.T[i]      = mHP[i].T;
  end for;

end hpConnector;