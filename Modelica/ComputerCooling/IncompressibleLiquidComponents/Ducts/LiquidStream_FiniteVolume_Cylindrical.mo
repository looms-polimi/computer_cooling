within ComputerCooling.IncompressibleLiquidComponents.Ducts;

model LiquidStream_FiniteVolume_Cylindrical
  extends IncompressibleLiquidComponents.Ducts.LiquidStream_FiniteVolume_GenericSection(Ac=Modelica.Constants.pi * (D/2)^2,per=Modelica.Constants.pi * D);
  
  parameter Length  D = 0.005 "stream diameter";
  
end LiquidStream_FiniteVolume_Cylindrical;