within ComputerCooling.OnePhaseLiquidComponents.Transfer.Junctions;

model JunctionT
  ComputerCooling.Interfaces.pwh pwh_a annotation(
    Placement(visible = true, transformation(origin = {0, 120}, extent = {{-20, -20}, {20, 20}}, rotation = 0), iconTransformation(origin = {0, 120}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  ComputerCooling.Interfaces.pwh pwh_b annotation(
    Placement(visible = true, transformation(origin = {-120, 0}, extent = {{-20, -20}, {20, 20}}, rotation = 0), iconTransformation(origin = {-120, 0}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  ComputerCooling.Interfaces.pwh pwh_c annotation(
    Placement(visible = true, transformation(origin = {120, 0}, extent = {{-20, -20}, {20, 20}}, rotation = 0), iconTransformation(origin = {120, 0}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  
  replaceable model medium = Media.SubCooledWater_Incompressible;
  medium m;
  
  type JunctionTFlow = enumeration(
    DoubleBranching "Double branching, up to sides", 
    SimpleBranching_bOut "Simple branching, side b to side c & up", 
    SimpleBranching_cOut "Simple branching, side c to side b & up", 
    SimpleConfluence_bIn "Simple confluence, side c & up to side b", 
    SimpleConfluence_cIn "Simple confluence, side b & up to side c", 
    DoubleConfluence "Double confluence, sides to up"
  );
    
  parameter JunctionTFlow junctionTFlow "Predicted flow behaviour";
  parameter Length D = 0.05 "Pipe diameter";
  parameter MassFlowRate w_nom_a = 0.1 "Nominal flow entering connector a (N)";
  parameter MassFlowRate w_nom_b = 0.1 "Nominal flow entering connector b (W)";
  parameter MassFlowRate w_nom_c = 0.1 "Nominal flow entering connector c (E)";
  
  ComputerCooling.OnePhaseLiquidComponents.FlowControl.PressureDrops.DpLinear_NominalPoint dpLin_a(dp_nom = dp_nom_a, w_nom = w_nom_a) annotation(
    Placement(visible = true, transformation(origin = {0, 60}, extent = {{-20, -20}, {20, 20}}, rotation = -90)));
  ComputerCooling.OnePhaseLiquidComponents.FlowControl.PressureDrops.DpLinear_NominalPoint dpLin_b(dp_nom = dp_nom_b, w_nom = w_nom_b) annotation(
    Placement(visible = true, transformation(origin = {-40, 0}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  ComputerCooling.OnePhaseLiquidComponents.FlowControl.PressureDrops.DpLinear_NominalPoint dpLin_c(dp_nom = dp_nom_c, w_nom = w_nom_c) annotation(
    Placement(visible = true, transformation(origin = {40, 0}, extent = {{20, -20}, {-20, 20}}, rotation = 0)));

protected
  parameter Real kab = 
    if junctionTFlow == JunctionTFlow.DoubleBranching then 2 else //ecoacque
    if junctionTFlow == JunctionTFlow.SimpleBranching_bOut then 0.001 else
    if junctionTFlow == JunctionTFlow.SimpleBranching_cOut then -0.8 else  //0.8-1.3 - unige
    if junctionTFlow == JunctionTFlow.SimpleConfluence_bIn then -0.001 else 
    if junctionTFlow == JunctionTFlow.SimpleConfluence_cIn then 0.4 else  //0.4-1.1 - unige
    if junctionTFlow == JunctionTFlow.DoubleConfluence then -0.5 else  //ecoacque
    0;
  
  parameter Real kac = 
    if junctionTFlow == JunctionTFlow.DoubleBranching then 2 else //ecoacque
    if junctionTFlow == JunctionTFlow.SimpleBranching_bOut then -0.8 else  //0.8-1.3 - unige
    if junctionTFlow == JunctionTFlow.SimpleBranching_cOut then 0.001 else 
    if junctionTFlow == JunctionTFlow.SimpleConfluence_bIn then 0.4 else  //0.4-11 - unige
    if junctionTFlow == JunctionTFlow.SimpleConfluence_cIn then -0.001 else 
    if junctionTFlow == JunctionTFlow.DoubleConfluence then -0.5 else  //ecoacque
    0;

  parameter Real kbc = 
    if junctionTFlow == JunctionTFlow.DoubleBranching then 0.001 else 
    if junctionTFlow == JunctionTFlow.SimpleBranching_bOut then -0.05 else  //0.05-0.4 -unige
    if junctionTFlow == JunctionTFlow.SimpleBranching_cOut then 0.05 else  //0.05-0.4 - unige
    if junctionTFlow == JunctionTFlow.SimpleConfluence_bIn then 0.5 else  //0.5-0.6 - unige
    if junctionTFlow == JunctionTFlow.SimpleConfluence_cIn then -0.5 else  //0.5-0.6 - unige
    if junctionTFlow == JunctionTFlow.DoubleConfluence then 0.001 else 
    0;
  
  parameter Area A = Modelica.Constants.pi * (D / 2) ^ 2;
  
/*    
  parameter PressureDifference dp_nom_a;
  parameter PressureDifference dp_nom_b;
  parameter PressureDifference dp_nom_c;
*/
  parameter PressureDifference dp_nom_a = 
    + 0.25 * (kab * 0.001 * (1 / A ^ 2) * ((w_nom_a + w_nom_b) / 2) ^ 2) 
    + 0.25 * (kac * 0.001 * (1 / A ^ 2) * ((w_nom_a + w_nom_c) / 2) ^ 2) 
    + 0.25 * (kbc * 0.001 * (1 / A ^ 2) * ((w_nom_b + w_nom_c) / 2) ^ 2);
           
  parameter PressureDifference dp_nom_b = 
    - 0.25 * (kab * 0.001 * (1 / A ^ 2) * ((w_nom_a + w_nom_b) / 2) ^ 2)
    + 0.25 * (kac * 0.001 * (1 / A ^ 2) * ((w_nom_a + w_nom_c) / 2) ^ 2) 
    + 0.25 * (kbc * 0.001 * (1 / A ^ 2) * ((w_nom_b + w_nom_c) / 2) ^ 2);
             
  parameter PressureDifference dp_nom_c = 
    - 0.25 * (kab * 0.001 * (1 / A ^ 2) * ((w_nom_a + w_nom_b) / 2) ^ 2) 
    + 0.25 * (kac * 0.001 * (1 / A ^ 2) * ((w_nom_a + w_nom_c) / 2) ^ 2) 
    - 0.25 * (kbc * 0.001 * (1 / A ^ 2) * ((w_nom_b + w_nom_c) / 2) ^ 2);
    
equation
  m.p = pwh_a.p;
  m.h = pwh_a.h;
  
  connect(pwh_a, dpLin_a.pwh_a) annotation(
    Line(points = {{0, 120}, {0, 84}}, color = {0, 0, 0}));
  connect(pwh_b, dpLin_b.pwh_a) annotation(
    Line(points = {{-120, 0}, {-64, 0}}, color = {0, 0, 0}));
  connect(pwh_c, dpLin_c.pwh_a) annotation(
    Line(points = {{120, 0}, {64, 0}}, color = {0, 0, 0}));
  connect(dpLin_a.pwh_b, dpLin_c.pwh_b) annotation(
    Line(points = {{0, 36}, {0, 0}, {16, 0}}, color = {0, 0, 0}));
  connect(dpLin_b.pwh_b, dpLin_c.pwh_b) annotation(
    Line(points = {{-16, 0}, {16, 0}}, color = {0, 0, 0}));
  
  //assert(Integer(junctionTFlow) <= 0, "Missing predicted flow");    //FIXME
end JunctionT;