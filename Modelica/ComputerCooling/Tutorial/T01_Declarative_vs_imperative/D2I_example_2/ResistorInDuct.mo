within ComputerCooling.Tutorial.T01_Declarative_vs_imperative.D2I_example_2;

model ResistorInDuct
  extends Icons.TutorialModelComponent;
  Interfaces.pwh                                     air_a,air_b;
  Modelica.Electrical.Analog.Interfaces.PositivePin  a,b;
  parameter   SpecificHeatCapacity ca    = 1020;
  parameter   Resistance           R0    = 1;
  parameter   Real                 alpha = 0.005;
  parameter   Temperature          T0    = 293.15;
  parameter   HeatCapacity         Ct    = 10;
  parameter   ThermalConductance   Gt    = 5;
  parameter   Temperature          T_ini = 293.15;
  Temperature T(start=T_ini);
  Temperature Ta;
  Resistance  R;
  Power       Pe,P2a;
equation
  air_a.p - air_b.p = 0; // no pressure drop
  air_a.w + air_b.w = 0; // no mass storage
  // air energy balance (static, no storage)
  0         =  air_a.w*actualStream(air_a.h)
              +air_b.w*actualStream(air_b.h)
              +P2a;
  P2a       = Gt*(T-Ta); // power to air
  air_a.h   = ca*Ta;     // stream management
  air_b.h   = ca*Ta;
  // electric equations
  a.i+b.i   = 0;
  a.v-b.v   = R*a.i;
  R         = R0*(1+alpha*(T-T0));
  Pe        = (a.v-b.v)*a.i;
  // heating resistor energy balance
  Ct*der(T) = Pe-P2a;
end ResistorInDuct;