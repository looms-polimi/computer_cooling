within ComputerCooling.OnePhaseLiquidComponents.FlowControl.Pumps;

model CentrifugalPump
  extends OnePhaseLiquidComponents.BaseClasses.TwoPorts_pwh(final pbhi = true, w(start = w_nom/1000));
  replaceable model medium = Media.SubCooledWater_Incompressible;
  medium m;
  
  parameter PressureDifference dp_nom = 1e5 "pressure difference at cmd = 1 && zero flow";
  parameter MassFlowRate w_nom = 1 "mass flowrate at cmd = 1 && zero pressure difference";
  
  Modelica.Blocks.Interfaces.RealInput cmd annotation(
    Placement(visible = true, transformation(origin = {-102, 48}, extent = {{-20, -20}, {20, 20}}, rotation = 0), iconTransformation(origin = {-80, 80}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  Power P;
  
protected
  final parameter Real kp = dp_nom / (w_nom^2) annotation(Evaluate = true);
  
equation
  //liquid coordinates
  m.p = pwh_a.p;
  m.h = pwh_a.h;
  
  //pump equations
  dp = dp_nom * ComputerCooling.Functions.Clamp(cmd) - kp*w^2;
  
  hoa = hib - dp/m.d;
  hob = hia + dp/m.d;
  
  P = w * dp/m.d;
  
  assert(w >= 0, "flow reversal not allowed in CentrifugalPump");

annotation(
    Icon(graphics = {Polygon(origin = {58, 0}, fillColor = {226, 226, 226}, fillPattern = FillPattern.HorizontalCylinder, points = {{42, 20}, {42, -20}, {14, -20}, {-42, -64}, {-42, 64}, {-10, 54}, {12, 42}, {20, 30}, {28, 24}, {36, 20}, {42, 20}}, smooth = Smooth.Bezier), Ellipse(origin = {16.5, 0}, fillColor = {226, 226, 226}, fillPattern = FillPattern.Sphere, extent = {{-64, 64}, {64, -64}}), Ellipse(origin = {-16.5, 0}, fillColor = {226, 226, 226}, fillPattern = FillPattern.Sphere, extent = {{-64, 64}, {64, -64}}), Polygon(origin = {-52, 0}, fillColor = {226, 226, 226}, fillPattern = FillPattern.HorizontalCylinder, points = {{-48, 20}, {28, 20}, {40, 15}, {48, 8}, {50, 5}, {50, -5}, {48, -8}, {40, -15}, {28, -20}, {-48, -20}, {-48, 20}}), Polygon(origin = {-1, 1}, fillColor = {0, 170, 0}, fillPattern = FillPattern.Solid, points = {{-65, 12}, {25, 12}, {25, 37}, {75, 0}, {25, -37}, {25, -12}, {-65, -12}, {-65, 12}}), Rectangle(origin = {-34, 80}, fillColor = {0, 0, 127}, fillPattern = FillPattern.Solid, extent = {{-36, 2}, {36, -2}}), Rectangle(origin = {0, 71}, rotation = -90, fillColor = {0, 0, 127}, fillPattern = FillPattern.Solid, extent = {{-11, 2}, {11, -2}})}));
end CentrifugalPump;