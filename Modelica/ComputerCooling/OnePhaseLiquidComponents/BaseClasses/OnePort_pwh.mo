within ComputerCooling.IncompressibleLiquidComponents.BaseClasses;

partial model OnePort_pwh
  ComputerCooling.Interfaces.pwh pwh_a annotation(
    Placement(visible = true, transformation(origin = {110, -4}, extent = {{-10, -10}, {10, 10}}, rotation = 0), iconTransformation(origin = {120, -2.66454e-15}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  
  replaceable model medium = Media.SubCooledWater_Incompressible;
  medium m;
  
end OnePort_pwh;

