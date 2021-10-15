within ComputerCooling.OnePhaseLiquidCircuits.BoundaryConditions;

model BoundaryFixed_wT
  extends BaseClasses.OnePort_pwh;
  parameter MassFlowRate w = 0.1;
  parameter Temperature T = 293.15;
equation
  pwh.w = -w;
  pwh.h = cp*T;
annotation(
    Icon(graphics = {Ellipse(fillColor = {226, 226, 226}, fillPattern = FillPattern.Sphere, extent = {{-60, 60}, {60, -60}}), Text(lineColor = {200, 0, 0},extent = {{-36, 34}, {36, -34}}, textString = "wT")}));
end BoundaryFixed_wT;