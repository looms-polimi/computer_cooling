within ComputerCooling.Tutorial.T00_Introduction_to_EBM.EBM_introductory_example.Using_MSL_components;

model Circuit_01_MSL
    extends Icons.TutorialModel;
    Modelica.Electrical.Analog.Basic.Ground gnd annotation(
    Placement(visible = true, transformation(origin = {-10, -50}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
    Modelica.Electrical.Analog.Basic.Conductor G(G = 1e-4)  annotation(
    Placement(visible = true, transformation(origin = {-10, 20}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
    Modelica.Electrical.Analog.Basic.Capacitor C(C = 1e-5)  annotation(
    Placement(visible = true, transformation(origin = {10, -10}, extent = {{-10, -10}, {10, 10}}, rotation = -90)));
    Modelica.Electrical.Analog.Sources.StepVoltage S(V = 10, startTime = 0.1)  annotation(
    Placement(visible = true, transformation(origin = {-30, -10}, extent = {{-10, 10}, {10, -10}}, rotation = -90)));
equation
  connect(S.p, G.p) annotation(
    Line(points = {{-30, 0}, {-30, 20}, {-20, 20}}, color = {0, 0, 255}));
  connect(G.n, C.p) annotation(
    Line(points = {{0, 20}, {10, 20}, {10, 0}}, color = {0, 0, 255}));
  connect(S.n, gnd.p) annotation(
    Line(points = {{-30, -20}, {-30, -30}, {-10, -30}, {-10, -40}}, color = {0, 0, 255}));
  connect(C.n, gnd.p) annotation(
    Line(points = {{10, -20}, {10, -30}, {-10, -30}, {-10, -40}}, color = {0, 0, 255}));
annotation(
    Diagram);
end Circuit_01_MSL;