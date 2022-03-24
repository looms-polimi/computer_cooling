within ComputerCooling.DevelTest;

model test_tube1D_array
  extends Icons.TestModel;
  //  OnePhaseLiquidComponents.Transfer.Ducts.Tube_1D tube_1D[3](each n = 5) annotation(
  //    Placement(visible = true, transformation(origin = {0, 0}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  Modelica.Blocks.Sources.RealExpression iPh(y = 100 * (1 + 100 * sin(0.1 * time))) annotation(
    Placement(visible = true, transformation(origin = {-70, 90}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  ComputerCooling.HeatSources.HeatSource_Power heatSrc(n = 5) annotation(
    Placement(visible = true, transformation(origin = {-30, 90}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  ComputerCooling.OnePhaseLiquidComponents.Transfer.Ducts.Tube_1D tube_1D(n = 5) annotation(
    Placement(visible = true, transformation(origin = {0, 60}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  ComputerCooling.OnePhaseLiquidComponents.BoundaryConditions.BoundaryFixed_pT src annotation(
    Placement(visible = true, transformation(origin = {-80, 60}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  ComputerCooling.OnePhaseLiquidComponents.BoundaryConditions.BoundaryFixed_pT snk(p(displayUnit = "Pa") = -1) annotation(
    Placement(visible = true, transformation(origin = {80, 60}, extent = {{20, -20}, {-20, 20}}, rotation = 0)));
  ComputerCooling.OnePhaseLiquidComponents.BoundaryConditions.BoundaryFixed_pT boundaryFixed_pT annotation(
    Placement(visible = true, transformation(origin = {-80, 0}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  ComputerCooling.OnePhaseLiquidComponents.BoundaryConditions.BoundaryFixed_pT boundaryFixed_pT1(p(displayUnit = "Pa") = -1) annotation(
    Placement(visible = true, transformation(origin = {80, 0}, extent = {{20, -20}, {-20, 20}}, rotation = 0)));
  ComputerCooling.OnePhaseLiquidComponents.Transfer.Ducts.Tube_1D tube_1D1(n = 5) annotation(
    Placement(visible = true, transformation(origin = {0, 0}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  ComputerCooling.HeatSources.HeatSource_Power heatSource_Power(n = 5) annotation(
    Placement(visible = true, transformation(origin = {-30, 30}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  ComputerCooling.OnePhaseLiquidComponents.Transfer.Ducts.Tube_1D tube_1D2(n = 5) annotation(
    Placement(visible = true, transformation(origin = {0, -60}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  ComputerCooling.OnePhaseLiquidComponents.BoundaryConditions.BoundaryFixed_pT boundaryFixed_pT2 annotation(
    Placement(visible = true, transformation(origin = {-80, -60}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  ComputerCooling.HeatSources.HeatSource_Power heatSource_Power1(n = 5) annotation(
    Placement(visible = true, transformation(origin = {-30, -30}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  ComputerCooling.OnePhaseLiquidComponents.BoundaryConditions.BoundaryFixed_pT boundaryFixed_pT3(p(displayUnit = "Pa") = -1) annotation(
    Placement(visible = true, transformation(origin = {80, -60}, extent = {{20, -20}, {-20, 20}}, rotation = 0)));
equation
//  for i in 1:3 loop
//    connect(src.pwh_a, tube_1D[i].pwh_a);
//    connect(tube_1D[i].pwh_b, snk.pwh_a);
//    connect(tube_1D[i].hp, heatSrc.hp);
//  end for;
  connect(tube_1D.pwh_b, snk.pwh_a) annotation(
    Line(points = {{24, 60}, {56, 60}}));
  connect(iPh.y, heatSrc.P) annotation(
    Line(points = {{-59, 90}, {-43, 90}}, color = {0, 0, 127}));
  connect(src.pwh_a, tube_1D.pwh_a) annotation(
    Line(points = {{-56, 60}, {-24, 60}}));
  connect(heatSrc.hp, tube_1D.hp) annotation(
    Line(points = {{-18, 90}, {0, 90}, {0, 84}}));
  connect(boundaryFixed_pT.pwh_a, tube_1D1.pwh_a) annotation(
    Line(points = {{-56, 0}, {-24, 0}}));
  connect(tube_1D1.pwh_b, boundaryFixed_pT1.pwh_a) annotation(
    Line(points = {{24, 0}, {56, 0}}));
  connect(heatSource_Power.hp, tube_1D1.hp) annotation(
    Line(points = {{-18, 30}, {0, 30}, {0, 24}}));
  connect(heatSource_Power1.hp, tube_1D2.hp) annotation(
    Line(points = {{-18, -30}, {0, -30}, {0, -36}}));
  connect(boundaryFixed_pT2.pwh_a, tube_1D2.pwh_a) annotation(
    Line(points = {{-56, -60}, {-24, -60}}));
  connect(tube_1D2.pwh_b, boundaryFixed_pT3.pwh_a) annotation(
    Line(points = {{24, -60}, {56, -60}}));
  connect(iPh.y, heatSource_Power.P) annotation(
    Line(points = {{-58, 90}, {-42, 90}, {-42, 30}}, color = {0, 0, 127}));
  connect(iPh.y, heatSource_Power1.P) annotation(
    Line(points = {{-58, 90}, {-42, 90}, {-42, -30}}, color = {0, 0, 127}));
end test_tube1D_array;