within ComputerCooling.MoistAirCircuits.Volumes;

model Plenum
  Modelica.Thermal.HeatTransfer.Interfaces.HeatPort_a hp_in annotation(
    Placement(visible = true, transformation(origin = {0, -70}, extent = {{-10, -10}, {10, 10}}, rotation = 0), iconTransformation(origin = {0, -120}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  Modelica.Thermal.HeatTransfer.Interfaces.HeatPort_a hp_ext annotation(
    Placement(visible = true, transformation(origin = {0, 70}, extent = {{-10, -10}, {10, 10}}, rotation = 0), iconTransformation(origin = {0, 120}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  
  ComputerCooling.Media.MoistAir air;
  
  parameter Volume V = 10;
  parameter Area A = 5;
  parameter Pressure p_start = 101325;
  parameter Temperature T_start = 273.15 + 20;
  parameter Real phi_start = 0.5;
  
  Pressure p;
  Temperature T;
  //MassFraction x;
  
  Mass m_dry;
  Mass m_vap;
  
protected
  parameter Length t;

initial equation
  air.p = p_start;
  air.T = T_start;
  air.phi = phi_start;
  
equation

  air.p = p;
  air.T = T;
  //air.x = x;
  
  m_dry + m_vap = V * air.d;
  m_vap = (m_dry + m_vap) * air.x;
  der(m_dry + m_vap) = 0;
  
  hp_in.Q_flow = 2 * 0.028 * A/t * (hp_in.T - T);
  
  p * V = (V * air.d) * air.R * T;
  (V * air.d) * air.cp * der(T) = hp_in.Q_flow + hp_ext.Q_flow;
  
  hp_ext.Q_flow = 2 * 0.028 * A/t * (hp_ext.T - T);
            
  
//TODO: assert for dew
  //assert(air.h <= air.hl, "condensation present in plenum");

end Plenum;
