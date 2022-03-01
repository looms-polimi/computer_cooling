within ComputerCooling.OnePhaseLiquidComponents.BoundaryConditions;

model BoundaryPrescribed_pT
  extends BaseClasses.OnePort_pwh;
  
  Modelica.Blocks.Interfaces.RealInput p annotation(
    Placement(visible = true, transformation(origin = {-64, 38}, extent = {{-20, -20}, {20, 20}}, rotation = 0), iconTransformation(origin = {-64, 40}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  Modelica.Blocks.Interfaces.RealInput T annotation(
    Placement(visible = true, transformation(origin = {-74, -52}, extent = {{-20, -20}, {20, 20}}, rotation = 0), iconTransformation(origin = {-64, -40}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));

equation

  //medium-based computations for port conditions
  m.p = p;
  m.T = T;
  
  //conditions at port
  pwh_a.p = m.p;
  pwh_a.h = m.h;
  
annotation(
    Icon(graphics = {Ellipse(fillColor = {226, 226, 226}, fillPattern = FillPattern.Sphere, extent = {{-60, 60}, {60, -60}}), Text(lineColor = {200, 0, 0},extent = {{-36, 34}, {36, -34}}, textString = "pT")}));
end BoundaryPrescribed_pT;