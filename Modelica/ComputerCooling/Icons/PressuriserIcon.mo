within ComputerCooling.Icons;

model PressuriserIcon

annotation(
    Icon(graphics = {Bitmap(extent = {{-80, -80}, {80, 80}}, imageSource = "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"), Text(origin = {1, 3}, extent = {{-12, 12}, {12, -12}}, textString = "p")}));
end PressuriserIcon;