within ComputerCooling.OnePhaseLiquidComponents.Transfer.Ducts;

model LiquidStream_FiniteVolume

  ComputerCooling.Interfaces.pwh pwh_a annotation(
    Placement(visible = true, transformation(origin = {-120, 0}, extent = {{-20, -20}, {20, 20}}, rotation = 0), iconTransformation(origin = {-120, -2.66454e-15}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  ComputerCooling.Interfaces.pwh pwh_b annotation(
    Placement(visible = true, transformation(origin = {120, 0}, extent = {{-20, -20}, {20, 20}}, rotation = 0), iconTransformation(origin = {120, 0}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  ComputerCooling.Interfaces.vHP surf(n=n) annotation(
    Placement(visible = true, transformation(origin = {0, 80}, extent = {{-20, -20}, {20, 20}}, rotation = 0), iconTransformation(origin = {0, 80}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));

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
  final parameter Real kf(fixed=false) annotation(Evaluate = true);
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
  w_nom = kf*ComputerCooling.Functions.sqrtReg(dp_nom/n);
  
  for i in 1:n loop
    m[i].p = pwh_a.p+i*(pwh_b.p-pwh_a.p)/(n+1);
  end for;
  
end LiquidStream_FiniteVolume;
