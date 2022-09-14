within ComputerCooling.Functions;

function trid_fcf_conductances "Computing conductances tridimensionally"
extends Modelica.Icons.Function;

input Real lambda;
input Real A[:,:] "areas";
input Real d[:] "distances";
output Real G[size(d,1), size(A,1), size(A,2)];

algorithm

for i in 1:size(d,1) loop
    for j in 1:size(A,1) loop
      for k in 1:size(A,2) loop 
  G[i, j, k]:=lambda * A[j, k]/d[i];
      end for;
    end for;
end for;

end trid_fcf_conductances;