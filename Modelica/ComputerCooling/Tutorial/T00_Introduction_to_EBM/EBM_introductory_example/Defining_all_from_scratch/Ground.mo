within ComputerCooling.Tutorial.T00_Introduction_to_EBM.EBM_introductory_example.Defining_all_from_scratch;

model Ground
  extends Icons.TutorialModelComponent;
  pin a;
equation
  a.v = 0;
end Ground;