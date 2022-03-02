within ComputerCooling.Tutorial.T01_Declarative_vs_imperative.D2I_example_1;

model D2I_Example_1_imperative
  extends Icons.TutorialModel;
  parameter Length               L        = 0.1;
  parameter Area                 S        = 1e-4;
  parameter Density              ro       = 7600;
  parameter SpecificHeatCapacity c        = 450;
  parameter ThermalConductivity  lambda   = 45;
  parameter Integer              lumps    = 20;
  parameter Temperature          T_ini    = 293.15;
  parameter Boolean              explicit = true;
  parameter Time                 h        = 0.1;
  
            Temperature Tct[lumps,1]
                        (each start=T_ini,each fixed=true);
  discrete  Temperature Tdt[lumps,1]
                        (each start=T_ini,each fixed=true);
            Power       Pp;
            Temperature Tp;
            
protected
  final parameter HeatCapacity       C=ro*c*S*L/lumps;
  final parameter ThermalConductance G=lambda*S*lumps/L;
  final parameter Time Act[lumps,lumps](each fixed=false);
  final parameter Real Bct[lumps,2](each fixed=false);
  final parameter Time Adt[lumps,lumps](each fixed=false);
  final parameter Real Bdt[lumps,2](each fixed=false);
  
initial equation
  (Act,Bct) = LumpedRodMatrices_CT(C,G,lumps);
  if explicit then
     Adt = identity(lumps)+h*Act;
     Bdt = h*Bct;
  else
     Adt = Modelica.Math.Matrices.inv(identity(lumps)-h*Act);
     Bdt = Adt*h*Bct;
  end if;
  
equation
  der(Tct) = Act*Tct+Bct*[Pp;Tp];
  Tp = 293.15;
  Pp = 2;
  
algorithm
  when sample(0,h) then
    Tdt := Adt*Tdt+Bdt*[Pp;Tp];
  end when;

annotation(
      experiment(StartTime = 0, StopTime = 1000, Tolerance = 1e-6, Interval = 2),
      __OpenModelica_commandLineOptions = "--matchingAlgorithm=PFPlusExt --indexReductionMethod=dynamicStateSelection -d=initialization,NLSanalyticJacobian",
      __OpenModelica_simulationFlags(lv = "LOG_STATS", s = "dassl"));
end D2I_Example_1_imperative;