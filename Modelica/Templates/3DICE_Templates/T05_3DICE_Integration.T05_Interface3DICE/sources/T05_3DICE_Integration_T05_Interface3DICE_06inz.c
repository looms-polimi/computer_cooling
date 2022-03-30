/* Initialization */
#include "T05_3DICE_Integration_T05_Interface3DICE_model.h"
#include "T05_3DICE_Integration_T05_Interface3DICE_11mix.h"
#include "T05_3DICE_Integration_T05_Interface3DICE_12jac.h"
#if defined(__cplusplus)
extern "C" {
#endif

void T05_3DICE_Integration_T05_Interface3DICE_functionInitialEquations_0(DATA *data, threadData_t *threadData);
void T05_3DICE_Integration_T05_Interface3DICE_functionInitialEquations_1(DATA *data, threadData_t *threadData);

int T05_3DICE_Integration_T05_Interface3DICE_functionInitialEquations(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->discreteCall = 1;
  T05_3DICE_Integration_T05_Interface3DICE_functionInitialEquations_0(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_functionInitialEquations_1(data, threadData);
  data->simulationInfo->discreteCall = 0;
  
  TRACE_POP
  return 0;
}

/* No T05_3DICE_Integration_T05_Interface3DICE_functionInitialEquations_lambda0 function */

int T05_3DICE_Integration_T05_Interface3DICE_functionRemovedInitialEquations(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int *equationIndexes = NULL;
  double res = 0.0;

  
  TRACE_POP
  return 0;
}


#if defined(__cplusplus)
}
#endif

