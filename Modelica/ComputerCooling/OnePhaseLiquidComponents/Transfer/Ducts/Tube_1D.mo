within ComputerCooling.OnePhaseLiquidComponents.Transfer.Ducts;

model Tube_1D

  ComputerCooling.Interfaces.pwh pwh_a annotation(
    Placement(visible = true, transformation(origin = {-120, -40}, extent = {{-20, -20}, {20, 20}}, rotation = 0), iconTransformation(origin = {-120, 0}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  ComputerCooling.Interfaces.pwh pwh_b annotation(
    Placement(visible = true, transformation(origin = {120, -40}, extent = {{-20, -20}, {20, 20}}, rotation = 0), iconTransformation(origin = {120, 0}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  ComputerCooling.Interfaces.vHP hp(n = n) annotation(
    Placement(visible = true, transformation(origin = {0, 80}, extent = {{-20, -20}, {20, 20}}, rotation = 0), iconTransformation(origin = {-2, 88}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));

  ComputerCooling.HeatTransfer.StreamSeparators.TubeWall_FiniteVolume_1L wall_1L(L = L, W = W, t = t, n = n, TStart = TStart) annotation(
    Placement(visible = true, transformation(origin = {0, 20}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  ComputerCooling.OnePhaseLiquidComponents.Transfer.Ducts.LiquidStream_FiniteVolume liquidStream(Dstream = Dstream, L = L, dz = dz, w_nom = w_nom, dp_nom = dp_nom, TStart = TStart, n = n, fluidHeats = fluidHeats) annotation(
    Placement(visible = true, transformation(origin = {0, -40}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));

  parameter Length             Dstream    = 0.05 "stream diameter";
  parameter Length             L          = 10 "stream length";
  parameter Length             W          = 1 "Layer width";
  parameter Length             t          = 0.05 "Layer thickness";
  parameter Length             dz         = 0 "height difference (b-a)";  
  parameter MassFlowRate       w_nom      = 0.1 "nominal mass flowrate";
  parameter PressureDifference dp_nom     = 1000 "nominal pressure difference";  
  parameter Temperature        TStart     = 273.15 + 20 "initial temperature";
  parameter Integer            n          = 3 "number of volume lumps (lump 1 is on side a)";
  parameter Boolean            fluidHeats = false "stream (nominally) heats the outside";
  
equation
  connect(pwh_a, liquidStream.pwh_a) annotation(
    Line(points = {{-120, -40}, {-24, -40}}));
  connect(liquidStream.pwh_b, pwh_b) annotation(
    Line(points = {{24, -40}, {120, -40}}));
  connect(liquidStream.surf, wall_1L.hp_in) annotation(
    Line(points = {{0, -24}, {0, 4}}));
  connect(wall_1L.hp_ext, hp) annotation(
    Line(points = {{0, 36}, {0, 80}}));
end Tube_1D;
