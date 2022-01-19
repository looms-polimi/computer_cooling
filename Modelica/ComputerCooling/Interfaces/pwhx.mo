within ComputerCooling.Interfaces;

connector pwhx
    extends Icons.MoistAirConnectorIcon;
    
    //moist air coordinates
    Pressure p "Pa";
    flow MassFlowRate w "kg/s";
    stream SpecificEnthalpy h "kJ/kg";
    stream MassFraction x "kg vap/kg tot";
    
      annotation(
    Icon(graphics = {Text(origin = {-2, 4}, extent = {{-60, 60}, {60, -60}}, textString = "pwhx")}));
end pwhx;