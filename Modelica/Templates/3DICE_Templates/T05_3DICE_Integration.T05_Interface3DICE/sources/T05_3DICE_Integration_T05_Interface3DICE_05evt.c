/* Events: Sample, Zero Crossings, Relations, Discrete Changes */
#include "T05_3DICE_Integration_T05_Interface3DICE_model.h"
#if defined(__cplusplus)
extern "C" {
#endif

/* Initializes the raw time events of the simulation using the now
   calcualted parameters. */
void T05_3DICE_Integration_T05_Interface3DICE_function_initSample(DATA *data, threadData_t *threadData)
{
  long i=0;
}

const char *T05_3DICE_Integration_T05_Interface3DICE_zeroCrossingDescription(int i, int **out_EquationIndexes)
{
  static const char *res[] = {"sink.tube_cold.liquidStream.wl_b[4] > 0.0",
  "(-sink.tube_cold.liquidStream.wl_b[4]) > 0.0",
  "sink.tube_cold.liquidStream.wl_a[1] > 0.0",
  "(-sink.tube_cold.liquidStream.wl_a[1]) > 0.0",
  "sink.tube_hot[10].liquidStream.wl_b[10] > 0.0",
  "(-sink.tube_hot[10].liquidStream.wl_b[10]) > 0.0",
  "sink.tube_hot[10].liquidStream.wl_a[1] > 0.0",
  "(-sink.tube_hot[10].liquidStream.wl_a[1]) > 0.0",
  "sink.tube_hot[9].liquidStream.wl_b[10] > 0.0",
  "(-sink.tube_hot[9].liquidStream.wl_b[10]) > 0.0",
  "sink.tube_hot[9].liquidStream.wl_a[1] > 0.0",
  "(-sink.tube_hot[9].liquidStream.wl_a[1]) > 0.0",
  "sink.tube_hot[8].liquidStream.wl_b[10] > 0.0",
  "(-sink.tube_hot[8].liquidStream.wl_b[10]) > 0.0",
  "sink.tube_hot[8].liquidStream.wl_a[1] > 0.0",
  "(-sink.tube_hot[8].liquidStream.wl_a[1]) > 0.0",
  "sink.tube_hot[7].liquidStream.wl_b[10] > 0.0",
  "(-sink.tube_hot[7].liquidStream.wl_b[10]) > 0.0",
  "sink.tube_hot[7].liquidStream.wl_a[1] > 0.0",
  "(-sink.tube_hot[7].liquidStream.wl_a[1]) > 0.0",
  "sink.tube_hot[6].liquidStream.wl_b[10] > 0.0",
  "(-sink.tube_hot[6].liquidStream.wl_b[10]) > 0.0",
  "sink.tube_hot[6].liquidStream.wl_a[1] > 0.0",
  "(-sink.tube_hot[6].liquidStream.wl_a[1]) > 0.0",
  "sink.tube_hot[5].liquidStream.wl_b[10] > 0.0",
  "(-sink.tube_hot[5].liquidStream.wl_b[10]) > 0.0",
  "sink.tube_hot[5].liquidStream.wl_a[1] > 0.0",
  "(-sink.tube_hot[5].liquidStream.wl_a[1]) > 0.0",
  "sink.tube_hot[4].liquidStream.wl_b[10] > 0.0",
  "(-sink.tube_hot[4].liquidStream.wl_b[10]) > 0.0",
  "sink.tube_hot[4].liquidStream.wl_a[1] > 0.0",
  "(-sink.tube_hot[4].liquidStream.wl_a[1]) > 0.0",
  "sink.tube_hot[3].liquidStream.wl_b[10] > 0.0",
  "(-sink.tube_hot[3].liquidStream.wl_b[10]) > 0.0",
  "sink.tube_hot[3].liquidStream.wl_a[1] > 0.0",
  "(-sink.tube_hot[3].liquidStream.wl_a[1]) > 0.0",
  "sink.tube_hot[2].liquidStream.wl_b[10] > 0.0",
  "(-sink.tube_hot[2].liquidStream.wl_b[10]) > 0.0",
  "sink.tube_hot[2].liquidStream.wl_a[1] > 0.0",
  "(-sink.tube_hot[2].liquidStream.wl_a[1]) > 0.0",
  "sink.tube_hot[1].liquidStream.wl_b[10] > 0.0",
  "(-sink.tube_hot[1].liquidStream.wl_b[10]) > 0.0",
  "sink.tube_hot[1].liquidStream.wl_a[1] > 0.0",
  "(-sink.tube_hot[1].liquidStream.wl_a[1]) > 0.0"};
  static const int occurEqs0[] = {1,7044};
  static const int occurEqs1[] = {1,7044};
  static const int occurEqs2[] = {1,6960};
  static const int occurEqs3[] = {1,6960};
  static const int occurEqs4[] = {1,6963};
  static const int occurEqs5[] = {1,6963};
  static const int occurEqs6[] = {1,6915};
  static const int occurEqs7[] = {1,6915};
  static const int occurEqs8[] = {1,6966};
  static const int occurEqs9[] = {1,6966};
  static const int occurEqs10[] = {1,6918};
  static const int occurEqs11[] = {1,6918};
  static const int occurEqs12[] = {1,6969};
  static const int occurEqs13[] = {1,6969};
  static const int occurEqs14[] = {1,6921};
  static const int occurEqs15[] = {1,6921};
  static const int occurEqs16[] = {1,6972};
  static const int occurEqs17[] = {1,6972};
  static const int occurEqs18[] = {1,6924};
  static const int occurEqs19[] = {1,6924};
  static const int occurEqs20[] = {1,6975};
  static const int occurEqs21[] = {1,6975};
  static const int occurEqs22[] = {1,6927};
  static const int occurEqs23[] = {1,6927};
  static const int occurEqs24[] = {1,6978};
  static const int occurEqs25[] = {1,6978};
  static const int occurEqs26[] = {1,6930};
  static const int occurEqs27[] = {1,6930};
  static const int occurEqs28[] = {1,6981};
  static const int occurEqs29[] = {1,6981};
  static const int occurEqs30[] = {1,6933};
  static const int occurEqs31[] = {1,6933};
  static const int occurEqs32[] = {1,6984};
  static const int occurEqs33[] = {1,6984};
  static const int occurEqs34[] = {1,6936};
  static const int occurEqs35[] = {1,6936};
  static const int occurEqs36[] = {1,6987};
  static const int occurEqs37[] = {1,6987};
  static const int occurEqs38[] = {1,6939};
  static const int occurEqs39[] = {1,6939};
  static const int occurEqs40[] = {1,6990};
  static const int occurEqs41[] = {1,6990};
  static const int occurEqs42[] = {1,6942};
  static const int occurEqs43[] = {1,6942};
  static const int *occurEqs[] = {occurEqs0,occurEqs1,occurEqs2,occurEqs3,occurEqs4,occurEqs5,occurEqs6,occurEqs7,occurEqs8,occurEqs9,occurEqs10,occurEqs11,occurEqs12,occurEqs13,occurEqs14,occurEqs15,occurEqs16,occurEqs17,occurEqs18,occurEqs19,occurEqs20,occurEqs21,occurEqs22,occurEqs23,occurEqs24,occurEqs25,occurEqs26,occurEqs27,occurEqs28,occurEqs29,occurEqs30,occurEqs31,occurEqs32,occurEqs33,occurEqs34,occurEqs35,occurEqs36,occurEqs37,occurEqs38,occurEqs39,occurEqs40,occurEqs41,occurEqs42,occurEqs43};
  *out_EquationIndexes = (int*) occurEqs[i];
  return res[i];
}

/* forwarded equations */
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_5143(DATA* data, threadData_t *threadData);

int T05_3DICE_Integration_T05_Interface3DICE_function_ZeroCrossingsEquations(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->callStatistics.functionZeroCrossingsEquations++;

  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_5143(data, threadData);
  
  TRACE_POP
  return 0;
}

int T05_3DICE_Integration_T05_Interface3DICE_function_ZeroCrossings(DATA *data, threadData_t *threadData, double *gout)
{
  TRACE_PUSH
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_boolean tmp2;
  modelica_boolean tmp3;
  modelica_boolean tmp4;
  modelica_boolean tmp5;
  modelica_boolean tmp6;
  modelica_boolean tmp7;
  modelica_boolean tmp8;
  modelica_boolean tmp9;
  modelica_boolean tmp10;
  modelica_boolean tmp11;
  modelica_boolean tmp12;
  modelica_boolean tmp13;
  modelica_boolean tmp14;
  modelica_boolean tmp15;
  modelica_boolean tmp16;
  modelica_boolean tmp17;
  modelica_boolean tmp18;
  modelica_boolean tmp19;
  modelica_boolean tmp20;
  modelica_boolean tmp21;
  modelica_boolean tmp22;
  modelica_boolean tmp23;
  modelica_boolean tmp24;
  modelica_boolean tmp25;
  modelica_boolean tmp26;
  modelica_boolean tmp27;
  modelica_boolean tmp28;
  modelica_boolean tmp29;
  modelica_boolean tmp30;
  modelica_boolean tmp31;
  modelica_boolean tmp32;
  modelica_boolean tmp33;
  modelica_boolean tmp34;
  modelica_boolean tmp35;
  modelica_boolean tmp36;
  modelica_boolean tmp37;
  modelica_boolean tmp38;
  modelica_boolean tmp39;
  modelica_boolean tmp40;
  modelica_boolean tmp41;
  modelica_boolean tmp42;
  modelica_boolean tmp43;

#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_tick(SIM_TIMER_ZC);
#endif
  data->simulationInfo->callStatistics.functionZeroCrossings++;

  tmp0 = GreaterZC(data->localData[0]->realVars[1881] /* sink.tube_cold.liquidStream.wl_b[4] DUMMY_STATE */, 0.0, data->simulationInfo->storedRelations[0]);
  gout[0] = (tmp0) ? 1 : -1;
  tmp1 = GreaterZC((-data->localData[0]->realVars[1881] /* sink.tube_cold.liquidStream.wl_b[4] DUMMY_STATE */), 0.0, data->simulationInfo->storedRelations[1]);
  gout[1] = (tmp1) ? 1 : -1;
  tmp2 = GreaterZC(data->localData[0]->realVars[1880] /* sink.tube_cold.liquidStream.wl_a[1] DUMMY_STATE */, 0.0, data->simulationInfo->storedRelations[2]);
  gout[2] = (tmp2) ? 1 : -1;
  tmp3 = GreaterZC((-data->localData[0]->realVars[1880] /* sink.tube_cold.liquidStream.wl_a[1] DUMMY_STATE */), 0.0, data->simulationInfo->storedRelations[3]);
  gout[3] = (tmp3) ? 1 : -1;
  tmp4 = GreaterZC(data->localData[0]->realVars[4101] /* sink.tube_hot[10].liquidStream.wl_b[10] DUMMY_STATE */, 0.0, data->simulationInfo->storedRelations[4]);
  gout[4] = (tmp4) ? 1 : -1;
  tmp5 = GreaterZC((-data->localData[0]->realVars[4101] /* sink.tube_hot[10].liquidStream.wl_b[10] DUMMY_STATE */), 0.0, data->simulationInfo->storedRelations[5]);
  gout[5] = (tmp5) ? 1 : -1;
  tmp6 = GreaterZC(data->localData[0]->realVars[4091] /* sink.tube_hot[10].liquidStream.wl_a[1] DUMMY_STATE */, 0.0, data->simulationInfo->storedRelations[6]);
  gout[6] = (tmp6) ? 1 : -1;
  tmp7 = GreaterZC((-data->localData[0]->realVars[4091] /* sink.tube_hot[10].liquidStream.wl_a[1] DUMMY_STATE */), 0.0, data->simulationInfo->storedRelations[7]);
  gout[7] = (tmp7) ? 1 : -1;
  tmp8 = GreaterZC(data->localData[0]->realVars[4100] /* sink.tube_hot[9].liquidStream.wl_b[10] DUMMY_STATE */, 0.0, data->simulationInfo->storedRelations[8]);
  gout[8] = (tmp8) ? 1 : -1;
  tmp9 = GreaterZC((-data->localData[0]->realVars[4100] /* sink.tube_hot[9].liquidStream.wl_b[10] DUMMY_STATE */), 0.0, data->simulationInfo->storedRelations[9]);
  gout[9] = (tmp9) ? 1 : -1;
  tmp10 = GreaterZC(data->localData[0]->realVars[4090] /* sink.tube_hot[9].liquidStream.wl_a[1] DUMMY_STATE */, 0.0, data->simulationInfo->storedRelations[10]);
  gout[10] = (tmp10) ? 1 : -1;
  tmp11 = GreaterZC((-data->localData[0]->realVars[4090] /* sink.tube_hot[9].liquidStream.wl_a[1] DUMMY_STATE */), 0.0, data->simulationInfo->storedRelations[11]);
  gout[11] = (tmp11) ? 1 : -1;
  tmp12 = GreaterZC(data->localData[0]->realVars[4099] /* sink.tube_hot[8].liquidStream.wl_b[10] DUMMY_STATE */, 0.0, data->simulationInfo->storedRelations[12]);
  gout[12] = (tmp12) ? 1 : -1;
  tmp13 = GreaterZC((-data->localData[0]->realVars[4099] /* sink.tube_hot[8].liquidStream.wl_b[10] DUMMY_STATE */), 0.0, data->simulationInfo->storedRelations[13]);
  gout[13] = (tmp13) ? 1 : -1;
  tmp14 = GreaterZC(data->localData[0]->realVars[4089] /* sink.tube_hot[8].liquidStream.wl_a[1] DUMMY_STATE */, 0.0, data->simulationInfo->storedRelations[14]);
  gout[14] = (tmp14) ? 1 : -1;
  tmp15 = GreaterZC((-data->localData[0]->realVars[4089] /* sink.tube_hot[8].liquidStream.wl_a[1] DUMMY_STATE */), 0.0, data->simulationInfo->storedRelations[15]);
  gout[15] = (tmp15) ? 1 : -1;
  tmp16 = GreaterZC(data->localData[0]->realVars[4098] /* sink.tube_hot[7].liquidStream.wl_b[10] DUMMY_STATE */, 0.0, data->simulationInfo->storedRelations[16]);
  gout[16] = (tmp16) ? 1 : -1;
  tmp17 = GreaterZC((-data->localData[0]->realVars[4098] /* sink.tube_hot[7].liquidStream.wl_b[10] DUMMY_STATE */), 0.0, data->simulationInfo->storedRelations[17]);
  gout[17] = (tmp17) ? 1 : -1;
  tmp18 = GreaterZC(data->localData[0]->realVars[4088] /* sink.tube_hot[7].liquidStream.wl_a[1] DUMMY_STATE */, 0.0, data->simulationInfo->storedRelations[18]);
  gout[18] = (tmp18) ? 1 : -1;
  tmp19 = GreaterZC((-data->localData[0]->realVars[4088] /* sink.tube_hot[7].liquidStream.wl_a[1] DUMMY_STATE */), 0.0, data->simulationInfo->storedRelations[19]);
  gout[19] = (tmp19) ? 1 : -1;
  tmp20 = GreaterZC(data->localData[0]->realVars[4097] /* sink.tube_hot[6].liquidStream.wl_b[10] DUMMY_STATE */, 0.0, data->simulationInfo->storedRelations[20]);
  gout[20] = (tmp20) ? 1 : -1;
  tmp21 = GreaterZC((-data->localData[0]->realVars[4097] /* sink.tube_hot[6].liquidStream.wl_b[10] DUMMY_STATE */), 0.0, data->simulationInfo->storedRelations[21]);
  gout[21] = (tmp21) ? 1 : -1;
  tmp22 = GreaterZC(data->localData[0]->realVars[4087] /* sink.tube_hot[6].liquidStream.wl_a[1] DUMMY_STATE */, 0.0, data->simulationInfo->storedRelations[22]);
  gout[22] = (tmp22) ? 1 : -1;
  tmp23 = GreaterZC((-data->localData[0]->realVars[4087] /* sink.tube_hot[6].liquidStream.wl_a[1] DUMMY_STATE */), 0.0, data->simulationInfo->storedRelations[23]);
  gout[23] = (tmp23) ? 1 : -1;
  tmp24 = GreaterZC(data->localData[0]->realVars[4096] /* sink.tube_hot[5].liquidStream.wl_b[10] DUMMY_STATE */, 0.0, data->simulationInfo->storedRelations[24]);
  gout[24] = (tmp24) ? 1 : -1;
  tmp25 = GreaterZC((-data->localData[0]->realVars[4096] /* sink.tube_hot[5].liquidStream.wl_b[10] DUMMY_STATE */), 0.0, data->simulationInfo->storedRelations[25]);
  gout[25] = (tmp25) ? 1 : -1;
  tmp26 = GreaterZC(data->localData[0]->realVars[4086] /* sink.tube_hot[5].liquidStream.wl_a[1] DUMMY_STATE */, 0.0, data->simulationInfo->storedRelations[26]);
  gout[26] = (tmp26) ? 1 : -1;
  tmp27 = GreaterZC((-data->localData[0]->realVars[4086] /* sink.tube_hot[5].liquidStream.wl_a[1] DUMMY_STATE */), 0.0, data->simulationInfo->storedRelations[27]);
  gout[27] = (tmp27) ? 1 : -1;
  tmp28 = GreaterZC(data->localData[0]->realVars[4095] /* sink.tube_hot[4].liquidStream.wl_b[10] DUMMY_STATE */, 0.0, data->simulationInfo->storedRelations[28]);
  gout[28] = (tmp28) ? 1 : -1;
  tmp29 = GreaterZC((-data->localData[0]->realVars[4095] /* sink.tube_hot[4].liquidStream.wl_b[10] DUMMY_STATE */), 0.0, data->simulationInfo->storedRelations[29]);
  gout[29] = (tmp29) ? 1 : -1;
  tmp30 = GreaterZC(data->localData[0]->realVars[4085] /* sink.tube_hot[4].liquidStream.wl_a[1] DUMMY_STATE */, 0.0, data->simulationInfo->storedRelations[30]);
  gout[30] = (tmp30) ? 1 : -1;
  tmp31 = GreaterZC((-data->localData[0]->realVars[4085] /* sink.tube_hot[4].liquidStream.wl_a[1] DUMMY_STATE */), 0.0, data->simulationInfo->storedRelations[31]);
  gout[31] = (tmp31) ? 1 : -1;
  tmp32 = GreaterZC(data->localData[0]->realVars[4094] /* sink.tube_hot[3].liquidStream.wl_b[10] DUMMY_STATE */, 0.0, data->simulationInfo->storedRelations[32]);
  gout[32] = (tmp32) ? 1 : -1;
  tmp33 = GreaterZC((-data->localData[0]->realVars[4094] /* sink.tube_hot[3].liquidStream.wl_b[10] DUMMY_STATE */), 0.0, data->simulationInfo->storedRelations[33]);
  gout[33] = (tmp33) ? 1 : -1;
  tmp34 = GreaterZC(data->localData[0]->realVars[4084] /* sink.tube_hot[3].liquidStream.wl_a[1] DUMMY_STATE */, 0.0, data->simulationInfo->storedRelations[34]);
  gout[34] = (tmp34) ? 1 : -1;
  tmp35 = GreaterZC((-data->localData[0]->realVars[4084] /* sink.tube_hot[3].liquidStream.wl_a[1] DUMMY_STATE */), 0.0, data->simulationInfo->storedRelations[35]);
  gout[35] = (tmp35) ? 1 : -1;
  tmp36 = GreaterZC(data->localData[0]->realVars[4093] /* sink.tube_hot[2].liquidStream.wl_b[10] DUMMY_STATE */, 0.0, data->simulationInfo->storedRelations[36]);
  gout[36] = (tmp36) ? 1 : -1;
  tmp37 = GreaterZC((-data->localData[0]->realVars[4093] /* sink.tube_hot[2].liquidStream.wl_b[10] DUMMY_STATE */), 0.0, data->simulationInfo->storedRelations[37]);
  gout[37] = (tmp37) ? 1 : -1;
  tmp38 = GreaterZC(data->localData[0]->realVars[4083] /* sink.tube_hot[2].liquidStream.wl_a[1] DUMMY_STATE */, 0.0, data->simulationInfo->storedRelations[38]);
  gout[38] = (tmp38) ? 1 : -1;
  tmp39 = GreaterZC((-data->localData[0]->realVars[4083] /* sink.tube_hot[2].liquidStream.wl_a[1] DUMMY_STATE */), 0.0, data->simulationInfo->storedRelations[39]);
  gout[39] = (tmp39) ? 1 : -1;
  tmp40 = GreaterZC(data->localData[0]->realVars[4092] /* sink.tube_hot[1].liquidStream.wl_b[10] DUMMY_STATE */, 0.0, data->simulationInfo->storedRelations[40]);
  gout[40] = (tmp40) ? 1 : -1;
  tmp41 = GreaterZC((-data->localData[0]->realVars[4092] /* sink.tube_hot[1].liquidStream.wl_b[10] DUMMY_STATE */), 0.0, data->simulationInfo->storedRelations[41]);
  gout[41] = (tmp41) ? 1 : -1;
  tmp42 = GreaterZC(data->localData[0]->realVars[4082] /* sink.tube_hot[1].liquidStream.wl_a[1] DUMMY_STATE */, 0.0, data->simulationInfo->storedRelations[42]);
  gout[42] = (tmp42) ? 1 : -1;
  tmp43 = GreaterZC((-data->localData[0]->realVars[4082] /* sink.tube_hot[1].liquidStream.wl_a[1] DUMMY_STATE */), 0.0, data->simulationInfo->storedRelations[43]);
  gout[43] = (tmp43) ? 1 : -1;

#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_accumulate(SIM_TIMER_ZC);
#endif

  TRACE_POP
  return 0;
}

const char *T05_3DICE_Integration_T05_Interface3DICE_relationDescription(int i)
{
  const char *res[] = {"sink.tube_cold.liquidStream.wl_b[4] > 0.0",
  "(-sink.tube_cold.liquidStream.wl_b[4]) > 0.0",
  "sink.tube_cold.liquidStream.wl_a[1] > 0.0",
  "(-sink.tube_cold.liquidStream.wl_a[1]) > 0.0",
  "sink.tube_hot[10].liquidStream.wl_b[10] > 0.0",
  "(-sink.tube_hot[10].liquidStream.wl_b[10]) > 0.0",
  "sink.tube_hot[10].liquidStream.wl_a[1] > 0.0",
  "(-sink.tube_hot[10].liquidStream.wl_a[1]) > 0.0",
  "sink.tube_hot[9].liquidStream.wl_b[10] > 0.0",
  "(-sink.tube_hot[9].liquidStream.wl_b[10]) > 0.0",
  "sink.tube_hot[9].liquidStream.wl_a[1] > 0.0",
  "(-sink.tube_hot[9].liquidStream.wl_a[1]) > 0.0",
  "sink.tube_hot[8].liquidStream.wl_b[10] > 0.0",
  "(-sink.tube_hot[8].liquidStream.wl_b[10]) > 0.0",
  "sink.tube_hot[8].liquidStream.wl_a[1] > 0.0",
  "(-sink.tube_hot[8].liquidStream.wl_a[1]) > 0.0",
  "sink.tube_hot[7].liquidStream.wl_b[10] > 0.0",
  "(-sink.tube_hot[7].liquidStream.wl_b[10]) > 0.0",
  "sink.tube_hot[7].liquidStream.wl_a[1] > 0.0",
  "(-sink.tube_hot[7].liquidStream.wl_a[1]) > 0.0",
  "sink.tube_hot[6].liquidStream.wl_b[10] > 0.0",
  "(-sink.tube_hot[6].liquidStream.wl_b[10]) > 0.0",
  "sink.tube_hot[6].liquidStream.wl_a[1] > 0.0",
  "(-sink.tube_hot[6].liquidStream.wl_a[1]) > 0.0",
  "sink.tube_hot[5].liquidStream.wl_b[10] > 0.0",
  "(-sink.tube_hot[5].liquidStream.wl_b[10]) > 0.0",
  "sink.tube_hot[5].liquidStream.wl_a[1] > 0.0",
  "(-sink.tube_hot[5].liquidStream.wl_a[1]) > 0.0",
  "sink.tube_hot[4].liquidStream.wl_b[10] > 0.0",
  "(-sink.tube_hot[4].liquidStream.wl_b[10]) > 0.0",
  "sink.tube_hot[4].liquidStream.wl_a[1] > 0.0",
  "(-sink.tube_hot[4].liquidStream.wl_a[1]) > 0.0",
  "sink.tube_hot[3].liquidStream.wl_b[10] > 0.0",
  "(-sink.tube_hot[3].liquidStream.wl_b[10]) > 0.0",
  "sink.tube_hot[3].liquidStream.wl_a[1] > 0.0",
  "(-sink.tube_hot[3].liquidStream.wl_a[1]) > 0.0",
  "sink.tube_hot[2].liquidStream.wl_b[10] > 0.0",
  "(-sink.tube_hot[2].liquidStream.wl_b[10]) > 0.0",
  "sink.tube_hot[2].liquidStream.wl_a[1] > 0.0",
  "(-sink.tube_hot[2].liquidStream.wl_a[1]) > 0.0",
  "sink.tube_hot[1].liquidStream.wl_b[10] > 0.0",
  "(-sink.tube_hot[1].liquidStream.wl_b[10]) > 0.0",
  "sink.tube_hot[1].liquidStream.wl_a[1] > 0.0",
  "(-sink.tube_hot[1].liquidStream.wl_a[1]) > 0.0"};
  return res[i];
}

int T05_3DICE_Integration_T05_Interface3DICE_function_updateRelations(DATA *data, threadData_t *threadData, int evalforZeroCross)
{
  TRACE_PUSH
  modelica_boolean tmp44;
  modelica_boolean tmp45;
  modelica_boolean tmp46;
  modelica_boolean tmp47;
  modelica_boolean tmp48;
  modelica_boolean tmp49;
  modelica_boolean tmp50;
  modelica_boolean tmp51;
  modelica_boolean tmp52;
  modelica_boolean tmp53;
  modelica_boolean tmp54;
  modelica_boolean tmp55;
  modelica_boolean tmp56;
  modelica_boolean tmp57;
  modelica_boolean tmp58;
  modelica_boolean tmp59;
  modelica_boolean tmp60;
  modelica_boolean tmp61;
  modelica_boolean tmp62;
  modelica_boolean tmp63;
  modelica_boolean tmp64;
  modelica_boolean tmp65;
  modelica_boolean tmp66;
  modelica_boolean tmp67;
  modelica_boolean tmp68;
  modelica_boolean tmp69;
  modelica_boolean tmp70;
  modelica_boolean tmp71;
  modelica_boolean tmp72;
  modelica_boolean tmp73;
  modelica_boolean tmp74;
  modelica_boolean tmp75;
  modelica_boolean tmp76;
  modelica_boolean tmp77;
  modelica_boolean tmp78;
  modelica_boolean tmp79;
  modelica_boolean tmp80;
  modelica_boolean tmp81;
  modelica_boolean tmp82;
  modelica_boolean tmp83;
  modelica_boolean tmp84;
  modelica_boolean tmp85;
  modelica_boolean tmp86;
  modelica_boolean tmp87;
  
  if(evalforZeroCross) {
    tmp44 = GreaterZC(data->localData[0]->realVars[1881] /* sink.tube_cold.liquidStream.wl_b[4] DUMMY_STATE */, 0.0, data->simulationInfo->storedRelations[0]);
    data->simulationInfo->relations[0] = tmp44;
    tmp45 = GreaterZC((-data->localData[0]->realVars[1881] /* sink.tube_cold.liquidStream.wl_b[4] DUMMY_STATE */), 0.0, data->simulationInfo->storedRelations[1]);
    data->simulationInfo->relations[1] = tmp45;
    tmp46 = GreaterZC(data->localData[0]->realVars[1880] /* sink.tube_cold.liquidStream.wl_a[1] DUMMY_STATE */, 0.0, data->simulationInfo->storedRelations[2]);
    data->simulationInfo->relations[2] = tmp46;
    tmp47 = GreaterZC((-data->localData[0]->realVars[1880] /* sink.tube_cold.liquidStream.wl_a[1] DUMMY_STATE */), 0.0, data->simulationInfo->storedRelations[3]);
    data->simulationInfo->relations[3] = tmp47;
    tmp48 = GreaterZC(data->localData[0]->realVars[4101] /* sink.tube_hot[10].liquidStream.wl_b[10] DUMMY_STATE */, 0.0, data->simulationInfo->storedRelations[4]);
    data->simulationInfo->relations[4] = tmp48;
    tmp49 = GreaterZC((-data->localData[0]->realVars[4101] /* sink.tube_hot[10].liquidStream.wl_b[10] DUMMY_STATE */), 0.0, data->simulationInfo->storedRelations[5]);
    data->simulationInfo->relations[5] = tmp49;
    tmp50 = GreaterZC(data->localData[0]->realVars[4091] /* sink.tube_hot[10].liquidStream.wl_a[1] DUMMY_STATE */, 0.0, data->simulationInfo->storedRelations[6]);
    data->simulationInfo->relations[6] = tmp50;
    tmp51 = GreaterZC((-data->localData[0]->realVars[4091] /* sink.tube_hot[10].liquidStream.wl_a[1] DUMMY_STATE */), 0.0, data->simulationInfo->storedRelations[7]);
    data->simulationInfo->relations[7] = tmp51;
    tmp52 = GreaterZC(data->localData[0]->realVars[4100] /* sink.tube_hot[9].liquidStream.wl_b[10] DUMMY_STATE */, 0.0, data->simulationInfo->storedRelations[8]);
    data->simulationInfo->relations[8] = tmp52;
    tmp53 = GreaterZC((-data->localData[0]->realVars[4100] /* sink.tube_hot[9].liquidStream.wl_b[10] DUMMY_STATE */), 0.0, data->simulationInfo->storedRelations[9]);
    data->simulationInfo->relations[9] = tmp53;
    tmp54 = GreaterZC(data->localData[0]->realVars[4090] /* sink.tube_hot[9].liquidStream.wl_a[1] DUMMY_STATE */, 0.0, data->simulationInfo->storedRelations[10]);
    data->simulationInfo->relations[10] = tmp54;
    tmp55 = GreaterZC((-data->localData[0]->realVars[4090] /* sink.tube_hot[9].liquidStream.wl_a[1] DUMMY_STATE */), 0.0, data->simulationInfo->storedRelations[11]);
    data->simulationInfo->relations[11] = tmp55;
    tmp56 = GreaterZC(data->localData[0]->realVars[4099] /* sink.tube_hot[8].liquidStream.wl_b[10] DUMMY_STATE */, 0.0, data->simulationInfo->storedRelations[12]);
    data->simulationInfo->relations[12] = tmp56;
    tmp57 = GreaterZC((-data->localData[0]->realVars[4099] /* sink.tube_hot[8].liquidStream.wl_b[10] DUMMY_STATE */), 0.0, data->simulationInfo->storedRelations[13]);
    data->simulationInfo->relations[13] = tmp57;
    tmp58 = GreaterZC(data->localData[0]->realVars[4089] /* sink.tube_hot[8].liquidStream.wl_a[1] DUMMY_STATE */, 0.0, data->simulationInfo->storedRelations[14]);
    data->simulationInfo->relations[14] = tmp58;
    tmp59 = GreaterZC((-data->localData[0]->realVars[4089] /* sink.tube_hot[8].liquidStream.wl_a[1] DUMMY_STATE */), 0.0, data->simulationInfo->storedRelations[15]);
    data->simulationInfo->relations[15] = tmp59;
    tmp60 = GreaterZC(data->localData[0]->realVars[4098] /* sink.tube_hot[7].liquidStream.wl_b[10] DUMMY_STATE */, 0.0, data->simulationInfo->storedRelations[16]);
    data->simulationInfo->relations[16] = tmp60;
    tmp61 = GreaterZC((-data->localData[0]->realVars[4098] /* sink.tube_hot[7].liquidStream.wl_b[10] DUMMY_STATE */), 0.0, data->simulationInfo->storedRelations[17]);
    data->simulationInfo->relations[17] = tmp61;
    tmp62 = GreaterZC(data->localData[0]->realVars[4088] /* sink.tube_hot[7].liquidStream.wl_a[1] DUMMY_STATE */, 0.0, data->simulationInfo->storedRelations[18]);
    data->simulationInfo->relations[18] = tmp62;
    tmp63 = GreaterZC((-data->localData[0]->realVars[4088] /* sink.tube_hot[7].liquidStream.wl_a[1] DUMMY_STATE */), 0.0, data->simulationInfo->storedRelations[19]);
    data->simulationInfo->relations[19] = tmp63;
    tmp64 = GreaterZC(data->localData[0]->realVars[4097] /* sink.tube_hot[6].liquidStream.wl_b[10] DUMMY_STATE */, 0.0, data->simulationInfo->storedRelations[20]);
    data->simulationInfo->relations[20] = tmp64;
    tmp65 = GreaterZC((-data->localData[0]->realVars[4097] /* sink.tube_hot[6].liquidStream.wl_b[10] DUMMY_STATE */), 0.0, data->simulationInfo->storedRelations[21]);
    data->simulationInfo->relations[21] = tmp65;
    tmp66 = GreaterZC(data->localData[0]->realVars[4087] /* sink.tube_hot[6].liquidStream.wl_a[1] DUMMY_STATE */, 0.0, data->simulationInfo->storedRelations[22]);
    data->simulationInfo->relations[22] = tmp66;
    tmp67 = GreaterZC((-data->localData[0]->realVars[4087] /* sink.tube_hot[6].liquidStream.wl_a[1] DUMMY_STATE */), 0.0, data->simulationInfo->storedRelations[23]);
    data->simulationInfo->relations[23] = tmp67;
    tmp68 = GreaterZC(data->localData[0]->realVars[4096] /* sink.tube_hot[5].liquidStream.wl_b[10] DUMMY_STATE */, 0.0, data->simulationInfo->storedRelations[24]);
    data->simulationInfo->relations[24] = tmp68;
    tmp69 = GreaterZC((-data->localData[0]->realVars[4096] /* sink.tube_hot[5].liquidStream.wl_b[10] DUMMY_STATE */), 0.0, data->simulationInfo->storedRelations[25]);
    data->simulationInfo->relations[25] = tmp69;
    tmp70 = GreaterZC(data->localData[0]->realVars[4086] /* sink.tube_hot[5].liquidStream.wl_a[1] DUMMY_STATE */, 0.0, data->simulationInfo->storedRelations[26]);
    data->simulationInfo->relations[26] = tmp70;
    tmp71 = GreaterZC((-data->localData[0]->realVars[4086] /* sink.tube_hot[5].liquidStream.wl_a[1] DUMMY_STATE */), 0.0, data->simulationInfo->storedRelations[27]);
    data->simulationInfo->relations[27] = tmp71;
    tmp72 = GreaterZC(data->localData[0]->realVars[4095] /* sink.tube_hot[4].liquidStream.wl_b[10] DUMMY_STATE */, 0.0, data->simulationInfo->storedRelations[28]);
    data->simulationInfo->relations[28] = tmp72;
    tmp73 = GreaterZC((-data->localData[0]->realVars[4095] /* sink.tube_hot[4].liquidStream.wl_b[10] DUMMY_STATE */), 0.0, data->simulationInfo->storedRelations[29]);
    data->simulationInfo->relations[29] = tmp73;
    tmp74 = GreaterZC(data->localData[0]->realVars[4085] /* sink.tube_hot[4].liquidStream.wl_a[1] DUMMY_STATE */, 0.0, data->simulationInfo->storedRelations[30]);
    data->simulationInfo->relations[30] = tmp74;
    tmp75 = GreaterZC((-data->localData[0]->realVars[4085] /* sink.tube_hot[4].liquidStream.wl_a[1] DUMMY_STATE */), 0.0, data->simulationInfo->storedRelations[31]);
    data->simulationInfo->relations[31] = tmp75;
    tmp76 = GreaterZC(data->localData[0]->realVars[4094] /* sink.tube_hot[3].liquidStream.wl_b[10] DUMMY_STATE */, 0.0, data->simulationInfo->storedRelations[32]);
    data->simulationInfo->relations[32] = tmp76;
    tmp77 = GreaterZC((-data->localData[0]->realVars[4094] /* sink.tube_hot[3].liquidStream.wl_b[10] DUMMY_STATE */), 0.0, data->simulationInfo->storedRelations[33]);
    data->simulationInfo->relations[33] = tmp77;
    tmp78 = GreaterZC(data->localData[0]->realVars[4084] /* sink.tube_hot[3].liquidStream.wl_a[1] DUMMY_STATE */, 0.0, data->simulationInfo->storedRelations[34]);
    data->simulationInfo->relations[34] = tmp78;
    tmp79 = GreaterZC((-data->localData[0]->realVars[4084] /* sink.tube_hot[3].liquidStream.wl_a[1] DUMMY_STATE */), 0.0, data->simulationInfo->storedRelations[35]);
    data->simulationInfo->relations[35] = tmp79;
    tmp80 = GreaterZC(data->localData[0]->realVars[4093] /* sink.tube_hot[2].liquidStream.wl_b[10] DUMMY_STATE */, 0.0, data->simulationInfo->storedRelations[36]);
    data->simulationInfo->relations[36] = tmp80;
    tmp81 = GreaterZC((-data->localData[0]->realVars[4093] /* sink.tube_hot[2].liquidStream.wl_b[10] DUMMY_STATE */), 0.0, data->simulationInfo->storedRelations[37]);
    data->simulationInfo->relations[37] = tmp81;
    tmp82 = GreaterZC(data->localData[0]->realVars[4083] /* sink.tube_hot[2].liquidStream.wl_a[1] DUMMY_STATE */, 0.0, data->simulationInfo->storedRelations[38]);
    data->simulationInfo->relations[38] = tmp82;
    tmp83 = GreaterZC((-data->localData[0]->realVars[4083] /* sink.tube_hot[2].liquidStream.wl_a[1] DUMMY_STATE */), 0.0, data->simulationInfo->storedRelations[39]);
    data->simulationInfo->relations[39] = tmp83;
    tmp84 = GreaterZC(data->localData[0]->realVars[4092] /* sink.tube_hot[1].liquidStream.wl_b[10] DUMMY_STATE */, 0.0, data->simulationInfo->storedRelations[40]);
    data->simulationInfo->relations[40] = tmp84;
    tmp85 = GreaterZC((-data->localData[0]->realVars[4092] /* sink.tube_hot[1].liquidStream.wl_b[10] DUMMY_STATE */), 0.0, data->simulationInfo->storedRelations[41]);
    data->simulationInfo->relations[41] = tmp85;
    tmp86 = GreaterZC(data->localData[0]->realVars[4082] /* sink.tube_hot[1].liquidStream.wl_a[1] DUMMY_STATE */, 0.0, data->simulationInfo->storedRelations[42]);
    data->simulationInfo->relations[42] = tmp86;
    tmp87 = GreaterZC((-data->localData[0]->realVars[4082] /* sink.tube_hot[1].liquidStream.wl_a[1] DUMMY_STATE */), 0.0, data->simulationInfo->storedRelations[43]);
    data->simulationInfo->relations[43] = tmp87;
  } else {
    data->simulationInfo->relations[0] = (data->localData[0]->realVars[1881] /* sink.tube_cold.liquidStream.wl_b[4] DUMMY_STATE */ > 0.0);
    data->simulationInfo->relations[1] = ((-data->localData[0]->realVars[1881] /* sink.tube_cold.liquidStream.wl_b[4] DUMMY_STATE */) > 0.0);
    data->simulationInfo->relations[2] = (data->localData[0]->realVars[1880] /* sink.tube_cold.liquidStream.wl_a[1] DUMMY_STATE */ > 0.0);
    data->simulationInfo->relations[3] = ((-data->localData[0]->realVars[1880] /* sink.tube_cold.liquidStream.wl_a[1] DUMMY_STATE */) > 0.0);
    data->simulationInfo->relations[4] = (data->localData[0]->realVars[4101] /* sink.tube_hot[10].liquidStream.wl_b[10] DUMMY_STATE */ > 0.0);
    data->simulationInfo->relations[5] = ((-data->localData[0]->realVars[4101] /* sink.tube_hot[10].liquidStream.wl_b[10] DUMMY_STATE */) > 0.0);
    data->simulationInfo->relations[6] = (data->localData[0]->realVars[4091] /* sink.tube_hot[10].liquidStream.wl_a[1] DUMMY_STATE */ > 0.0);
    data->simulationInfo->relations[7] = ((-data->localData[0]->realVars[4091] /* sink.tube_hot[10].liquidStream.wl_a[1] DUMMY_STATE */) > 0.0);
    data->simulationInfo->relations[8] = (data->localData[0]->realVars[4100] /* sink.tube_hot[9].liquidStream.wl_b[10] DUMMY_STATE */ > 0.0);
    data->simulationInfo->relations[9] = ((-data->localData[0]->realVars[4100] /* sink.tube_hot[9].liquidStream.wl_b[10] DUMMY_STATE */) > 0.0);
    data->simulationInfo->relations[10] = (data->localData[0]->realVars[4090] /* sink.tube_hot[9].liquidStream.wl_a[1] DUMMY_STATE */ > 0.0);
    data->simulationInfo->relations[11] = ((-data->localData[0]->realVars[4090] /* sink.tube_hot[9].liquidStream.wl_a[1] DUMMY_STATE */) > 0.0);
    data->simulationInfo->relations[12] = (data->localData[0]->realVars[4099] /* sink.tube_hot[8].liquidStream.wl_b[10] DUMMY_STATE */ > 0.0);
    data->simulationInfo->relations[13] = ((-data->localData[0]->realVars[4099] /* sink.tube_hot[8].liquidStream.wl_b[10] DUMMY_STATE */) > 0.0);
    data->simulationInfo->relations[14] = (data->localData[0]->realVars[4089] /* sink.tube_hot[8].liquidStream.wl_a[1] DUMMY_STATE */ > 0.0);
    data->simulationInfo->relations[15] = ((-data->localData[0]->realVars[4089] /* sink.tube_hot[8].liquidStream.wl_a[1] DUMMY_STATE */) > 0.0);
    data->simulationInfo->relations[16] = (data->localData[0]->realVars[4098] /* sink.tube_hot[7].liquidStream.wl_b[10] DUMMY_STATE */ > 0.0);
    data->simulationInfo->relations[17] = ((-data->localData[0]->realVars[4098] /* sink.tube_hot[7].liquidStream.wl_b[10] DUMMY_STATE */) > 0.0);
    data->simulationInfo->relations[18] = (data->localData[0]->realVars[4088] /* sink.tube_hot[7].liquidStream.wl_a[1] DUMMY_STATE */ > 0.0);
    data->simulationInfo->relations[19] = ((-data->localData[0]->realVars[4088] /* sink.tube_hot[7].liquidStream.wl_a[1] DUMMY_STATE */) > 0.0);
    data->simulationInfo->relations[20] = (data->localData[0]->realVars[4097] /* sink.tube_hot[6].liquidStream.wl_b[10] DUMMY_STATE */ > 0.0);
    data->simulationInfo->relations[21] = ((-data->localData[0]->realVars[4097] /* sink.tube_hot[6].liquidStream.wl_b[10] DUMMY_STATE */) > 0.0);
    data->simulationInfo->relations[22] = (data->localData[0]->realVars[4087] /* sink.tube_hot[6].liquidStream.wl_a[1] DUMMY_STATE */ > 0.0);
    data->simulationInfo->relations[23] = ((-data->localData[0]->realVars[4087] /* sink.tube_hot[6].liquidStream.wl_a[1] DUMMY_STATE */) > 0.0);
    data->simulationInfo->relations[24] = (data->localData[0]->realVars[4096] /* sink.tube_hot[5].liquidStream.wl_b[10] DUMMY_STATE */ > 0.0);
    data->simulationInfo->relations[25] = ((-data->localData[0]->realVars[4096] /* sink.tube_hot[5].liquidStream.wl_b[10] DUMMY_STATE */) > 0.0);
    data->simulationInfo->relations[26] = (data->localData[0]->realVars[4086] /* sink.tube_hot[5].liquidStream.wl_a[1] DUMMY_STATE */ > 0.0);
    data->simulationInfo->relations[27] = ((-data->localData[0]->realVars[4086] /* sink.tube_hot[5].liquidStream.wl_a[1] DUMMY_STATE */) > 0.0);
    data->simulationInfo->relations[28] = (data->localData[0]->realVars[4095] /* sink.tube_hot[4].liquidStream.wl_b[10] DUMMY_STATE */ > 0.0);
    data->simulationInfo->relations[29] = ((-data->localData[0]->realVars[4095] /* sink.tube_hot[4].liquidStream.wl_b[10] DUMMY_STATE */) > 0.0);
    data->simulationInfo->relations[30] = (data->localData[0]->realVars[4085] /* sink.tube_hot[4].liquidStream.wl_a[1] DUMMY_STATE */ > 0.0);
    data->simulationInfo->relations[31] = ((-data->localData[0]->realVars[4085] /* sink.tube_hot[4].liquidStream.wl_a[1] DUMMY_STATE */) > 0.0);
    data->simulationInfo->relations[32] = (data->localData[0]->realVars[4094] /* sink.tube_hot[3].liquidStream.wl_b[10] DUMMY_STATE */ > 0.0);
    data->simulationInfo->relations[33] = ((-data->localData[0]->realVars[4094] /* sink.tube_hot[3].liquidStream.wl_b[10] DUMMY_STATE */) > 0.0);
    data->simulationInfo->relations[34] = (data->localData[0]->realVars[4084] /* sink.tube_hot[3].liquidStream.wl_a[1] DUMMY_STATE */ > 0.0);
    data->simulationInfo->relations[35] = ((-data->localData[0]->realVars[4084] /* sink.tube_hot[3].liquidStream.wl_a[1] DUMMY_STATE */) > 0.0);
    data->simulationInfo->relations[36] = (data->localData[0]->realVars[4093] /* sink.tube_hot[2].liquidStream.wl_b[10] DUMMY_STATE */ > 0.0);
    data->simulationInfo->relations[37] = ((-data->localData[0]->realVars[4093] /* sink.tube_hot[2].liquidStream.wl_b[10] DUMMY_STATE */) > 0.0);
    data->simulationInfo->relations[38] = (data->localData[0]->realVars[4083] /* sink.tube_hot[2].liquidStream.wl_a[1] DUMMY_STATE */ > 0.0);
    data->simulationInfo->relations[39] = ((-data->localData[0]->realVars[4083] /* sink.tube_hot[2].liquidStream.wl_a[1] DUMMY_STATE */) > 0.0);
    data->simulationInfo->relations[40] = (data->localData[0]->realVars[4092] /* sink.tube_hot[1].liquidStream.wl_b[10] DUMMY_STATE */ > 0.0);
    data->simulationInfo->relations[41] = ((-data->localData[0]->realVars[4092] /* sink.tube_hot[1].liquidStream.wl_b[10] DUMMY_STATE */) > 0.0);
    data->simulationInfo->relations[42] = (data->localData[0]->realVars[4082] /* sink.tube_hot[1].liquidStream.wl_a[1] DUMMY_STATE */ > 0.0);
    data->simulationInfo->relations[43] = ((-data->localData[0]->realVars[4082] /* sink.tube_hot[1].liquidStream.wl_a[1] DUMMY_STATE */) > 0.0);
  }
  
  TRACE_POP
  return 0;
}

#if defined(__cplusplus)
}
#endif

