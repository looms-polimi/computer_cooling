within ComputerCooling.SolidComponents.StreamConfinement;

model CylindricalWall_FiniteVolume
  extends BaseClasses.Base_StreamConfinement;
  
  parameter Length D = 1  "internal diameter";
  
protected
  final parameter Length ri=D/2;
  final parameter Length re=(D+2*t)/2;
  final parameter ThermalConductance G[m+1] = ComputerCooling.Functions.cylindrical_fcf_conductances(material.lambda, L/n, ri, t, m);                                        
  final parameter HeatCapacity C[m] = ComputerCooling.Functions.cylindrical_heatCapacity(material.c, material.d, L/n, ri, t, m);

equation

  for i in 1:n loop
    hp_in.port[i].Q_flow    = G[1] * (hp_in.port[i].T - T[i,1]);
    
    if m>1 then
      C[1] * der(T[i,1])   = hp_in.port[i].Q_flow - G[2] * (T[i,1]-T[i,2]);
      
      for j in 2:m-1 loop
        C[j] * der(T[i,j]) = G[j] * (T[i,j-1]-T[i,j]) - G[j+1] * (T[i,j]-T[i,j+1]);
      end for;
      
      C[m] * der(T[i,m])   = G[m] * (T[i,m-1]-T[i,m]) + hp_ext.port[i].Q_flow;
      else 
      C[1] * der(T[i,m]) = hp_in.port[i].Q_flow + hp_ext.port[i].Q_flow;
    end if;
    hp_ext.port[i].Q_flow   = G[m+1] * (hp_ext.port[i].T - T[i,m]);
    
  end for;

annotation(
    Icon(graphics = {Bitmap(extent = {{-60, -41}, {60, 41}}, imageSource = "iVBORw0KGgoAAAANSUhEUgAAAIMAAAA3CAYAAAAvxvkFAAAACXBIWXMAAAsSAAALEgHS3X78AAABhElEQVR4nO2c0W2DMBRF36syQEfoCIzICFmpGzBCNugIrqyEm7RAC5iotd85kiU+kiM9uLpGkWJPKVnG3a8XEJX3Fx49jBAGEIQBBGEAQRhAEAYQhAEEYQBBGEDoF0gAmgHEYWFw91c8dXsOCYO7d2b24e49noo9+Z2hdJnZkFW3la+7PU48f+s5Igj9g3hcPZ76PKVB6GbEA546PaVhGGbkmysQz//wsD3guX9mZxDYHhr07A0D20ODnj1BoI4b9WwdlDpu2LN1WOq4Yc+WQcPXaOuetYNSowE8a4elRgN41gxKjQbxhKg/PCu//4ucGg3k+emGUaPBPE+pGzyVeqhRPIthoEZjeiZhYHuI6VkKAzUa0DMJAzUa0zMJAzUa07MUBmo0oGfmflGjET1LYciVcymtGzx1eWZnvQ2c/4R5Ln4bxVOV5/v6cj6Du7+llC5WCJ66PJrvMQwQGw7rAHEaLzhIPDwcJA53CAMIwgCCMIAgDCAIAwjCAIIwgCAMcMXMPgHkgE6/QsQQvAAAAABJRU5ErkJggg==")}));  

end CylindricalWall_FiniteVolume;