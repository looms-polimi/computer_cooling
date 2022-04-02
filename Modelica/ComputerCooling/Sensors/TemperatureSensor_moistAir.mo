within ComputerCooling.Sensors;

model TemperatureSensor_moistAir
  extends BaseClasses.base_Sensor(redeclare replaceable model medium=Media.MoistAir);

  medium m;
  ComputerCooling.Interfaces.pwhx pwhx annotation(
    Placement(visible = true, transformation(origin = {0, 80}, extent = {{-20, -20}, {20, 20}}, rotation = 0), iconTransformation(origin = {0, 80}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
equation
  m.p = pwhx.p;
  m.h = pwhx.h;
  m.x = pwhx.x;
  
  pwhx.w = 0;
  pwhx.h = -1;  //meaningless as there is no flow -> no exchange
  pwhx.x = -1;  //^
  
  out * m.cp = inStream(pwhx.h);

end TemperatureSensor_moistAir;