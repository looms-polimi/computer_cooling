within ComputerCooling.IncompressibleLiquidComponents.BoundaryConditions;

model BoundaryFixed_pT
  extends Icons.BoundaryConditionsIcon;
  extends BaseClasses.OnePort_pwh(redeclare replaceable model medium = medium);
  
  replaceable model medium = Media.SubCooledWater_Incompressible;
  
  parameter Pressure p = 101325;
  parameter Temperature T = 293.15;

equation

//medium-based computations for port conditions
  m.p = p;
  m.T = T;

//conditions at port
  pwh_a.p = m.p;
  pwh_a.h = m.h;
 
annotation(
    Icon(graphics = {Text(origin = {-30, 43}, extent = {{-30, 20}, {30, -20}}, textString = "pT")}));
end BoundaryFixed_pT;