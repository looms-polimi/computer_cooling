within ComputerCooling.Interfaces;

connector pwhx
extends Icons.MoistAirConnectorIcon;
Pressure p;
flow MassFlowRate w;
stream SpecificEnthalpy h;
stream MassFraction x "kg vap/kg tot";
end pwhx;