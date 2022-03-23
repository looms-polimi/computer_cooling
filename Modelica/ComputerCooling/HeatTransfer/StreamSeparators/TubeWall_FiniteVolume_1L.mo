within ComputerCooling.HeatTransfer.StreamSeparators;

model TubeWall_FiniteVolume_1L
  ComputerCooling.Interfaces.vHP hp_in(n = n) annotation(
    Placement(visible = true, transformation(origin = {0, -80}, extent = {{-20, -20}, {20, 20}}, rotation = 0), iconTransformation(origin = {0, -80}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  ComputerCooling.Interfaces.vHP hp_ext(n = n) annotation(
    Placement(visible = true, transformation(origin = {0, 80}, extent = {{-20, -20}, {20, 20}}, rotation = 0), iconTransformation(origin = {0, 80}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));

  replaceable record materialRecord = SolidMaterials.Copper
              constrainedby SolidMaterials.BaseClasses.Base_solid_constant_props;
  materialRecord material;

  parameter Length L = 1 "Layer length";
  parameter Length W = 1 "Layer width";
  parameter Length t = 0.05 "Layer thickness";
  parameter Integer n = 3 "Number of lumps";
  // 1 leftmost <---> n rightmost
  parameter Temperature TStart = 273.15 + 20 "Layer starting temperature";
  Temperature T[n] (each start = TStart);
  
protected
  final parameter Area A = W * (L / n);
  final parameter ThermalConductance G = material.lambda * A / t;
  final parameter HeatCapacity C = material.c * material.d * A * t;

equation

  for i in 1:n loop
    hp_in.Q_flow[i] = G/2 * (hp_in.T[i] - T[i]);
    C * der(T[i]) = hp_in.Q_flow[i] + hp_ext.Q_flow[i];
    hp_ext.Q_flow[i] = G/2 * (hp_ext.T[i] - T[i]);
  end for;

annotation(
    Icon(graphics = {Bitmap(extent = {{-60, -41}, {60, 41}}, imageSource = "iVBORw0KGgoAAAANSUhEUgAAAIMAAAA3CAYAAAAvxvkFAAAACXBIWXMAAAsSAAALEgHS3X78AAABhElEQVR4nO2c0W2DMBRF36syQEfoCIzICFmpGzBCNugIrqyEm7RAC5iotd85kiU+kiM9uLpGkWJPKVnG3a8XEJX3Fx49jBAGEIQBBGEAQRhAEAYQhAEEYQBBGEDoF0gAmgHEYWFw91c8dXsOCYO7d2b24e49noo9+Z2hdJnZkFW3la+7PU48f+s5Igj9g3hcPZ76PKVB6GbEA546PaVhGGbkmysQz//wsD3guX9mZxDYHhr07A0D20ODnj1BoI4b9WwdlDpu2LN1WOq4Yc+WQcPXaOuetYNSowE8a4elRgN41gxKjQbxhKg/PCu//4ucGg3k+emGUaPBPE+pGzyVeqhRPIthoEZjeiZhYHuI6VkKAzUa0DMJAzUa0zMJAzUa07MUBmo0oGfmflGjET1LYciVcymtGzx1eWZnvQ2c/4R5Ln4bxVOV5/v6cj6Du7+llC5WCJ66PJrvMQwQGw7rAHEaLzhIPDwcJA53CAMIwgCCMIAgDCAIAwjCAIIwgCAMcMXMPgHkgE6/QsQQvAAAAABJRU5ErkJggg==")}));
end TubeWall_FiniteVolume_1L;