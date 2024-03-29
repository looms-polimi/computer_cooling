within ComputerCooling.DevelTest;

model test_tube1D_array
  extends Icons.TestModel;
  //  IncompressibleLiquidComponents.Ducts.Tube_1D tube_1D[3](each n = 5) annotation(
  //    Placement(visible = true, transformation(origin = {0, 0}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  Modelica.Blocks.Sources.RealExpression iPh(y = 100 * (1 + 100 * sin(0.1 * time))) annotation(
    Placement(visible = true, transformation(origin = {-110, 90}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  ComputerCooling.HeatTransfer.BoundaryConditions.Prescribed_Power_1D_uniform heatSrc(n = 5) annotation(
    Placement(visible = true, transformation(origin = {-50, 90}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  ComputerCooling.IncompressibleLiquidComponents.Ducts.Tube_1D_GenericSection tube_1D(n = 5) annotation(
    Placement(visible = true, transformation(origin = {0, 62}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  ComputerCooling.IncompressibleLiquidComponents.BoundaryConditions.BoundaryFixed_pT boundaryFixed_pT(p (displayUnit = "Pa") = 105000)  annotation(
    Placement(visible = true, transformation(origin = {-140, 0}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  ComputerCooling.IncompressibleLiquidComponents.BoundaryConditions.BoundaryFixed_pT boundaryFixed_pT1(p(displayUnit = "Pa") ) annotation(
    Placement(visible = true, transformation(origin = {120, 0}, extent = {{20, -20}, {-20, 20}}, rotation = 0)));
  ComputerCooling.IncompressibleLiquidComponents.Ducts.Tube_1D_GenericSection tube_1D1(n = 5) annotation(
    Placement(visible = true, transformation(origin = {0, 4}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  ComputerCooling.HeatTransfer.BoundaryConditions.Prescribed_Power_1D_uniform heatSource_Power(n = 5) annotation(
    Placement(visible = true, transformation(origin = {-50, 30}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  ComputerCooling.IncompressibleLiquidComponents.Ducts.Tube_1D_GenericSection tube_1D2(n = 5) annotation(
    Placement(visible = true, transformation(origin = {0, -58}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  ComputerCooling.HeatTransfer.BoundaryConditions.Prescribed_Power_1D_uniform heatSource_Power1(n = 5) annotation(
    Placement(visible = true, transformation(origin = {-50, -30}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
equation
//  for i in 1:3 loop
//    connect(src.pwh_a, tube_1D[i].pwh_a);
//    connect(tube_1D[i].pwh_b, snk.pwh_a);
//    connect(tube_1D[i].hp, heatSrc.hp);
//  end for;
  connect(heatSrc.hp, tube_1D.surf) annotation(
    Line(points = {{-38, 90}, {0, 90}, {0, 82}}));
  connect(heatSource_Power.hp, tube_1D1.surf) annotation(
    Line(points = {{-38, 30}, {0, 30}, {0, 24}}));
  connect(heatSource_Power1.hp, tube_1D2.surf) annotation(
    Line(points = {{-38, -30}, {0, -30}, {0, -38}}));
  connect(boundaryFixed_pT.pwh_a, tube_1D.pwh_a) annotation(
    Line(points = {{-116, 0}, {-100, 0}, {-100, 58}, {-24, 58}}));
  connect(boundaryFixed_pT.pwh_a, tube_1D1.pwh_a) annotation(
    Line(points = {{-116, 0}, {-24, 0}}));
  connect(boundaryFixed_pT.pwh_a, tube_1D2.pwh_a) annotation(
    Line(points = {{-116, 0}, {-100, 0}, {-100, -62}, {-24, -62}}));
  connect(tube_1D.pwh_b, boundaryFixed_pT1.pwh_a) annotation(
    Line(points = {{24, 58}, {80, 58}, {80, 0}, {96, 0}}));
  connect(tube_1D1.pwh_b, boundaryFixed_pT1.pwh_a) annotation(
    Line(points = {{24, 0}, {96, 0}}));
  connect(tube_1D2.pwh_b, boundaryFixed_pT1.pwh_a) annotation(
    Line(points = {{24, -62}, {80, -62}, {80, 0}, {96, 0}}));
  connect(iPh.y, heatSrc.P_input) annotation(
    Line(points = {{-98, 90}, {-62, 90}}, color = {0, 0, 127}));
  connect(iPh.y, heatSource_Power.P_input) annotation(
    Line(points = {{-98, 90}, {-90, 90}, {-90, 30}, {-62, 30}}, color = {0, 0, 127}));
  connect(iPh.y, heatSource_Power1.P_input) annotation(
    Line(points = {{-98, 90}, {-90, 90}, {-90, -30}, {-62, -30}}, color = {0, 0, 127}));
  annotation(
    Diagram(coordinateSystem(extent = {{-200, -100}, {200, 100}})));
end test_tube1D_array;