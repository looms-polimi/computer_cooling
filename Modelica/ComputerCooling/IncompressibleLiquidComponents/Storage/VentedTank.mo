within ComputerCooling.IncompressibleLiquidComponents.Storage;

model VentedTank
  extends IncompressibleLiquidComponents.BaseClasses.TwoPorts_pwh_OnePort_HP(massStorage = true);
  medium m;
  parameter Volume V = 0.01 "Tank volume";
  parameter Length H = 0.3 "Tank height";
  parameter Temperature Tstart = 273.15 + 20 "Liquid starting temperature";
  parameter Length lstart = 0.15 "Starting level of liquid inside the tank";
  parameter Boolean p_is_absolute = true;
  Length l(start = lstart, fixed = true, stateSelect = StateSelect.always);
  Temperature T(start = Tstart, fixed = true, stateSelect = StateSelect.always);
  Mass M(stateSelect = StateSelect.never);
  Energy E(stateSelect = StateSelect.never);
  parameter Real k_spill = 1000;
  MassFlowRate w_spill "Mass flow rate wasted in spill event";
protected
  final parameter Area A = V / H;
equation
  m.p = pwh_a.p;
  m.T = T;
  dp = 0;
  m.p = m.d * Modelica.Constants.g_n * l + (if p_is_absolute then 101325 else 0);
  w_spill = if l <= H then 0 else k_spill * (l - H);
  M = A * l * m.d;
  E = M * m.e;
// mass equation
  der(M) = pwh_a.w + pwh_b.w - w_spill;
// net energy equation neglecting the p/d term in enthslèy (i.e., e=h=c*T)
// RATIONALE
// OSS         : der(M*e)            = der(M)*e+M*der(e)
// eq_E        : der(M*e)            = sum(wi*hi)+sum(Qi)
// eq_M        : der(M)              = sum(wi)
// eq_E-h*eq_M : der(M*e) - h*der(M) = sum(wi*hi)+sum(Qi)-h*sum(wi)
// hence
//               der(M*e) - (e+p/d)*der(M) = sum(wi*(hi-h))+sum(Qi)
//               der(M*e) - e*der(M)-p/d*der(M) = sum(wi*(hi-h))+sum(Qi)
//
//               M*der(e)  = p/d*sum(wi)+sum(wi*(hi-h))+sum(Qi)
//
//               M*der(e)  = sum(wi*(hi-h+p/d))+sum(Qi)
//
// der(M*e)-e*der(M) = sum(wi*(hi-h))+sum(Qi) = M*der(e)
  M * der(m.e) = pwh_a.w * (actualStream(pwh_a.h) - m.h + m.p / m.d) + pwh_b.w * (actualStream(pwh_b.h) - m.h + m.p / m.d) + Qport;
//enthalpy
  hoa = m.h;
  hob = m.h;
  assert(l > 0, "Liquid level <= 0 not allowed in VentedTank");
//still gives problems
  annotation(
    Icon(graphics = {Bitmap(origin = {0, 10}, extent = {{-100, -90}, {100, 90}}, imageSource = "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")}));
end VentedTank;