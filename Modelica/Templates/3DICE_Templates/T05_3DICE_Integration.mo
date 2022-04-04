package T05_3DICE_Integration
  package Tests
    model ConstantPowerTest
      T05_Heatsink sink(initialTemperature = 300);
      Modelica.Thermal.HeatTransfer.Sources.PrescribedHeatFlow heatSource;
    protected
      Modelica.Thermal.HeatTransfer.Components.ThermalConductor bottomConductances[sink.bottomRows, sink.bottomCols](each G = sink.cellBottomConductance);
    equation
      heatSource.Q_flow = if time < 50 then 0 else 20;
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
    HeatsinkBlocks.LayerOptimized base( Tstart = initialTemperature, cols = baseCols,cp = cp, height = baseHeight, k = k, length = baseLength, rho = rho, rows = baseRows, width = baseWidth) annotation(
      Placement(visible = true, transformation(origin = {100, -56}, extent = {{-40, -40}, {40, 40}}, rotation = 0)));
    // primary heatsink
    // connector
    // External cooling environment
    Modelica.Blocks.Sources.RealExpression temp(y = initialTemperature) annotation(
      Placement(visible = true, transformation(origin = {70, 100}, extent = {{30, -20}, {-30, 20}}, rotation = 0)));
    ComputerCooling.HeatSources.HeatSource_Temperature heatSource_cooling(n = 5) annotation(
      Placement(visible = true, transformation(origin = {0, 100}, extent = {{20, -20}, {-20, 20}}, rotation = 0)));
    // external heatsink
    ComputerCooling.OnePhaseLiquidComponents.Transfer.Ducts.Tube_1D tube_cold(L = 1, TStart = initialTemperature, W = 3.14 * 0.006 / 2, dp_nom(displayUnit = "Pa") = 25000, fluidHeats = true, n = 5, t = 0.0005, w_nom = 0.002) annotation(
      Placement(visible = true, transformation(origin = {-60, 60}, extent = {{20, -20}, {-20, 20}}, rotation = 0)));
    // pump
    Modelica.Blocks.Sources.RealExpression cmd(y = 1) annotation(
      Placement(visible = true, transformation(origin = {-146, -44}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
    ComputerCooling.OnePhaseLiquidComponents.FlowControl.Pumps.CentrifugalPump pump(dp_nom = 50000, w_nom = 2) annotation(
      Placement(visible = true, transformation(origin = {-100, -60}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
    ComputerCooling.OnePhaseLiquidComponents.FlowControl.Pressurisers.PressuriserIdeal pressuriserIdeal annotation(
      Placement(visible = true, transformation(origin = {-122, 60}, extent = {{20, -20}, {-20, 20}}, rotation = 0)));
    ComputerCooling.OnePhaseLiquidComponents.Transfer.WaterBlock waterBlock(Dstream = 0.002, L = 0.03, TStart = initialTemperature, W = 3.14 * 0.003 / 2, dp_nom(displayUnit = "Pa") = 25000, m = baseCols, n = baseRows, t = 0.0005, w_nom = 0.0002) annotation(
      Placement(visible = true, transformation(origin = {-20, -20}, extent = {{-20, -20}, {20, 20}}, rotation = 90)));
    ComputerCooling.Utilities.Recorder recorder(Ndata = 2, Ts = 0.01) annotation(
      Placement(visible = true, transformation(origin = {90, 70}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  ComputerCooling.Sensors.TemperatureSensor_liquid coolantOutletTemp annotation(
      Placement(visible = true, transformation(origin = {30, 70}, extent = {{-10, 10}, {10, -10}}, rotation = 0)));
  ComputerCooling.Sensors.TemperatureSensor_liquid coolantInletTemp annotation(
      Placement(visible = true, transformation(origin = {30, 30}, extent = {{-10, 10}, {10, -10}}, rotation = 0)));
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
  connect(cmd.y, pump.cmd) annotation(
      Line(points = {{-135, -44}, {-124, -44}}, color = {0, 0, 127}));
  connect(temp.y, heatSource_cooling.T_input) annotation(
      Line(points = {{37, 100}, {24, 100}}, color = {0, 0, 127}));
  connect(tube_cold.pwh_b, pressuriserIdeal.pwh_a) annotation(
      Line(points = {{-84, 60}, {-98, 60}}));
  connect(pressuriserIdeal.pwh_b, pump.pwh_a) annotation(
      Line(points = {{-146, 60}, {-160, 60}, {-160, -60}, {-124, -60}}));
  connect(waterBlock.mHP, base.top) annotation(
      Line(points = {{-4, -20}, {64, -20}}, color = {191, 0, 0}));
  connect(pump.pwh_b, waterBlock.pwh_a) annotation(
      Line(points = {{-76, -60}, {-20, -60}, {-20, -44}}));
  connect(waterBlock.pwh_b, tube_cold.pwh_a) annotation(
      Line(points = {{-20, 4}, {-20, 60}, {-36, 60}}));
  connect(heatSource_cooling.hp, tube_cold.hp) annotation(
      Line(points = {{-24, 100}, {-60, 100}, {-60, 84}}));
  connect(waterBlock.pwh_b, coolantOutletTemp.pwh) annotation(
      Line(points = {{-20, 4}, {-20, 48}, {30, 48}, {30, 62}}));
  connect(waterBlock.pwh_a, coolantInletTemp.pwh) annotation(
      Line(points = {{-20, -44}, {30, -44}, {30, 22}}));
  connect(coolantInletTemp.out, recorder.data[1]) annotation(
      Line(points = {{42, 30}, {60, 30}, {60, 70}, {78, 70}}, color = {0, 0, 127}));
  connect(coolantOutletTemp.out, recorder.data[2]) annotation(
      Line(points = {{42, 70}, {78, 70}}, color = {0, 0, 127}));
  connect(bottom, base.pGen.port) annotation(
      Line(points = {{2, -90}, {0, -90}, {0, -120}, {136, -120}, {136, -92}}, color = {191, 0, 0}));
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