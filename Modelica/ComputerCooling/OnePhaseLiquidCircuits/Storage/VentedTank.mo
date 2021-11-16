within ComputerCooling.OnePhaseLiquidCircuits.Storage;

model VentedTank
  Interfaces.pwh pwh_a annotation(
    Placement(visible = true, transformation(origin = {-118, -2}, extent = {{-10, -10}, {10, 10}}, rotation = 0), iconTransformation(origin = {-118, -2}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Interfaces.pwh pwh_b annotation(
    Placement(visible = true, transformation(origin = {140, 4}, extent = {{-10, -10}, {10, 10}}, rotation = 0), iconTransformation(origin = {140, 4}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Thermal.HeatTransfer.Interfaces.HeatPort_a hp annotation(
    Placement(visible = true, transformation(origin = {-2, -62}, extent = {{-10, -10}, {10, 10}}, rotation = 0), iconTransformation(origin = {-36, -44}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  
  replaceable model medium = Media.SubCooledWater_Incompressible;
  medium m;
  
  parameter Volume V = 1 "Tank volume";
  parameter Length H = 0.1 "Tank height";
  parameter Temperature Tstart=273.15+20 "Liquid starting temperature";
  
  parameter Length lstart = 0.05;
  Length l(start = lstart, fixed = true);
  
  Temperature T(start = Tstart, fixed = true);
  
  parameter Real k_spill = 1000;
  MassFlowRate w_spill "Mass flow rate wasted in spill event";
  Real some = pwh_a.w + pwh_b.w - w_spill;
  
  protected
    final parameter Area A = V/H;
equation
  //liquid coordinates
  m.p = pwh_a.p;
  m.p = pwh_b.p;
  m.T = hp.T;
  
  m.p = m.d * Modelica.Constants.g_n * l;
  
  w_spill = if l <= H then 0 else k_spill * (l - H);
  
  //energy equations (heatflow)
  der(A*l*m.d*m.e) =  pwh_a.w*actualStream(pwh_a.h) +
                      pwh_b.w*actualStream(pwh_b.h) +
                      hp.Q_flow
                      - w_spill * m.h;
  der(A*l*m.d) = pwh_a.w + pwh_b.w - w_spill;
  
  //enthalpy
  pwh_a.h = m.h;
  pwh_b.h = m.h;
  
  T = hp.T;
  
//  assert(l <= 0, "Liquid level <= 0 not allowed in VentedTank");  //still gives problems
  
end VentedTank;