within ComputerCooling.Tutorial.T01_Declarative_vs_imperative.D2I_example_2;

model PrescribedpaTa
  extends ComputerCooling.Icons.TutorialModelComponent;
  Interfaces.pwh                 air_a;
  parameter Pressure             p = 101325;
  parameter Temperature          T = 293.15;
  parameter SpecificHeatCapacity c = 1020;
equation 
  air_a.p = p;
  air_a.h = c*T;
end PrescribedpaTa;