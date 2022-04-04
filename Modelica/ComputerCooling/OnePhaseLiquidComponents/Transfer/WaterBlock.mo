within ComputerCooling.OnePhaseLiquidComponents.Transfer;

model WaterBlock
  ComputerCooling.OnePhaseLiquidComponents.Transfer.Ducts.Tube_1D tube_1D[m](each Dstream = Dstream, each L = L, each W = W, each t = t, each dz = dz, each w_nom = w_nom, each dp_nom = dp_nom, each TStart = TStart, each n = n, each fluidHeats = fluidHeats, 
  redeclare each replaceable record materialRecord = materialRecord,
  redeclare each replaceable model medium = medium) annotation(
    Placement(visible = true, transformation(origin = {0, 0}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));

  parameter Integer m = 5 "array length of the WaterBlock";
  parameter Length Dstream = 0.005 "stream diameter";
  parameter Length L = 1 "stream length";
  parameter Length W = 1 "Wall width";
  parameter Length t = 0.001 "Wall layer thickness";
  parameter Length dz = 0 "height difference (b-a)";
  parameter MassFlowRate w_nom = 0.1 "nominal mass flowrate";
  parameter PressureDifference dp_nom = 1000 "nominal pressure difference";
  parameter Temperature TStart = 273.15 + 20 "initial temperature";
  parameter Integer n = 3 "number of volume lumps (lump 1 is on side a)";
  parameter Boolean fluidHeats = false "stream (nominally) heats the outside";
  
  replaceable record materialRecord = SolidMaterials.Copper 
    constrainedby SolidMaterials.BaseClasses.Base_solid_constant_props;
  replaceable model medium = Media.SubCooledWater_Incompressible;
    
  //
  ComputerCooling.Interfaces.pwh pwh_a annotation(
    Placement(visible = true, transformation(origin = {-120, 0}, extent = {{-20, -20}, {20, 20}}, rotation = 0), iconTransformation(origin = {-120, 0}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  ComputerCooling.Interfaces.pwh pwh_b annotation(
    Placement(visible = true, transformation(origin = {120, 0}, extent = {{-20, -20}, {20, 20}}, rotation = 0), iconTransformation(origin = {120, 0}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  ComputerCooling.Interfaces.hpConnector hpConnector[m](each n=n) annotation(
    Placement(visible = true, transformation(origin = {0, 50}, extent = {{-10, 10}, {10, -10}}, rotation = 0)));
  
  //This class is defined in 3D-ICE modelica library
  //https://github.com/esl-epfl/3d-ice/blob/master/heatsink_plugin/common/libraries/ThermalBlocks.mo
  ThermalBlocks.Connectors.HeatPortMatrix mHP(rows=n, cols=m) annotation(
    Placement(visible = true, transformation(origin = {-2, 86}, extent = {{-10, -10}, {10, 10}}, rotation = 0), iconTransformation(origin = {-1.11022e-16, -80}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
equation
  for i in 1:m loop
    connect(pwh_a, tube_1D[i].pwh_a);
    connect(tube_1D[i].pwh_b, pwh_b);
  end for;
    
  for i in 1:n loop
    for j in 1:m loop
      connect(hpConnector[j].vHP, tube_1D[j].hp);
      connect(mHP.port[i, j], hpConnector[j].mHP[i]);
    end for;
  end for;
  

end WaterBlock;