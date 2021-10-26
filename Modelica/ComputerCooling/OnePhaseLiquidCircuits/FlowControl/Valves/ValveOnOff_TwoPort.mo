within ComputerCooling.OnePhaseLiquidCircuits.FlowControl.Valves;

model ValveOnOff_TwoPort
  extends OnePhaseLiquidCircuits.BaseClasses.TwoPorts_pwh;  //valve with reversable direction?
  replaceable model medium = Media.SubCooledWater_Incompressible;
  medium m;
  
  parameter PressureDifference dp_nom = 5e4 "nominal pressure difference at w_nom and cmd = 1";
  parameter MassFlowRate w_nom = 1 "nominal mass flow rate at dp_nom and cmd = 1";
  Modelica.Blocks.Interfaces.RealInput cmd annotation(
    Placement(visible = true, transformation(origin = {-100, 70}, extent = {{-20, -20}, {20, 20}}, rotation = 0), iconTransformation(origin = {-46, 90}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
protected
  final parameter Real kv = w_nom / dp_nom annotation(Evaluate = true);
  
equation
  m.p = pwh_a.p;
  m.h = pwh_a.h;
  
  //w = ComputerCooling.Functions.Clamp(cmd) * kv * dp;
//  p = (cmd*unitPressure) * (if off then 1 else )

// off = s < 0;
//  Real s(start=0, final unit="1")
//    "Auxiliary variable for actual position on the ideal diode characteristic";
//  /* s = 0: knee point
//   s < 0: below knee point, blocking
//   s > 0: above knee point, conducting */
//  constant Modelica.SIunits.Voltage unitVoltage=1 annotation (HideResult=true);
//  constant Modelica.SIunits.Current unitCurrent=1 annotation (HideResult=true);
//equation
//  v = (s*unitCurrent)*(if off then 1 else Ron) + Vknee;
//  i = (s*unitVoltage)*(if off then Goff else 1) + Goff*Vknee;
  
  hoa = hib;
  hob = hia;

end ValveOnOff_TwoPort;