within ComputerCooling.OnePhaseLiquidComponents.BoundaryConditions;

model BoundaryPrescribed_pT
  extends Icons.BoundaryConditionsIcon;
  extends BaseClasses.OnePort_pwh(redeclare replaceable model medium = medium);
   
  replaceable model medium = Media.SubCooledWater_Incompressible;
  
  Modelica.Blocks.Interfaces.RealInput p annotation(
    Placement(visible = true, transformation(origin = {-64, 38}, extent = {{-20, -20}, {20, 20}}, rotation = 0), iconTransformation(origin = {-120, 40}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  Modelica.Blocks.Interfaces.RealInput T annotation(
    Placement(visible = true, transformation(origin = {-74, -52}, extent = {{-20, -20}, {20, 20}}, rotation = 0), iconTransformation(origin = {-120, -40}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));

equation

  //medium-based computations for port conditions
  m.p = p;
  m.T = T;
  
  //conditions at port
  pwh_a.p = m.p;
  pwh_a.h = m.h;

annotation(
    Icon(graphics = {Text(origin = {-30, 43}, extent = {{-30, 20}, {30, -20}}, textString = "pT")}));
end BoundaryPrescribed_pT;
