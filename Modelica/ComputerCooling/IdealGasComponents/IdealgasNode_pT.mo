within ComputerCooling.IdealGasComponents;

model IdealgasNode_pT
  parameter MolarMass MM=0.029;           /* approx. value for air */
  parameter SpecificHeatCapacity cv=1005; /* approx. value for air */
  ComputerCooling.Interfaces.pwh pwh_a annotation(
    Placement(visible = true, transformation(origin = {114, -14}, extent = {{-10, -10}, {10, 10}}, rotation = 0), iconTransformation(origin = {120, 0}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  Modelica.Blocks.Interfaces.RealInput p annotation(
    Placement(visible = true, transformation(origin = {-90, 30}, extent = {{-20, -20}, {20, 20}}, rotation = 0), iconTransformation(origin = {-80, 40}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  Modelica.Blocks.Interfaces.RealInput T annotation(
    Placement(visible = true, transformation(origin = {-74, -28}, extent = {{-20, -20}, {20, 20}}, rotation = 0), iconTransformation(origin = {-80, -40}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
protected
  final parameter SpecificHeatCapacity Rgas = Modelica.Constants.R/MM;
  final parameter SpecificHeatCapacity cp   = cv+Rgas;  
equation
  pwh_a.p = p;
  pwh_a.h = cp*T;
annotation(
    Icon(graphics = {Text(origin = {-1, 0}, textColor = {255, 255, 255}, extent = {{-67, 46}, {67, -46}}, textString = "Vgas"), Rectangle(origin = {20, 0}, fillColor = {114, 159, 207}, fillPattern = FillPattern.Sphere, extent = {{-80, 80}, {80, -80}}), Text(origin = {22, 2}, textColor = {255, 255, 255}, extent = {{-84, 30}, {84, -30}}, textString = "pT")}));
end IdealgasNode_pT;
