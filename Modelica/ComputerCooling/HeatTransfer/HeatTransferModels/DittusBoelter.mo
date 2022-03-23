within ComputerCooling.HeatTransfer.HeatTransferModels;

model DittusBoelter
  extends BaseClasses.base_HeatTransfer_pwh;
  extends Icons.HeatTransferModelIcon;
  replaceable model medium = ComputerCooling.Media.SubCooledWater_Incompressible;
  medium m;
  
  parameter Length D = 0.1 "Stream diameter";
  
  CoefficientOfHeatTransfer gamma;
  Real Re,Pr,Nu;
  
  Boolean fluidHeats = false;
  
protected
  parameter Area AreaCross = Modelica.Constants.pi * (D/2)^2;
equation

  m.p = p;
  m.h = h;

  Re  = abs(w) / AreaCross * D / m.mu;
  Nu = gamma * D / m.lambda;
  Pr = m.mu * m.c / m.lambda;
  
  Nu = 0.023*Re^0.8*Pr^(if fluidHeats then 0.3 else 0.4); /* Dittus-Boelter */

annotation(
    Icon(graphics = {Text(origin = {0, -60}, extent = {{-80, 20}, {80, -20}}, textString = "Dittus - Boelter")}));
end DittusBoelter;
