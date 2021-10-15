within ComputerCooling.OnePhaseLiquidCircuits.Storage;

model Header
  extends OnePhaseLiquidCircuits.BaseClasses.TwoPorts_pwh_OnePort_HP(T(start=Tstart));
  replaceable model medium=Media.SubCooledWater_Incompressible;
  parameter Volume V=0.1;
  parameter Temperature Tstart=273.15+20;
  medium m;
equation
  dp = 0;
  m.p = pwh_a.p;
  m.T = T;
  
  der(V*m.d*m.e) =  pwh_a.w*actualStream(pwh_a.h)
                   +pwh_b.w*actualStream(pwh_b.h)
                   +Qport;
  hoa = m.h;
  hob = m.h;
end Header;