/* External objects file */
#include "T05_3DICE_Integration_T05_Interface3DICE_model.h"
#if defined(__cplusplus)
extern "C" {
#endif

void T05_3DICE_Integration_T05_Interface3DICE_callExternalObjectDestructors(DATA *data, threadData_t *threadData)
{
  if(data->simulationInfo->extObjs)
  {
    free(data->simulationInfo->extObjs);
    data->simulationInfo->extObjs = 0;
  }
}
#if defined(__cplusplus)
}
#endif

