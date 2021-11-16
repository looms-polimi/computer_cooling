within ComputerCooling.HeatTransfer.HeatTransferModels;

model DittusBoelter
  replaceable model medium = ComputerCooling.Media.SubCooledWater_Incompressible;
  medium m;
  
  input Pressure p;
  input SpecificEnthalpy h;
  
  input MassFlowRate w;
  
  parameter Length D = 0.1 "Stream diameter";
  
  CoefficientOfHeatTransfer gamma;
  Real Re,Pr,Nu;
  
  Boolean fluidHeats = false;
  
protected
  parameter Area AreaCross = Modelica.Constants.pi * (D/2)^2;
equation

  m.p = p;
  m.h = h;

  Re              = abs(w) / AreaCross * D / m.mu;
  Nu              = gamma * D / m.lambda;
  Pr              = m.mu * m.cp / m.lambda;
  
  Nu              = 0.023*Re^0.8*Pr^(if fluidHeats then 0.3 else 0.4); /* Dittus-Boelter */

end DittusBoelter;