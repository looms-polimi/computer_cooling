within ComputerCooling.HeatTransfer.BaseClasses;

model VectorHeatPort

  parameter Integer s = 3 "Number of segments";
  Temperature T[s] "Temperature of segment 1 leftmost -> s rightmost";
  Power Q_flow[s] "Power flowing through segment 1 leftmost -> s rightmost";

end VectorHeatPort;