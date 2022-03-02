within ComputerCooling.OnePhaseLiquidComponents.FlowControl.Pressurisers;

model ExpansionVessel
  ComputerCooling.Interfaces.pwh pwh_a annotation(
    Placement(visible = true, transformation(origin = {-120, 0}, extent = {{-20, -20}, {20, 20}}, rotation = 0), iconTransformation(origin = {-120, 0}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  ComputerCooling.Interfaces.pwh pwh_b annotation(
    Placement(visible = true, transformation(origin = {120, 0}, extent = {{-20, -20}, {20, 20}}, rotation = 0), iconTransformation(origin = {120, 0}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  
  replaceable model medium = Media.SubCooledWater_Incompressible;
  medium m;
  
  parameter Pressure p_nom = 101325 "nominal pressure";
  parameter Volume V = 1 "vessel volume";
  parameter Real liquidRatio_start = 0.5;
  
  Volume V_gas;
  Pressure p_gas;
  Real liquidRatio(start = liquidRatio_start, fixed = true);
  
equation

  m.d * V * der(liquidRatio) = pwh_a.w + pwh_b.w;
  
  V_gas = (1-liquidRatio) * V;
  V_gas * p_gas = (1-liquidRatio_start) * V * p_nom;
  
  pwh_a.p = p_gas;
  pwh_b.p = p_gas;
  m.p = p_gas;
  
  pwh_a.h = inStream(pwh_b.h);
  pwh_b.h = inStream(pwh_a.h);
  m.h = pwh_a.h;
  
  
end ExpansionVessel;
