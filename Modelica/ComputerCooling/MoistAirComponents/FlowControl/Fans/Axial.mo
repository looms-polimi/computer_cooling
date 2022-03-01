within ComputerCooling.MoistAirComponents.FlowControl.Fans;

model Axial
  extends BaseClasses.TwoPort_pwhx;
  replaceable model medium = Media.MoistAir;
  medium air;
  
  Modelica.Blocks.Interfaces.RealInput cmd01 annotation(
    Placement(visible = true, transformation(origin = {0, 72}, extent = {{-20, -20}, {20, 20}}, rotation = -90), iconTransformation(origin = {-1, 43}, extent = {{-11, -11}, {11, 11}}, rotation = -90)));
  parameter VolumeFlowRate q_max "Maximum fan capacity";

equation

  0 = wa + wb;
  wa = q_max * air.d * cmd01;
  
  air.p = 0.5 * (pwhx_a.p + pwhx_b.p);
  
  hoa = air.h;
  hob = air.h;
  hoa = hia;
  
  xoa = air.x;
  xob = air.x;
  xoa = xia;

end Axial;
