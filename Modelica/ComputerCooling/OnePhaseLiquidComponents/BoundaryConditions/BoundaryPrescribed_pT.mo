within ComputerCooling.OnePhaseLiquidComponents.BoundaryConditions;

model BoundaryPrescribed_pT
  extends BaseClasses.OnePort_pwh;
  
  Modelica.Blocks.Interfaces.RealInput p annotation(
    Placement(visible = true, transformation(origin = {-64, 38}, extent = {{-20, -20}, {20, 20}}, rotation = 0), iconTransformation(origin = {-120, 40}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  Modelica.Blocks.Interfaces.RealInput T annotation(
    Placement(visible = true, transformation(origin = {-74, -52}, extent = {{-20, -20}, {20, 20}}, rotation = 0), iconTransformation(origin = {-120, -40}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));

equation

  //medium-based computations for port conditions
  m.p = p;
  m.T = T;
  
  //conditions at port
  pwh_a.p = m.p;
  pwh_a.h = m.h;

annotation(
    Icon(graphics = {Bitmap(origin = {-15, 0}, extent = {{-85, -100}, {85, 100}}, imageSource = "iVBORw0KGgoAAAANSUhEUgAAAQoAAACiCAYAAAC584P+AAAACXBIWXMAAAsSAAALEgHS3X78AAACOklEQVR4nO3cMQrDMBAAQSnk/19WmlQpvCbEQeCZ2mDjYrniuDnGWOOEtdY889yROeff3gX8zsO/BIpQAEkogCQUQBIKIAkFkIQCSEIBJKEAklAASSiAJBRAEgogCQWQhAJIQgEkoQCSUABJKIAkFEASCiAJBZCEAkhCASShAJJQAEkogCQUQBIKIAkFkIQCSEIBJKEAklAASSiAJBRAEgogCQWQhAJIQgEkoQCSUABJKIAkFEASCiAJBZCEAkhCAaTnjr9ozrk2+AzgzUQBJKEAklAASSiAJBRAEgogCQWQhAJIQgGkLTcz11pzg88A3kwUQBIKIAkFkIQCSEIBJKEAklAAacs9CuAaZ6/Hfe4ymSiAJBRAEgogCQWQhAJIQgEkoQCSUADJwhXcyLdHoUwUQBIKIAkFkIQCSEIBJKEAklAASSiAJBRAspkJN+IUHnAZoQCSUABJKIAkFEASCiAJBZCEAkgWruBGnMIDLiMUQBIKIAkFkIQCSEIBJKEA0pZ7FGePawD/YaIAklAASSiAJBRAEgogCQWQhAJIQgEkoQDSlpuZ317hAa5hogCSUABJKIAkFEASCiAJBZCEAkhCASShAJJQAEkogCQUQBIKIAkFkIQCSEIBJKEAklAASSiAJBRAEgogCQWQhAJIQgEkoQCSUABJKIAkFEASCiAJBZCEAkhCASShAJJQAEkogCQUQBIKIAkFkIQCSEIBJKEAklAASSiAJBRAEgogCQWQhAJIQgEcG2O8AKHwH03km3MMAAAAAElFTkSuQmCC"), Text(origin = {-44, 49}, extent = {{-30, 20}, {30, -20}}, textString = "pT")}));
end BoundaryPrescribed_pT;
