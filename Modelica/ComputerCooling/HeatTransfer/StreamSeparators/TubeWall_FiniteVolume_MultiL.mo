within ComputerCooling.HeatTransfer.StreamSeparators;

model TubeWall_FiniteVolume_MultiL
  ComputerCooling.Interfaces.vHP hp_in(n = n) annotation(
    Placement(visible = true, transformation(origin = {0, -80}, extent = {{-20, -20}, {20, 20}}, rotation = 0), iconTransformation(origin = {0, -80}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  ComputerCooling.Interfaces.vHP hp_ext(n = n) annotation(
    Placement(visible = true, transformation(origin = {0, 80}, extent = {{-20, -20}, {20, 20}}, rotation = 0), iconTransformation(origin = {0, 80}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  ComputerCooling.HeatTransfer.StreamSeparators.TubeWall_FiniteVolume_1L tubeWallLayer[l] (each n = n, each L = L, each W = W, each t = t, each TStart = TStart, each material = material) annotation(
    Placement(visible = true, transformation(origin = {0, 0}, extent = {{-30, -30}, {30, 30}}, rotation = 0)));

  parameter Integer n = 3 "Number of lumps";  // 1 leftmost <---> n rightmost
  parameter Integer l = 2 "Number of Layers"; // 1 inner <----> l outer

  replaceable record materialRecord = SolidMaterials.Copper
              constrainedby SolidMaterials.BaseClasses.Base_solid_constant_props;
  materialRecord material;

  parameter Length L = 1 "Layer length";
  parameter Length W = 1 "Layer width";
  parameter Length t = 0.05 "Layer thickness";
  
  parameter Temperature TStart = 273.15 + 20 "Layer starting temperature";
  
equation

  connect(hp_in, tubeWallLayer[1].hp_in);
  
  for i in 1:l-1 loop
    connect (tubeWallLayer[i].hp_ext, tubeWallLayer[i+1].hp_in);
  end for;
  
  connect(tubeWallLayer[l].hp_ext, hp_ext);




end TubeWall_FiniteVolume_MultiL;
