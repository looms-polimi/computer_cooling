within ComputerCooling.Tutorial.T01_Declarative_vs_imperative.D2I_example_1;

model LumpedRod "1D lumped solid rod"
  extends ComputerCooling.Icons.TutorialModelComponent;
  Modelica.Thermal.HeatTransfer.Interfaces.HeatPort_a a,b; // HeatPort from MSL
  parameter   Length               L      = 0.1;
  parameter   Area                 S      = 1e-4;
  parameter   Density              ro     = 7600;
  parameter   SpecificHeatCapacity c      = 450;
  parameter   ThermalConductivity  lambda = 45;
  parameter   Integer              lumps  = 10;
  parameter   Temperature          T_ini  = 293.15;
  Temperature T[lumps](each start=T_ini);
protected
  final parameter HeatCapacity       C=ro*c*S*L/lumps;
  final parameter ThermalConductance G=lambda*S*lumps/L;
equation
  C*der(T[1])     = a.Q_flow-G*(T[1]-T[2]);
  a.T             = T[1]+2*G*a.Q_flow;
  for i in 2:lumps-1 loop
      C*der(T[i]) = G*(T[i-1]-2*T[i]+T[i+1]);
  end for;
  C*der(T[lumps]) = G*(T[lumps-1]-T[lumps])+b.Q_flow;
  b.T             = T[lumps]+2*G*b.Q_flow;
end LumpedRod;