within ComputerCooling.Functions;
function Clamp "Derivative of sqrtReg"
  extends Modelica.Icons.Function;
  input Real x;
  input Real minValue = 0 "minimum value of x";
  input Real maxValue = 1 "maximum value of x";
  output Real y;
algorithm
  y := max(minValue, min(x, maxValue));
end Clamp;