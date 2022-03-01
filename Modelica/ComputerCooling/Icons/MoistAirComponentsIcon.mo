within ComputerCooling.Icons;

partial model MoistAirComponentsIcon
  extends Modelica.Icons.Package;
equation

annotation(
    Icon(graphics = {Bitmap(extent = {{24, 18}, {24, 18}}), Bitmap(extent = {{-80, -80}, {80, 80}}, imageSource = "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")}));
end MoistAirComponentsIcon;