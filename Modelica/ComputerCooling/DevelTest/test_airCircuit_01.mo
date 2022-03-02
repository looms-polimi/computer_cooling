within ComputerCooling.DevelTest;

model test_airCircuit_01
  extends Icons.TestModel;
  
  MoistAirComponents.FlowControl.PressureDrops.DpLinear_NominalPoint dpLinear_NominalPoint annotation(
    Placement(visible = true, transformation(origin = {60, 0}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  ComputerCooling.MoistAirComponents.BoundaryConditions.BoundaryFixed_wTphi snk annotation(
    Placement(visible = true, transformation(origin = {120, 0}, extent = {{20, -20}, {-20, 20}}, rotation = 0)));
  Modelica.Blocks.Sources.RealExpression T(y = 273.15 + 20) annotation(
    Placement(visible = true, transformation(origin = {-130, 0}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  MoistAirComponents.BoundaryConditions.BoundaryPrescribed_pTphi src annotation(
    Placement(visible = true, transformation(origin = {-80, 0}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  Modelica.Blocks.Sources.RealExpression phi(y = 0.05) annotation(
    Placement(visible = true, transformation(origin = {-130, -30}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.RealExpression p(y = 1e5) annotation(
    Placement(visible = true, transformation(origin = {-130, 30}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Thermal.HeatTransfer.Sources.PrescribedHeatFlow Pcpu annotation(
    Placement(visible = true, transformation(origin = {-50, -50}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.RealExpression iPcpu(y = 1000 * (1 + sin(time)))  annotation(
    Placement(visible = true, transformation(origin = {-90, -50}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  ComputerCooling.MoistAirComponents.Volumes.Tank tank(p_start = 99999.99999999999)  annotation(
    Placement(visible = true, transformation(origin = {0, 0}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
equation
  connect(dpLinear_NominalPoint.pwhx_b, snk.pwhx_a) annotation(
    Line(points = {{84, 0}, {100, 0}}));
  connect(T.y, src.T) annotation(
    Line(points = {{-118, 0}, {-104, 0}}, color = {0, 0, 127}));
  connect(phi.y, src.phi) annotation(
    Line(points = {{-118, -30}, {-114, -30}, {-114, -8}, {-104, -8}}, color = {0, 0, 127}));
  connect(p.y, src.p) annotation(
    Line(points = {{-118, 30}, {-114, 30}, {-114, 8}, {-104, 8}}, color = {0, 0, 127}));
  connect(iPcpu.y, Pcpu.Q_flow) annotation(
    Line(points = {{-79, -50}, {-60, -50}}, color = {0, 0, 127}));
  connect(Pcpu.port, tank.hp) annotation(
    Line(points = {{-40, -50}, {0, -50}, {0, -24}}, color = {191, 0, 0}));
  connect(src.pwhx_a, tank.pwhx_a) annotation(
    Line(points = {{-60, 0}, {-24, 0}}));
  connect(tank.pwhx_b, dpLinear_NominalPoint.pwhx_a) annotation(
    Line(points = {{24, 0}, {36, 0}}));
end test_airCircuit_01;
