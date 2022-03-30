/* Synchronous systems */
#include "T05_3DICE_Integration_T05_Interface3DICE_model.h"
#if defined(__cplusplus)
extern "C" {
#endif

/* Initializes the clocks of model. */
void T05_3DICE_Integration_T05_Interface3DICE_function_initSynchronous(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  long i=0, j=0;
  TRACE_POP
}

/* Update the base clock. */
void T05_3DICE_Integration_T05_Interface3DICE_function_updateSynchronous(DATA *data, threadData_t *threadData, long clockIndex)
{
  TRACE_PUSH
  modelica_boolean ret;
  switch (clockIndex) {
    default:
      throwStreamPrint(NULL, "Internal Error: unknown base partition %ld", clockIndex);
      break;
  }
  TRACE_POP
}



/* Clocked systems equations */
int T05_3DICE_Integration_T05_Interface3DICE_function_equationsSynchronous(DATA *data, threadData_t *threadData, long clockIndex)
{
  TRACE_PUSH
  int ret;

  switch (clockIndex) {
    default:
      throwStreamPrint(NULL, "Internal Error: unknown sub partition %ld", clockIndex);
      ret = 1;
      break;
  }

  TRACE_POP
  return ret;
}

/* pre(%v%) = %v% */
void T05_3DICE_Integration_T05_Interface3DICE_function_savePreSynchronous(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
}

#if defined(__cplusplus)
}
#endif

