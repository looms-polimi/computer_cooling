within ComputerCooling.Sensors;

model TemperatureSensor_liquid
  extends BaseClasses.base_Sensor(redeclare replaceable model medium=Media.SubCooledWater_Incompressible constrainedby Media.BaseClasses.base_SubCooledWater);

  medium m;
  ComputerCooling.Interfaces.pwh pwh annotation(
    Placement(visible = true, transformation(origin = {0, 80}, extent = {{-20, -20}, {20, 20}}, rotation = 0), iconTransformation(origin = {0, 80}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
equation
  m.p = pwh.p;
  m.h = pwh.h;
  
  pwh.w = 0;
  pwh.h = -1; //meaningless as there is no flow -> no exchange
  
  out * m.c = inStream(pwh.h);

end TemperatureSensor_liquid;