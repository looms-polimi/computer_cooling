within ComputerCooling.OnePhaseLiquidCircuits.FlowControl.PressureDrops;

model DpLinear_NominalPoint
  extends OnePhaseLiquidCircuits.BaseClasses.TwoPorts_pwh;
  parameter PressureDifference dp_nom = 1e5;
  parameter MassFlowRate w_nom = 0.1;
protected
  final parameter Real k=w_nom/dp_nom;
equation
  w   = k * dp;
  hob = hia;
  hoa = hib;
end DpLinear_NominalPoint;