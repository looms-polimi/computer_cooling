within ComputerCooling.IncompressibleLiquidComponents.WaterBlocks;

model WaterBlock_GenericSection_uniform_w
  extends IncompressibleLiquidComponents.BaseClasses.TwoPorts_pwh_OnePort_MHP(massStorage = true, rows = n, cols = m);
  
  ComputerCooling.IncompressibleLiquidComponents.Ducts.LiquidStream_FiniteVolume_GenericSection channels[m](redeclare each model medium = medium, redeclare each model HTCoefficient = HTCoefficient,each  L = L, each n=n, each Ac=Ac/m,each per=per/m, each TStart = TStart,each  dp_nom = dp_nom, each fluidHeats = false, each  w_nom = w_nom / m) annotation(
    Placement(visible = true, transformation(origin = {0, 0}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));

  parameter Integer            m          = 4 "number of liquid channels";
  parameter Length             L          = 0.04 "stream length";
  parameter Area               Ac         = 0.01*0.002+5*0.001*0.003 "stream cross area";
  parameter Length             per        = 0.01+5*2*0.003 "stream cross area perimeter";
  parameter MassFlowRate       w_nom      = 0.5/60 "nominal mass flowrate";
  parameter PressureDifference dp_nom     = 10000 "nominal pressure difference";
  parameter Temperature        TStart     = 273.15 + 20 "initial temperature";
  parameter Integer            n          = 5 "number of volume lumps (lump 1 is on side a)";
  parameter Boolean            fluidHeats = false "stream (nominally) heats the outside";
  
  replaceable record materialRecord = SolidMaterials.Copper constrainedby SolidMaterials.BaseClasses.Base_solid_constant_props;
  replaceable model medium = Media.SubCooledWater_Incompressible;
  replaceable model HTCoefficient = HeatTransfer.HeatTransferModels.DittusBoelter;

equation
  for i in 1:m loop
    connect(pwh_a, channels[i].pwh_a);
    connect(channels[i].pwh_b, pwh_b);
  end for;
  for i in 1:n loop
    for j in 1:m loop
      connect(channels[j].surf.port[i], surf.port[i, j]);
    end for;
  end for;
  annotation(
    Icon(graphics = {Bitmap(extent = {{-100, -100}, {100, 100}}, imageSource = "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")}));
end WaterBlock_GenericSection_uniform_w;
