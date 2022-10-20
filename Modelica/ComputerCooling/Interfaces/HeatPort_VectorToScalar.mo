within ComputerCooling.Interfaces;

model HeatPort_VectorToScalar
  parameter Integer n=3;
  ComputerCooling.Interfaces.HeatPortVector hp_vec(n=n) annotation(
    Placement(visible = true, transformation(origin = {-16, 76}, extent = {{-10, -10}, {10, 10}}, rotation = 0), iconTransformation(origin = {1, 81}, extent = {{-41, -41}, {41, 41}}, rotation = 0)));
  Modelica.Thermal.HeatTransfer.Interfaces.HeatPort_a hp_sca annotation(
    Placement(visible = true, transformation(origin = {-14, -74}, extent = {{-10, -10}, {10, 10}}, rotation = 0), iconTransformation(origin = {-1, -101}, extent = {{-21, -21}, {21, 21}}, rotation = 0)));
equation
  for i in 1:n loop
      hp_vec.port[i].T = hp_sca.T;      
  end for;
  sum(hp_vec.port[i].Q_flow for i in 1:n) + hp_sca.Q_flow = 0;
end HeatPort_VectorToScalar;