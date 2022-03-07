within ComputerCooling.OnePhaseLiquidComponents.Transfer.Ducts;

model LiquidStream_0D
  extends OnePhaseLiquidComponents.BaseClasses.TwoPorts_pwh;
  Modelica.Thermal.HeatTransfer.Interfaces.HeatPort_a hp(T(start=TStart)) annotation(
    Placement(visible = true, transformation(origin = {0, -70}, extent = {{-10, -10}, {10, 10}}, rotation = 0), iconTransformation(origin = {0, 120}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  
  //liquid model
  replaceable model medium = Media.SubCooledWater_Incompressible;
  medium m;
  
  //heat transfer coefficient model
  replaceable model HTCoefficient = HeatTransfer.HeatTransferModels.DittusBoelter;
  HTCoefficient HT(redeclare model medium = medium, D = Dstream, fluidHeats = fluidHeats);
  
  parameter Length Dstream = 0.5 "Flow diameter inside pipe";
  parameter Length L = 1 "Pipe length";
  parameter Length dz = 0 "Pipe height difference [port b over port a]";
  
  parameter MassFlowRate w_nom = 0.1 "Nominal mass flow rate";
  parameter PressureDifference dp_nom = 0.1 "Nominal pressure difference";
  
  parameter Temperature TStart = 273.15 + 20 "Flow starting temperature";
  Temperature T(start = TStart);
  
  parameter Boolean fluidHeats = false "True if liquid is heating environment, false otherwise";
  
protected
  final parameter Real kf(fixed=false) annotation(Evaluate = true);
  final parameter Area AreaCross = Modelica.Constants.pi * (Dstream/2)^2;
  final parameter Area AreaLateral = Modelica.Constants.pi * Dstream * L;
  final parameter Volume V = AreaCross * L;
  
initial equation  //NEW
  HT.m.T = TStart;
  
equation
  //liquid coordinates
  m.p = pwh_a.p;
  m.T = T;

  //flow rate
  w = ComputerCooling.Functions.sqrtReg( (dp/m.d - Modelica.Constants.g_n * dz) / kf);
  
  //compute HeatTransfer coefficient through chosen model HT
  HT.p = m.p;
  HT.h = m.h;
  HT.w = w;
  
  //energy equations
  hp.Q_flow = HT.gamma * AreaLateral * (hp.T - T);
  
  m.c * m.d * V * der(T) = pwh_a.w * actualStream(pwh_a.h)
                         + pwh_b.w * actualStream(pwh_b.h)
                         + hp.Q_flow;
  
  //enthalpy at outer edges
  hoa = m.h;
  hob = m.h;

initial equation
  dp_nom / m.d = kf * w_nom^2;

end LiquidStream_0D;
