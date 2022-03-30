within ComputerCooling.OnePhaseLiquidComponents.FlowControl.Pressurisers;

model PressuriserIdeal
  ComputerCooling.Interfaces.pwh pwh_a annotation(
    Placement(visible = true, transformation(origin = {-120, 0}, extent = {{-20, -20}, {20, 20}}, rotation = 0), iconTransformation(origin = {-120, 0}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  ComputerCooling.Interfaces.pwh pwh_b annotation(
    Placement(visible = true, transformation(origin = {120, 0}, extent = {{-20, -20}, {20, 20}}, rotation = 0), iconTransformation(origin = {120, 0}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));

  parameter Pressure p = 101325;
  
equation
//pressure imposed via parameter
  pwh_a.p = p;
  pwh_b.p = p;
//enthalpy
  pwh_a.h = inStream(pwh_b.h);
  pwh_b.h = inStream(pwh_a.h);

annotation(
    Icon(graphics = {Bitmap(origin = {0, 40}, extent = {{-100, -60}, {100, 60}}, imageSource = "iVBORw0KGgoAAAANSUhEUgAAASAAAADHCAYAAAC5tY4OAAAACXBIWXMAAAsSAAALEgHS3X78AAAC30lEQVR4nO3cQWrDQBAAwZ3g/395Qq45BIMNHVlVV4GMV9DMYdjZ3cP/NDM+zhvs7lz+T3yor7sfANARICAjQEBGgICMAAEZAQIyAgRkBAjICBCQeTj667vrpq9N8eszAQEZAQIyAgRkBAjICBCQESAgI0BARoCAjAABGQECMgIEZAQIyAgQkBEgICNAQEaAgIwAARkBAjICBGQECMgIEJARICAjQEBGgICMAAEZAQIyAgRkBAjICBCQESAgI0BARoCAjAABGQECMgIEZAQIyAgQkBEgICNAQEaAgIwAARkBAjICBGQECMgIEJARICAjQEBGgICMAAEZAQIyAgRkBAjIPBz99c3M3v0MuCYTEJARICAjQEBGgICMAAEZAQIyAgRkBAjICBCQmV1LtDy/Tb2789fzd72HezABARkBAjICBGQECMgIEJARICAjQEBGgICMAAEZAQIyAgRkBAjICBCQESAgI0BARoCAjAABGQECMgIEZAQIyAgQkBEgICNAQEaAgIwAARkBAjICBGQECMgIEJARICAjQEBGgICMAAEZAQIyAgRkBAjICBCQESAgI0BARoCAjAABGQECMgIEZAQIyAgQkBEgICNAQEaAgIwAARkBAjICBGQECMgIEJARICAjQEBGgICMAAEZAQIyAgRkBAjICBCQmXPOOn6gYAICMgIEZAQIyAgQkBEgICNAQEaAgIwAARkBAjKzaxEaaJiAgIwAARkBAjICBGQECMgIEJARICDz+P3DM/PUYtDujs8GnBe6YQICMgIEZAQIyAgQkBEgICNAQEaAgIwAARkXkgEZExCQESAgI0BARoCAjAABGQECMgIEZAQIyAgQkHElK/AyV7IClyNAQEaAgIwAARkBAjICBGQECMgIEJBxJSuQMQEBGQECMgIEZAQIyAgQkBEgICNAQObnciCLQEDCBARkBAjICBCQESAgI0BARoCAjAABGQECMgIENM453/6XM4FrvDonAAAAAElFTkSuQmCC"), Text(origin = {0, 83}, extent = {{-20, 17}, {20, -17}}, textString = "p")}));
end PressuriserIdeal;
