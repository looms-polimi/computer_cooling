within ComputerCooling.SolidComponents;

model material_layer_uniform_grid_Pnom_DTnom
  parameter Integer rows = 4;
  parameter Integer cols = 4;
  
  parameter Power Pnom=40;
  parameter TemperatureDifference DTnom=20;

  ComputerCooling.Interfaces.HeatPortMatrix sink_side(rows=rows,cols=cols) annotation(
    Placement(visible = true, transformation(origin = {-2, 46}, extent = {{-10, -10}, {10, 10}}, rotation = 0), iconTransformation(origin = {0, 30}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  ComputerCooling.Interfaces.HeatPortMatrix cpu_side(rows=rows,cols=cols) annotation(
    Placement(visible = true, transformation(origin = {-8, -62}, extent = {{-10, -10}, {10, 10}}, rotation = 0), iconTransformation(origin = {0, -30}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  
protected
  final parameter ThermalConductance Gortho=Pnom/DTnom/rows/cols;
  
equation
  for i in 1:rows loop
      for j in 1:cols loop
          cpu_side.port[i,j].Q_flow+sink_side.port[i,j].Q_flow = 0;
          cpu_side.port[i,j].Q_flow
              = Gortho*(cpu_side.port[i,j].T-sink_side.port[i,j].T);
      end for;
  end for;

annotation(
    Icon(graphics = {Rectangle( fillColor = {211, 215, 207}, fillPattern = FillPattern.Solid, extent = {{-100, 10}, {100, -10}})}));
end material_layer_uniform_grid_Pnom_DTnom;