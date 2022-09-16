within ComputerCooling.SolidComponents.StreamConfinement.BaseClasses;

partial model Base_StreamConfinement
  
  ComputerCooling.Interfaces.HeatPortVector hp_in(n = n) annotation(
    Placement(visible = true, transformation(origin = {0, -80}, extent = {{-20, -20}, {20, 20}}, rotation = 0), iconTransformation(origin = {0, -80}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  ComputerCooling.Interfaces.HeatPortVector hp_ext(n = n) annotation(
    Placement(visible = true, transformation(origin = {0, 80}, extent = {{-20, -20}, {20, 20}}, rotation = 0), iconTransformation(origin = {0, 80}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  
  replaceable record material = SolidMaterials.Copper
              constrainedby SolidMaterials.BaseClasses.Base_solid_constant_props;
  
  parameter Length L = 1 "Wall length";
  parameter Length t = 0.001 "Wall thickness";
  parameter Integer n = 3 "Number of lumps, 1 leftmost <---> n rightmost" annotation(
    Evaluate = true);
  parameter Integer m = 5 "Number of layers, 1 internal <---> m external" annotation(
    Evaluate = true);
  
  parameter Temperature TStart = 273.15 + 20 "Starting temperature";
  Temperature T[n, m](each start = TStart, each fixed = true);

end Base_StreamConfinement;