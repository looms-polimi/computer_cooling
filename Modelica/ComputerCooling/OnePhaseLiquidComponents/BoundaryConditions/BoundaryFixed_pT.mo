within ComputerCooling.OnePhaseLiquidComponents.BoundaryConditions;

model BoundaryFixed_pT
  extends BaseClasses.OnePort_pwh;
  
  parameter Pressure p = 101325;
  parameter Temperature T = 293.15;
  
equation

  //medium-based computations for port conditions
  m.p = p;
  m.T = T;
  
  //conditions at port
  pwh_a.p = m.p;
  pwh_a.h = m.h;
  
annotation(
    Icon(graphics = {Ellipse(fillColor = {226, 226, 226}, fillPattern = FillPattern.Sphere, extent = {{-60, 60}, {60, -60}}), Text(lineColor = {200, 0, 0},extent = {{-36, 34}, {36, -34}}, textString = "pT")}));
end BoundaryFixed_pT;