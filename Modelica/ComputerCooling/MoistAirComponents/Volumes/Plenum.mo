within ComputerCooling.MoistAirComponents.Volumes;

model Plenum
    extends ComputerCooling.MoistAirComponents.BaseClasses.TwoPort_pwhx;
  ComputerCooling.Media.MoistAir air;
  
  Modelica.Thermal.HeatTransfer.Interfaces.HeatPort_a hp_in annotation(
    Placement(visible = true, transformation(origin = {0, -80}, extent = {{-20, -20}, {20, 20}}, rotation = 0), iconTransformation(origin = {0, -120}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  Modelica.Thermal.HeatTransfer.Interfaces.HeatPort_a hp_ext annotation(
    Placement(visible = true, transformation(origin = {0, 80}, extent = {{-20, -20}, {20, 20}}, rotation = 0), iconTransformation(origin = {0, 120}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  
  parameter Volume V = 10;
  parameter Area A = 5;
  parameter Pressure p_start = 101325;
  parameter Temperature T_start = 273.15 + 20;
  parameter Real phi_start = 0.5;
  
  parameter ThermalConductivity lambda = 0.02587 "Thermal conductivity of air at 20°C, 1 atm";
  
  Pressure p;
  Temperature T;
  Mass m_dry;
  Mass m_vap;
  
protected
  parameter Length t = V/A;

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
  der(m_dry + m_vap) = pwhx_a.w + pwhx_b.w;
  der(m_vap) = pwhx_a.w * actualStream(pwhx_a.x) + pwhx_b.w * actualStream(pwhx_b.x);
  
  hp_in.Q_flow = 2 * lambda * A/t * (hp_in.T - T);
  
  (V * air.d) * air.cp * der(T) = pwhx_a.w * actualStream(pwhx_a.h) + pwhx_b.w * actualStream(pwhx_b.h)
                                  + hp_in.Q_flow + hp_ext.Q_flow;
  
  hp_ext.Q_flow = 2 * lambda * A/t * (hp_ext.T - T);
            
  air.T = T;
  hoa = air.h;
  hob = air.h;
  xoa = air.x;
  xob = air.x;
  
//TODO: assert for dew
//assert(air.h <= air.hl, "condensation present in plenum");
end Plenum;
