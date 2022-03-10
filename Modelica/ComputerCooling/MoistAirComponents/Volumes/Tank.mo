within ComputerCooling.MoistAirComponents.Volumes;

model Tank
  extends ComputerCooling.MoistAirComponents.BaseClasses.TwoPort_pwhx_OnePort_HP(T(each start=TStart), n = 1);
  ComputerCooling.Media.MoistAir air;
  
  parameter Volume V = 10;
  parameter Pressure pStart = 101325;
  parameter Temperature TStart = 273.15 + 20;
  parameter Real phiStart = 0.5;
  
  Mass m_dry "Dry air mass";
  Mass m_vap "Vapour mass";
  Energy E "Total energy";
  Pressure p "Pressure";

initial equation
  air.p = pStart;
  air.T = TStart;
  air.phi = phiStart;
  
equation

  air.p = pwhx_a.p;
  air.p = pwhx_b.p;
  air.p = p;
  
  m_dry + m_vap = V * air.d;
  m_vap = (m_dry + m_vap) * air.x;
  der(m_dry + m_vap) = wa + wb;
  der(m_vap) = wa * actualStream(pwhx_a.x) + wb * actualStream(pwhx_b.x);
  
  E = (m_dry + m_vap) * (air.h - air.p / air.d);
  der(E) = wa * actualStream(pwhx_a.h) + wb * actualStream(pwhx_b.h)
         + hp.Q_flow[1];
            
  air.T = hp.T[1];
  hoa = air.h;
  hob = air.h;
  xoa = air.x;
  xob = air.x;
  
//TODO: assert for dew
  //assert(air.h <= air.hl, "condensation present in air tank");

end Tank;
