within ComputerCooling.HeatTransfer.StreamSeparators;

model TubeWall_FiniteVolume_1L
  ComputerCooling.Interfaces.vHP hp_in(n = n) annotation(
    Placement(visible = true, transformation(origin = {0, -80}, extent = {{-20, -20}, {20, 20}}, rotation = 0), iconTransformation(origin = {0, -80}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  ComputerCooling.Interfaces.vHP hp_ext(n = n) annotation(
    Placement(visible = true, transformation(origin = {0, 80}, extent = {{-20, -20}, {20, 20}}, rotation = 0), iconTransformation(origin = {0, 80}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));

  replaceable record materialRecord = SolidMaterials.Copper
              constrainedby SolidMaterials.BaseClasses.Base_solid_constant_props;
  materialRecord material;

  parameter Length L = 1 "Layer length";
  parameter Length W = 1 "Layer width";
  parameter Length t = 0.05 "Layer thickness";
  parameter Integer n = 3 "Number of lumps";  // 1 leftmost <---> n rightmost
  
  parameter Temperature TStart = 273.15 + 20 "Layer starting temperature";
  Temperature T[n] (each start = TStart);
  
protected
  final parameter Area A = W * (L / n);
  final parameter ThermalConductance G = material.lambda * A / t;
  final parameter HeatCapacity C = material.c * material.d * A * t;

equation

  for i in 1:n loop
    hp_ext.Q_flow[i] = G/2 * (hp_ext.T[i] - T[i]);
    C * der(T[i]) = hp_ext.Q_flow[i] + hp_in.Q_flow[i];
    hp_in.Q_flow[i] = G/2 * (T[i] - hp_in.T[i]);
  end for;

end TubeWall_FiniteVolume_1L;
