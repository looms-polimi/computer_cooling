within ComputerCooling.Tutorial.T02_Modelling_principles;

model Mass_energy_storage_gas_filled
  extends Icons.TutorialModel;
  parameter Volume V=0.1;
  parameter MolarMass MM=0.029;           /* approx. value for air */
  parameter SpecificHeatCapacity cv=1005; /* approx. value for air */
  parameter Pressure pstart=101325;
  parameter Temperature Tstart=273.15+20;
  Pressure               p(start=pstart,stateSelect=StateSelect.always);
  Temperature            T(start=Tstart,stateSelect=StateSelect.always);
  Density                d;
  SpecificInternalEnergy e; 
  SpecificEnthalpy       h;
  Mass                   M;
  Energy                 E;
  MassFlowRate           wi,wo; /* inlet and outlet mass flowrates */
  Temperature            Ti;    /* temperature of inlet stream     */
  Power                  Q;     /* power to(+)/from(-) the volume  */
protected
  final parameter SpecificHeatCapacity Rgas = Modelica.Constants.R/MM;
  final parameter SpecificHeatCapacity cp   = cv+Rgas; 
equation
  p/d    = Rgas*T;
  e      = cv*T;
  h      = cp*T;
  M      = V*d;
  E      = M*e;
  der(M) = wi-wo;
  der(E) = wi*cp*Ti-wo*h+Q;
  Ti     = 273.15+10;
  wi     = if time>10 and time<20 then 0.05 else 0;
  Q      = if time>30 and time<40 then 5000 else 0;
  wo     = if time>50 and time<60 then 0.05 else 0;
annotation(
    experiment(StartTime = 0, StopTime = 80, Tolerance = 1e-6, Interval = 0.16),
    __OpenModelica_commandLineOptions = "--matchingAlgorithm=PFPlusExt --indexReductionMethod=dynamicStateSelection -d=initialization,NLSanalyticJacobian",
    __OpenModelica_simulationFlags(lv = "LOG_STATS", s = "dassl"));
end Mass_energy_storage_gas_filled;