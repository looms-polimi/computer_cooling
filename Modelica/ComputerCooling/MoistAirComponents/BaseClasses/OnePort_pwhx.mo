within ComputerCooling.MoistAirComponents.BaseClasses;

partial model OnePort_pwhx
  ComputerCooling.Interfaces.pwhx pwhx_a annotation(
    Placement(visible = true, transformation(origin = {120, 0}, extent = {{-20, -20}, {20, 20}}, rotation = 0), iconTransformation(origin = {100, 1.11022e-16}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));

  replaceable model medium = ComputerCooling.Media.MoistAir;
  medium air;

end OnePort_pwhx;
