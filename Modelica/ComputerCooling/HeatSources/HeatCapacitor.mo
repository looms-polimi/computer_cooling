within ComputerCooling.HeatSources;

model HeatCapacitor
  ComputerCooling.Interfaces.vHP hp annotation(
    Placement(visible = true, transformation(origin = {0, -80}, extent = {{-20, -20}, {20, 20}}, rotation = 0), iconTransformation(origin = {0, -80}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));

  parameter Integer n = 3 "Number of volume lumps (1 on a side)";

  parameter Temperature TStart = 273.15 + 20;
  Temperature T[n](each start = TStart);
  parameter HeatCapacity C = 502;
  
equation

  for i in 1:n loop
    T[i] = hp.T[i];
    C*der(T[i]) = hp.Q_flow[i];
  end for;

end HeatCapacitor;
