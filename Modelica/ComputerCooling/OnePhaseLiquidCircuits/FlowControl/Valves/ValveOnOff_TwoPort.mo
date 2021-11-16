within ComputerCooling.OnePhaseLiquidCircuits.FlowControl.Valves;

model ValveOnOff_TwoPort
  extends OnePhaseLiquidCircuits.BaseClasses.TwoPorts_pwh;
  replaceable model medium = Media.SubCooledWater_Incompressible;
  medium m;
  
  parameter PressureDifference dp_nom = 5e4 "nominal pressure difference at w_nom and cmd = 1";
  parameter MassFlowRate w_nom = 1 "nominal mass flow rate at dp_nom and cmd = 1";
  Modelica.Blocks.Interfaces.RealInput cmd annotation(
    Placement(visible = true, transformation(origin = {-100, 70}, extent = {{-20, -20}, {20, 20}}, rotation = 0), iconTransformation(origin = {-46, 90}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));

protected
  final parameter Real kv = w_nom / dp_nom annotation(Evaluate = true);
  
equation
  //liquid coordinates
  m.p = pwh_a.p;
  m.h = pwh_a.h;
  
  //modulated flow
  w = if cmd <= 0 then 1e-6 else kv * dp; //minimal mass flowrate allowed for circuit modeling reasons
  
  hoa = hib;  //no changes in enthalpy
  hob = hia;

end ValveOnOff_TwoPort;