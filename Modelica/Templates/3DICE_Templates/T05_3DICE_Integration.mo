package T05_3DICE_Integration
  package Tests
    model ConstantPowerTest
      T05_Heatsink sink(initialTemperature = 20 + 273.15);
      Modelica.Thermal.HeatTransfer.Sources.FixedHeatFlow heatSource(Q_flow = 10);
    protected
      Modelica.Thermal.HeatTransfer.Components.ThermalConductor bottomConductances[sink.bottomRows, sink.bottomCols](each G = sink.cellBottomConductance);
    equation
// Natural convection
      for i in 1:sink.bottomRows loop
        for j in 1:sink.bottomCols loop
// No grid pitch mapping needed, so do a one-to-one mapping
          connect(sink.bottom[i, j], bottomConductances[i, j].port_a);
          connect(bottomConductances[i, j].port_b, heatSource.port);
        end for;
      end for;
      annotation(
        experiment(StartTime = 0, StopTime = 4000, Tolerance = 1e-6, Interval = 10));
    end ConstantPowerTest;
  end Tests;

  model T05_Heatsink
    extends HeatsinkBlocks.PartialModels.Heatsink(cellBottomConductance = 2 * base.gz, bottomLength = baseLength, bottomWidth = baseWidth, bottomRows = baseRows, bottomCols = baseCols);
  
    // Thermal model of copper heatsink base plate
    HeatsinkBlocks.LayerOptimized base(cp = cp, rho = rho, k = k, length = baseLength, width = baseWidth, height = baseHeight, rows = baseRows, cols = baseCols, Tstart = initialTemperature) annotation(
      Placement(visible = true, transformation(origin = {120, -60}, extent = {{-40, -40}, {40, 40}}, rotation = 0)));
  
    // primary heatsink
    ComputerCooling.OnePhaseLiquidComponents.Transfer.Ducts.Tube_1D tube_hot[baseCols](each L = 0.1, each dp_nom(displayUnit = "bar") = 100, each n = baseRows) annotation(
      Placement(visible = true, transformation(origin = {20, -20}, extent = {{-20, 20}, {20, -20}}, rotation = 90)));
  
    // connector
    ComputerCooling.Interfaces.hpConnector hpConnector[baseCols](each n = baseRows) annotation(
      Placement(visible = true, transformation(origin = {64, -20}, extent = {{-10, -10}, {10, 10}}, rotation = 90)));
  // External cooling environment
    Modelica.Blocks.Sources.RealExpression temp(y = 273.15 + 20) annotation(
      Placement(visible = true, transformation(origin = {90, 60}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
    ComputerCooling.HeatSources.HeatSource_Temperature heatSource_cooling(n = 5) annotation(
      Placement(visible = true, transformation(origin = {40, 60}, extent = {{20, -20}, {-20, 20}}, rotation = 0)));
  
    // external heatsink
    ComputerCooling.OnePhaseLiquidComponents.Transfer.Ducts.Tube_1D tube_cold(dp_nom = 100, fluidHeats = true, n = 5) annotation(
      Placement(visible = true, transformation(origin = {-20, 20}, extent = {{20, -20}, {-20, 20}}, rotation = 0)));
  
    // liquid storage
    ComputerCooling.OnePhaseLiquidComponents.Storage.Header tank annotation(
      Placement(visible = true, transformation(origin = {-100, 20}, extent = {{20, -20}, {-20, 20}}, rotation = 0)));
  
    // pump
    Modelica.Blocks.Sources.RealExpression cmd(y = 1) annotation(
      Placement(visible = true, transformation(origin = {-110, -44}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
    ComputerCooling.OnePhaseLiquidComponents.FlowControl.Pumps.CentrifugalPump pump(dp_nom = 399999.9999999999) annotation(
      Placement(visible = true, transformation(origin = {-60, -60}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  
  protected
    parameter Modelica.SIunits.SpecificHeatCapacity cp = 384.6 "copper properties";
    parameter Modelica.SIunits.Density rho = 8960 "copper properties";
    parameter Modelica.SIunits.ThermalConductivity k = 401 "copper properties";
    parameter Modelica.SIunits.Length baseLength = 0.03 "HeatSink dimensions";
    parameter Modelica.SIunits.Length baseWidth = 0.03 "HeatSink dimensions";
    parameter Modelica.SIunits.Length baseHeight = 0.0028 "HeatSink dimensions";
    parameter Integer baseRows = 10 "discretization of sink base in the y direction";
    parameter Integer baseCols = 10 "discretization of sink base in the x direction";
  equation
    for i in 1:baseRows loop
      for j in 1:baseCols loop
        connect(bottom[i, j], base.pGen.port[i, j]);
        connect(base.top.port[i, j], hpConnector[j].mHP[i]);
      end for;
    end for;
    for j in 1:baseCols loop
      connect(hpConnector[j].vHP, tube_hot[j].hp);
      connect(pump.pwh_b, tube_hot[j].pwh_a);
      connect(tube_hot[j].pwh_b, tube_cold.pwh_a);
    end for;
    
  connect(tube_cold.pwh_b, tank.pwh_a) annotation(
      Line(points = {{-44, 20}, {-76, 20}}));
  connect(cmd.y, pump.cmd) annotation(
      Line(points = {{-99, -44}, {-84, -44}}, color = {0, 0, 127}));
  connect(temp.y, heatSource_cooling.T_input) annotation(
      Line(points = {{79, 60}, {64, 60}}, color = {0, 0, 127}));
  connect(heatSource_cooling.hp, tube_cold.hp) annotation(
      Line(points = {{16, 60}, {-20, 60}, {-20, 44}}));
  connect(tank.pwh_b, pump.pwh_a) annotation(
      Line(points = {{-124, 20}, {-140, 20}, {-140, -60}, {-84, -60}}));
  
  annotation(
      Diagram(coordinateSystem(extent = {{-200, -100}, {200, 100}})),
      Icon(coordinateSystem(extent = {{-200, -100}, {200, 100}})));
      
  end T05_Heatsink;

  model T05_Interface3DICE
    extends HeatsinkBlocks.PartialModels.Interface3DICE(redeclare T05_Heatsink sink);
  end T05_Interface3DICE;
  annotation(
    uses(Modelica(version = "3.2.3")));
end T05_3DICE_Integration;