within ComputerCooling.Functions;

function trid_heatCapacity "computing heat capacity tridimensionally"
extends Modelica.Icons.Function;

input Real c;
input Real rho;
input Real d_w[4] "width dimensions";
input Real d_d[4] "depth dimensions";
input Real d_t[4] "thickness dimensions";
output Real C[size(d_w,1), size(d_d,1), size(d_t,1)];

algorithm

for i in 1:size(d_w,1) loop
    for j in 1:size(d_d,1) loop
      for k in 1:size(d_t,1) loop 
  C[i, j, k]:=c * rho * d_w[i] * d_d[j] *d_t[k];
      end for;
    end for;
end for;

end trid_heatCapacity;