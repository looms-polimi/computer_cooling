within ComputerCooling.HeatTransfer.StreamSeparators.BaseClasses;

partial model Base_StreamSeparator
  ComputerCooling.Interfaces.HeatPortVector hp_in(n = n) annotation(
    Placement(visible = true, transformation(origin = {0, -80}, extent = {{-20, -20}, {20, 20}}, rotation = 0), iconTransformation(origin = {0, -80}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  ComputerCooling.Interfaces.HeatPortVector hp_ext(n = n) annotation(
    Placement(visible = true, transformation(origin = {0, 80}, extent = {{-20, -20}, {20, 20}}, rotation = 0), iconTransformation(origin = {0, 80}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));

  replaceable record materialRecord = SolidMaterials.Copper
              constrainedby SolidMaterials.BaseClasses.Base_solid_constant_props;
  materialRecord material;

  parameter Length  L = 1     "Wall length";
  parameter Length  t = 0.001 "Wall thickness";
  parameter Integer n = 3     "Number of lumps";        // 1 leftmost <---> n rightmost
  parameter Integer l = 5     "Number of layers";       // 1 internal <---> l external
  
  parameter Temperature TStart = 273.15 + 20    "Starting temperature";
  Temperature T[n,l] (each start = TStart, each fixed=true);

end Base_StreamSeparator;