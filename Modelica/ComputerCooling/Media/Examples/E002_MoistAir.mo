within ComputerCooling.Media.Examples;

model E002_MoistAir
  extends Modelica.Icons.Example;
  
  Media.MoistAir air1,air2;
  
equation
  air1.p = 101325;
  air1.T = 293.15;
  air1.x = 0.01;

  air2.p   = 101325;
  air2.X   = 0.001;
  air2.phi = max(0.01,0.5-0.49*time);

end E002_MoistAir;