within ComputerCooling.Interfaces;

connector pwh
  extends Icons.LiquidConnectorIcon;
  Pressure p;
  flow MassFlowRate w;
  stream SpecificEnthalpy h;
    annotation(
    Icon(graphics = {Text( lineColor = {255, 255, 255}, extent = {{-50, 50}, {50, -50}}, textString = "pwh")}));
end pwh;