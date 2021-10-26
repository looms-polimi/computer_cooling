within ComputerCooling.OnePhaseLiquidCircuits.FlowControl.Pumps;

model VolumetricPump
  extends OnePhaseLiquidCircuits.BaseClasses.TwoPorts_pwh(final pbhi = true);
  replaceable model medium = Media.SubCooledWater_Incompressible;
  medium m;
  
  Modelica.Blocks.Interfaces.RealInput cmd annotation(
    Placement(visible = true, transformation(origin = {-48, 72}, extent = {{-20, -20}, {20, 20}}, rotation = 0), iconTransformation(origin = {-80, 80}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));

  parameter MassFlowRate w_nom = 1 "mass flowrate at cmd = 1";
  
  Power P;
equation
  m.p = pwh_a.p;
  m.h = pwh_a.h;
  
  w = cmd * w_nom;
  
  hoa = hib - dp/m.d;
  hob = hia + dp/m.d;
  
  P = w * dp/m.d;
  
  assert(w >= 0, "flow reversal not allowed in VolumetricPump");
  

annotation(
    Icon(graphics = {Rectangle(origin = {-34, 80}, fillColor = {0, 0, 127}, fillPattern = FillPattern.Solid, extent = {{-36, 2}, {36, -2}}), Rectangle(fillColor = {226, 226, 226}, fillPattern = FillPattern.HorizontalCylinder, extent = {{-100, 20}, {100, -20}}), Ellipse(origin = {16.5, 0}, fillColor = {226, 226, 226}, fillPattern = FillPattern.Sphere, extent = {{-64, 64}, {64, -64}}), Ellipse(origin = {-16.5, 0}, fillColor = {226, 226, 226}, fillPattern = FillPattern.Sphere, extent = {{-64, 64}, {64, -64}}), Rectangle(origin = {0, 71}, rotation = -90, fillColor = {0, 0, 127}, fillPattern = FillPattern.Solid, extent = {{-11, 2}, {11, -2}}), Polygon(origin = {-1, 1}, fillColor = {0, 170, 0}, fillPattern = FillPattern.Solid, points = {{-65, 12}, {25, 12}, {25, 37}, {75, 0}, {25, -37}, {25, -12}, {-65, -12}, {-65, 12}})}));
end VolumetricPump;