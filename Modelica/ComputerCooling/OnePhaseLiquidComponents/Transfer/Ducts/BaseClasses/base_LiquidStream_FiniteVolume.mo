within ComputerCooling.OnePhaseLiquidComponents.Transfer.Ducts.BaseClasses;

partial model base_LiquidStream_FiniteVolume "strem of incompressible liquid"
  extends OnePhaseLiquidComponents.BaseClasses.TwoPorts_pwh_OnePort_VHP(massStorage=true);

  parameter Length             L          = 1 "stream length";
  parameter Area               Ac         = 5*0.001*0.003+0.005*0.002 "stream cross area";
  parameter Length             dz         = 0 "height difference (b-a)";  
  parameter Length             per        = 5*2*0.003 "stream cross area perimeter";
  parameter MassFlowRate       w_nom      = 0.1 "nominal mass flowrate";
  parameter PressureDifference dp_nom     = 1000 "nominal friction pressure drop";
  parameter Temperature        TStart     = 273.15 + 20 "initial temperature";
  parameter Boolean            fluidHeats = false "stream (nominally) heats the outside";
  
  /* liquid model (one per lump) */
  replaceable model medium = Media.SubCooledWater_Incompressible
              constrainedby Media.BaseClasses.base_SubCooledWater;
  medium m[n];
  
  /* heat transfer coefficient model (one per lump) */
  replaceable model HTCoefficient = HeatTransfer.HeatTransferModels.DittusBoelter
              constrainedby HeatTransfer.BaseClasses.base_HeatTransfer_pwh;
  HTCoefficient HT[n] (redeclare replaceable model medium = medium,
                       each D = Ac/per,                                 //?
                       each fluidHeats = fluidHeats);    
                       
  Temperature Tst[n](each start = TStart,each fixed=true);  
  
  Energy E[n];
  Velocity v "Velocity of fluid in the stream";                    

end base_LiquidStream_FiniteVolume;