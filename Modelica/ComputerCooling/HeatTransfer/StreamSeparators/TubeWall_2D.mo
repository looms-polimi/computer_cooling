within ComputerCooling.HeatTransfer.StreamSeparators;

model TubeWall_2D
  Modelica.Thermal.HeatTransfer.Interfaces.HeatPort_a hp_in[s](each T(start = TStart)) annotation(
    Placement(visible = true, transformation(origin = {0, -70}, extent = {{-10, -10}, {10, 10}}, rotation = 0), iconTransformation(origin = {0, -120}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  Modelica.Thermal.HeatTransfer.Interfaces.HeatPort_a hp_ext[s](each T(start = TStart)) annotation(
    Placement(visible = true, transformation(origin = {0, 70}, extent = {{-10, -10}, {10, 10}}, rotation = 0), iconTransformation(origin = {0, 120}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));

  parameter Length L = 1 "Layer length";
  parameter Length W = 1 "Layer width";
  parameter Length t = 0.01 "Layer thickness";
  
  replaceable record materialRecord = SolidMaterials.Steel;
  materialRecord material;
  
  parameter Temperature TStart = 273.15 + 20 "Layer starting temperature";
  Temperature T[s,n](each start = TStart);
  
  parameter Integer n = 3 "Number of layers"; //1 inner -> n outer
  parameter Integer s = 5 "Number of segments"; //1 leftmost -> s rightmost
  
protected
  final parameter Area A = L * W;
  final parameter ThermalConductance G = material.lambda * A / t / n;
  final parameter HeatCapacity C = material.c * material.d * A * t / n;

equation
  
  for i in 1:s loop
  
    hp_in[i].Q_flow = G*(hp_in[i].T - T[i,1])/2;
    C*der(T[i,1]) = hp_in[i].Q_flow - G*(T[i,1] - T[i,2]);
    
    for j in 2:n-1 loop
      C*der(T[i,j]) = G*(T[i,j-1] - T[i,j]) - G*(T[i,j] - T[i,j+1]);
    end for;
    
    C*der(T[i,n]) = G*(T[i,n-1] - T[i,n]) + hp_ext[i].Q_flow;
    hp_ext[i].Q_flow = G*(hp_ext[i].T - T[i,n])/2;
    
  end for;

end TubeWall_2D;