within ComputerCooling.Tutorial.T00_Introduction_to_EBM.EBM_introductory_example.Defining_all_from_scratch;

partial model TwoPin "Generic two-pin component"
  extends Icons.TutorialModelComponent;
  pin     a,b;
  Voltage v;
  Current i;
equation
  a.i+b.i = 0; // current balance
  a.v-b.v = v; // voltage across
  a.i     = i; // current through (utiliser convention)
end TwoPin;