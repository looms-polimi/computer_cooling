within ComputerCooling.MoistAirComponents.BaseClasses;

partial model TwoPort_pwhx_OnePort_HP
  ComputerCooling.Interfaces.pwhx pwhx_a annotation(
    Placement(visible = true, transformation(origin = {-120, 0}, extent = {{-20, -20}, {20, 20}}, rotation = 0), iconTransformation(origin = {-120, 0}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  ComputerCooling.Interfaces.pwhx pwhx_b annotation(
    Placement(visible = true, transformation(origin = {120, 0}, extent = {{-20, -20}, {20, 20}}, rotation = 0), iconTransformation(origin = {120, 0}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  ComputerCooling.Interfaces.HeatPortVector hp(n = n) annotation(
    Placement(visible = true, transformation(origin = {-1.9984e-15, -80}, extent = {{-20, -20}, {20, 20}}, rotation = 0), iconTransformation(origin = {0, -80}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));

  parameter Integer n = 3 "number of volume lumps (1 on a side)";

  parameter Boolean pbhi = false "True if convention is pb > pa"; 
  PressureDifference dp;
  
  MassFlowRate wa;
  MassFlowRate wb;
  
  SpecificEnthalpy hia "enthalpy seen from outside on a side";
  SpecificEnthalpy hib "enthalpy seen from outside on b side";
  SpecificEnthalpy hoa "enthalpy presented from inside on a side";
  SpecificEnthalpy hob "enthalpy presented from inside on b side";
  
  MassFraction xia "mass fraction seen from outside on a side";
  MassFraction xib "mass fraction seen from outside on b side";
  MassFraction xoa "mass fraction presented from inside on a side";
  MassFraction xob "mass fraction presented from inside on b side";
  
  parameter Temperature TStart = 273.15 + 20 "Initial temperature";
  Temperature T[n] "Inside temperature";
  Power Qport[n] "power from heat port, positive entering";
  
initial equation
  for i in 1:hp.n loop
    T[i] = TStart;
  end for;
  
equation
  dp  = if pbhi then pwhx_b.p-pwhx_a.p else pwhx_a.p-pwhx_b.p;
  
  wa   = pwhx_a.w;
  wb   = pwhx_b.w;
  
  hia = inStream(pwhx_a.h);
  hib = inStream(pwhx_b.h);
  hoa = pwhx_a.h;
  hob = pwhx_b.h;
  
  xia = inStream(pwhx_a.x);
  xib = inStream(pwhx_b.x);
  xoa = pwhx_a.x;
  xob = pwhx_b.x;
  
  for i in 1:hp.n loop
    T[i]     = hp.T[i];
    Qport[i] = hp.Q_flow[i];
  end for;

end TwoPort_pwhx_OnePort_HP;
