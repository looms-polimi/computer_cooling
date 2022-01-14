within ComputerCooling.Media.BaseClasses;

partial model base_SubCooledWater
  import MAC = ComputerCooling.Media.Constants;
  
  input Pressure p(stateSelect=StateSelect.prefer) "pressure, pref state";
  input SpecificEnthalpy h(stateSelect=StateSelect.prefer) "specific enthalpy, pref state";

  Temperature T "temperature";
  SpecificEnergy e;
  
  Density d "density";
  SpecificHeatCapacity c "specific heat";
  ThermalConductivity lambda "thermal conductivity";
  DynamicViscosity mu "dynamic viscosity";

end base_SubCooledWater;