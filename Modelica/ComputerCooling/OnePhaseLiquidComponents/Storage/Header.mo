within ComputerCooling.OnePhaseLiquidComponents.Storage;

model Header
  extends OnePhaseLiquidComponents.BaseClasses.TwoPorts_pwh_OnePort_HP(T(start=Tstart));
  
  replaceable model medium = Media.SubCooledWater_Incompressible;
  medium m;
  
  parameter Volume V=0.1;
  parameter Temperature Tstart=273.15+20;
  
equation
  //liquid coordinates
  m.p = pwh_a.p;
  m.T = T;
  
  dp = 0; //no pressure drops
  
  //energy equations (heatflow)
  der(V*m.d*m.e) =  pwh_a.w*actualStream(pwh_a.h)
                   +pwh_b.w*actualStream(pwh_b.h)
                   +Qport;
  
  //enthalpy
  hoa = m.h;
  hob = m.h;
end Header;