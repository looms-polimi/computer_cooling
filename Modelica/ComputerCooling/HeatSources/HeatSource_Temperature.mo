within ComputerCooling.HeatSources;

model HeatSource_Temperature
  extends Icons.HeatSourceIcon;
  Modelica.Blocks.Interfaces.RealInput T_input annotation(
    Placement(visible = true, transformation(origin = {-120, 0}, extent = {{-20, -20}, {20, 20}}, rotation = 0), iconTransformation(origin = {-120, 0}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  ComputerCooling.Interfaces.vHP hp(n = n) annotation(
    Placement(visible = true, transformation(origin = {120, 1.42109e-14}, extent = {{-20, -20}, {20, 20}}, rotation = 0), iconTransformation(origin = {120, 0}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));

  parameter Integer n = 3 "Number of volume lumps (1 on a side)";

  parameter Temperature TStart = 273.15 + 20;
  Temperature T[n](each start = TStart);
  parameter HeatCapacity C = 502;
  parameter ThermalConductance G = 160;
  
//initial equation
  
//  for i in 1:n loop
//    T[i] = TStart; 
//  end for;
  
equation

  for i in 1:n loop
    T[i] = T_input;
    C/n * der(T[i]) = G/n * (hp.T[i] - T[i]) - hp.Q_flow[i];
  end for;

annotation(
    Icon(graphics = {Bitmap(origin = {-80, 30}, extent = {{-20, -30}, {20, 30}}, imageSource = "iVBORw0KGgoAAAANSUhEUgAAACoAAACWCAYAAACoyxpVAAAACXBIWXMAAAsSAAALEgHS3X78AAADdUlEQVR4nO2d0XHbMAyGgVzf4xG0QTSCNqg3aEbwBnUniEdwJ4i7QUfwCBlBnYA59pBWpkAKon4lpxb/HV9kivhIkBSlh98cQiCEmLkjopaIdtJcT0TXEMJPSIAIWluIqCGis0DFC1rppU6zKNYCyFMBLldO7wYqqb1WQL6VeO/uPUCXQP6BnRv305z5zMwx3Q+FKj+kIyQL63Om3kNsK4RwMAefMZJNae5p6ZRpUprL5gU2B/ScCfZouPcxc+95DVBtCzKv4szI9lBQIuoyI2JevTINtDY6y/13xqncagsnhNDPWAu9LDZL2yNZQXfKtatybUraPVrb1aAfLgdFy0HRclC0HBQtB0XLQdFyULQcFK3/D5SZj8wcknJEte+pR8tB0XJQtBwULQdFy0HRclC0HBQtB0XLQdFyULQcFC0HRctB0XJQtBwULQdFy0HRclC0HBQtB0XLQdFyULQcFC0HRctB0XJQtBwULQdFy0HRclC0HBQtB0XLQdFyULQcFC0HRctB0XJQtBwUrX8HlJn3RGS3kpmvg8SoB2XmCPhMRPcrgsa2nyVWVllQZo6WNE8rAqZ6kpi6Mi4thwlHrGPq+iLX0rpHxf3lOOG4dTBZ1BDRfsJUSnUUsoAO6jYTvlH7Iqj0ONfbc8k7J+NelHUfklg5x6N+lDFDsGxAhHmaNabFgUj1EEOZp014nHUa6CUzGs2Mhi1l1HHJjJaVyw1owcZrtBjWMk/LLMbwNlCl7Wg8oevSbZoGhYV8GIJqo5Q2VDJPqy3ptNIG4joE1QK1xtW5pJyTGK3WlvymrvaRqdnEFlRbrHG6O0lpqhtLLnHCXONgci9tD6XZgTUmUKvBWaXStrOgmlL3NpPBWaXStlXnuM2f8E29BMmUvQj6oly3zBuULOvhN+MmtqftbPhbe4Ru5lCyjWPeZg7Om3oVKYxq+KCXu8uw3o3XODPvZHPVTkrfZWKrT6m5XuMSK2bli/LzL+nY31hKD6s+QMwpiz9AGFZgyH3SsRTjJx3960ougOFJ1Evq2ilImRInw2M4+2Wl6IcvDlhfsxVu51RM5XVwGtoJYGt8O/gWQsg7bhlGY7/SgWSYmdGcNKde2etyW9eScrHO9bmLoQMBX6yO2FWgA+BGDjJzHqWxbrynanuD/LmEbPYRPn2jjQ+Pl8V/MEFEr1WR/bGFBUTaAAAAAElFTkSuQmCC")}));
end HeatSource_Temperature;