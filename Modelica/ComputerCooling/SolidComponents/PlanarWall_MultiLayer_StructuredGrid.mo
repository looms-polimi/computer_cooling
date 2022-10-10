within ComputerCooling.SolidComponents;

model PlanarWall_MultiLayer_StructuredGrid

   replaceable record Material = SolidMaterials.Copper
               constrainedby SolidMaterials.BaseClasses.Base_solid_constant_props;
              
   Material material;
              
   parameter Length[:] d_w = 0.01*ones(5) "lump dimensions along width (left->right)";
   parameter Length[:] d_d = 0.01*ones(4) "lump dimensions along depth (front->rear)";
   parameter Length[:] d_t = 0.01*ones(3) "lump dimensions along thickness (bottom->top)";
   parameter Temperature TStart = 273.15 + 20 "Starting temperature";
   
   ComputerCooling.Interfaces.HeatPortMatrix hp_in(rows = w, cols = d) annotation(
    Placement(visible = true, transformation(origin = {0, -80}, extent = {{-20, -20}, {20, 20}}, rotation = 0), iconTransformation(origin = {0, -80}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
   ComputerCooling.Interfaces.HeatPortMatrix hp_ext(rows = w, cols = d) annotation(
    Placement(visible = true, transformation(origin = {0, 80}, extent = {{-20, -20}, {20, 20}}, rotation = 0), iconTransformation(origin = {0, 80}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));

 
   Temperature T[w, d, t](each start = TStart, each fixed = true);
   
protected 

  final parameter Integer w = size(d_w,1) "Number of lumps along width (1 left <---> w right)" annotation(
    Evaluate = true);
  final parameter Integer d = size(d_d,1) "Number of lumps along depth (1 front <---> d rear)" annotation(
    Evaluate = true);
  final parameter Integer t = size(d_t,1) "Number of lumps along thickness (1 botton <---> t top)" annotation(
    Evaluate = true);

  
  final parameter Area A_w[d, t] = ComputerCooling.Functions.matrix_area(d_d, d_t) "Section areas along width";
  final parameter Area A_d[w, t] = ComputerCooling.Functions.matrix_area(d_w, d_t) "Section areas along depth";
  final parameter Area A_t[w, d] = ComputerCooling.Functions.matrix_area(d_w, d_d) "Section areas along thickness";
  
  final parameter Length dist_w[w+1] = ComputerCooling.Functions.unid_fcf_distances(d_w) "Distances along width"; 
  final parameter Length dist_d[d+1] = ComputerCooling.Functions.unid_fcf_distances(d_d) "Distances along depth";
  final parameter Length dist_t[t+1] = ComputerCooling.Functions.unid_fcf_distances(d_t) "Distances along thickness";
  
  //Thermal conductance G[distances along heat direction, Area]
  final parameter ThermalConductance G_w[w+1,d,t] = ComputerCooling.Functions.trid_fcf_conductances(material.lambda, A_w, dist_w);  
  final parameter ThermalConductance G_d[d+1,w,t] = ComputerCooling.Functions.trid_fcf_conductances(material.lambda, A_d, dist_d);
  final parameter ThermalConductance G_t[t+1,w,d] = ComputerCooling.Functions.trid_fcf_conductances(material.lambda, A_t, dist_t);
  
  //Heat capacities of each volume lump
  final parameter HeatCapacity C[w,d,t] = ComputerCooling.Functions.trid_heatCapacity(material.c, material.d, d_w, d_d, d_t);
  
equation

for i in 1:w loop
  for j in 1:d loop
    hp_in.port[i,j].Q_flow    = G_t[1,i,j] * (hp_in.port[i,j].T - T[i,j,1]);
    hp_ext.port[i,j].Q_flow   = G_t[t+1,i,j] * (hp_ext.port[i,j].T - T[i,j,t]);
  end for;
end for;

//we assume w,d,t > 1


//edge lumps on first thickness layer
      C[1,1,1] * der(T[1,1,1]) = hp_in.port[1,1].Q_flow - G_t[2,1,1] * (T[1,1,1]-T[1,1,2]) - G_w[2,1,1] * (T[1,1,1]-T[2,1,1]) - G_d[2,1,1] * (T[1,1,1]-T[1,2,1]); //lump(1,1,1)
      
      C[w,1,1] * der(T[w,1,1]) = hp_in.port[w,1].Q_flow - G_t[2,w,1] * (T[w,1,1]-T[w,1,2]) - G_w[w,1,1] * (T[w,1,1]-T[w-1,1,1]) - G_d[2,w,1] * (T[w,1,1]-T[w,2,1]); //lump(w,1,1)
      
       C[1,d,1] * der(T[1,d,1]) = hp_in.port[1,d].Q_flow - G_t[2,1,d] * (T[1,d,1]-T[1,d,2]) - G_w[2,d,1] * (T[1,d,1]-T[2,d,1]) - G_d[d,1,1] * (T[1,d,1]-T[1,d-1,1]); //lump(1,d,1)
       
       C[w,d,1] * der(T[w,d,1]) = hp_in.port[w,d].Q_flow - G_t[2,w,d] * (T[w,d,1]-T[w,d,2]) - G_w[w,d,1] * (T[w,d,1]-T[w-1,d,1]) - G_d[d,w,1] * (T[w,d,1]-T[w,d-1,1]); //lump(w,d,1)
      
      
      for k in 2:t-1 loop  //edge lumps along thickness
        C[1,1,k] * der(T[1,1,k]) = G_t[k,1,1] * (T[1,1,k-1]-T[1,1,k]) - G_t[k+1,1,1] * (T[1,1,k]-T[1,1,k+1]) - G_w[2,1,k] * (T[1,1,k]-T[2,1,k]) - G_d[2,1,k] * (T[1,1,k]-T[1,2,k]); 
        
        C[w,1,k] * der(T[w,1,k]) = G_t[k,w,1] * (T[w,1,k-1]-T[w,1,k]) - G_t[k+1,w,1] * (T[w,1,k]-T[w,1,k+1]) - G_w[w,1,k] * (T[w,1,k]-T[w-1,1,k]) - G_d[2,w,k] * (T[w,1,k]-T[w,2,k]);
        
        C[1,d,k] * der(T[1,d,k]) = G_t[k,1,d] * (T[1,d,k-1]-T[1,d,k]) - G_t[k+1,1,d] * (T[1,d,k]-T[1,d,k+1]) - G_w[2,d,k] * (T[1,d,k]-T[2,d,k]) - G_d[d,1,k] * (T[1,d,k]-T[1,d-1,k]);
        
         C[w,d,k] * der(T[w,d,k]) = G_t[k,w,d] * (T[w,d,k-1]-T[w,d,k]) - G_t[k+1,w,d] * (T[w,d,k]-T[w,d,k+1]) - G_w[w,d,k] * (T[w,d,k]-T[w-1,d,k]) - G_d[d,w,k] * (T[w,d,k]-T[w,d-1,k]);
      end for;
      
      
      C[1,1,t] * der(T[1,1,t]) = G_t[t,1,1] * (T[1,1,t-1]-T[1,1,t]) + hp_ext.port[1,1].Q_flow - G_w[2,1,t] * (T[1,1,t]-T[2,1,t]) - G_d[2,1,t] * (T[1,1,t]-T[1,2,t]); //lump(1,1,t)
      
      C[w,1,t] * der(T[w,1,t]) = G_t[t,w,1] * (T[w,1,t-1]-T[w,1,t]) + hp_ext.port[w,1].Q_flow - G_w[w,1,t] * (T[w,1,t]-T[w-1,1,t]) - G_d[2,w,t] * (T[w,1,t]-T[w,2,t]); //lump(w,1,t)
      
      C[1,d,t] * der(T[1,d,t]) = G_t[t,1,d] * (T[1,d,t-1]-T[1,d,t]) + hp_ext.port[1,d].Q_flow - G_w[2,d,t] * (T[1,d,t]-T[2,d,t]) - G_d[d,1,t] * (T[1,d,t]-T[1,d-1,t]); //lump(1,d,t)
      
      C[w,d,t] * der(T[w,d,t]) = G_t[t,w,d] * (T[w,d,t-1]-T[w,d,t]) + hp_ext.port[w,d].Q_flow - G_w[w,d,t] * (T[w,d,t]-T[w-1,d,t]) - G_d[d,w,t] * (T[w,d,t]-T[w,d-1,t]); //lump(w,d,t)
         
      
//border lumps along width

  for i in 2:w-1 loop
    C[i,1,1] * der(T[i,1,1]) = hp_in.port[i,1].Q_flow - G_t[2,i,1] * (T[i,1,1]-T[i,1,2]) - G_w[i,1,1] * (T[i,1,1]-T[i-1,1,1]) - G_w[i+1,1,1] * (T[i,1,1]-T[i+1,1,1]) - G_d[2,i,1] * (T[i,1,1]-T[i,2,1]);
    
    C[i,d,1] * der(T[i,d,1]) = hp_in.port[i,d].Q_flow - G_t[2,i,d] * (T[i,d,1]-T[i,d,2]) - G_w[i,d,1] * (T[i,d,1]-T[i-1,d,1]) - G_w[i+1,d,1] * (T[i,d,1]-T[i+1,d,1]) - G_d[d,i,1] * (T[i,d,1]-T[i,d-1,1]);
    
    for k in 2:t-1 loop   //border lumps along width and thickness
        C[i,1,k] * der(T[i,1,k]) = G_t[k,i,1] * (T[i,1,k-1]-T[i,1,k]) - G_t[k+1,i,1] * (T[i,1,k]-T[i,1,k+1]) - G_w[i,1,k] * (T[i,1,k]-T[i-1,1,k]) - G_w[i+1,1,k] * (T[i,1,k]-T[i+1,1,k]) - G_d[2,i,k] * (T[i,1,k]-T[i,2,k]);
        
        C[i,d,k] * der(T[i,d,k]) = G_t[k,i,d] * (T[i,d,k-1]-T[i,d,k]) - G_t[k+1,i,d] * (T[i,d,k]-T[i,d,k+1]) - G_w[i,d,k] * (T[i,d,k]-T[i-1,d,k]) - G_w[i+1,d,k] * (T[i,d,k]-T[i+1,d,k]) - G_d[d,i,k] * (T[i,d,k]-T[i,d-1,k]);
      end for;
      
    C[i,1,t] * der(T[i,1,t]) = G_t[t,i,1] * (T[i,1,t-1]-T[i,1,t]) + hp_ext.port[i,1].Q_flow - G_w[i,1,t] * (T[i,1,t]-T[i-1,1,t]) - G_w[i+1,1,t] * (T[i,1,t]-T[i+1,1,t]) - G_d[2,i,t] * (T[i,1,t]-T[i,2,t]);
    
    C[i,d,t] * der(T[i,d,t]) = G_t[t,i,d] * (T[i,d,t-1]-T[i,d,t]) + hp_ext.port[i,d].Q_flow - G_w[i,d,t] * (T[i,d,t]-T[i-1,d,t]) - G_w[i+1,d,t] * (T[i,d,t]-T[i+1,d,t]) - G_d[d,i,t] * (T[i,d,t]-T[i,d-1,t]);
  end for; 
      
//border lumps along depth
  
  for j in 2:d-1 loop
    C[1,j,1] * der(T[1,j,1]) = hp_in.port[1,j].Q_flow - G_t[2,1,j] * (T[1,j,1]-T[1,j,2]) - G_w[2,j,1] * (T[1,j,1]-T[2,j,1]) - G_d[j,1,1] * (T[1,j,1]-T[1,j-1,1]) - G_d[j+1,1,1] * (T[1,j,1]-T[1,j+1,1]);
    
    C[w,j,1] * der(T[w,j,1]) = hp_in.port[w,j].Q_flow - G_t[2,w,j] * (T[w,j,1]-T[w,j,2]) - G_w[w,j,1] * (T[w,j,1]-T[w-1,j,1]) - G_d[j,w,1] * (T[w,j,1]-T[w,j-1,1]) - G_d[j+1,w,1] * (T[w,j,1]-T[w,j+1,1]);
    
    for k in 2:t-1 loop  //border lumps along depth and thickness
        C[1,j,k] * der(T[1,j,k]) = G_t[k,1,j] * (T[1,j,k-1]-T[1,j,k]) - G_t[k+1,1,j] * (T[1,j,k]-T[1,j,k+1]) - G_w[2,j,k] * (T[1,j,k]-T[2,j,k]) -  G_d[j,1,k] * (T[1,j,k]-T[1,j-1,k]) - G_d[j+1,1,k] * (T[1,j,k]-T[1,j+1,k]);
        
        C[w,j,k] * der(T[w,j,k]) = G_t[k,w,j] * (T[w,j,k-1]-T[w,j,k]) - G_t[k+1,w,j] * (T[w,j,k]-T[w,j,k+1]) - G_w[w,j,k] * (T[w,j,k]-T[w-1,j,k]) -  G_d[j,w,k] * (T[w,j,k]-T[w,j-1,k]) - G_d[j+1,w,k] * (T[w,j,k]-T[w,j+1,k]);
      end for;
      
    C[1,j,t] * der(T[1,j,t]) = G_t[t,1,j] * (T[1,j,t-1]-T[1,j,t]) + hp_ext.port[1,j].Q_flow - G_w[2,j,t] * (T[1,j,t]-T[2,j,t]) - G_d[j,1,t] * (T[1,j,t]-T[1,j-1,t]) - G_d[j+1,1,t] * (T[1,j,t]-T[1,j+1,t]);
    
    C[w,j,t] * der(T[w,j,t]) = G_t[t,w,j] * (T[w,j,t-1]-T[w,j,t]) + hp_ext.port[w,j].Q_flow - G_w[w,j,t] * (T[w,j,t]-T[w-1,j,t]) - G_d[j,w,t] * (T[w,j,t]-T[w,j-1,t]) - G_d[j+1,w,t] * (T[w,j,t]-T[w,j+1,t]);
  end for; 
  
//"in the middle" lumps along all directions 
  for i in 2:w-1 loop
    for j in 2:d-1 loop
      C[i,j,1] * der(T[i,j,1]) = hp_in.port[i,j].Q_flow - G_t[2,i,j] * (T[i,j,1]-T[i,j,2]) - G_w[i,j,1] * (T[i,j,1]-T[i-1,j,1]) - G_w[i+1,j,1] * (T[i,j,1]-T[i+1,j,1]) - G_d[j,i,1] * (T[i,j,1]-T[i,j-1,1]) - G_d[j+1,i,1] * (T[i,j,1]-T[i,j+1,1]);
    
    for k in 2:t-1 loop
        C[i,j,k] * der(T[i,j,k]) = G_t[k,i,j] * (T[i,j,k-1]-T[i,j,k]) - G_t[k+1,i,j] * (T[i,j,k]-T[i,j,k+1]) - G_w[i,j,k] * (T[i,j,k]-T[i-1,j,k]) - G_w[i+1,j,k] * (T[i,j,k]-T[i+1,j,k]) - G_d[j,i,k] * (T[i,j,k]-T[i,j-1,k]) - G_d[j+1,i,k] * (T[i,j,k]-T[i,j+1,k]);
    end for;
    
    C[i,j,t] * der(T[i,j,t]) = G_t[t,i,j] * (T[i,j,t-1]-T[i,j,t]) + hp_ext.port[i,j].Q_flow - G_w[i,j,t] * (T[i,j,t]-T[i-1,j,t]) - G_w[i+1,j,t] * (T[i,j,t]-T[i+1,j,t]) - G_d[j,i,t] * (T[i,j,t]-T[i,j-1,t]) - G_d[j+1,i,t] * (T[i,j,t]-T[i,j+1,t]);
    end for;
  end for;
  
end PlanarWall_MultiLayer_StructuredGrid;