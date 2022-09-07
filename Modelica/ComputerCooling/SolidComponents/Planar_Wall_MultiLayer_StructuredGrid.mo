within ComputerCooling.SolidComponents;

model Planar_Wall_MultiLayer_StructuredGrid
   parameter Length[:] d_w = 0.01/10*ones(10) "lump dimensions along width (left->right)";
   parameter Length[:] d_d = 0.01/10*ones(10) "lump dimensions along depth (front->rear)";
   parameter Length[:] d_t = 0.01/10*ones(10) "lump dimensions along thickness (bottom->top)";

protected

equation

end Planar_Wall_MultiLayer_StructuredGrid;