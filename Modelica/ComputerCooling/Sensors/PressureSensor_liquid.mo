within ComputerCooling.Sensors;

model PressureSensor_liquid
  extends BaseClasses.base_Sensor(redeclare replaceable model medium=Media.SubCooledWater_Incompressible constrainedby Media.BaseClasses.base_SubCooledWater);

  medium m;
  
  ComputerCooling.Interfaces.pwh pwh annotation(
    Placement(visible = true, transformation(origin = {0, 80}, extent = {{-20, -20}, {20, 20}}, rotation = 0), iconTransformation(origin = {0, 80}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));

  parameter Boolean unitBar = false;
  
equation
  m.p = pwh.p;
  m.h = inStream(pwh.h);
  
  pwh.w = 0;
  pwh.h = -1; //meaningless as there is no flow -> no exchange
  
  out = m.p / 10^(if unitBar then 5 else 0);

end PressureSensor_liquid;