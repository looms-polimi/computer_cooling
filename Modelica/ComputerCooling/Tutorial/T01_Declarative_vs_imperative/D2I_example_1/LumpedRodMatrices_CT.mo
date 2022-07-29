within ComputerCooling.Tutorial.T01_Declarative_vs_imperative.D2I_example_1;

function LumpedRodMatrices_CT "continuous-time rod model matrices"
  extends ComputerCooling.Icons.TutorialFunction;
  input HeatCapacity C;
  input ThermalConductance G;
  input Integer lumps;
  output Real A[lumps,lumps];
  output Real B[lumps,2];
algorithm
  A                :=  zeros(lumps,lumps);
  A[1,1]           := -1;
  A[1,2]           :=  1;
  A[lumps,lumps-1] :=  1;
  A[lumps,lumps]   := -3;
  for i in 2:lumps-1 loop
    A[i,i-1] :=  1;
    A[i,i]   := -2;
    A[i,i+1] :=  1;
  end for;
  A                := A*G/C;
  B                := zeros(lumps,2);
  B[1,1]           := 1/C;
  B[lumps,2]       := 2*G/C;
end LumpedRodMatrices_CT;