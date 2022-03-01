within ComputerCooling.DevelTest;

model test_dp_header_liq
  ComputerCooling.OnePhaseLiquidComponents.FlowControl.PressureDrops.DpQuadratic_NominalPoint dp1(dp_nom = 49999.99999999999, w_nom = 1)  annotation(
    Placement(visible = true, transformation(origin = {-50, 10}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  ComputerCooling.OnePhaseLiquidComponents.BoundaryConditions.BoundaryPrescribed_pT src annotation(
    Placement(visible = true, transformation(origin = {-112, 10}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  ComputerCooling.OnePhaseLiquidComponents.BoundaryConditions.BoundaryFixed_pT snk(T = 293.15, p(displayUnit = "Pa") = 1e5)  annotation(
    Placement(visible = true, transformation(origin = {112, 10}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.RealExpression ip(y = 2e5)  annotation(
    Placement(visible = true, transformation(origin = {-172, 28}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.RealExpression iT(y = 273.15 + 25)  annotation(
    Placement(visible = true, transformation(origin = {-178, -10}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  ComputerCooling.OnePhaseLiquidComponents.FlowControl.PressureDrops.DpQuadratic_NominalPoint dp2(dp_nom = 49999.99999999999, w_nom = 1)  annotation(
    Placement(visible = true, transformation(origin = {60, 10}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  ComputerCooling.OnePhaseLiquidComponents.Storage.Header h(T(fixed = true), Tstart = 273.15 + 25)  annotation(
    Placement(visible = true, transformation(origin = {2, 10}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Thermal.HeatTransfer.Sources.PrescribedHeatFlow Ph annotation(
    Placement(visible = true, transformation(origin = {-26, -38}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.RealExpression iPh(y = 4186) annotation(
    Placement(visible = true, transformation(origin = {-96, -38}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
equation
  connect(src.pwh_a, dp1.pwh_a) annotation(
    Line(points = {{-100, 10}, {-62, 10}}));
  connect(ip.y, src.p) annotation(
    Line(points = {{-161, 28}, {-145, 28}, {-145, 14}, {-119, 14}}, color = {0, 0, 127}));
  connect(iT.y, src.T) annotation(
    Line(points = {{-167, -10}, {-151, -10}, {-151, 6}, {-119, 6}}, color = {0, 0, 127}));
  connect(dp1.pwh_b, h.pwh_a) annotation(
    Line(points = {{-38, 10}, {-10, 10}}, color = {0, 0, 0}));
  connect(h.pwh_b, dp2.pwh_a) annotation(
    Line(points = {{14, 10}, {48, 10}}, color = {0, 0, 0}));
  connect(dp2.pwh_b, snk.pwh_a) annotation(
    Line(points = {{72, 10}, {100, 10}}, color = {0, 0, 0}));
  connect(Ph.port, h.hp) annotation(
    Line(points = {{-16, -38}, {2, -38}, {2, -2}}, color = {191, 0, 0}));
  connect(iPh.y, Ph.Q_flow) annotation(
    Line(points = {{-85, -38}, {-36, -38}}, color = {0, 0, 127}));
end test_dp_header_liq;