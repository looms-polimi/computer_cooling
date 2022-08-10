within ComputerCooling.IncompressibleLiquidComponents.BoundaryConditions;

model BoundaryFixed_wT
  extends Icons.BoundaryConditionsIcon;
  extends BaseClasses.OnePort_pwh(redeclare replaceable model medium = medium);
   
  replaceable model medium = Media.SubCooledWater_Incompressible;
  
  parameter MassFlowRate w = 0.1;
  parameter Temperature T = 293.15;
  
equation

  //medium-based computations for port conditions
  m.p = pwh_a.p;
  m.T = T;
  
  //conditions at port
  pwh_a.w = -w;
  pwh_a.h = m.h;
 
  
annotation(
    Icon(graphics = {Text(origin = {-30, 43}, extent = {{-30, 20}, {30, -20}}, textString = "wT")}));
end BoundaryFixed_wT;
