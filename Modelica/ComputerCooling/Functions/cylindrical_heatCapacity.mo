within ComputerCooling.Functions;

function cylindrical_heatCapacity
  extends Modelica.Icons.Function;
  
  input Real c;
  input Real d;
  input Real l "Single lump length";
  input Real ri;
  input Real t "total thickness of the cylinder";
  input Integer m;
  output Real C[m];
 
protected
  Real V[m] "Layer volumes";
  Real l_t=t/m "Single layer thickness";
  Real re=ri+t "External radius";
  Real r[m-1] "Intermediate radii ri -> r[i] -> re";
  
  
algorithm

  for i in 1:m-1 loop
    r[i]:=ri+i*l_t;
  end for;
  
  V[1]:=Modelica.Constants.pi*l*(r[1]^2-ri^2);
  for i in 2:m-1 loop
    V[i]:=Modelica.Constants.pi*l*(r[i]^2-r[i-1]^2);
  end for;
  V[m]:=Modelica.Constants.pi*l*(re^2-r[m-1]^2);
  
  for i in 1:m loop
    C[i]:= c * d* V[i];
  end for; 

end cylindrical_heatCapacity;