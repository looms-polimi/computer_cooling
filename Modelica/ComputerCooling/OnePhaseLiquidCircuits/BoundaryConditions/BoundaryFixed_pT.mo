within ComputerCooling.OnePhaseLiquidCircuits.BoundaryConditions;

model BoundaryFixed_pT
  extends BaseClasses.OnePort_pwh;
  parameter Pressure p = 101325;
  parameter Temperature T = 293.15;
equation
  pwh.p = p;
  pwh.h = cp*T;
annotation(
    Icon(graphics = {Ellipse(fillColor = {226, 226, 226}, fillPattern = FillPattern.Sphere, extent = {{-60, 60}, {60, -60}}), Text(lineColor = {200, 0, 0},extent = {{-36, 34}, {36, -34}}, textString = "pT")}));
end BoundaryFixed_pT;