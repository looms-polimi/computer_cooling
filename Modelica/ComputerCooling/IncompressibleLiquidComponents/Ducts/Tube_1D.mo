within ComputerCooling.IncompressibleLiquidComponents.Ducts;

model Tube_1D
  extends IncompressibleLiquidComponents.BaseClasses.TwoPorts_pwh_OnePort_VHP(massStorage = true);
  
  ComputerCooling.HeatTransfer.StreamSeparators.TubeWall_FiniteVolume_1L wall_1L(L = L, TStart = TStart, W = W, n = n, t = t) annotation(
    Placement(visible = true, transformation(origin = {0, -38}, extent = {{-20, 20}, {20, -20}}, rotation = 0)));

  
  ComputerCooling.IncompressibleLiquidComponents.Ducts.LiquidStream_FiniteVolume_Cylindrical liquidStream(L = L, D=D, w_nom = w_nom, dp_nom = dp_nom, TStart = TStart, n = n, fluidHeats = fluidHeats, dz=dz, gamma_corr=gamma_corr,
  redeclare replaceable model medium = medium,
  redeclare replaceable model HTCoefficient = HTCoefficient) annotation(
    Placement(visible = true, transformation(origin = {0, 0}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));

  parameter Length             D          = 0.005 "stream diameter";
  parameter Length             L          = 1 "stream length";
  parameter Length             W          = 1 "Wall width";
  parameter Length             t          = 0.001 "Wall layer thickness";
  parameter Length             dz         = 0 "height difference (b-a)";  
  parameter MassFlowRate       w_nom      = 0.1 "nominal mass flowrate";
  parameter PressureDifference dp_nom     = 1000 "nominal pressure difference";  
  parameter Temperature        TStart     = 273.15 + 20 "initial temperature";
  parameter Integer            n          = 3 "number of volume lumps (lump 1 is on side a)";
  parameter Boolean            fluidHeats = false "stream (nominally) heats the outside";
  parameter Real               gamma_corr = 1 "multiplicative correction on ccht";
  
  replaceable record materialRecord = SolidMaterials.Copper 
    constrainedby SolidMaterials.BaseClasses.Base_solid_constant_props;
  replaceable model medium = Media.SubCooledWater_Incompressible;
  replaceable model HTCoefficient = HeatTransfer.HeatTransferModels.DittusBoelter;

equation
  connect(pwh_a, liquidStream.pwh_a) annotation(
    Line(points = {{-120, 0}, {-24, 0}}));
  connect(liquidStream.pwh_b, pwh_b) annotation(
    Line(points = {{24, 0}, {120, 0}}));
  connect(surf, wall_1L.hp_ext) annotation(
    Line(points = {{0, -80}, {0, -54}}));
  connect(wall_1L.hp_in, liquidStream.surf) annotation(
    Line(points = {{0, -22}, {0, -12}}, color = {191, 0, 0}));
  annotation(
    Icon(graphics = {Bitmap(origin = {0, 24}, extent = {{-100, -75}, {100, 75}}, imageSource = "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")}));
end Tube_1D;