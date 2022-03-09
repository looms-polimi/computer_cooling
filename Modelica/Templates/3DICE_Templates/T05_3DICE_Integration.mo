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
      Placement(visible = true, transformation(origin = {-10, -30}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
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
//connect(base.top.port[i, j], fins[j].bottom.port[i]); //da attaccare scambiatore
      end for;
    end for;
  end T05_Heatsink;

  model T05_Interface3DICE
    extends HeatsinkBlocks.PartialModels.Interface3DICE(redeclare T05_Heatsink sink);
  end T05_Interface3DICE;
end T05_3DICE_Integration;