within ComputerCooling.Functions;

function matrix_area
  extends Modelica.Icons.Function;
  
  input Real x[4] "lump dimensions along x";
  input Real y[4] "lump dimensions along y";
  output Real A[size(x,1),size(y,1)];
  
protected
  Integer n;
  Integer m;
  
algorithm
  n := size(x,1);
  m := size(y,1);
  
  for i in 1:n loop
    for j in 1:m loop
      A[i, j] := x[i]*y[j];
    end for;
  end for;
  
end matrix_area;