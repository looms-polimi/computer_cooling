within ComputerCooling.Sensors;

model FlowRateSensor_moistAir
  extends BaseClasses.base_Sensor(redeclare replaceable model medium=Media.MoistAir);

  medium m;
  
  ComputerCooling.Interfaces.pwhx pwhx_a annotation(
    Placement(visible = true, transformation(origin = {0, 80}, extent = {{-20, -20}, {20, 20}}, rotation = 0), iconTransformation(origin = {0, 80}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  ComputerCooling.Interfaces.pwhx pwhx_b annotation(
    Placement(visible = true, transformation(origin = {0, -80}, extent = {{-20, -20}, {20, 20}}, rotation = 0), iconTransformation(origin = {0, 80}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));

equation
  m.p = pwhx_a.p;
  m.h = inStream(pwhx_a.h);
  m.x = inStream(pwhx_a.x);
  
  0   = pwhx_a.p + pwhx_b.p;  
  0   = pwhx_a.w + pwhx_b.w;
  
  pwhx_a.h = inStream(pwhx_b.h);
  pwhx_b.h = inStream(pwhx_a.h);
  
  pwhx_a.x = inStream(pwhx_b.x);
  pwhx_b.x = inStream(pwhx_a.x);
  
  out = pwhx_a.w;  //positive entering the sensor

end FlowRateSensor_moistAir;