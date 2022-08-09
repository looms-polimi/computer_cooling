within ComputerCooling.IncompressibleLiquidComponents.BaseClasses;

partial model TwoPorts_pwh_OnePort_MHP
  ComputerCooling.Interfaces.pwh pwh_a annotation(
    Placement(visible = true, transformation(origin = {-120, 0}, extent = {{-20, -20}, {20, 20}}, rotation = 0), iconTransformation(origin = {-120, -2.66454e-15}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  ComputerCooling.Interfaces.pwh pwh_b annotation(
    Placement(visible = true, transformation(origin = {120, 0}, extent = {{-20, -20}, {20, 20}}, rotation = 0), iconTransformation(origin = {120, 0}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  ComputerCooling.Interfaces.HeatPortMatrix surf(rows=rows, cols=cols) annotation(
    Placement(visible = true, transformation(origin = {0, -80}, extent = {{-20, -20}, {20, 20}}, rotation = 0), iconTransformation(origin = {0, -60}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));

  parameter Integer rows = 4 "number of rows";
  parameter Integer cols = 4 "number of columns";
  
  parameter Boolean pbhi=false "true if convention is pb>pa";
  parameter Boolean massStorage=false "mass storage exists, if true inheriting models must add a mass balance equation";
  PressureDifference dp "pressure drop according to dphi";

  MassFlowRate w "mass flowrate, positive if entering a";

  SpecificEnthalpy hia "enthalpy seen from outside on a side";
  SpecificEnthalpy hib "enthalpy seen from outside on b side";
  SpecificEnthalpy hoa "enthalpy presented from inside on a side";
  SpecificEnthalpy hob "enthalpy presented from inside on b side";

  Temperature T[rows] "Inside temperature";
  Power Qport[rows] "power from heat port, positive entering";
  
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
  
  
  for i in 1:surf.rows loop
    for j in 1:surf.cols loop
    T[i] = surf.port[i,j].T;
    Qport[i] = surf.port[i,j].Q_flow; 
    end for;
  end for;
 
  for i in 1:surf.rows loop
    Qport[i] = sum(surf.port[i,j].Q_flow for j in 1:surf.cols);
  end for;
  

end TwoPorts_pwh_OnePort_MHP;