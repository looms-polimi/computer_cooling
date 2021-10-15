within ComputerCooling.Media;

model SubCooledWater_Incompressible "Subcooled water, no compressibility"
  extends Modelica.Icons.MaterialProperty;
  import MAC = ComputerCooling.Media.Constants;
  input Pressure p "pressure";
  input SpecificEnthalpy h "specific enthalpy";
  //-----------------------------------------------------------------------------
  Density d "density";
  Temperature T "temperature";
  SpecificEnergy e;
  SpecificHeatCapacity cp "specific heat";
  ThermalConductivity lambda "thermal conductivity";
  DynamicViscosity mu "dynamic viscosity";
equation
  d = MAC.d_w;
  cp = MAC.cp_w;
  lambda = MAC.lambda_w;
  mu = MAC.mu_w;
  e = cp*T;
  h = e+p/d;
  annotation(
    Documentation(info = "<html>
<p>This is the moist air model that is based on Mollier Diagram.</p>
<p>In the HVAC systems, the air is generally considered as a binary mixture of dry air and water vapor, i.e. moist air. State properties of moist air are calculated by using the Dalton&rsquo;s law on perfect gas mixtures.</p>
<p>In order to find out the thermodynamic state of the moist air, we use the Gibbs&rsquo; phase rule</p>
<p align=\"center\">F = C &minus; P + 2 </p>
<p>where C is the number of components (in this case, vapor and dry air), P the number of phases in thermodynamic equilibrium (in this case the only phase is the gas one), and F the number of degrees of freedom.</p>
<p>Thus, dealing with moist air, C is two (vapor and dry air), P is one (gas phase only) and therefore F is equal to three. So we need to know the total pressure, the specific enthalpy h (using convetion that h=0 if T=0&deg;C and no water vapour is present), and the mass fraction X, which is the vapor and dry air mass ratio.</p>
</html>"));
end SubCooledWater_Incompressible;