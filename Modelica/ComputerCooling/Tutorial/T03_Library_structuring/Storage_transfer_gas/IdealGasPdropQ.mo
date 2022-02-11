within ComputerCooling.Tutorial.T03_Library_structuring.Storage_transfer_gas;

model IdealGasPdropQ
  parameter MolarMass MM=0.029;           /* approx. value for air */
  parameter SpecificHeatCapacity cv=1005; /* approx. value for air */
  parameter PressureDifference dpnom=10000;
  parameter MassFlowRate wnom=0.001;
  parameter Density dnom=1;
  ComputerCooling.Interfaces.pwh pwh_a annotation(
    Placement(visible = true, transformation(origin = {-126, 0}, extent = {{-10, -10}, {10, 10}}, rotation = 0), iconTransformation(origin = {-120, 0}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  ComputerCooling.Interfaces.pwh pwh_b annotation(
    Placement(visible = true, transformation(origin = {114, -14}, extent = {{-10, -10}, {10, 10}}, rotation = 0), iconTransformation(origin = {120, 0}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  PressureDifference dp;
  MassFlowRate       w;
  Temperature        T;
  Density            davg;
protected
  final parameter SpecificHeatCapacity Rgas = Modelica.Constants.R/MM;
  final parameter SpecificHeatCapacity cp   = cv+Rgas; 
  final parameter Real                 kf   = dpnom/dnom/wnom^2; 
equation
  dp      =  pwh_a.p-pwh_b.p;
  w       =  pwh_a.w;
  w       = -pwh_b.w;
  /* ideal gas => isothermal = isenthalpic */
  pwh_a.h =  inStream(pwh_b.h);
  pwh_b.h =  inStream(pwh_a.h);
  T       =  pwh_a.h/cp;
  davg    =  2*pwh_a.p*pwh_b.p/Rgas/T/(pwh_a.p+pwh_b.p);
  dp/davg =  kf*w*abs(w);
annotation(
    Icon(graphics = {Text(origin = {-1, 0}, textColor = {255, 255, 255}, extent = {{-67, 46}, {67, -46}}, textString = "Vgas"), Rectangle(origin = {0, 1}, fillColor = {114, 159, 207}, fillPattern = FillPattern.HorizontalCylinder, extent = {{-100, 41}, {100, -41}}), Text(origin = {0, 2}, textColor = {255, 255, 255}, extent = {{-84, 30}, {84, -30}}, textString = "dpQgas")}));
end IdealGasPdropQ;