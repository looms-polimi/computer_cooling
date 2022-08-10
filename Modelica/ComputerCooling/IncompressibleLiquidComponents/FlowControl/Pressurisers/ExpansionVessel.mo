within ComputerCooling.IncompressibleLiquidComponents.FlowControl.Pressurisers;

model ExpansionVessel
  ComputerCooling.Interfaces.pwh pwh_a annotation(
    Placement(visible = true, transformation(origin = {-120, 0}, extent = {{-20, -20}, {20, 20}}, rotation = 0), iconTransformation(origin = {-120, 0}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  ComputerCooling.Interfaces.pwh pwh_b annotation(
    Placement(visible = true, transformation(origin = {120, 0}, extent = {{-20, -20}, {20, 20}}, rotation = 0), iconTransformation(origin = {120, 0}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  
  replaceable model medium = Media.SubCooledWater_Incompressible;
  medium m;
  
  parameter Pressure p_nom = 101325 "nominal pressure";
  parameter Volume V = 1 "vessel volume";
  parameter Real liquidRatio_start = 0.5;
  
  Volume V_gas;
  Pressure p_gas;
  Real liquidRatio(start = liquidRatio_start, fixed = true);
  
equation

  m.d * V * der(liquidRatio) = pwh_a.w + pwh_b.w;
  
  V_gas = (1-liquidRatio) * V;
  V_gas * p_gas = (1-liquidRatio_start) * V * p_nom;
  
  pwh_a.p = p_gas;
  pwh_b.p = p_gas;
  m.p = p_gas;
  
  pwh_a.h = inStream(pwh_b.h);
  pwh_b.h = inStream(pwh_a.h);
  m.h = pwh_a.h;
  
  
annotation(
    Icon(graphics = {Bitmap(origin = {0, 40}, extent = {{-100, -60}, {100, 60}}, imageSource = "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"), Text(origin = {0, 83}, extent = {{-20, 17}, {20, -17}}, textString = "p")}));
end ExpansionVessel;
