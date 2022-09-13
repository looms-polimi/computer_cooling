within ComputerCooling.Functions;

function cylindrical_fcf_conductances "Computing conductances of a cylindrical wall"
  extends Modelica.Icons.Function;

  input Real lambda;
  input Real L;
  input Real ri;
  input Integer t "total thickness of the cylinder";
  input Integer m;
  output Real G[m+1];

protected
  Real re=ri+t "External radius";
  Real l_t=t/m "Single layer thickness";
  Real i_r[m] "Centre of Intermediate radii ri -> i_r[i] -> re";

algorithm
  
    i_r[1]:=ri+l_t/2;
  for i in 2:m loop
    i_r[i]:=i_r[i-1]+l_t;
  end for;
  
  G[1]:=lambda*2*Modelica.Constants.pi*L/log(i_r[1]/ri);
  for i in 2:m loop
    G[i]:=lambda*2*Modelica.Constants.pi*L/log(i_r[i]/i_r[i-1]);
  end for;
  G[m+1]:=lambda*2*Modelica.Constants.pi*L/log(re/i_r[m]);
  
end cylindrical_fcf_conductances;