within ComputerCooling.Tutorial.T01_Declarative_vs_imperative.D2I_example_2;

model PrescribedwaTa
  extends ComputerCooling.Icons.TutorialModelComponent;
  Interfaces.pwh                 air_a;
  parameter MassFlowRate         w = 1e-5;
  parameter Temperature          T = 293.15;
  parameter SpecificHeatCapacity c = 1020;
equation 
  air_a.w = -w;
  air_a.h =  c*T;
end PrescribedwaTa;