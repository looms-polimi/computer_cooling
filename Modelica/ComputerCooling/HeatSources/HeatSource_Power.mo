within ComputerCooling.HeatSources;

model HeatSource_Power
  extends Icons.HeatSourceIcon;
  Modelica.Blocks.Interfaces.RealInput P annotation(
    Placement(visible = true, transformation(origin = {-120, 0}, extent = {{-20, -20}, {20, 20}}, rotation = 0), iconTransformation(origin = {-120, 0}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  ComputerCooling.Interfaces.vHP hp(n = n) annotation(
    Placement(visible = true, transformation(origin = {120, 1.42109e-14}, extent = {{-20, -20}, {20, 20}}, rotation = 0), iconTransformation(origin = {120, 0}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));

  parameter Integer n = 3 "Number of volume lumps (1 on a side)";

  parameter Temperature TStart = 273.15 + 20;
  Temperature T[n](each start = TStart);
  parameter HeatCapacity C = 502;
 
equation

  for i in 1:n loop
    hp.T[i] = T[i];
    C/n * der(T[i]) = P/n + hp.Q_flow[i];
  end for;

annotation(
    Icon);
end HeatSource_Power;
