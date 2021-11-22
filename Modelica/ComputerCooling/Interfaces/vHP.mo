within ComputerCooling.Interfaces;

connector vHP "vector heah port"
  parameter Integer n=3;
  Temperature T[n];
  flow Power Q_flow[n];
  annotation(
    Icon(graphics = {Rectangle(origin = {1, 0}, fillColor = {245, 121, 0}, fillPattern = FillPattern.Solid, extent = {{-100, 100}, {100, -100}}), Text(origin = {-2, 5}, extent = {{-56, 45}, {56, -45}}, textString = "%n")}));
end vHP;