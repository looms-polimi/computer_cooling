within ComputerCooling.OnePhaseLiquidComponents.Transfer.Ducts;

model LiquidStream_FiniteVolume

  ComputerCooling.Interfaces.pwh pwh_a annotation(
    Placement(visible = true, transformation(origin = {-120, 0}, extent = {{-20, -20}, {20, 20}}, rotation = 0), iconTransformation(origin = {-120, -2.66454e-15}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  ComputerCooling.Interfaces.pwh pwh_b annotation(
    Placement(visible = true, transformation(origin = {120, 0}, extent = {{-20, -20}, {20, 20}}, rotation = 0), iconTransformation(origin = {120, 0}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  ComputerCooling.Interfaces.vHP surf(n=n) annotation(
    Placement(visible = true, transformation(origin = {0, 80}, extent = {{-20, -20}, {20, 20}}, rotation = 0), iconTransformation(origin = {0, 120}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));

  parameter Length             Dstream    = 0.05 "stream diameter";
  parameter Length             L          = 10 "stream length";
  parameter Length             dz         = 0 "height difference (b-a)";  
  parameter MassFlowRate       w_nom      = 0.1 "nominal mass flowrate";
  parameter PressureDifference dp_nom     = 1000 "nominal pressure difference";  
  parameter Temperature        TStart     = 273.15 + 20 "initial temperature";
  parameter Integer            n          = 3 "number of volume lumps (lump 1 is on side a)";
  parameter Boolean            fluidHeats = false "stream (nominally) heats the outside";
  
  /* liquid model (one per lump) */
  replaceable model medium = Media.SubCooledWater_Incompressible
              constrainedby Media.BaseClasses.base_SubCooledWater;
  medium m[n];
  
  /* heat transfer coefficient model (one per lump) */
  replaceable model HTCoefficient = HeatTransfer.HeatTransferModels.DittusBoelter
              constrainedby HeatTransfer.BaseClasses.base_HeatTransfer_pwh;
  HTCoefficient HT[n] (redeclare model medium = medium,
                       each D = Dstream,
                       each fluidHeats = fluidHeats);
                       
  Temperature T[n](each start = TStart,each fixed=true);
  Mass M[n];
  Energy E[n];
  MassFlowRate wl_a[n],wl_b[n] "loop flowrates on a and b facing side (+ entering)";

protected
//  final parameter Real kf(fixed=false) annotation(Evaluate = true);
  final parameter Real kf = w_nom^2/dp_nom * n;
  final parameter Area Ac = Modelica.Constants.pi * (Dstream/2)^2 "cross area";
  final parameter Area All = Modelica.Constants.pi * Dstream * L/n "lump lateral area";
  final parameter Volume Vl = Ac * L/n "lump volume";
  
equation
  for i in 1:n loop
    M[i]           = Vl*m[i].d;
    E[i]           = M[i]*m[i].e;
    T[i]           = m[i].T;
    HT[i].p        = m[i].p;
    HT[i].h        = m[i].h;
    HT[i].w        = 0.5*abs(wl_a[i]-wl_b[i]);
    surf.Q_flow[i] = HT[i].gamma*All*(surf.T[i]-T[i]);
  end for; 
  
  pwh_a.w   =  wl_a[1];
  pwh_a.h   =  m[1].h;
  
  wl_a[1]   =  kf*ComputerCooling.Functions.sqrtReg(pwh_a.p-m[1].p);
  wl_b[1]   =  kf*ComputerCooling.Functions.sqrtReg(m[2].p-m[1].p);
  
  der(M[1]) =  wl_a[1]+wl_b[1];
  der(E[1]) =  wl_a[1]*actualStream(pwh_a.h)
              +wl_b[1]*(if wl_b[1]>0 then m[2].h else m[1].h)
              +surf.Q_flow[1];
                
  for i in 2:n-1 loop
    wl_a[i]   =  kf*ComputerCooling.Functions.sqrtReg(m[i-1].p-m[i].p);
    wl_b[i]   = -wl_a[i+1];//kf*ComputerCooling.Functions.sqrtReg(m[i+1].p-m[i].p);
    der(M[i]) =  wl_a[i]+wl_b[i];
    der(E[i]) =  wl_a[i]*(if wl_a[i]>0 then m[i-1].h else m[i].h)
                +wl_b[i]*(if wl_b[i]>0 then m[i+1].h else m[i].h)
                +surf.Q_flow[i];
  end for;
  
  pwh_b.w   =  wl_b[n];
  pwh_b.h   =  m[n].h;
  
  wl_a[n]   =  kf*ComputerCooling.Functions.sqrtReg(m[n-1].p-m[n].p);
  wl_b[n]   =  kf*ComputerCooling.Functions.sqrtReg(pwh_b.p-m[n].p);
  
  der(M[n]) =  wl_a[n]+wl_b[n];
  der(E[n]) =  wl_a[n]*(if wl_a[n]>0 then m[n-1].h else m[n].h)
              +wl_b[n]*actualStream(pwh_b.h)
              +surf.Q_flow[n];
                

initial equation
//  w_nom = kf*ComputerCooling.Functions.sqrtReg(dp_nom/n);
  
  for i in 1:n loop
    surf.T[i] = TStart;
  end for;

  
annotation(
    Icon(graphics = {Bitmap(origin = {0, 42}, extent = {{-100, -55}, {100, 55}}, imageSource = "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")}));
end LiquidStream_FiniteVolume;
