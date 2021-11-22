within ComputerCooling.SolidMaterials.BaseClasses;

partial record Base_solid_constant_props

  constant String name "Name";
  constant Density d "Density";
  constant SpecificHeatCapacity c "Specific heat capacity";
  constant ThermalConductivity lambda "Thermal conductivity";
  annotation(
    Icon(graphics = {Rectangle(origin = {40, -60}, fillColor = {233, 185, 110}, fillPattern = FillPattern.Solid, extent = {{-40, 20}, {40, -20}}, radius = 10), Line(origin = {40, -61}, points = {{0, 21}, {0, -19}}), Line(origin = {40, -60}, points = {{-40, 0}, {40, 0}}), Line(origin = {41, -52}, points = {{-41, 2}, {39, 2}}), Line(origin = {40, -72}, points = {{-40, 2}, {40, 2}})}));
  
end Base_solid_constant_props;