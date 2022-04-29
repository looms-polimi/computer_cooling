within ComputerCooling.OnePhaseLiquidComponents.BaseClasses;

partial model TwoPorts_pwh_OnePort_HP
  ComputerCooling.Interfaces.pwh pwh_a annotation(
    Placement(visible = true, transformation(origin = {-120, 0}, extent = {{-20, -20}, {20, 20}}, rotation = 0), iconTransformation(origin = {-120, -2.66454e-15}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  ComputerCooling.Interfaces.pwh pwh_b annotation(
    Placement(visible = true, transformation(origin = {120, 0}, extent = {{-20, -20}, {20, 20}}, rotation = 0), iconTransformation(origin = {120, 0}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  ComputerCooling.Interfaces.HeatPortVector hp(n = n) annotation(
    Placement(visible = true, transformation(origin = {0, -80}, extent = {{-20, -20}, {20, 20}}, rotation = 0), iconTransformation(origin = {0, -60}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));

  parameter Integer n = 3 "number of volume lumps (1 on a side)";

  parameter Boolean pbhi=false "true if convention is pb>pa";
  PressureDifference dp "pressure drop according to dphi";

  MassFlowRate w "mass flowrate, positive if entering a";

  SpecificEnthalpy hia "enthalpy seen from outside on a side";
  SpecificEnthalpy hib "enthalpy seen from outside on b side";
  SpecificEnthalpy hoa "enthalpy presented from inside on a side";
  SpecificEnthalpy hob "enthalpy presented from inside on b side";

  parameter Temperature TStart = 273.15 + 20 "Initial temperature";
  Temperature T[n] "Inside temperature";
  Power Qport[n] "power from heat port, positive entering";
  
initial equation
  for i in 1:hp.n loop
    T[i] = TStart;
  end for;
  
equation
  dp    = if pbhi then pwh_b.p-pwh_a.p else pwh_a.p-pwh_b.p;
  0     = pwh_a.w+pwh_b.w;
  w     = pwh_a.w;
  hia   = inStream(pwh_a.h);
  hib   = inStream(pwh_b.h);
  hoa   = pwh_a.h;
  hob   = pwh_b.h;
  
  for i in 1:hp.n loop
    T[i]     = hp.port[i].T;
    Qport[i] = hp.port[i].Q_flow;
  end for;
  
end TwoPorts_pwh_OnePort_HP;
