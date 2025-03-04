within ComputerCooling.Media.Examples;

model E001_SubCooledWater_Incompressible
  extends Modelica.Icons.Example;
  Media.SubCooledWater_Incompressible water1,water2;
equation
  water1.p = 1e5;
  water1.T = 300+20*time;
  
  water2.p = 2e5;
  water2.e = 1.3e6+1e5*time;  

end E001_SubCooledWater_Incompressible;