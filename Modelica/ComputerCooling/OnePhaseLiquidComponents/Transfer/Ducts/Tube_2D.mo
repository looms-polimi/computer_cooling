within ComputerCooling.OnePhaseLiquidComponents.Transfer.Ducts;

model Tube_2D

  ComputerCooling.Interfaces.pwh pwh_a annotation(
    Placement(visible = true, transformation(origin = {-120, -40}, extent = {{-20, -20}, {20, 20}}, rotation = 0), iconTransformation(origin = {-120, 0}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  ComputerCooling.Interfaces.pwh pwh_b annotation(
    Placement(visible = true, transformation(origin = {120, -40}, extent = {{-20, -20}, {20, 20}}, rotation = 0), iconTransformation(origin = {120, 0}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  ComputerCooling.Interfaces.vHP hp(n = n) annotation(
    Placement(visible = true, transformation(origin = {0, 80}, extent = {{-20, -20}, {20, 20}}, rotation = 0), iconTransformation(origin = {0, 120}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));

  ComputerCooling.HeatTransfer.StreamSeparators.TubeWall_FiniteVolume_MultiL wall_multiL(L = L, W = W, t = t, TStart = TStart, n = n, l = l,
  redeclare replaceable record materialRecord = materialRecord) annotation(
    Placement(visible = true, transformation(origin = {0, 20}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  ComputerCooling.OnePhaseLiquidComponents.Transfer.Ducts.LiquidStream_FiniteVolume liquidStream(Dstream = Dstream, L = L, dz = dz, w_nom = w_nom, dp_nom = dp_nom, TStart = TStart, n = n, fluidHeats = fluidHeats,
  redeclare replaceable model medium = medium) annotation(
    Placement(visible = true, transformation(origin = {0, -40}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));

//
  parameter Length             Dstream    = 0.005 "stream diameter";
  parameter Length             L          = 1 "stream length";
  parameter Length             W          = 1 "Wall width";
  parameter Length             t          = 0.001 "Wall thickness";
  parameter Length             dz         = 0 "height difference (b-a)";  
  parameter MassFlowRate       w_nom      = 0.1 "nominal mass flowrate";
  parameter PressureDifference dp_nom     = 1000 "nominal pressure difference";  
  parameter Temperature        TStart     = 273.15 + 20 "initial temperature";
  parameter Integer            n          = 3 "number of volume lumps (lump 1 is on side a)";
  parameter Integer            l          = 5 "Number of layers";   // 1 innermost <---> l outermost
  parameter Boolean            fluidHeats = false "stream (nominally) heats the outside";
  
  replaceable record materialRecord = SolidMaterials.Copper 
    constrainedby SolidMaterials.BaseClasses.Base_solid_constant_props;
  replaceable model medium = Media.SubCooledWater_Incompressible;

equation
  connect(pwh_a, liquidStream.pwh_a) annotation(
    Line(points = {{-120, -40}, {-24, -40}}));
  connect(liquidStream.pwh_b, pwh_b) annotation(
    Line(points = {{24, -40}, {120, -40}}));
  connect(liquidStream.surf, wall_multiL.hp_in) annotation(
    Line(points = {{0, -24}, {0, 4}}));
  connect(wall_multiL.hp_ext, hp) annotation(
    Line(points = {{0, 36}, {0, 80}}));
annotation(
    Icon(graphics = {Bitmap(origin = {0, 24}, extent = {{-100, -75}, {100, 75}}, imageSource = "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")}, coordinateSystem(extent = {{-200, -125}, {200, 125}})),
    Diagram(coordinateSystem(extent = {{-200, -125}, {200, 125}})));
end Tube_2D;