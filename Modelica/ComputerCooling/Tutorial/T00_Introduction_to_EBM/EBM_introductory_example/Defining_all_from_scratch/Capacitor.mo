within ComputerCooling.Tutorial.T00_Introduction_to_EBM.EBM_introductory_example.Defining_all_from_scratch;

model Capacitor
  extends   Icons.TutorialModelComponent;
  extends   TwoPin;
  parameter Capacitance C     = 1e-6;
  parameter Voltage     v_ini = 0;    // initial voltage
equation
  i = C*der(v);                       // diff. equation
initial equation
  v = v_ini;                          // initialise
end Capacitor;