within ComputerCooling.Interfaces;

connector pwhx
    extends Icons.MoistAirConnectorIcon;
    Pressure p;
    flow MassFlowRate w;
    stream SpecificEnthalpy h;
    stream MassFraction x "kg vap/kg tot";
      annotation(
    Icon(graphics = {Text(origin = {0, 10}, lineColor = {255, 255, 255}, extent = {{-60, 60}, {60, -60}}, textString = "pwhx")}));
end pwhx;