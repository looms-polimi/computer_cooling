within ComputerCooling.HeatTransfer.StreamSeparators;
model TubeWall_FiniteVolume_cylindrical_MultiL

  ComputerCooling.Interfaces.HeatPortVector hp_in(n = n) annotation(
    Placement(visible = true, transformation(origin = {0, -80}, extent = {{-20, -20}, {20, 20}}, rotation = 0), iconTransformation(origin = {0, -80}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  ComputerCooling.Interfaces.HeatPortVector hp_ext(n = n) annotation(
    Placement(visible = true, transformation(origin = {0, 80}, extent = {{-20, -20}, {20, 20}}, rotation = 0), iconTransformation(origin = {0, 80}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));

  replaceable record materialRecord = SolidMaterials.Copper
              constrainedby SolidMaterials.BaseClasses.Base_solid_constant_props;
  materialRecord material;

  parameter Length L = 1 "Wall length";
  parameter Length di = 1 "internal diameter";
  parameter Length t = 0.001 "Wall thickness";
  parameter Integer n = 3 "Number of lumps";
  parameter Integer l = 5 "Number of layers"; // 1 innermost <---> l outermost
  
  parameter Temperature TStart = 273.15 + 20 "Layer starting temperature";
  Temperature T[n,l] (each start = TStart);
  
//protected
  final parameter Length ri=di/2;
  final parameter Length re=(di+t)/2;
  final parameter Volume Vwall = Modelica.Constants.pi*(re^2-ri^2)*L;
  final parameter ThermalConductance G = material.lambda
                                         * 2*Modelica.Constants.pi*L
                                         / log(re/ri);
  final parameter HeatCapacity C = material.c * material.d*Vwall;
  final parameter HeatCapacity C_layer = C / l;

equation

  for i in 1:n loop
    hp_in.port[i].Q_flow = G/2 * (hp_in.port[i].T - T[i,1]);
    C_layer * der(T[i,1]) = hp_in.port[i].Q_flow - G * (T[i,1]-T[i,2]);
    
    for j in 2:l-1 loop
       C_layer*der(T[i,j]) = G * (T[i,j-1]-T[i,j]) - G * (T[i,j]-T[i,j+1]);
    end for;
    
    C_layer * der(T[i,l]) = G * (T[i,l-1]-T[i,l]) + hp_ext.port[i].Q_flow;
    hp_ext.port[i].Q_flow = G/2 * (hp_ext.port[i].T - T[i,l]);
  end for;

annotation(
    Icon(graphics = {Bitmap(extent = {{-60, -41}, {60, 41}}, imageSource = "iVBORw0KGgoAAAANSUhEUgAAAIYAAAA3CAYAAADJ7zJBAAAACXBIWXMAAAsSAAALEgHS3X78AAAB1ElEQVR4nO2c4WkCQRBGvwkpwBIswRIswRJSgiVcOkgJKcEOYjqwBEtIBxMO7mBdP8/7YYK678GCcI9Rl49ZvRGVmZLUSUpW06vrszCuFwEYCAZYCAZYCAZYCAZYCAZYCAZYCAZYCAZYYrjzCXACHQMsZ8GIiMW1rcJpwCkHJ5L6i0dJu/5xeQ2nLacWPooJ44+kjSmC04BTXlybsfOuKoDTiFO3kqySszDtBqcBx7WScW0m2g3OkzscDzjW0bUWOUg4jTk9K0mHSy1ykHAac8oN6Op2YzYJpxGHWQlYmJWA5fVRtiUiujleZk56t6gTEUtJbzPKHDPzc87z3RsPc5RExKwXmpnx13Uiov+q9zWjzHdmruc8373BUQIWggEWggEWggGWh/lWIun9juocZ9Y53ug1/zvc4AILRwlY3I+BdxGxndounAacaqCyLaZte0lLM0zCacApLy6HmXw5o99XBXAacUphb37Rs6qK4DTiuFYyrm6i3eA8uXOplRxmtBucJ3Y4HnCsM7aTMjknbbRoOTgNOWVb2dct0rRLnEacsw249MZx2nKYlYCFWQl4kj+ZZ5kPn3QMsBAMsBAMsBAMsBAMsBAMsBAMsBAMsBAMOEfSL2JJi8/FmwP/AAAAAElFTkSuQmCC")}));
end TubeWall_FiniteVolume_cylindrical_MultiL;