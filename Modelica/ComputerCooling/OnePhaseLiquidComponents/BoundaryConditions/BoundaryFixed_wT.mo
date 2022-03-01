within ComputerCooling.OnePhaseLiquidComponents.BoundaryConditions;

model BoundaryFixed_wT
  extends BaseClasses.OnePort_pwh;
  
  parameter MassFlowRate w = 0.1;
  parameter Temperature T = 293.15;
  
equation

  //medium-based computations for port conditions
  m.p = pwh_a.p;
  m.T = T;
  
  //conditions at port
  pwh_a.w = -w;
  pwh_a.h = m.h;
  
annotation(
    Icon(graphics = {Ellipse(fillColor = {226, 226, 226}, fillPattern = FillPattern.Sphere, extent = {{-60, 60}, {60, -60}}), Text(lineColor = {200, 0, 0},extent = {{-36, 34}, {36, -34}}, textString = "wT")}));
end BoundaryFixed_wT;