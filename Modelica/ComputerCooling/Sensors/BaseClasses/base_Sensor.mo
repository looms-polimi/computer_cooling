within ComputerCooling.Sensors.BaseClasses;

partial model base_Sensor
  replaceable model medium = Media.SubCooledWater_Incompressible;
  Modelica.Blocks.Interfaces.RealOutput out annotation(
    Placement(visible = true, transformation(origin = {120, 0}, extent = {{-20, -20}, {20, 20}}, rotation = 0), iconTransformation(origin = {120, 0}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
equation

end base_Sensor;