within ComputerCooling.Tutorial.T02_Modelling_principles;

model Mass_energy_storage_liquid_open
  extends Icons.TutorialModel;
  parameter Area                 A=0.1;   /* base area               */
  parameter Density              d=1000;  /* approx. value for water */
  parameter SpecificHeatCapacity c=4186;  /* approx. value for water */
  parameter Length               lstart=0.5;
  parameter Temperature          Tstart=273.15+20;
  Length                 l(start=lstart,stateSelect=StateSelect.always);
  Temperature            T(start=Tstart,stateSelect=StateSelect.always);
  Pressure               p;     /* relative (gage) bottom pressure */
  SpecificInternalEnergy e; 
  SpecificEnthalpy       h;
  Mass                   M;
  Energy                 E;
  MassFlowRate           wi,wo; /* inlet and outlet mass flowrates */
  Temperature            Ti;    /* temperature of inlet stream     */
  Power                  Q;     /* power to(+)/from(-) the volume  */
equation
  p      = d*Modelica.Constants.g_n*l;
  e      = c*T;
  h      = e+p/d;
  M      = d*A*l;
  E      = M*e;
  der(M) = wi-wo;
  der(E) = wi*c*Ti-wo*h+Q;
  Ti     = 273.15+10;
  wi     = if time>10 and time<20 then 0.05 else 0;
  Q      = if time>30 and time<40 then 5000 else 0;
  wo     = if time>50 and time<60 then 0.15 else 0;
annotation(
    experiment(StartTime = 0, StopTime = 80, Tolerance = 1e-6, Interval = 0.16),
    __OpenModelica_commandLineOptions = "--matchingAlgorithm=PFPlusExt --indexReductionMethod=dynamicStateSelection -d=initialization,NLSanalyticJacobian",
    __OpenModelica_simulationFlags(lv = "LOG_STATS", s = "dassl"));
end Mass_energy_storage_liquid_open;