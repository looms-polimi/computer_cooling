within ComputerCooling.OnePhaseLiquidComponents.FlowControl.Pressurisers;

model PressuriserIdeal
  ComputerCooling.Interfaces.pwh pwh_a annotation(
    Placement(visible = true, transformation(origin = {-110, 0}, extent = {{-10, -10}, {10, 10}}, rotation = 0), iconTransformation(origin = {-120, 0}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  ComputerCooling.Interfaces.pwh pwh_b annotation(
    Placement(visible = true, transformation(origin = {110, 0}, extent = {{-10, -10}, {10, 10}}, rotation = 0), iconTransformation(origin = {120, 0}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));

  parameter Pressure p = 101325;
  
equation
  //pressure imposed via parameter
  pwh_a.p = p;
  pwh_b.p = p;
  
  //enthalpy
  pwh_a.h = inStream(pwh_b.h);
  pwh_b.h = inStream(pwh_a.h);

end PressuriserIdeal;