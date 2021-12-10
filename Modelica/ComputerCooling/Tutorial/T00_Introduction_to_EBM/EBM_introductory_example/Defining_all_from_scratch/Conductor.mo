within ComputerCooling.Tutorial.T00_Introduction_to_EBM.EBM_introductory_example.Defining_all_from_scratch;

model Conductor "Conductor"
  extends   Icons.TutorialModelComponent;
  extends   TwoPin;               // inhertit base class
  parameter Conductance G = 1e-3; // default value
equation
  i = G*v;                        // add Ohm's law
end Conductor;