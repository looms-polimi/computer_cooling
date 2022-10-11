within ComputerCooling.IncompressibleLiquidComponents.BaseClasses;

partial model TwoPorts_pwh_OnePort_HP
  ComputerCooling.Interfaces.pwh pwh_a annotation(
    Placement(visible = true, transformation(origin = {-120, 0}, extent = {{-20, -20}, {20, 20}}, rotation = 0), iconTransformation(origin = {-120, -2.66454e-15}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  ComputerCooling.Interfaces.pwh pwh_b annotation(
    Placement(visible = true, transformation(origin = {120, 0}, extent = {{-20, -20}, {20, 20}}, rotation = 0), iconTransformation(origin = {120, 0}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  Modelica.Thermal.HeatTransfer.Interfaces.HeatPort_a hp annotation(
    Placement(visible = true, transformation(origin = {0, -80}, extent = {{-20, -20}, {20, 20}}, rotation = 0), iconTransformation(origin = {0, -60}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));

  parameter Boolean pbhi=false "true if convention is pb>pa";
  parameter Boolean massStorage=false "mass storage exists, if true inheriting models must add a mass balance equation";
  PressureDifference dp "pressure drop according to dphi";

  MassFlowRate w "mass flowrate, positive if entering a";

  SpecificEnthalpy hia "enthalpy seen from outside on a side";
  SpecificEnthalpy hib "enthalpy seen from outside on b side";
  SpecificEnthalpy hoa "enthalpy presented from inside on a side";
  SpecificEnthalpy hob "enthalpy presented from inside on b side";

  Temperature T "Inside temperature";
  Power Qport "power from heat port, positive entering";

equation
  dp    = if pbhi then pwh_b.p-pwh_a.p else pwh_a.p-pwh_b.p;
  if not massStorage then
     pwh_a.w+pwh_b.w = 0;
  end if; 
  
  w     = pwh_a.w;
  hia   = inStream(pwh_a.h);
  hib   = inStream(pwh_b.h);
  hoa   = pwh_a.h;
  hob   = pwh_b.h;
  
  T     = hp.T;
  Qport = hp.Q_flow;

  
end TwoPorts_pwh_OnePort_HP;