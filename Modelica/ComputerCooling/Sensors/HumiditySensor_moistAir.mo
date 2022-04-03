within ComputerCooling.Sensors;

model HumiditySensor_moistAir
  extends BaseClasses.base_Sensor(redeclare replaceable model medium=Media.MoistAir);

  medium m;
  
  ComputerCooling.Interfaces.pwhx pwhx annotation(
    Placement(visible = true, transformation(origin = {0, 80}, extent = {{-20, -20}, {20, 20}}, rotation = 0), iconTransformation(origin = {0, 80}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));

equation
  m.p = pwhx.p;  
  m.h = inStream(pwhx.h);
  m.x = inStream(pwhx.x);
  
  pwhx.w = 0;
  pwhx.h = -1;  //meaningless as there is no flow -> no exchange
  pwhx.x = -1;  //meaningless as there is no flow -> no exchange
  
  out = pwhx.x;  //positive entering the sensor

end HumiditySensor_moistAir;