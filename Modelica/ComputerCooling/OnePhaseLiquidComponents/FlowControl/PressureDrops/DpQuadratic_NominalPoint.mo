within ComputerCooling.OnePhaseLiquidComponents.FlowControl.PressureDrops;

model DpQuadratic_NominalPoint
  extends OnePhaseLiquidComponents.BaseClasses.TwoPorts_pwh;
  
  parameter PressureDifference dp_nom = 1e5;
  parameter MassFlowRate w_nom = 0.1;
  
protected
  final parameter Real k=w_nom^2/dp_nom;
  
equation

  w   = ComputerCooling.Functions.sqrtReg(k*dp); //flow directed by nominal work-point (quadratic)
  
  hob = hia;  //no change in enthalpy
  hoa = hib;
  
annotation(
    Icon(graphics = {Rectangle(fillColor = {226, 226, 226}, fillPattern = FillPattern.HorizontalCylinder, extent = {{-100, 20}, {100, -20}}), Text(origin = {1, 48}, extent = {{-87, 46}, {87, -46}}, textString = "quadratic")}));
end DpQuadratic_NominalPoint;