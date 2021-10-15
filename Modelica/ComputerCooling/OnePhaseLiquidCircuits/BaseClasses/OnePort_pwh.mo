within ComputerCooling.OnePhaseLiquidCircuits.BaseClasses;

partial model OnePort_pwh
  ComputerCooling.Interfaces.pwh pwh annotation(
    Placement(visible = true, transformation(origin = {110, -4}, extent = {{-10, -10}, {10, 10}}, rotation = 0), iconTransformation(origin = {100, -2.44249e-15}, extent = {{-28, -28}, {28, 28}}, rotation = 0)));
protected //?
  parameter Density ro = 1000;
  parameter SpecificHeatCapacity cp = 4186;
  parameter ThermalConductivity lambda = 0.55;
  parameter DynamicViscosity mu = 8.9e-4;

end OnePort_pwh;