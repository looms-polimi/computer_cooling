within ComputerCooling.OnePhaseLiquidCircuits.Transfer.Ducts;

model LiquidStream_2D
  extends OnePhaseLiquidCircuits.BaseClasses.TwoPorts_pwh;
  Modelica.Thermal.HeatTransfer.Interfaces.HeatPort_a hp[s](each T(start=TStart)) annotation(
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
  Temperature T[s](each start = TStart);
  Temperature Ta(start = TStart);
  Temperature Tb(start = TStart);
  
  parameter Boolean fluidHeats = false "True if liquid is heating environment, false otherwise";
  
  parameter Integer s = 5 "Number of segments";
  
protected
  final parameter Real kf(fixed=false) annotation(Evaluate = true);
  final parameter Area AreaCross = Modelica.Constants.pi * (Dstream/2)^2;
  final parameter Area AreaLateral = Modelica.Constants.pi * Dstream * L;
  final parameter Volume V = AreaCross * L;
  
equation
  //liquid coordinates
  m.p = pwh_a.p;
  m.T = T[1];

  //flow rate
  w = ComputerCooling.Functions.sqrtReg( (dp/m.d - Modelica.Constants.g_n * dz) / kf);
  
  //compute HeatTransfer coefficient through chosen model HT
  HT.p = m.p;
  HT.h = m.h;
  HT.w = w;
  
  //energy equations
  hp[1].Q_flow = HT.gamma * AreaLateral * (hp[1].T - T[1]);
  m.cp * m.d * V / s * der(T[1]) = pwh_a.w*actualStream(pwh_a.h)
                                 + w * m.cp * (if w>0 then -T[1] else -T[2])
                                 + hp[1].Q_flow;
                                 
  for i in 2:s-1 loop
    hp[i].Q_flow = HT.gamma * AreaLateral * (hp[i].T - T[i]);
    
    m.cp * m.d * V / s * der(T[i]) = w * m.cp * (if w>0 then (T[i-1]-T[i]) else (T[i]-T[i+1]))
                                   + hp[i].Q_flow;
  end for;
  
  hp[s].Q_flow = HT.gamma * AreaLateral * (hp[s].T - T[s]);
  m.cp * m.d * V / s * der(T[s]) = pwh_b.w*actualStream(pwh_b.h)
                                 + w * m.cp * (if w>0 then T[s-1] else T[s])
                                 + hp[s].Q_flow;
  
  Ta = T[1];
  Tb = T[s];
  
  //enthalpy at outer edges
  hoa = m.cp * Ta;
  hob = m.cp * Tb;

initial equation
  dp_nom / m.d = kf * w_nom^2;

end LiquidStream_2D;