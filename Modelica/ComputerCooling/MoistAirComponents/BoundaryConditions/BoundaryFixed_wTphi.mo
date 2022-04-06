within ComputerCooling.MoistAirComponents.BoundaryConditions;

model BoundaryFixed_wTphi

  extends BaseClasses.OnePort_pwhx(redeclare replaceable model medium = medium);
   
  replaceable model medium = Media.MoistAir;
  
  parameter VolumeFlowRate w = 0.1 "Prescribed volume flowrate";
  parameter Temperature T = 273.15 + 20 "Prescribed temperature";
  parameter Real phi = 0.05 "Prescribed relative humidity"; 
equation

  air.p = pwhx_a.p;
  air.T = T;
  air.x = phi;
  
  pwhx_a.w = w;
  pwhx_a.h = air.h;
  pwhx_a.x = air.x;

annotation(
    Icon(graphics = {Bitmap(origin = {-15, 0}, extent = {{-85, -100}, {85, 100}}, imageSource = "iVBORw0KGgoAAAANSUhEUgAAAQoAAACiCAYAAAC584P+AAAACXBIWXMAAAsSAAALEgHS3X78AAACOklEQVR4nO3cMQrDMBAAQSnk/19WmlQpvCbEQeCZ2mDjYrniuDnGWOOEtdY889yROeff3gX8zsO/BIpQAEkogCQUQBIKIAkFkIQCSEIBJKEAklAASSiAJBRAEgogCQWQhAJIQgEkoQCSUABJKIAkFEASCiAJBZCEAkhCASShAJJQAEkogCQUQBIKIAkFkIQCSEIBJKEAklAASSiAJBRAEgogCQWQhAJIQgEkoQCSUABJKIAkFEASCiAJBZCEAkhCAaTnjr9ozrk2+AzgzUQBJKEAklAASSiAJBRAEgogCQWQhAJIQgGkLTcz11pzg88A3kwUQBIKIAkFkIQCSEIBJKEAklAAacs9CuAaZ6/Hfe4ymSiAJBRAEgogCQWQhAJIQgEkoQCSUADJwhXcyLdHoUwUQBIKIAkFkIQCSEIBJKEAklAASSiAJBRAspkJN+IUHnAZoQCSUABJKIAkFEASCiAJBZCEAkgWruBGnMIDLiMUQBIKIAkFkIQCSEIBJKEA0pZ7FGePawD/YaIAklAASSiAJBRAEgogCQWQhAJIQgEkoQDSlpuZ317hAa5hogCSUABJKIAkFEASCiAJBZCEAkhCASShAJJQAEkogCQUQBIKIAkFkIQCSEIBJKEAklAASSiAJBRAEgogCQWQhAJIQgEkoQCSUABJKIAkFEASCiAJBZCEAkhCASShAJJQAEkogCQUQBIKIAkFkIQCSEIBJKEAklAASSiAJBRAEgogCQWQhAJIQgEcG2O8AKHwH03km3MMAAAAAElFTkSuQmCC"), Text(origin = {-30, 44}, extent = {{-40, 21}, {40, -21}}, textString = "qT-phi")}));
end BoundaryFixed_wTphi;
