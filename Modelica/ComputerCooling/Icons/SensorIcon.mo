within ComputerCooling.Icons;

model SensorIcon
equation

annotation(
    Icon(graphics = {Bitmap(extent = {{-80, -80}, {80, 80}}, imageSource = "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")}));
end SensorIcon;