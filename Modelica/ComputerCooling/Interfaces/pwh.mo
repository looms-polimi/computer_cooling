within ComputerCooling.Interfaces;

connector pwh
  extends Icons.LiquidConnectorIcon;
  
  //liquid coordinates
  Pressure p "Pa";
  flow MassFlowRate w "kg/s";
  stream SpecificEnthalpy h "kJ/kg";
  
    annotation(
    Icon(graphics = {Text( lineColor = {255, 255, 255}, extent = {{-50, 50}, {50, -50}}, textString = "pwh")}));
end pwh;