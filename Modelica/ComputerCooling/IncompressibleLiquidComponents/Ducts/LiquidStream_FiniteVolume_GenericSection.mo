within ComputerCooling.IncompressibleLiquidComponents.Ducts;

model LiquidStream_FiniteVolume_GenericSection
  extends BaseClasses.base_LiquidStream_FiniteVolume;
  

  Mass M(stateSelect=StateSelect.avoid);
 
 
protected
  final parameter Real kf = w_nom/ComputerCooling.Functions.sqrtReg(dp_nom);
  final parameter Area All = per * L/n "lump lateral area";
  final parameter Volume Vtot = Ac * L "total volume";
  final parameter Volume Vl = Vtot/n "lump volume";
  Density davg;
  
equation
  //pi-po = w^2/kf+ro*g*dz
  w      =  kf*ComputerCooling.Functions.sqrtReg(dp-davg*Modelica.Constants.g_n*dz);
  davg   =  sum(m.d)/n;
  v      =  w/davg/Ac;
  M      =  Vtot*davg;
 
  //Mass balance equation
  der(M) =  pwh_a.w+pwh_b.w;

  /* linear pressure profile*/
  m[1].p = pwh_a.p-0.5*dp/n;
  for i in 2:n-1 loop
      m[i].p = m[i-1].p-dp/n;
  end for;
  m[n].p = pwh_b.p+0.5*dp/n;

  for i in 1:n loop
    E[i]                = M/n*m[i].e;
    Tst[i]              = m[i].T;
    HT[i].p             = m[i].p;
    HT[i].h             = m[i].h;
    HT[i].w             = abs(w);
    Qport[i] = HT[i].gamma*gamma_corr*All*(T[i]-Tst[i]);
  end for; 
  
  der(E[1]) =  pwh_a.w*actualStream(pwh_a.h)   
              -w*(if w>0 then m[1].h else m[2].h)
              +Qport[1];
                
  for i in 2:n-1 loop
    der(E[i]) =  w*(if w>0 then m[i-1].h-m[i].h else m[i].h-m[i+1].h)
                +Qport[i];
  end for;
  
  der(E[n]) =  pwh_b.w*actualStream(pwh_b.h)
              +w*(if w>0 then m[n-1].h else m[n].h)
              +Qport[n];
              
  pwh_a.h = m[1].h;   //hoa
  pwh_b.h = m[n].h;   //hob

annotation(
    Icon(graphics = {Bitmap(origin = {0, 22}, extent = {{-100, -55}, {100, 55}}, imageSource = "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")}));
end LiquidStream_FiniteVolume_GenericSection;