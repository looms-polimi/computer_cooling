within ComputerCooling.MoistAirComponents.Volumes;

model Tank
    extends ComputerCooling.MoistAirComponents.BaseClasses.TwoPort_pwhx_OnePort_HP;
  ComputerCooling.Media.MoistAir air;
  
  parameter Volume V = 10;
  parameter Pressure p_start = 101325;
  parameter Temperature T_start = 273.15 + 20;
  parameter Real phi_start = 0.5;
  
  Mass m_dry "dry air mass";
  Mass m_vap "vapour mass";
  Energy E "TOTAL energy";
  Pressure p "pressure";

initial equation
  air.p = p_start;
  air.T = T_start;
  air.phi = phi_start;
  
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
         + hp.Q_flow;
            
  air.T = hp.T;
  hoa = air.h;
  hob = air.h;
  xoa = air.x;
  xob = air.x;
  
//TODO: assert for dew
  //assert(air.h <= air.hl, "condensation present in air tank");

end Tank;
