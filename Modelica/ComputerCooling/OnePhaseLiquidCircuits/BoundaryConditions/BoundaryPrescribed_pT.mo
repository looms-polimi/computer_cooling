within ComputerCooling.OnePhaseLiquidCircuits.BoundaryConditions;

model BoundaryPrescribed_pT
  extends BaseClasses.OnePort_pwh;
  Modelica.Blocks.Interfaces.RealInput p annotation(
    Placement(visible = true, transformation(origin = {-64, 38}, extent = {{-20, -20}, {20, 20}}, rotation = 0), iconTransformation(origin = {-64, 40}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  Modelica.Blocks.Interfaces.RealInput T annotation(
    Placement(visible = true, transformation(origin = {-74, -52}, extent = {{-20, -20}, {20, 20}}, rotation = 0), iconTransformation(origin = {-64, -40}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
equation
  pwh.p = p;
  pwh.h = cp*T;
annotation(
    Icon(graphics = {Ellipse(fillColor = {226, 226, 226}, fillPattern = FillPattern.Sphere, extent = {{-60, 60}, {60, -60}}), Text(lineColor = {200, 0, 0},extent = {{-36, 34}, {36, -34}}, textString = "pT")}));
end BoundaryPrescribed_pT;