within ComputerCooling.OnePhaseLiquidComponents.FlowControl.PressureDrops;

model DpLinear_NominalPoint
  extends OnePhaseLiquidComponents.BaseClasses.TwoPorts_pwh;
  
  parameter PressureDifference dp_nom = 1e5;
  parameter MassFlowRate w_nom = 0.1;
  
protected
  final parameter Real k = w_nom/dp_nom;
  
equation

  w   = k * dp; //flow directed by nominal work-point (linear)
  
  hob = hia;  //no change in enthalpy
  hoa = hib;
  
annotation(
    Icon(graphics = {Rectangle(fillColor = {226, 226, 226}, fillPattern = FillPattern.HorizontalCylinder, extent = {{-100, 20}, {100, -20}}), Text(origin = {0, 44}, extent = {{-62, 30}, {62, -30}}, textString = "linear")}));
end DpLinear_NominalPoint;