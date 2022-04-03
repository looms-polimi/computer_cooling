within ComputerCooling.Sensors;

model FlowRateSensor_liquid
  extends BaseClasses.base_Sensor(redeclare replaceable model medium=Media.SubCooledWater_Incompressible constrainedby Media.BaseClasses.base_SubCooledWater);

  medium m;
  
  ComputerCooling.Interfaces.pwh pwh_a annotation(
    Placement(visible = true, transformation(origin = {0, 80}, extent = {{-20, -20}, {20, 20}}, rotation = 0), iconTransformation(origin = {0, 80}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  ComputerCooling.Interfaces.pwh pwh_b annotation(
    Placement(visible = true, transformation(origin = {0, -80}, extent = {{-20, -20}, {20, 20}}, rotation = 0), iconTransformation(origin = {0, 80}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));

equation
  m.p = pwh_a.p;
  m.h = inStream(pwh_a.h);
  
  0   = pwh_a.p + pwh_b.p;
  0   = pwh_a.w + pwh_b.w;
  
  pwh_a.h = inStream(pwh_b.h);
  pwh_b.h = inStream(pwh_a.h);
  
  out = pwh_a.w;  //positive entering the sensor

end FlowRateSensor_liquid;