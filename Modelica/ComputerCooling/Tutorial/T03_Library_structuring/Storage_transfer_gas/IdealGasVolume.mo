within ComputerCooling.Tutorial.T03_Library_structuring.Storage_transfer_gas;

model IdealGasVolume
  parameter Volume V=0.1;
  parameter MolarMass MM=0.029;           /* approx. value for air */
  parameter SpecificHeatCapacity cv=1005; /* approx. value for air */
  parameter Pressure pstart=101325;
  parameter Temperature Tstart=273.15+20;
  ComputerCooling.Interfaces.pwh pwh_a annotation(
    Placement(visible = true, transformation(origin = {-126, 0}, extent = {{-10, -10}, {10, 10}}, rotation = 0), iconTransformation(origin = {-120, 0}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  ComputerCooling.Interfaces.pwh pwh_b annotation(
    Placement(visible = true, transformation(origin = {114, -14}, extent = {{-10, -10}, {10, 10}}, rotation = 0), iconTransformation(origin = {120, 0}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  Modelica.Thermal.HeatTransfer.Interfaces.HeatPort_a hp annotation(
    Placement(visible = true, transformation(origin = {4, 82}, extent = {{-10, -10}, {10, 10}}, rotation = 0), iconTransformation(origin = {1, 97}, extent = {{-21, -21}, {21, 21}}, rotation = 0)));
  Pressure               p(start=pstart,stateSelect=StateSelect.always);
  Temperature            T(start=Tstart,stateSelect=StateSelect.always);
  Density                d;
  SpecificInternalEnergy e; 
  SpecificEnthalpy       h;
  Mass                   M;
  Energy                 E;
protected
  final parameter SpecificHeatCapacity Rgas = Modelica.Constants.R/MM;
  final parameter SpecificHeatCapacity cp   = cv+Rgas; 
equation
  p/d     =  Rgas*T;
  e       =  cv*T;
  h       =  cp*T;
  M       =  V*d;
  E       =  M*e;
  der(M)  =  pwh_a.w+pwh_b.w;
  der(E)  =  pwh_a.w*actualStream(pwh_a.h)
            +pwh_b.w*actualStream(pwh_b.h)
            +hp.Q_flow;
  pwh_a.p =  p;
  pwh_a.h =  h;
  pwh_b.p =  p;
  pwh_b.h =  h;
  hp.T    =  T;
annotation(
    Icon(graphics = {Ellipse(fillColor = {114, 159, 207}, fillPattern = FillPattern.Sphere, extent = {{-100, 100}, {100, -100}}), Text(origin = {-1, 0}, textColor = {255, 255, 255}, extent = {{-67, 46}, {67, -46}}, textString = "Vgas")}));
end IdealGasVolume;