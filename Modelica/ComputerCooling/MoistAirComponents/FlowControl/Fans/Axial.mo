within ComputerCooling.MoistAirComponents.FlowControl.Fans;

model Axial
  extends BaseClasses.TwoPort_pwhx;
  replaceable model medium = Media.MoistAir;
  medium air;
  
  Modelica.Blocks.Interfaces.RealInput cmd01 annotation(
    Placement(visible = true, transformation(origin = {0, 72}, extent = {{-20, -20}, {20, 20}}, rotation = -90), iconTransformation(origin = {-120, 80}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  parameter VolumeFlowRate q_max = 0.3 "Maximum fan capacity";

equation

  0 = wa + wb;
  wa = q_max * air.d * cmd01;
  
  air.p = 0.5 * (pwhx_a.p + pwhx_b.p);
  
  hoa = inStream(pwhx_b.h);
  hob = inStream(pwhx_a.h);
  air.h = hoa;
  
  xoa = inStream(pwhx_b.x);
  xob = inStream(pwhx_a.x);
  air.x = xoa;

end Axial;
