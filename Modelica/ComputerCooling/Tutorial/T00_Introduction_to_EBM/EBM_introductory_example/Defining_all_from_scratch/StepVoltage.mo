within ComputerCooling.Tutorial.T00_Introduction_to_EBM.EBM_introductory_example.Defining_all_from_scratch;

model StepVoltage
  extends   Icons.TutorialModelComponent;
  extends   TwoPin;
  parameter Voltage V0   = 0;
  parameter Voltage V1   = 10;
  parameter Time    t_sw = 0;
equation
  v = if time<t_sw then V0 else V1; // conditional equation
end StepVoltage;