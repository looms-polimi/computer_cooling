within ComputerCooling.HeatTransfer.BoundaryConditions;

model Fixed_Temperature_0D
  Modelica.Thermal.HeatTransfer.Interfaces.HeatPort_a hp annotation(
    Placement(visible = true, transformation(origin = {120, 1.42109e-14}, extent = {{-20, -20}, {20, 20}}, rotation = 0), iconTransformation(origin = {120, 0}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));

  parameter ThermalResistance R = 0 "total series thermal resistance";
  parameter Temperature T_input=273.15 + 30;

equation

  hp.T-T_input = R*hp.Q_flow;

annotation(
    Icon(graphics = {Bitmap(origin = {-1, -1}, extent = {{-71, -91}, {71, 91}}, imageSource = "iVBORw0KGgoAAAANSUhEUgAAACoAAACWCAYAAACoyxpVAAAACXBIWXMAAAsSAAALEgHS3X78AAADdUlEQVR4nO2d0XHbMAyGgVzf4xG0QTSCNqg3aEbwBnUniEdwJ4i7QUfwCBlBnYA59pBWpkAKon4lpxb/HV9kivhIkBSlh98cQiCEmLkjopaIdtJcT0TXEMJPSIAIWluIqCGis0DFC1rppU6zKNYCyFMBLldO7wYqqb1WQL6VeO/uPUCXQP6BnRv305z5zMwx3Q+FKj+kIyQL63Om3kNsK4RwMAefMZJNae5p6ZRpUprL5gU2B/ScCfZouPcxc+95DVBtCzKv4szI9lBQIuoyI2JevTINtDY6y/13xqncagsnhNDPWAu9LDZL2yNZQXfKtatybUraPVrb1aAfLgdFy0HRclC0HBQtB0XLQdFyULQcFK3/D5SZj8wcknJEte+pR8tB0XJQtBwULQdFy0HRclC0HBQtB0XLQdFyULQcFC0HRctB0XJQtBwULQdFy0HRclC0HBQtB0XLQdFyULQcFC0HRctB0XJQtBwULQdFy0HRclC0HBQtB0XLQdFyULQcFC0HRctB0XJQtBwUrX8HlJn3RGS3kpmvg8SoB2XmCPhMRPcrgsa2nyVWVllQZo6WNE8rAqZ6kpi6Mi4thwlHrGPq+iLX0rpHxf3lOOG4dTBZ1BDRfsJUSnUUsoAO6jYTvlH7Iqj0ONfbc8k7J+NelHUfklg5x6N+lDFDsGxAhHmaNabFgUj1EEOZp014nHUa6CUzGs2Mhi1l1HHJjJaVyw1owcZrtBjWMk/LLMbwNlCl7Wg8oevSbZoGhYV8GIJqo5Q2VDJPqy3ptNIG4joE1QK1xtW5pJyTGK3WlvymrvaRqdnEFlRbrHG6O0lpqhtLLnHCXONgci9tD6XZgTUmUKvBWaXStrOgmlL3NpPBWaXStlXnuM2f8E29BMmUvQj6oly3zBuULOvhN+MmtqftbPhbe4Ru5lCyjWPeZg7Om3oVKYxq+KCXu8uw3o3XODPvZHPVTkrfZWKrT6m5XuMSK2bli/LzL+nY31hKD6s+QMwpiz9AGFZgyH3SsRTjJx3960ougOFJ1Evq2ilImRInw2M4+2Wl6IcvDlhfsxVu51RM5XVwGtoJYGt8O/gWQsg7bhlGY7/SgWSYmdGcNKde2etyW9eScrHO9bmLoQMBX6yO2FWgA+BGDjJzHqWxbrynanuD/LmEbPYRPn2jjQ+Pl8V/MEFEr1WR/bGFBUTaAAAAAElFTkSuQmCC")}));
end Fixed_Temperature_0D;