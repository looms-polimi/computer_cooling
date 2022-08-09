within ComputerCooling.IncompressibleLiquidComponents.Ducts.Walls;

model CylindricalWall_FiniteVolume
  extends BaseClasses.base_Wall_FiniteVolume;
  
  parameter Length D = 1  "internal diameter";
  
protected
  final parameter Length ri=D/2;
  final parameter Length re=(D+2*t)/2;
  final parameter Volume Vwall = Modelica.Constants.pi*(re^2-ri^2)*L;
  final parameter ThermalConductance G = material.lambda
                                         * 2*Modelica.Constants.pi*L
                                         / log(re/ri);
                                         
  final parameter HeatCapacity C = material.c * material.d*Vwall;
  final parameter HeatCapacity C_layer = C / l;

equation

  for i in 1:n loop
    hp_in.port[i].Q_flow    = 2*G * (hp_in.port[i].T - T[i,1]);
    
    if l>1 then
      C_layer * der(T[i,1])   = hp_in.port[i].Q_flow - G * (T[i,1]-T[i,2]);
      
      for j in 2:l-1 loop
        C_layer * der(T[i,j]) = G * (T[i,j-1]-T[i,j]) - G * (T[i,j]-T[i,j+1]);
      end for;
      
      C_layer * der(T[i,l])   = G * (T[i,l-1]-T[i,l]) + hp_ext.port[i].Q_flow;
      else 
      C_layer * der(T[i,l]) = hp_in.port[i].Q_flow + hp_ext.port[i].Q_flow;
    end if;
    hp_ext.port[i].Q_flow   = 2*G * (hp_ext.port[i].T - T[i,l]);
    
  end for;

annotation(
    Icon(graphics = {Bitmap(extent = {{-60, -41}, {60, 41}}, imageSource = "iVBORw0KGgoAAAANSUhEUgAAAIMAAAA3CAYAAAAvxvkFAAAACXBIWXMAAAsSAAALEgHS3X78AAABhElEQVR4nO2c0W2DMBRF36syQEfoCIzICFmpGzBCNugIrqyEm7RAC5iotd85kiU+kiM9uLpGkWJPKVnG3a8XEJX3Fx49jBAGEIQBBGEAQRhAEAYQhAEEYQBBGEDoF0gAmgHEYWFw91c8dXsOCYO7d2b24e49noo9+Z2hdJnZkFW3la+7PU48f+s5Igj9g3hcPZ76PKVB6GbEA546PaVhGGbkmysQz//wsD3guX9mZxDYHhr07A0D20ODnj1BoI4b9WwdlDpu2LN1WOq4Yc+WQcPXaOuetYNSowE8a4elRgN41gxKjQbxhKg/PCu//4ucGg3k+emGUaPBPE+pGzyVeqhRPIthoEZjeiZhYHuI6VkKAzUa0DMJAzUa0zMJAzUa07MUBmo0oGfmflGjET1LYciVcymtGzx1eWZnvQ2c/4R5Ln4bxVOV5/v6cj6Du7+llC5WCJ66PJrvMQwQGw7rAHEaLzhIPDwcJA53CAMIwgCCMIAgDCAIAwjCAIIwgCAMcMXMPgHkgE6/QsQQvAAAAABJRU5ErkJggg==")}));  

end CylindricalWall_FiniteVolume;