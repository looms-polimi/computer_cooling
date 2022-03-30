#if defined(__cplusplus)
  extern "C" {
#endif
  int T05_3DICE_Integration_T05_Interface3DICE_mayer(DATA* data, modelica_real** res, short*);
  int T05_3DICE_Integration_T05_Interface3DICE_lagrange(DATA* data, modelica_real** res, short *, short *);
  int T05_3DICE_Integration_T05_Interface3DICE_pickUpBoundsForInputsInOptimization(DATA* data, modelica_real* min, modelica_real* max, modelica_real*nominal, modelica_boolean *useNominal, char ** name, modelica_real * start, modelica_real * startTimeOpt);
  int T05_3DICE_Integration_T05_Interface3DICE_setInputData(DATA *data, const modelica_boolean file);
  int T05_3DICE_Integration_T05_Interface3DICE_getTimeGrid(DATA *data, modelica_integer * nsi, modelica_real**t);
#if defined(__cplusplus)
}
#endif