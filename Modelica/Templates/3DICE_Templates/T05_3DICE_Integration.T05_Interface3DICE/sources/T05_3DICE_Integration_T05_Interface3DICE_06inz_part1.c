#include "T05_3DICE_Integration_T05_Interface3DICE_model.h"
#if defined(__cplusplus)
extern "C" {
#endif
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_5847(DATA *data, threadData_t *threadData);

extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_5848(DATA *data, threadData_t *threadData);

extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_5849(DATA *data, threadData_t *threadData);


/*
equation index: 2025
type: SIMPLE_ASSIGN
$DER.sink.tube_hot[6].liquidStream.HT[6].m.h = $DER.sink.tube_hot[6].liquidStream.HT[6].m.e + 0.001 * $DER.sink.tube_hot[6].liquidStream.HT[6].m.p
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2025(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2025};
  data->localData[0]->realVars[466] /* der(sink.tube_hot[6].liquidStream.HT[6].m.h) STATE_DER */ = data->localData[0]->realVars[805] /* der(sink.tube_hot[6].liquidStream.HT[6].m.e) DUMMY_DER */ + (0.001) * (data->localData[0]->realVars[905] /* der(sink.tube_hot[6].liquidStream.HT[6].m.p) DUMMY_DER */);
  TRACE_POP
}

/*
equation index: 2026
type: SIMPLE_ASSIGN
sink.tube_hot[6].wall_1L.T[6] = 2.0 * (sink.tube_hot[6].liquidStream.surf.T[6] * sink.tube_hot[6].wall_1L.G * 0.5 + sink.tube_hot[6].liquidStream.surf.Q_flow[6]) / sink.tube_hot[6].wall_1L.G
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2026(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2026};
  data->localData[0]->realVars[266] /* sink.tube_hot[6].wall_1L.T[6] STATE(1) */ = DIVISION_SIM((2.0) * (((data->localData[0]->realVars[4037] /* sink.tube_hot[6].liquidStream.surf.T[6] variable */) * (data->simulationInfo->realParameter[474] /* sink.tube_hot[6].wall_1L.G PARAM */)) * (0.5) + data->localData[0]->realVars[3937] /* sink.tube_hot[6].liquidStream.surf.Q_flow[6] variable */),data->simulationInfo->realParameter[474] /* sink.tube_hot[6].wall_1L.G PARAM */,"sink.tube_hot[6].wall_1L.G",equationIndexes);
  TRACE_POP
}

/*
equation index: 2027
type: SIMPLE_ASSIGN
sink.tube_hot[6].liquidStream.surf.T[5] = sink.tube_hot[6].liquidStream.TStart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2027(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2027};
  data->localData[0]->realVars[4036] /* sink.tube_hot[6].liquidStream.surf.T[5] variable */ = data->simulationInfo->realParameter[374] /* sink.tube_hot[6].liquidStream.TStart PARAM */;
  TRACE_POP
}

/*
equation index: 2028
type: SIMPLE_ASSIGN
sink.tube_hot[6].liquidStream.surf.Q_flow[5] = sink.tube_hot[6].liquidStream.HT[5].gamma * sink.tube_hot[6].liquidStream.All * (sink.tube_hot[6].liquidStream.surf.T[5] - sink.tube_hot[6].liquidStream.T[5])
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2028(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2028};
  data->localData[0]->realVars[3936] /* sink.tube_hot[6].liquidStream.surf.Q_flow[5] variable */ = (data->localData[0]->realVars[2336] /* sink.tube_hot[6].liquidStream.HT[5].gamma variable */) * ((data->simulationInfo->realParameter[144] /* sink.tube_hot[6].liquidStream.All PARAM */) * (data->localData[0]->realVars[4036] /* sink.tube_hot[6].liquidStream.surf.T[5] variable */ - data->localData[0]->realVars[3336] /* sink.tube_hot[6].liquidStream.T[5] variable */));
  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_5833(DATA *data, threadData_t *threadData);

extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_5834(DATA *data, threadData_t *threadData);

extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_5835(DATA *data, threadData_t *threadData);


/*
equation index: 2032
type: SIMPLE_ASSIGN
$DER.sink.tube_hot[6].liquidStream.HT[5].m.h = $DER.sink.tube_hot[6].liquidStream.HT[5].m.e + 0.001 * $DER.sink.tube_hot[6].liquidStream.HT[5].m.p
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2032(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2032};
  data->localData[0]->realVars[465] /* der(sink.tube_hot[6].liquidStream.HT[5].m.h) STATE_DER */ = data->localData[0]->realVars[804] /* der(sink.tube_hot[6].liquidStream.HT[5].m.e) DUMMY_DER */ + (0.001) * (data->localData[0]->realVars[904] /* der(sink.tube_hot[6].liquidStream.HT[5].m.p) DUMMY_DER */);
  TRACE_POP
}

/*
equation index: 2033
type: SIMPLE_ASSIGN
sink.tube_hot[6].wall_1L.T[5] = 2.0 * (sink.tube_hot[6].liquidStream.surf.T[5] * sink.tube_hot[6].wall_1L.G * 0.5 + sink.tube_hot[6].liquidStream.surf.Q_flow[5]) / sink.tube_hot[6].wall_1L.G
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2033(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2033};
  data->localData[0]->realVars[265] /* sink.tube_hot[6].wall_1L.T[5] STATE(1) */ = DIVISION_SIM((2.0) * (((data->localData[0]->realVars[4036] /* sink.tube_hot[6].liquidStream.surf.T[5] variable */) * (data->simulationInfo->realParameter[474] /* sink.tube_hot[6].wall_1L.G PARAM */)) * (0.5) + data->localData[0]->realVars[3936] /* sink.tube_hot[6].liquidStream.surf.Q_flow[5] variable */),data->simulationInfo->realParameter[474] /* sink.tube_hot[6].wall_1L.G PARAM */,"sink.tube_hot[6].wall_1L.G",equationIndexes);
  TRACE_POP
}

/*
equation index: 2034
type: SIMPLE_ASSIGN
sink.tube_hot[6].liquidStream.surf.T[4] = sink.tube_hot[6].liquidStream.TStart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2034(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2034};
  data->localData[0]->realVars[4035] /* sink.tube_hot[6].liquidStream.surf.T[4] variable */ = data->simulationInfo->realParameter[374] /* sink.tube_hot[6].liquidStream.TStart PARAM */;
  TRACE_POP
}

/*
equation index: 2035
type: SIMPLE_ASSIGN
sink.tube_hot[6].liquidStream.surf.Q_flow[4] = sink.tube_hot[6].liquidStream.HT[4].gamma * sink.tube_hot[6].liquidStream.All * (sink.tube_hot[6].liquidStream.surf.T[4] - sink.tube_hot[6].liquidStream.T[4])
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2035(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2035};
  data->localData[0]->realVars[3935] /* sink.tube_hot[6].liquidStream.surf.Q_flow[4] variable */ = (data->localData[0]->realVars[2335] /* sink.tube_hot[6].liquidStream.HT[4].gamma variable */) * ((data->simulationInfo->realParameter[144] /* sink.tube_hot[6].liquidStream.All PARAM */) * (data->localData[0]->realVars[4035] /* sink.tube_hot[6].liquidStream.surf.T[4] variable */ - data->localData[0]->realVars[3335] /* sink.tube_hot[6].liquidStream.T[4] variable */));
  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_5819(DATA *data, threadData_t *threadData);

extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_5820(DATA *data, threadData_t *threadData);

extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_5821(DATA *data, threadData_t *threadData);


/*
equation index: 2039
type: SIMPLE_ASSIGN
$DER.sink.tube_hot[6].liquidStream.HT[4].m.h = $DER.sink.tube_hot[6].liquidStream.HT[4].m.e + 0.001 * $DER.sink.tube_hot[6].liquidStream.HT[4].m.p
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2039(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2039};
  data->localData[0]->realVars[464] /* der(sink.tube_hot[6].liquidStream.HT[4].m.h) STATE_DER */ = data->localData[0]->realVars[803] /* der(sink.tube_hot[6].liquidStream.HT[4].m.e) DUMMY_DER */ + (0.001) * (data->localData[0]->realVars[903] /* der(sink.tube_hot[6].liquidStream.HT[4].m.p) DUMMY_DER */);
  TRACE_POP
}

/*
equation index: 2040
type: SIMPLE_ASSIGN
sink.tube_hot[6].wall_1L.T[4] = 2.0 * (sink.tube_hot[6].liquidStream.surf.T[4] * sink.tube_hot[6].wall_1L.G * 0.5 + sink.tube_hot[6].liquidStream.surf.Q_flow[4]) / sink.tube_hot[6].wall_1L.G
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2040(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2040};
  data->localData[0]->realVars[264] /* sink.tube_hot[6].wall_1L.T[4] STATE(1) */ = DIVISION_SIM((2.0) * (((data->localData[0]->realVars[4035] /* sink.tube_hot[6].liquidStream.surf.T[4] variable */) * (data->simulationInfo->realParameter[474] /* sink.tube_hot[6].wall_1L.G PARAM */)) * (0.5) + data->localData[0]->realVars[3935] /* sink.tube_hot[6].liquidStream.surf.Q_flow[4] variable */),data->simulationInfo->realParameter[474] /* sink.tube_hot[6].wall_1L.G PARAM */,"sink.tube_hot[6].wall_1L.G",equationIndexes);
  TRACE_POP
}

/*
equation index: 2041
type: SIMPLE_ASSIGN
sink.tube_hot[6].liquidStream.surf.T[3] = sink.tube_hot[6].liquidStream.TStart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2041(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2041};
  data->localData[0]->realVars[4034] /* sink.tube_hot[6].liquidStream.surf.T[3] variable */ = data->simulationInfo->realParameter[374] /* sink.tube_hot[6].liquidStream.TStart PARAM */;
  TRACE_POP
}

/*
equation index: 2042
type: SIMPLE_ASSIGN
sink.tube_hot[6].liquidStream.surf.Q_flow[3] = sink.tube_hot[6].liquidStream.HT[3].gamma * sink.tube_hot[6].liquidStream.All * (sink.tube_hot[6].liquidStream.surf.T[3] - sink.tube_hot[6].liquidStream.T[3])
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2042(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2042};
  data->localData[0]->realVars[3934] /* sink.tube_hot[6].liquidStream.surf.Q_flow[3] variable */ = (data->localData[0]->realVars[2334] /* sink.tube_hot[6].liquidStream.HT[3].gamma variable */) * ((data->simulationInfo->realParameter[144] /* sink.tube_hot[6].liquidStream.All PARAM */) * (data->localData[0]->realVars[4034] /* sink.tube_hot[6].liquidStream.surf.T[3] variable */ - data->localData[0]->realVars[3334] /* sink.tube_hot[6].liquidStream.T[3] variable */));
  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_5805(DATA *data, threadData_t *threadData);

extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_5806(DATA *data, threadData_t *threadData);

extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_5807(DATA *data, threadData_t *threadData);


/*
equation index: 2046
type: SIMPLE_ASSIGN
$DER.sink.tube_hot[6].liquidStream.HT[3].m.h = $DER.sink.tube_hot[6].liquidStream.HT[3].m.e + 0.001 * $DER.sink.tube_hot[6].liquidStream.HT[3].m.p
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2046(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2046};
  data->localData[0]->realVars[463] /* der(sink.tube_hot[6].liquidStream.HT[3].m.h) STATE_DER */ = data->localData[0]->realVars[802] /* der(sink.tube_hot[6].liquidStream.HT[3].m.e) DUMMY_DER */ + (0.001) * (data->localData[0]->realVars[902] /* der(sink.tube_hot[6].liquidStream.HT[3].m.p) DUMMY_DER */);
  TRACE_POP
}

/*
equation index: 2047
type: SIMPLE_ASSIGN
sink.tube_hot[6].wall_1L.T[3] = 2.0 * (sink.tube_hot[6].liquidStream.surf.T[3] * sink.tube_hot[6].wall_1L.G * 0.5 + sink.tube_hot[6].liquidStream.surf.Q_flow[3]) / sink.tube_hot[6].wall_1L.G
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2047(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2047};
  data->localData[0]->realVars[263] /* sink.tube_hot[6].wall_1L.T[3] STATE(1) */ = DIVISION_SIM((2.0) * (((data->localData[0]->realVars[4034] /* sink.tube_hot[6].liquidStream.surf.T[3] variable */) * (data->simulationInfo->realParameter[474] /* sink.tube_hot[6].wall_1L.G PARAM */)) * (0.5) + data->localData[0]->realVars[3934] /* sink.tube_hot[6].liquidStream.surf.Q_flow[3] variable */),data->simulationInfo->realParameter[474] /* sink.tube_hot[6].wall_1L.G PARAM */,"sink.tube_hot[6].wall_1L.G",equationIndexes);
  TRACE_POP
}

/*
equation index: 2048
type: SIMPLE_ASSIGN
sink.tube_hot[6].liquidStream.surf.T[2] = sink.tube_hot[6].liquidStream.TStart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2048(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2048};
  data->localData[0]->realVars[4033] /* sink.tube_hot[6].liquidStream.surf.T[2] variable */ = data->simulationInfo->realParameter[374] /* sink.tube_hot[6].liquidStream.TStart PARAM */;
  TRACE_POP
}

/*
equation index: 2049
type: SIMPLE_ASSIGN
sink.tube_hot[6].liquidStream.surf.Q_flow[2] = sink.tube_hot[6].liquidStream.HT[2].gamma * sink.tube_hot[6].liquidStream.All * (sink.tube_hot[6].liquidStream.surf.T[2] - sink.tube_hot[6].liquidStream.T[2])
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2049(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2049};
  data->localData[0]->realVars[3933] /* sink.tube_hot[6].liquidStream.surf.Q_flow[2] variable */ = (data->localData[0]->realVars[2333] /* sink.tube_hot[6].liquidStream.HT[2].gamma variable */) * ((data->simulationInfo->realParameter[144] /* sink.tube_hot[6].liquidStream.All PARAM */) * (data->localData[0]->realVars[4033] /* sink.tube_hot[6].liquidStream.surf.T[2] variable */ - data->localData[0]->realVars[3333] /* sink.tube_hot[6].liquidStream.T[2] variable */));
  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_5791(DATA *data, threadData_t *threadData);

extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_5792(DATA *data, threadData_t *threadData);

extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_5793(DATA *data, threadData_t *threadData);


/*
equation index: 2053
type: SIMPLE_ASSIGN
$DER.sink.tube_hot[6].liquidStream.HT[2].m.h = $DER.sink.tube_hot[6].liquidStream.HT[2].m.e + 0.001 * $DER.sink.tube_hot[6].liquidStream.HT[2].m.p
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2053(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2053};
  data->localData[0]->realVars[462] /* der(sink.tube_hot[6].liquidStream.HT[2].m.h) STATE_DER */ = data->localData[0]->realVars[801] /* der(sink.tube_hot[6].liquidStream.HT[2].m.e) DUMMY_DER */ + (0.001) * (data->localData[0]->realVars[901] /* der(sink.tube_hot[6].liquidStream.HT[2].m.p) DUMMY_DER */);
  TRACE_POP
}

/*
equation index: 2054
type: SIMPLE_ASSIGN
sink.tube_hot[6].wall_1L.T[2] = 2.0 * (sink.tube_hot[6].liquidStream.surf.T[2] * sink.tube_hot[6].wall_1L.G * 0.5 + sink.tube_hot[6].liquidStream.surf.Q_flow[2]) / sink.tube_hot[6].wall_1L.G
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2054(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2054};
  data->localData[0]->realVars[262] /* sink.tube_hot[6].wall_1L.T[2] STATE(1) */ = DIVISION_SIM((2.0) * (((data->localData[0]->realVars[4033] /* sink.tube_hot[6].liquidStream.surf.T[2] variable */) * (data->simulationInfo->realParameter[474] /* sink.tube_hot[6].wall_1L.G PARAM */)) * (0.5) + data->localData[0]->realVars[3933] /* sink.tube_hot[6].liquidStream.surf.Q_flow[2] variable */),data->simulationInfo->realParameter[474] /* sink.tube_hot[6].wall_1L.G PARAM */,"sink.tube_hot[6].wall_1L.G",equationIndexes);
  TRACE_POP
}

/*
equation index: 2055
type: SIMPLE_ASSIGN
sink.tube_hot[6].liquidStream.surf.T[1] = sink.tube_hot[6].liquidStream.TStart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2055(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2055};
  data->localData[0]->realVars[4032] /* sink.tube_hot[6].liquidStream.surf.T[1] variable */ = data->simulationInfo->realParameter[374] /* sink.tube_hot[6].liquidStream.TStart PARAM */;
  TRACE_POP
}

/*
equation index: 2056
type: SIMPLE_ASSIGN
sink.tube_hot[6].liquidStream.surf.Q_flow[1] = sink.tube_hot[6].liquidStream.HT[1].gamma * sink.tube_hot[6].liquidStream.All * (sink.tube_hot[6].liquidStream.surf.T[1] - sink.tube_hot[6].liquidStream.T[1])
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2056(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2056};
  data->localData[0]->realVars[3932] /* sink.tube_hot[6].liquidStream.surf.Q_flow[1] variable */ = (data->localData[0]->realVars[2332] /* sink.tube_hot[6].liquidStream.HT[1].gamma variable */) * ((data->simulationInfo->realParameter[144] /* sink.tube_hot[6].liquidStream.All PARAM */) * (data->localData[0]->realVars[4032] /* sink.tube_hot[6].liquidStream.surf.T[1] variable */ - data->localData[0]->realVars[3332] /* sink.tube_hot[6].liquidStream.T[1] variable */));
  TRACE_POP
}

/*
equation index: 2057
type: SIMPLE_ASSIGN
$DER.sink.tube_hot[6].liquidStream.E[1] = sink.tube_hot[6].liquidStream.wl_a[1] * (if sink.tube_hot[6].liquidStream.wl_a[1] > 0.0 then (max(-sink.tube_hot[1].liquidStream.wl_a[1], 1e-07) * sink.tube_hot[1].liquidStream.m[1].h + max(-sink.tube_hot[2].liquidStream.wl_a[1], 1e-07) * sink.tube_hot[2].liquidStream.m[1].h + max(-sink.tube_hot[3].liquidStream.wl_a[1], 1e-07) * sink.tube_hot[3].liquidStream.m[1].h + max(-sink.tube_hot[4].liquidStream.wl_a[1], 1e-07) * sink.tube_hot[4].liquidStream.m[1].h + max(-sink.tube_hot[5].liquidStream.wl_a[1], 1e-07) * sink.tube_hot[5].liquidStream.m[1].h + max(-sink.tube_hot[7].liquidStream.wl_a[1], 1e-07) * sink.tube_hot[7].liquidStream.m[1].h + max(-sink.tube_hot[8].liquidStream.wl_a[1], 1e-07) * sink.tube_hot[8].liquidStream.m[1].h + max(-sink.tube_hot[9].liquidStream.wl_a[1], 1e-07) * sink.tube_hot[9].liquidStream.m[1].h + max(-sink.tube_hot[10].liquidStream.wl_a[1], 1e-07) * sink.tube_hot[10].liquidStream.m[1].h + max(-sink.tube_cold.liquidStream.wl_b[4], 1e-07) * sink.pump.hob) / (max(-sink.tube_hot[1].liquidStream.wl_a[1], 1e-07) + max(-sink.tube_hot[2].liquidStream.wl_a[1], 1e-07) + max(-sink.tube_hot[3].liquidStream.wl_a[1], 1e-07) + max(-sink.tube_hot[4].liquidStream.wl_a[1], 1e-07) + max(-sink.tube_hot[5].liquidStream.wl_a[1], 1e-07) + max(-sink.tube_hot[7].liquidStream.wl_a[1], 1e-07) + max(-sink.tube_hot[8].liquidStream.wl_a[1], 1e-07) + max(-sink.tube_hot[9].liquidStream.wl_a[1], 1e-07) + max(-sink.tube_hot[10].liquidStream.wl_a[1], 1e-07) + max(-sink.tube_cold.liquidStream.wl_b[4], 1e-07)) else sink.tube_hot[6].liquidStream.m[1].h) + sink.tube_hot[6].liquidStream.surf.Q_flow[1] - sink.tube_hot[6].liquidStream.wl_a[1] * (if (-sink.tube_hot[6].liquidStream.wl_a[1]) > 0.0 then sink.tube_hot[6].liquidStream.HT[2].m.h else sink.tube_hot[6].liquidStream.m[1].h)
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2057(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2057};
  modelica_boolean tmp8;
  modelica_boolean tmp9;
  tmp8 = Greater(data->localData[0]->realVars[4087] /* sink.tube_hot[6].liquidStream.wl_a[1] DUMMY_STATE */,0.0);
  tmp9 = Greater((-data->localData[0]->realVars[4087] /* sink.tube_hot[6].liquidStream.wl_a[1] DUMMY_STATE */),0.0);
  data->localData[0]->realVars[700] /* der(sink.tube_hot[6].liquidStream.E[1]) DUMMY_DER */ = (data->localData[0]->realVars[4087] /* sink.tube_hot[6].liquidStream.wl_a[1] DUMMY_STATE */) * ((tmp8?DIVISION_SIM((fmax((-data->localData[0]->realVars[4082] /* sink.tube_hot[1].liquidStream.wl_a[1] DUMMY_STATE */),1e-07)) * (data->localData[0]->realVars[191] /* sink.tube_hot[1].liquidStream.m[1].h STATE(1) */) + (fmax((-data->localData[0]->realVars[4083] /* sink.tube_hot[2].liquidStream.wl_a[1] DUMMY_STATE */),1e-07)) * (data->localData[0]->realVars[193] /* sink.tube_hot[2].liquidStream.m[1].h STATE(1) */) + (fmax((-data->localData[0]->realVars[4084] /* sink.tube_hot[3].liquidStream.wl_a[1] DUMMY_STATE */),1e-07)) * (data->localData[0]->realVars[195] /* sink.tube_hot[3].liquidStream.m[1].h STATE(1) */) + (fmax((-data->localData[0]->realVars[4085] /* sink.tube_hot[4].liquidStream.wl_a[1] DUMMY_STATE */),1e-07)) * (data->localData[0]->realVars[197] /* sink.tube_hot[4].liquidStream.m[1].h STATE(1) */) + (fmax((-data->localData[0]->realVars[4086] /* sink.tube_hot[5].liquidStream.wl_a[1] DUMMY_STATE */),1e-07)) * (data->localData[0]->realVars[199] /* sink.tube_hot[5].liquidStream.m[1].h STATE(1) */) + (fmax((-data->localData[0]->realVars[4088] /* sink.tube_hot[7].liquidStream.wl_a[1] DUMMY_STATE */),1e-07)) * (data->localData[0]->realVars[203] /* sink.tube_hot[7].liquidStream.m[1].h STATE(1) */) + (fmax((-data->localData[0]->realVars[4089] /* sink.tube_hot[8].liquidStream.wl_a[1] DUMMY_STATE */),1e-07)) * (data->localData[0]->realVars[205] /* sink.tube_hot[8].liquidStream.m[1].h STATE(1) */) + (fmax((-data->localData[0]->realVars[4090] /* sink.tube_hot[9].liquidStream.wl_a[1] DUMMY_STATE */),1e-07)) * (data->localData[0]->realVars[207] /* sink.tube_hot[9].liquidStream.m[1].h STATE(1) */) + (fmax((-data->localData[0]->realVars[4091] /* sink.tube_hot[10].liquidStream.wl_a[1] DUMMY_STATE */),1e-07)) * (data->localData[0]->realVars[209] /* sink.tube_hot[10].liquidStream.m[1].h STATE(1) */) + (fmax((-data->localData[0]->realVars[1881] /* sink.tube_cold.liquidStream.wl_b[4] DUMMY_STATE */),1e-07)) * (data->localData[0]->realVars[1746] /* sink.pump.hob variable */),fmax((-data->localData[0]->realVars[4082] /* sink.tube_hot[1].liquidStream.wl_a[1] DUMMY_STATE */),1e-07) + fmax((-data->localData[0]->realVars[4083] /* sink.tube_hot[2].liquidStream.wl_a[1] DUMMY_STATE */),1e-07) + fmax((-data->localData[0]->realVars[4084] /* sink.tube_hot[3].liquidStream.wl_a[1] DUMMY_STATE */),1e-07) + fmax((-data->localData[0]->realVars[4085] /* sink.tube_hot[4].liquidStream.wl_a[1] DUMMY_STATE */),1e-07) + fmax((-data->localData[0]->realVars[4086] /* sink.tube_hot[5].liquidStream.wl_a[1] DUMMY_STATE */),1e-07) + fmax((-data->localData[0]->realVars[4088] /* sink.tube_hot[7].liquidStream.wl_a[1] DUMMY_STATE */),1e-07) + fmax((-data->localData[0]->realVars[4089] /* sink.tube_hot[8].liquidStream.wl_a[1] DUMMY_STATE */),1e-07) + fmax((-data->localData[0]->realVars[4090] /* sink.tube_hot[9].liquidStream.wl_a[1] DUMMY_STATE */),1e-07) + fmax((-data->localData[0]->realVars[4091] /* sink.tube_hot[10].liquidStream.wl_a[1] DUMMY_STATE */),1e-07) + fmax((-data->localData[0]->realVars[1881] /* sink.tube_cold.liquidStream.wl_b[4] DUMMY_STATE */),1e-07),"max(-sink.tube_hot[1].liquidStream.wl_a[1], 1e-07) + max(-sink.tube_hot[2].liquidStream.wl_a[1], 1e-07) + max(-sink.tube_hot[3].liquidStream.wl_a[1], 1e-07) + max(-sink.tube_hot[4].liquidStream.wl_a[1], 1e-07) + max(-sink.tube_hot[5].liquidStream.wl_a[1], 1e-07) + max(-sink.tube_hot[7].liquidStream.wl_a[1], 1e-07) + max(-sink.tube_hot[8].liquidStream.wl_a[1], 1e-07) + max(-sink.tube_hot[9].liquidStream.wl_a[1], 1e-07) + max(-sink.tube_hot[10].liquidStream.wl_a[1], 1e-07) + max(-sink.tube_cold.liquidStream.wl_b[4], 1e-07)",equationIndexes):data->localData[0]->realVars[201] /* sink.tube_hot[6].liquidStream.m[1].h STATE(1) */)) + data->localData[0]->realVars[3932] /* sink.tube_hot[6].liquidStream.surf.Q_flow[1] variable */ - ((data->localData[0]->realVars[4087] /* sink.tube_hot[6].liquidStream.wl_a[1] DUMMY_STATE */) * ((tmp9?data->localData[0]->realVars[151] /* sink.tube_hot[6].liquidStream.HT[2].m.h STATE(1) */:data->localData[0]->realVars[201] /* sink.tube_hot[6].liquidStream.m[1].h STATE(1) */)));
  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6928(DATA *data, threadData_t *threadData);

extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6929(DATA *data, threadData_t *threadData);


/*
equation index: 2060
type: SIMPLE_ASSIGN
$DER.sink.tube_hot[6].liquidStream.m[1].h = $DER.sink.tube_hot[6].liquidStream.HT[1].m.e + 0.001 * $DER.sink.tube_hot[6].liquidStream.HT[1].m.p
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2060(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2060};
  data->localData[0]->realVars[512] /* der(sink.tube_hot[6].liquidStream.m[1].h) STATE_DER */ = data->localData[0]->realVars[800] /* der(sink.tube_hot[6].liquidStream.HT[1].m.e) DUMMY_DER */ + (0.001) * (data->localData[0]->realVars[900] /* der(sink.tube_hot[6].liquidStream.HT[1].m.p) DUMMY_DER */);
  TRACE_POP
}

/*
equation index: 2061
type: SIMPLE_ASSIGN
sink.tube_hot[6].wall_1L.T[1] = 2.0 * (sink.tube_hot[6].liquidStream.surf.T[1] * sink.tube_hot[6].wall_1L.G * 0.5 + sink.tube_hot[6].liquidStream.surf.Q_flow[1]) / sink.tube_hot[6].wall_1L.G
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2061(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2061};
  data->localData[0]->realVars[261] /* sink.tube_hot[6].wall_1L.T[1] STATE(1) */ = DIVISION_SIM((2.0) * (((data->localData[0]->realVars[4032] /* sink.tube_hot[6].liquidStream.surf.T[1] variable */) * (data->simulationInfo->realParameter[474] /* sink.tube_hot[6].wall_1L.G PARAM */)) * (0.5) + data->localData[0]->realVars[3932] /* sink.tube_hot[6].liquidStream.surf.Q_flow[1] variable */),data->simulationInfo->realParameter[474] /* sink.tube_hot[6].wall_1L.G PARAM */,"sink.tube_hot[6].wall_1L.G",equationIndexes);
  TRACE_POP
}

/*
equation index: 2062
type: SIMPLE_ASSIGN
sink.tube_hot[5].liquidStream.surf.T[10] = sink.tube_hot[5].liquidStream.TStart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2062(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2062};
  data->localData[0]->realVars[4031] /* sink.tube_hot[5].liquidStream.surf.T[10] variable */ = data->simulationInfo->realParameter[373] /* sink.tube_hot[5].liquidStream.TStart PARAM */;
  TRACE_POP
}

/*
equation index: 2063
type: SIMPLE_ASSIGN
sink.tube_hot[5].liquidStream.surf.Q_flow[10] = sink.tube_hot[5].liquidStream.HT[10].gamma * sink.tube_hot[5].liquidStream.All * (sink.tube_hot[5].liquidStream.surf.T[10] - sink.tube_hot[5].liquidStream.T[10])
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2063(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2063};
  data->localData[0]->realVars[3931] /* sink.tube_hot[5].liquidStream.surf.Q_flow[10] variable */ = (data->localData[0]->realVars[2331] /* sink.tube_hot[5].liquidStream.HT[10].gamma variable */) * ((data->simulationInfo->realParameter[143] /* sink.tube_hot[5].liquidStream.All PARAM */) * (data->localData[0]->realVars[4031] /* sink.tube_hot[5].liquidStream.surf.T[10] variable */ - data->localData[0]->realVars[3331] /* sink.tube_hot[5].liquidStream.T[10] variable */));
  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6978(DATA *data, threadData_t *threadData);

extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6979(DATA *data, threadData_t *threadData);

extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6980(DATA *data, threadData_t *threadData);


/*
equation index: 2067
type: SIMPLE_ASSIGN
$DER.sink.tube_hot[5].liquidStream.m[10].h = $DER.sink.tube_hot[5].liquidStream.HT[10].m.e + 0.001 * $DER.sink.tube_hot[5].liquidStream.HT[10].m.p
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2067(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2067};
  data->localData[0]->realVars[511] /* der(sink.tube_hot[5].liquidStream.m[10].h) STATE_DER */ = data->localData[0]->realVars[799] /* der(sink.tube_hot[5].liquidStream.HT[10].m.e) DUMMY_DER */ + (0.001) * (data->localData[0]->realVars[899] /* der(sink.tube_hot[5].liquidStream.HT[10].m.p) DUMMY_DER */);
  TRACE_POP
}

/*
equation index: 2068
type: SIMPLE_ASSIGN
sink.tube_hot[5].wall_1L.T[10] = 2.0 * (sink.tube_hot[5].liquidStream.surf.T[10] * sink.tube_hot[5].wall_1L.G * 0.5 + sink.tube_hot[5].liquidStream.surf.Q_flow[10]) / sink.tube_hot[5].wall_1L.G
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2068(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2068};
  data->localData[0]->realVars[260] /* sink.tube_hot[5].wall_1L.T[10] STATE(1) */ = DIVISION_SIM((2.0) * (((data->localData[0]->realVars[4031] /* sink.tube_hot[5].liquidStream.surf.T[10] variable */) * (data->simulationInfo->realParameter[473] /* sink.tube_hot[5].wall_1L.G PARAM */)) * (0.5) + data->localData[0]->realVars[3931] /* sink.tube_hot[5].liquidStream.surf.Q_flow[10] variable */),data->simulationInfo->realParameter[473] /* sink.tube_hot[5].wall_1L.G PARAM */,"sink.tube_hot[5].wall_1L.G",equationIndexes);
  TRACE_POP
}

/*
equation index: 2069
type: SIMPLE_ASSIGN
sink.tube_hot[5].liquidStream.surf.T[9] = sink.tube_hot[5].liquidStream.TStart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2069(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2069};
  data->localData[0]->realVars[4030] /* sink.tube_hot[5].liquidStream.surf.T[9] variable */ = data->simulationInfo->realParameter[373] /* sink.tube_hot[5].liquidStream.TStart PARAM */;
  TRACE_POP
}

/*
equation index: 2070
type: SIMPLE_ASSIGN
sink.tube_hot[5].liquidStream.surf.Q_flow[9] = sink.tube_hot[5].liquidStream.HT[9].gamma * sink.tube_hot[5].liquidStream.All * (sink.tube_hot[5].liquidStream.surf.T[9] - sink.tube_hot[5].liquidStream.T[9])
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2070(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2070};
  data->localData[0]->realVars[3930] /* sink.tube_hot[5].liquidStream.surf.Q_flow[9] variable */ = (data->localData[0]->realVars[2330] /* sink.tube_hot[5].liquidStream.HT[9].gamma variable */) * ((data->simulationInfo->realParameter[143] /* sink.tube_hot[5].liquidStream.All PARAM */) * (data->localData[0]->realVars[4030] /* sink.tube_hot[5].liquidStream.surf.T[9] variable */ - data->localData[0]->realVars[3330] /* sink.tube_hot[5].liquidStream.T[9] variable */));
  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6056(DATA *data, threadData_t *threadData);

extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6057(DATA *data, threadData_t *threadData);

extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6058(DATA *data, threadData_t *threadData);


/*
equation index: 2074
type: SIMPLE_ASSIGN
$DER.sink.tube_hot[5].liquidStream.HT[9].m.h = $DER.sink.tube_hot[5].liquidStream.HT[9].m.e + 0.001 * $DER.sink.tube_hot[5].liquidStream.HT[9].m.p
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2074(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2074};
  data->localData[0]->realVars[461] /* der(sink.tube_hot[5].liquidStream.HT[9].m.h) STATE_DER */ = data->localData[0]->realVars[798] /* der(sink.tube_hot[5].liquidStream.HT[9].m.e) DUMMY_DER */ + (0.001) * (data->localData[0]->realVars[898] /* der(sink.tube_hot[5].liquidStream.HT[9].m.p) DUMMY_DER */);
  TRACE_POP
}

/*
equation index: 2075
type: SIMPLE_ASSIGN
sink.tube_hot[5].wall_1L.T[9] = 2.0 * (sink.tube_hot[5].liquidStream.surf.T[9] * sink.tube_hot[5].wall_1L.G * 0.5 + sink.tube_hot[5].liquidStream.surf.Q_flow[9]) / sink.tube_hot[5].wall_1L.G
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2075(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2075};
  data->localData[0]->realVars[259] /* sink.tube_hot[5].wall_1L.T[9] STATE(1) */ = DIVISION_SIM((2.0) * (((data->localData[0]->realVars[4030] /* sink.tube_hot[5].liquidStream.surf.T[9] variable */) * (data->simulationInfo->realParameter[473] /* sink.tube_hot[5].wall_1L.G PARAM */)) * (0.5) + data->localData[0]->realVars[3930] /* sink.tube_hot[5].liquidStream.surf.Q_flow[9] variable */),data->simulationInfo->realParameter[473] /* sink.tube_hot[5].wall_1L.G PARAM */,"sink.tube_hot[5].wall_1L.G",equationIndexes);
  TRACE_POP
}

/*
equation index: 2076
type: SIMPLE_ASSIGN
sink.tube_hot[5].liquidStream.surf.T[8] = sink.tube_hot[5].liquidStream.TStart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2076(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2076};
  data->localData[0]->realVars[4029] /* sink.tube_hot[5].liquidStream.surf.T[8] variable */ = data->simulationInfo->realParameter[373] /* sink.tube_hot[5].liquidStream.TStart PARAM */;
  TRACE_POP
}

/*
equation index: 2077
type: SIMPLE_ASSIGN
sink.tube_hot[5].liquidStream.surf.Q_flow[8] = sink.tube_hot[5].liquidStream.HT[8].gamma * sink.tube_hot[5].liquidStream.All * (sink.tube_hot[5].liquidStream.surf.T[8] - sink.tube_hot[5].liquidStream.T[8])
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2077(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2077};
  data->localData[0]->realVars[3929] /* sink.tube_hot[5].liquidStream.surf.Q_flow[8] variable */ = (data->localData[0]->realVars[2329] /* sink.tube_hot[5].liquidStream.HT[8].gamma variable */) * ((data->simulationInfo->realParameter[143] /* sink.tube_hot[5].liquidStream.All PARAM */) * (data->localData[0]->realVars[4029] /* sink.tube_hot[5].liquidStream.surf.T[8] variable */ - data->localData[0]->realVars[3329] /* sink.tube_hot[5].liquidStream.T[8] variable */));
  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6059(DATA *data, threadData_t *threadData);

extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6060(DATA *data, threadData_t *threadData);

extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6061(DATA *data, threadData_t *threadData);


/*
equation index: 2081
type: SIMPLE_ASSIGN
$DER.sink.tube_hot[5].liquidStream.HT[8].m.h = $DER.sink.tube_hot[5].liquidStream.HT[8].m.e + 0.001 * $DER.sink.tube_hot[5].liquidStream.HT[8].m.p
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2081(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2081};
  data->localData[0]->realVars[460] /* der(sink.tube_hot[5].liquidStream.HT[8].m.h) STATE_DER */ = data->localData[0]->realVars[797] /* der(sink.tube_hot[5].liquidStream.HT[8].m.e) DUMMY_DER */ + (0.001) * (data->localData[0]->realVars[897] /* der(sink.tube_hot[5].liquidStream.HT[8].m.p) DUMMY_DER */);
  TRACE_POP
}

/*
equation index: 2082
type: SIMPLE_ASSIGN
sink.tube_hot[5].wall_1L.T[8] = 2.0 * (sink.tube_hot[5].liquidStream.surf.T[8] * sink.tube_hot[5].wall_1L.G * 0.5 + sink.tube_hot[5].liquidStream.surf.Q_flow[8]) / sink.tube_hot[5].wall_1L.G
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2082(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2082};
  data->localData[0]->realVars[258] /* sink.tube_hot[5].wall_1L.T[8] STATE(1) */ = DIVISION_SIM((2.0) * (((data->localData[0]->realVars[4029] /* sink.tube_hot[5].liquidStream.surf.T[8] variable */) * (data->simulationInfo->realParameter[473] /* sink.tube_hot[5].wall_1L.G PARAM */)) * (0.5) + data->localData[0]->realVars[3929] /* sink.tube_hot[5].liquidStream.surf.Q_flow[8] variable */),data->simulationInfo->realParameter[473] /* sink.tube_hot[5].wall_1L.G PARAM */,"sink.tube_hot[5].wall_1L.G",equationIndexes);
  TRACE_POP
}

/*
equation index: 2083
type: SIMPLE_ASSIGN
sink.tube_hot[5].liquidStream.surf.T[7] = sink.tube_hot[5].liquidStream.TStart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2083(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2083};
  data->localData[0]->realVars[4028] /* sink.tube_hot[5].liquidStream.surf.T[7] variable */ = data->simulationInfo->realParameter[373] /* sink.tube_hot[5].liquidStream.TStart PARAM */;
  TRACE_POP
}

/*
equation index: 2084
type: SIMPLE_ASSIGN
sink.tube_hot[5].liquidStream.surf.Q_flow[7] = sink.tube_hot[5].liquidStream.HT[7].gamma * sink.tube_hot[5].liquidStream.All * (sink.tube_hot[5].liquidStream.surf.T[7] - sink.tube_hot[5].liquidStream.T[7])
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2084(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2084};
  data->localData[0]->realVars[3928] /* sink.tube_hot[5].liquidStream.surf.Q_flow[7] variable */ = (data->localData[0]->realVars[2328] /* sink.tube_hot[5].liquidStream.HT[7].gamma variable */) * ((data->simulationInfo->realParameter[143] /* sink.tube_hot[5].liquidStream.All PARAM */) * (data->localData[0]->realVars[4028] /* sink.tube_hot[5].liquidStream.surf.T[7] variable */ - data->localData[0]->realVars[3328] /* sink.tube_hot[5].liquidStream.T[7] variable */));
  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6062(DATA *data, threadData_t *threadData);

extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6063(DATA *data, threadData_t *threadData);

extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6064(DATA *data, threadData_t *threadData);


/*
equation index: 2088
type: SIMPLE_ASSIGN
$DER.sink.tube_hot[5].liquidStream.HT[7].m.h = $DER.sink.tube_hot[5].liquidStream.HT[7].m.e + 0.001 * $DER.sink.tube_hot[5].liquidStream.HT[7].m.p
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2088(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2088};
  data->localData[0]->realVars[459] /* der(sink.tube_hot[5].liquidStream.HT[7].m.h) STATE_DER */ = data->localData[0]->realVars[796] /* der(sink.tube_hot[5].liquidStream.HT[7].m.e) DUMMY_DER */ + (0.001) * (data->localData[0]->realVars[896] /* der(sink.tube_hot[5].liquidStream.HT[7].m.p) DUMMY_DER */);
  TRACE_POP
}

/*
equation index: 2089
type: SIMPLE_ASSIGN
sink.tube_hot[5].wall_1L.T[7] = 2.0 * (sink.tube_hot[5].liquidStream.surf.T[7] * sink.tube_hot[5].wall_1L.G * 0.5 + sink.tube_hot[5].liquidStream.surf.Q_flow[7]) / sink.tube_hot[5].wall_1L.G
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2089(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2089};
  data->localData[0]->realVars[257] /* sink.tube_hot[5].wall_1L.T[7] STATE(1) */ = DIVISION_SIM((2.0) * (((data->localData[0]->realVars[4028] /* sink.tube_hot[5].liquidStream.surf.T[7] variable */) * (data->simulationInfo->realParameter[473] /* sink.tube_hot[5].wall_1L.G PARAM */)) * (0.5) + data->localData[0]->realVars[3928] /* sink.tube_hot[5].liquidStream.surf.Q_flow[7] variable */),data->simulationInfo->realParameter[473] /* sink.tube_hot[5].wall_1L.G PARAM */,"sink.tube_hot[5].wall_1L.G",equationIndexes);
  TRACE_POP
}

/*
equation index: 2090
type: SIMPLE_ASSIGN
sink.tube_hot[5].liquidStream.surf.T[6] = sink.tube_hot[5].liquidStream.TStart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2090(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2090};
  data->localData[0]->realVars[4027] /* sink.tube_hot[5].liquidStream.surf.T[6] variable */ = data->simulationInfo->realParameter[373] /* sink.tube_hot[5].liquidStream.TStart PARAM */;
  TRACE_POP
}

/*
equation index: 2091
type: SIMPLE_ASSIGN
sink.tube_hot[5].liquidStream.surf.Q_flow[6] = sink.tube_hot[5].liquidStream.HT[6].gamma * sink.tube_hot[5].liquidStream.All * (sink.tube_hot[5].liquidStream.surf.T[6] - sink.tube_hot[5].liquidStream.T[6])
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2091(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2091};
  data->localData[0]->realVars[3927] /* sink.tube_hot[5].liquidStream.surf.Q_flow[6] variable */ = (data->localData[0]->realVars[2327] /* sink.tube_hot[5].liquidStream.HT[6].gamma variable */) * ((data->simulationInfo->realParameter[143] /* sink.tube_hot[5].liquidStream.All PARAM */) * (data->localData[0]->realVars[4027] /* sink.tube_hot[5].liquidStream.surf.T[6] variable */ - data->localData[0]->realVars[3327] /* sink.tube_hot[5].liquidStream.T[6] variable */));
  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6065(DATA *data, threadData_t *threadData);

extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6066(DATA *data, threadData_t *threadData);

extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6067(DATA *data, threadData_t *threadData);


/*
equation index: 2095
type: SIMPLE_ASSIGN
$DER.sink.tube_hot[5].liquidStream.HT[6].m.h = $DER.sink.tube_hot[5].liquidStream.HT[6].m.e + 0.001 * $DER.sink.tube_hot[5].liquidStream.HT[6].m.p
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2095(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2095};
  data->localData[0]->realVars[458] /* der(sink.tube_hot[5].liquidStream.HT[6].m.h) STATE_DER */ = data->localData[0]->realVars[795] /* der(sink.tube_hot[5].liquidStream.HT[6].m.e) DUMMY_DER */ + (0.001) * (data->localData[0]->realVars[895] /* der(sink.tube_hot[5].liquidStream.HT[6].m.p) DUMMY_DER */);
  TRACE_POP
}

/*
equation index: 2096
type: SIMPLE_ASSIGN
sink.tube_hot[5].wall_1L.T[6] = 2.0 * (sink.tube_hot[5].liquidStream.surf.T[6] * sink.tube_hot[5].wall_1L.G * 0.5 + sink.tube_hot[5].liquidStream.surf.Q_flow[6]) / sink.tube_hot[5].wall_1L.G
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2096(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2096};
  data->localData[0]->realVars[256] /* sink.tube_hot[5].wall_1L.T[6] STATE(1) */ = DIVISION_SIM((2.0) * (((data->localData[0]->realVars[4027] /* sink.tube_hot[5].liquidStream.surf.T[6] variable */) * (data->simulationInfo->realParameter[473] /* sink.tube_hot[5].wall_1L.G PARAM */)) * (0.5) + data->localData[0]->realVars[3927] /* sink.tube_hot[5].liquidStream.surf.Q_flow[6] variable */),data->simulationInfo->realParameter[473] /* sink.tube_hot[5].wall_1L.G PARAM */,"sink.tube_hot[5].wall_1L.G",equationIndexes);
  TRACE_POP
}

/*
equation index: 2097
type: SIMPLE_ASSIGN
sink.tube_hot[5].liquidStream.surf.T[5] = sink.tube_hot[5].liquidStream.TStart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2097(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2097};
  data->localData[0]->realVars[4026] /* sink.tube_hot[5].liquidStream.surf.T[5] variable */ = data->simulationInfo->realParameter[373] /* sink.tube_hot[5].liquidStream.TStart PARAM */;
  TRACE_POP
}

/*
equation index: 2098
type: SIMPLE_ASSIGN
sink.tube_hot[5].liquidStream.surf.Q_flow[5] = sink.tube_hot[5].liquidStream.HT[5].gamma * sink.tube_hot[5].liquidStream.All * (sink.tube_hot[5].liquidStream.surf.T[5] - sink.tube_hot[5].liquidStream.T[5])
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2098(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2098};
  data->localData[0]->realVars[3926] /* sink.tube_hot[5].liquidStream.surf.Q_flow[5] variable */ = (data->localData[0]->realVars[2326] /* sink.tube_hot[5].liquidStream.HT[5].gamma variable */) * ((data->simulationInfo->realParameter[143] /* sink.tube_hot[5].liquidStream.All PARAM */) * (data->localData[0]->realVars[4026] /* sink.tube_hot[5].liquidStream.surf.T[5] variable */ - data->localData[0]->realVars[3326] /* sink.tube_hot[5].liquidStream.T[5] variable */));
  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6068(DATA *data, threadData_t *threadData);

extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6069(DATA *data, threadData_t *threadData);

extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6070(DATA *data, threadData_t *threadData);


/*
equation index: 2102
type: SIMPLE_ASSIGN
$DER.sink.tube_hot[5].liquidStream.HT[5].m.h = $DER.sink.tube_hot[5].liquidStream.HT[5].m.e + 0.001 * $DER.sink.tube_hot[5].liquidStream.HT[5].m.p
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2102(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2102};
  data->localData[0]->realVars[457] /* der(sink.tube_hot[5].liquidStream.HT[5].m.h) STATE_DER */ = data->localData[0]->realVars[794] /* der(sink.tube_hot[5].liquidStream.HT[5].m.e) DUMMY_DER */ + (0.001) * (data->localData[0]->realVars[894] /* der(sink.tube_hot[5].liquidStream.HT[5].m.p) DUMMY_DER */);
  TRACE_POP
}

/*
equation index: 2103
type: SIMPLE_ASSIGN
sink.tube_hot[5].wall_1L.T[5] = 2.0 * (sink.tube_hot[5].liquidStream.surf.T[5] * sink.tube_hot[5].wall_1L.G * 0.5 + sink.tube_hot[5].liquidStream.surf.Q_flow[5]) / sink.tube_hot[5].wall_1L.G
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2103(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2103};
  data->localData[0]->realVars[255] /* sink.tube_hot[5].wall_1L.T[5] STATE(1) */ = DIVISION_SIM((2.0) * (((data->localData[0]->realVars[4026] /* sink.tube_hot[5].liquidStream.surf.T[5] variable */) * (data->simulationInfo->realParameter[473] /* sink.tube_hot[5].wall_1L.G PARAM */)) * (0.5) + data->localData[0]->realVars[3926] /* sink.tube_hot[5].liquidStream.surf.Q_flow[5] variable */),data->simulationInfo->realParameter[473] /* sink.tube_hot[5].wall_1L.G PARAM */,"sink.tube_hot[5].wall_1L.G",equationIndexes);
  TRACE_POP
}

/*
equation index: 2104
type: SIMPLE_ASSIGN
sink.tube_hot[5].liquidStream.surf.T[4] = sink.tube_hot[5].liquidStream.TStart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2104(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2104};
  data->localData[0]->realVars[4025] /* sink.tube_hot[5].liquidStream.surf.T[4] variable */ = data->simulationInfo->realParameter[373] /* sink.tube_hot[5].liquidStream.TStart PARAM */;
  TRACE_POP
}

/*
equation index: 2105
type: SIMPLE_ASSIGN
sink.tube_hot[5].liquidStream.surf.Q_flow[4] = sink.tube_hot[5].liquidStream.HT[4].gamma * sink.tube_hot[5].liquidStream.All * (sink.tube_hot[5].liquidStream.surf.T[4] - sink.tube_hot[5].liquidStream.T[4])
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2105(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2105};
  data->localData[0]->realVars[3925] /* sink.tube_hot[5].liquidStream.surf.Q_flow[4] variable */ = (data->localData[0]->realVars[2325] /* sink.tube_hot[5].liquidStream.HT[4].gamma variable */) * ((data->simulationInfo->realParameter[143] /* sink.tube_hot[5].liquidStream.All PARAM */) * (data->localData[0]->realVars[4025] /* sink.tube_hot[5].liquidStream.surf.T[4] variable */ - data->localData[0]->realVars[3325] /* sink.tube_hot[5].liquidStream.T[4] variable */));
  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6071(DATA *data, threadData_t *threadData);

extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6072(DATA *data, threadData_t *threadData);

extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6073(DATA *data, threadData_t *threadData);


/*
equation index: 2109
type: SIMPLE_ASSIGN
$DER.sink.tube_hot[5].liquidStream.HT[4].m.h = $DER.sink.tube_hot[5].liquidStream.HT[4].m.e + 0.001 * $DER.sink.tube_hot[5].liquidStream.HT[4].m.p
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2109(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2109};
  data->localData[0]->realVars[456] /* der(sink.tube_hot[5].liquidStream.HT[4].m.h) STATE_DER */ = data->localData[0]->realVars[793] /* der(sink.tube_hot[5].liquidStream.HT[4].m.e) DUMMY_DER */ + (0.001) * (data->localData[0]->realVars[893] /* der(sink.tube_hot[5].liquidStream.HT[4].m.p) DUMMY_DER */);
  TRACE_POP
}

/*
equation index: 2110
type: SIMPLE_ASSIGN
sink.tube_hot[5].wall_1L.T[4] = 2.0 * (sink.tube_hot[5].liquidStream.surf.T[4] * sink.tube_hot[5].wall_1L.G * 0.5 + sink.tube_hot[5].liquidStream.surf.Q_flow[4]) / sink.tube_hot[5].wall_1L.G
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2110(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2110};
  data->localData[0]->realVars[254] /* sink.tube_hot[5].wall_1L.T[4] STATE(1) */ = DIVISION_SIM((2.0) * (((data->localData[0]->realVars[4025] /* sink.tube_hot[5].liquidStream.surf.T[4] variable */) * (data->simulationInfo->realParameter[473] /* sink.tube_hot[5].wall_1L.G PARAM */)) * (0.5) + data->localData[0]->realVars[3925] /* sink.tube_hot[5].liquidStream.surf.Q_flow[4] variable */),data->simulationInfo->realParameter[473] /* sink.tube_hot[5].wall_1L.G PARAM */,"sink.tube_hot[5].wall_1L.G",equationIndexes);
  TRACE_POP
}

/*
equation index: 2111
type: SIMPLE_ASSIGN
sink.tube_hot[5].liquidStream.surf.T[3] = sink.tube_hot[5].liquidStream.TStart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2111(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2111};
  data->localData[0]->realVars[4024] /* sink.tube_hot[5].liquidStream.surf.T[3] variable */ = data->simulationInfo->realParameter[373] /* sink.tube_hot[5].liquidStream.TStart PARAM */;
  TRACE_POP
}

/*
equation index: 2112
type: SIMPLE_ASSIGN
sink.tube_hot[5].liquidStream.surf.Q_flow[3] = sink.tube_hot[5].liquidStream.HT[3].gamma * sink.tube_hot[5].liquidStream.All * (sink.tube_hot[5].liquidStream.surf.T[3] - sink.tube_hot[5].liquidStream.T[3])
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2112(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2112};
  data->localData[0]->realVars[3924] /* sink.tube_hot[5].liquidStream.surf.Q_flow[3] variable */ = (data->localData[0]->realVars[2324] /* sink.tube_hot[5].liquidStream.HT[3].gamma variable */) * ((data->simulationInfo->realParameter[143] /* sink.tube_hot[5].liquidStream.All PARAM */) * (data->localData[0]->realVars[4024] /* sink.tube_hot[5].liquidStream.surf.T[3] variable */ - data->localData[0]->realVars[3324] /* sink.tube_hot[5].liquidStream.T[3] variable */));
  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6074(DATA *data, threadData_t *threadData);

extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6075(DATA *data, threadData_t *threadData);

extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6076(DATA *data, threadData_t *threadData);


/*
equation index: 2116
type: SIMPLE_ASSIGN
$DER.sink.tube_hot[5].liquidStream.HT[3].m.h = $DER.sink.tube_hot[5].liquidStream.HT[3].m.e + 0.001 * $DER.sink.tube_hot[5].liquidStream.HT[3].m.p
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2116(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2116};
  data->localData[0]->realVars[455] /* der(sink.tube_hot[5].liquidStream.HT[3].m.h) STATE_DER */ = data->localData[0]->realVars[792] /* der(sink.tube_hot[5].liquidStream.HT[3].m.e) DUMMY_DER */ + (0.001) * (data->localData[0]->realVars[892] /* der(sink.tube_hot[5].liquidStream.HT[3].m.p) DUMMY_DER */);
  TRACE_POP
}

/*
equation index: 2117
type: SIMPLE_ASSIGN
sink.tube_hot[5].wall_1L.T[3] = 2.0 * (sink.tube_hot[5].liquidStream.surf.T[3] * sink.tube_hot[5].wall_1L.G * 0.5 + sink.tube_hot[5].liquidStream.surf.Q_flow[3]) / sink.tube_hot[5].wall_1L.G
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2117(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2117};
  data->localData[0]->realVars[253] /* sink.tube_hot[5].wall_1L.T[3] STATE(1) */ = DIVISION_SIM((2.0) * (((data->localData[0]->realVars[4024] /* sink.tube_hot[5].liquidStream.surf.T[3] variable */) * (data->simulationInfo->realParameter[473] /* sink.tube_hot[5].wall_1L.G PARAM */)) * (0.5) + data->localData[0]->realVars[3924] /* sink.tube_hot[5].liquidStream.surf.Q_flow[3] variable */),data->simulationInfo->realParameter[473] /* sink.tube_hot[5].wall_1L.G PARAM */,"sink.tube_hot[5].wall_1L.G",equationIndexes);
  TRACE_POP
}

/*
equation index: 2118
type: SIMPLE_ASSIGN
sink.tube_hot[5].liquidStream.surf.T[2] = sink.tube_hot[5].liquidStream.TStart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2118(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2118};
  data->localData[0]->realVars[4023] /* sink.tube_hot[5].liquidStream.surf.T[2] variable */ = data->simulationInfo->realParameter[373] /* sink.tube_hot[5].liquidStream.TStart PARAM */;
  TRACE_POP
}

/*
equation index: 2119
type: SIMPLE_ASSIGN
sink.tube_hot[5].liquidStream.surf.Q_flow[2] = sink.tube_hot[5].liquidStream.HT[2].gamma * sink.tube_hot[5].liquidStream.All * (sink.tube_hot[5].liquidStream.surf.T[2] - sink.tube_hot[5].liquidStream.T[2])
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2119(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2119};
  data->localData[0]->realVars[3923] /* sink.tube_hot[5].liquidStream.surf.Q_flow[2] variable */ = (data->localData[0]->realVars[2323] /* sink.tube_hot[5].liquidStream.HT[2].gamma variable */) * ((data->simulationInfo->realParameter[143] /* sink.tube_hot[5].liquidStream.All PARAM */) * (data->localData[0]->realVars[4023] /* sink.tube_hot[5].liquidStream.surf.T[2] variable */ - data->localData[0]->realVars[3323] /* sink.tube_hot[5].liquidStream.T[2] variable */));
  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6077(DATA *data, threadData_t *threadData);

extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6078(DATA *data, threadData_t *threadData);

extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6079(DATA *data, threadData_t *threadData);


/*
equation index: 2123
type: SIMPLE_ASSIGN
$DER.sink.tube_hot[5].liquidStream.HT[2].m.h = $DER.sink.tube_hot[5].liquidStream.HT[2].m.e + 0.001 * $DER.sink.tube_hot[5].liquidStream.HT[2].m.p
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2123(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2123};
  data->localData[0]->realVars[454] /* der(sink.tube_hot[5].liquidStream.HT[2].m.h) STATE_DER */ = data->localData[0]->realVars[791] /* der(sink.tube_hot[5].liquidStream.HT[2].m.e) DUMMY_DER */ + (0.001) * (data->localData[0]->realVars[891] /* der(sink.tube_hot[5].liquidStream.HT[2].m.p) DUMMY_DER */);
  TRACE_POP
}

/*
equation index: 2124
type: SIMPLE_ASSIGN
sink.tube_hot[5].wall_1L.T[2] = 2.0 * (sink.tube_hot[5].liquidStream.surf.T[2] * sink.tube_hot[5].wall_1L.G * 0.5 + sink.tube_hot[5].liquidStream.surf.Q_flow[2]) / sink.tube_hot[5].wall_1L.G
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2124(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2124};
  data->localData[0]->realVars[252] /* sink.tube_hot[5].wall_1L.T[2] STATE(1) */ = DIVISION_SIM((2.0) * (((data->localData[0]->realVars[4023] /* sink.tube_hot[5].liquidStream.surf.T[2] variable */) * (data->simulationInfo->realParameter[473] /* sink.tube_hot[5].wall_1L.G PARAM */)) * (0.5) + data->localData[0]->realVars[3923] /* sink.tube_hot[5].liquidStream.surf.Q_flow[2] variable */),data->simulationInfo->realParameter[473] /* sink.tube_hot[5].wall_1L.G PARAM */,"sink.tube_hot[5].wall_1L.G",equationIndexes);
  TRACE_POP
}

/*
equation index: 2125
type: SIMPLE_ASSIGN
sink.tube_hot[5].liquidStream.surf.T[1] = sink.tube_hot[5].liquidStream.TStart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2125(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2125};
  data->localData[0]->realVars[4022] /* sink.tube_hot[5].liquidStream.surf.T[1] variable */ = data->simulationInfo->realParameter[373] /* sink.tube_hot[5].liquidStream.TStart PARAM */;
  TRACE_POP
}

/*
equation index: 2126
type: SIMPLE_ASSIGN
sink.tube_hot[5].liquidStream.surf.Q_flow[1] = sink.tube_hot[5].liquidStream.HT[1].gamma * sink.tube_hot[5].liquidStream.All * (sink.tube_hot[5].liquidStream.surf.T[1] - sink.tube_hot[5].liquidStream.T[1])
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2126(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2126};
  data->localData[0]->realVars[3922] /* sink.tube_hot[5].liquidStream.surf.Q_flow[1] variable */ = (data->localData[0]->realVars[2322] /* sink.tube_hot[5].liquidStream.HT[1].gamma variable */) * ((data->simulationInfo->realParameter[143] /* sink.tube_hot[5].liquidStream.All PARAM */) * (data->localData[0]->realVars[4022] /* sink.tube_hot[5].liquidStream.surf.T[1] variable */ - data->localData[0]->realVars[3322] /* sink.tube_hot[5].liquidStream.T[1] variable */));
  TRACE_POP
}

/*
equation index: 2127
type: SIMPLE_ASSIGN
$DER.sink.tube_hot[5].liquidStream.E[1] = sink.tube_hot[5].liquidStream.wl_a[1] * (if sink.tube_hot[5].liquidStream.wl_a[1] > 0.0 then (max(-sink.tube_hot[1].liquidStream.wl_a[1], 1e-07) * sink.tube_hot[1].liquidStream.m[1].h + max(-sink.tube_hot[2].liquidStream.wl_a[1], 1e-07) * sink.tube_hot[2].liquidStream.m[1].h + max(-sink.tube_hot[3].liquidStream.wl_a[1], 1e-07) * sink.tube_hot[3].liquidStream.m[1].h + max(-sink.tube_hot[4].liquidStream.wl_a[1], 1e-07) * sink.tube_hot[4].liquidStream.m[1].h + max(-sink.tube_hot[6].liquidStream.wl_a[1], 1e-07) * sink.tube_hot[6].liquidStream.m[1].h + max(-sink.tube_hot[7].liquidStream.wl_a[1], 1e-07) * sink.tube_hot[7].liquidStream.m[1].h + max(-sink.tube_hot[8].liquidStream.wl_a[1], 1e-07) * sink.tube_hot[8].liquidStream.m[1].h + max(-sink.tube_hot[9].liquidStream.wl_a[1], 1e-07) * sink.tube_hot[9].liquidStream.m[1].h + max(-sink.tube_hot[10].liquidStream.wl_a[1], 1e-07) * sink.tube_hot[10].liquidStream.m[1].h + max(-sink.tube_cold.liquidStream.wl_b[4], 1e-07) * sink.pump.hob) / (max(-sink.tube_hot[1].liquidStream.wl_a[1], 1e-07) + max(-sink.tube_hot[2].liquidStream.wl_a[1], 1e-07) + max(-sink.tube_hot[3].liquidStream.wl_a[1], 1e-07) + max(-sink.tube_hot[4].liquidStream.wl_a[1], 1e-07) + max(-sink.tube_hot[6].liquidStream.wl_a[1], 1e-07) + max(-sink.tube_hot[7].liquidStream.wl_a[1], 1e-07) + max(-sink.tube_hot[8].liquidStream.wl_a[1], 1e-07) + max(-sink.tube_hot[9].liquidStream.wl_a[1], 1e-07) + max(-sink.tube_hot[10].liquidStream.wl_a[1], 1e-07) + max(-sink.tube_cold.liquidStream.wl_b[4], 1e-07)) else sink.tube_hot[5].liquidStream.m[1].h) + sink.tube_hot[5].liquidStream.surf.Q_flow[1] - sink.tube_hot[5].liquidStream.wl_a[1] * (if (-sink.tube_hot[5].liquidStream.wl_a[1]) > 0.0 then sink.tube_hot[5].liquidStream.HT[2].m.h else sink.tube_hot[5].liquidStream.m[1].h)
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2127(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2127};
  modelica_boolean tmp10;
  modelica_boolean tmp11;
  tmp10 = Greater(data->localData[0]->realVars[4086] /* sink.tube_hot[5].liquidStream.wl_a[1] DUMMY_STATE */,0.0);
  tmp11 = Greater((-data->localData[0]->realVars[4086] /* sink.tube_hot[5].liquidStream.wl_a[1] DUMMY_STATE */),0.0);
  data->localData[0]->realVars[690] /* der(sink.tube_hot[5].liquidStream.E[1]) DUMMY_DER */ = (data->localData[0]->realVars[4086] /* sink.tube_hot[5].liquidStream.wl_a[1] DUMMY_STATE */) * ((tmp10?DIVISION_SIM((fmax((-data->localData[0]->realVars[4082] /* sink.tube_hot[1].liquidStream.wl_a[1] DUMMY_STATE */),1e-07)) * (data->localData[0]->realVars[191] /* sink.tube_hot[1].liquidStream.m[1].h STATE(1) */) + (fmax((-data->localData[0]->realVars[4083] /* sink.tube_hot[2].liquidStream.wl_a[1] DUMMY_STATE */),1e-07)) * (data->localData[0]->realVars[193] /* sink.tube_hot[2].liquidStream.m[1].h STATE(1) */) + (fmax((-data->localData[0]->realVars[4084] /* sink.tube_hot[3].liquidStream.wl_a[1] DUMMY_STATE */),1e-07)) * (data->localData[0]->realVars[195] /* sink.tube_hot[3].liquidStream.m[1].h STATE(1) */) + (fmax((-data->localData[0]->realVars[4085] /* sink.tube_hot[4].liquidStream.wl_a[1] DUMMY_STATE */),1e-07)) * (data->localData[0]->realVars[197] /* sink.tube_hot[4].liquidStream.m[1].h STATE(1) */) + (fmax((-data->localData[0]->realVars[4087] /* sink.tube_hot[6].liquidStream.wl_a[1] DUMMY_STATE */),1e-07)) * (data->localData[0]->realVars[201] /* sink.tube_hot[6].liquidStream.m[1].h STATE(1) */) + (fmax((-data->localData[0]->realVars[4088] /* sink.tube_hot[7].liquidStream.wl_a[1] DUMMY_STATE */),1e-07)) * (data->localData[0]->realVars[203] /* sink.tube_hot[7].liquidStream.m[1].h STATE(1) */) + (fmax((-data->localData[0]->realVars[4089] /* sink.tube_hot[8].liquidStream.wl_a[1] DUMMY_STATE */),1e-07)) * (data->localData[0]->realVars[205] /* sink.tube_hot[8].liquidStream.m[1].h STATE(1) */) + (fmax((-data->localData[0]->realVars[4090] /* sink.tube_hot[9].liquidStream.wl_a[1] DUMMY_STATE */),1e-07)) * (data->localData[0]->realVars[207] /* sink.tube_hot[9].liquidStream.m[1].h STATE(1) */) + (fmax((-data->localData[0]->realVars[4091] /* sink.tube_hot[10].liquidStream.wl_a[1] DUMMY_STATE */),1e-07)) * (data->localData[0]->realVars[209] /* sink.tube_hot[10].liquidStream.m[1].h STATE(1) */) + (fmax((-data->localData[0]->realVars[1881] /* sink.tube_cold.liquidStream.wl_b[4] DUMMY_STATE */),1e-07)) * (data->localData[0]->realVars[1746] /* sink.pump.hob variable */),fmax((-data->localData[0]->realVars[4082] /* sink.tube_hot[1].liquidStream.wl_a[1] DUMMY_STATE */),1e-07) + fmax((-data->localData[0]->realVars[4083] /* sink.tube_hot[2].liquidStream.wl_a[1] DUMMY_STATE */),1e-07) + fmax((-data->localData[0]->realVars[4084] /* sink.tube_hot[3].liquidStream.wl_a[1] DUMMY_STATE */),1e-07) + fmax((-data->localData[0]->realVars[4085] /* sink.tube_hot[4].liquidStream.wl_a[1] DUMMY_STATE */),1e-07) + fmax((-data->localData[0]->realVars[4087] /* sink.tube_hot[6].liquidStream.wl_a[1] DUMMY_STATE */),1e-07) + fmax((-data->localData[0]->realVars[4088] /* sink.tube_hot[7].liquidStream.wl_a[1] DUMMY_STATE */),1e-07) + fmax((-data->localData[0]->realVars[4089] /* sink.tube_hot[8].liquidStream.wl_a[1] DUMMY_STATE */),1e-07) + fmax((-data->localData[0]->realVars[4090] /* sink.tube_hot[9].liquidStream.wl_a[1] DUMMY_STATE */),1e-07) + fmax((-data->localData[0]->realVars[4091] /* sink.tube_hot[10].liquidStream.wl_a[1] DUMMY_STATE */),1e-07) + fmax((-data->localData[0]->realVars[1881] /* sink.tube_cold.liquidStream.wl_b[4] DUMMY_STATE */),1e-07),"max(-sink.tube_hot[1].liquidStream.wl_a[1], 1e-07) + max(-sink.tube_hot[2].liquidStream.wl_a[1], 1e-07) + max(-sink.tube_hot[3].liquidStream.wl_a[1], 1e-07) + max(-sink.tube_hot[4].liquidStream.wl_a[1], 1e-07) + max(-sink.tube_hot[6].liquidStream.wl_a[1], 1e-07) + max(-sink.tube_hot[7].liquidStream.wl_a[1], 1e-07) + max(-sink.tube_hot[8].liquidStream.wl_a[1], 1e-07) + max(-sink.tube_hot[9].liquidStream.wl_a[1], 1e-07) + max(-sink.tube_hot[10].liquidStream.wl_a[1], 1e-07) + max(-sink.tube_cold.liquidStream.wl_b[4], 1e-07)",equationIndexes):data->localData[0]->realVars[199] /* sink.tube_hot[5].liquidStream.m[1].h STATE(1) */)) + data->localData[0]->realVars[3922] /* sink.tube_hot[5].liquidStream.surf.Q_flow[1] variable */ - ((data->localData[0]->realVars[4086] /* sink.tube_hot[5].liquidStream.wl_a[1] DUMMY_STATE */) * ((tmp11?data->localData[0]->realVars[143] /* sink.tube_hot[5].liquidStream.HT[2].m.h STATE(1) */:data->localData[0]->realVars[199] /* sink.tube_hot[5].liquidStream.m[1].h STATE(1) */)));
  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6931(DATA *data, threadData_t *threadData);

extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6932(DATA *data, threadData_t *threadData);


/*
equation index: 2130
type: SIMPLE_ASSIGN
$DER.sink.tube_hot[5].liquidStream.m[1].h = $DER.sink.tube_hot[5].liquidStream.HT[1].m.e + 0.001 * $DER.sink.tube_hot[5].liquidStream.HT[1].m.p
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2130(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2130};
  data->localData[0]->realVars[510] /* der(sink.tube_hot[5].liquidStream.m[1].h) STATE_DER */ = data->localData[0]->realVars[790] /* der(sink.tube_hot[5].liquidStream.HT[1].m.e) DUMMY_DER */ + (0.001) * (data->localData[0]->realVars[890] /* der(sink.tube_hot[5].liquidStream.HT[1].m.p) DUMMY_DER */);
  TRACE_POP
}

/*
equation index: 2131
type: SIMPLE_ASSIGN
sink.tube_hot[5].wall_1L.T[1] = 2.0 * (sink.tube_hot[5].liquidStream.surf.T[1] * sink.tube_hot[5].wall_1L.G * 0.5 + sink.tube_hot[5].liquidStream.surf.Q_flow[1]) / sink.tube_hot[5].wall_1L.G
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2131(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2131};
  data->localData[0]->realVars[251] /* sink.tube_hot[5].wall_1L.T[1] STATE(1) */ = DIVISION_SIM((2.0) * (((data->localData[0]->realVars[4022] /* sink.tube_hot[5].liquidStream.surf.T[1] variable */) * (data->simulationInfo->realParameter[473] /* sink.tube_hot[5].wall_1L.G PARAM */)) * (0.5) + data->localData[0]->realVars[3922] /* sink.tube_hot[5].liquidStream.surf.Q_flow[1] variable */),data->simulationInfo->realParameter[473] /* sink.tube_hot[5].wall_1L.G PARAM */,"sink.tube_hot[5].wall_1L.G",equationIndexes);
  TRACE_POP
}

/*
equation index: 2132
type: SIMPLE_ASSIGN
sink.tube_hot[4].liquidStream.surf.T[10] = sink.tube_hot[4].liquidStream.TStart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2132(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2132};
  data->localData[0]->realVars[4021] /* sink.tube_hot[4].liquidStream.surf.T[10] variable */ = data->simulationInfo->realParameter[372] /* sink.tube_hot[4].liquidStream.TStart PARAM */;
  TRACE_POP
}

/*
equation index: 2133
type: SIMPLE_ASSIGN
sink.tube_hot[4].liquidStream.surf.Q_flow[10] = sink.tube_hot[4].liquidStream.HT[10].gamma * sink.tube_hot[4].liquidStream.All * (sink.tube_hot[4].liquidStream.surf.T[10] - sink.tube_hot[4].liquidStream.T[10])
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2133(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2133};
  data->localData[0]->realVars[3921] /* sink.tube_hot[4].liquidStream.surf.Q_flow[10] variable */ = (data->localData[0]->realVars[2321] /* sink.tube_hot[4].liquidStream.HT[10].gamma variable */) * ((data->simulationInfo->realParameter[142] /* sink.tube_hot[4].liquidStream.All PARAM */) * (data->localData[0]->realVars[4021] /* sink.tube_hot[4].liquidStream.surf.T[10] variable */ - data->localData[0]->realVars[3321] /* sink.tube_hot[4].liquidStream.T[10] variable */));
  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6981(DATA *data, threadData_t *threadData);

extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6982(DATA *data, threadData_t *threadData);

extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6983(DATA *data, threadData_t *threadData);


/*
equation index: 2137
type: SIMPLE_ASSIGN
$DER.sink.tube_hot[4].liquidStream.m[10].h = $DER.sink.tube_hot[4].liquidStream.HT[10].m.e + 0.001 * $DER.sink.tube_hot[4].liquidStream.HT[10].m.p
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2137(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2137};
  data->localData[0]->realVars[509] /* der(sink.tube_hot[4].liquidStream.m[10].h) STATE_DER */ = data->localData[0]->realVars[789] /* der(sink.tube_hot[4].liquidStream.HT[10].m.e) DUMMY_DER */ + (0.001) * (data->localData[0]->realVars[889] /* der(sink.tube_hot[4].liquidStream.HT[10].m.p) DUMMY_DER */);
  TRACE_POP
}

/*
equation index: 2138
type: SIMPLE_ASSIGN
sink.tube_hot[4].wall_1L.T[10] = 2.0 * (sink.tube_hot[4].liquidStream.surf.T[10] * sink.tube_hot[4].wall_1L.G * 0.5 + sink.tube_hot[4].liquidStream.surf.Q_flow[10]) / sink.tube_hot[4].wall_1L.G
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2138(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2138};
  data->localData[0]->realVars[250] /* sink.tube_hot[4].wall_1L.T[10] STATE(1) */ = DIVISION_SIM((2.0) * (((data->localData[0]->realVars[4021] /* sink.tube_hot[4].liquidStream.surf.T[10] variable */) * (data->simulationInfo->realParameter[472] /* sink.tube_hot[4].wall_1L.G PARAM */)) * (0.5) + data->localData[0]->realVars[3921] /* sink.tube_hot[4].liquidStream.surf.Q_flow[10] variable */),data->simulationInfo->realParameter[472] /* sink.tube_hot[4].wall_1L.G PARAM */,"sink.tube_hot[4].wall_1L.G",equationIndexes);
  TRACE_POP
}

/*
equation index: 2139
type: SIMPLE_ASSIGN
sink.tube_hot[4].liquidStream.surf.T[9] = sink.tube_hot[4].liquidStream.TStart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2139(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2139};
  data->localData[0]->realVars[4020] /* sink.tube_hot[4].liquidStream.surf.T[9] variable */ = data->simulationInfo->realParameter[372] /* sink.tube_hot[4].liquidStream.TStart PARAM */;
  TRACE_POP
}

/*
equation index: 2140
type: SIMPLE_ASSIGN
sink.tube_hot[4].liquidStream.surf.Q_flow[9] = sink.tube_hot[4].liquidStream.HT[9].gamma * sink.tube_hot[4].liquidStream.All * (sink.tube_hot[4].liquidStream.surf.T[9] - sink.tube_hot[4].liquidStream.T[9])
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2140(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2140};
  data->localData[0]->realVars[3920] /* sink.tube_hot[4].liquidStream.surf.Q_flow[9] variable */ = (data->localData[0]->realVars[2320] /* sink.tube_hot[4].liquidStream.HT[9].gamma variable */) * ((data->simulationInfo->realParameter[142] /* sink.tube_hot[4].liquidStream.All PARAM */) * (data->localData[0]->realVars[4020] /* sink.tube_hot[4].liquidStream.surf.T[9] variable */ - data->localData[0]->realVars[3320] /* sink.tube_hot[4].liquidStream.T[9] variable */));
  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6843(DATA *data, threadData_t *threadData);

extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6844(DATA *data, threadData_t *threadData);

extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6845(DATA *data, threadData_t *threadData);


/*
equation index: 2144
type: SIMPLE_ASSIGN
$DER.sink.tube_hot[4].liquidStream.HT[9].m.h = $DER.sink.tube_hot[4].liquidStream.HT[9].m.e + 0.001 * $DER.sink.tube_hot[4].liquidStream.HT[9].m.p
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2144(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2144};
  data->localData[0]->realVars[453] /* der(sink.tube_hot[4].liquidStream.HT[9].m.h) STATE_DER */ = data->localData[0]->realVars[788] /* der(sink.tube_hot[4].liquidStream.HT[9].m.e) DUMMY_DER */ + (0.001) * (data->localData[0]->realVars[888] /* der(sink.tube_hot[4].liquidStream.HT[9].m.p) DUMMY_DER */);
  TRACE_POP
}

/*
equation index: 2145
type: SIMPLE_ASSIGN
sink.tube_hot[4].wall_1L.T[9] = 2.0 * (sink.tube_hot[4].liquidStream.surf.T[9] * sink.tube_hot[4].wall_1L.G * 0.5 + sink.tube_hot[4].liquidStream.surf.Q_flow[9]) / sink.tube_hot[4].wall_1L.G
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2145(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2145};
  data->localData[0]->realVars[249] /* sink.tube_hot[4].wall_1L.T[9] STATE(1) */ = DIVISION_SIM((2.0) * (((data->localData[0]->realVars[4020] /* sink.tube_hot[4].liquidStream.surf.T[9] variable */) * (data->simulationInfo->realParameter[472] /* sink.tube_hot[4].wall_1L.G PARAM */)) * (0.5) + data->localData[0]->realVars[3920] /* sink.tube_hot[4].liquidStream.surf.Q_flow[9] variable */),data->simulationInfo->realParameter[472] /* sink.tube_hot[4].wall_1L.G PARAM */,"sink.tube_hot[4].wall_1L.G",equationIndexes);
  TRACE_POP
}

/*
equation index: 2146
type: SIMPLE_ASSIGN
sink.tube_hot[4].liquidStream.surf.T[8] = sink.tube_hot[4].liquidStream.TStart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2146(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2146};
  data->localData[0]->realVars[4019] /* sink.tube_hot[4].liquidStream.surf.T[8] variable */ = data->simulationInfo->realParameter[372] /* sink.tube_hot[4].liquidStream.TStart PARAM */;
  TRACE_POP
}

/*
equation index: 2147
type: SIMPLE_ASSIGN
sink.tube_hot[4].liquidStream.surf.Q_flow[8] = sink.tube_hot[4].liquidStream.HT[8].gamma * sink.tube_hot[4].liquidStream.All * (sink.tube_hot[4].liquidStream.surf.T[8] - sink.tube_hot[4].liquidStream.T[8])
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2147(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2147};
  data->localData[0]->realVars[3919] /* sink.tube_hot[4].liquidStream.surf.Q_flow[8] variable */ = (data->localData[0]->realVars[2319] /* sink.tube_hot[4].liquidStream.HT[8].gamma variable */) * ((data->simulationInfo->realParameter[142] /* sink.tube_hot[4].liquidStream.All PARAM */) * (data->localData[0]->realVars[4019] /* sink.tube_hot[4].liquidStream.surf.T[8] variable */ - data->localData[0]->realVars[3319] /* sink.tube_hot[4].liquidStream.T[8] variable */));
  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6846(DATA *data, threadData_t *threadData);

extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6847(DATA *data, threadData_t *threadData);

extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6848(DATA *data, threadData_t *threadData);


/*
equation index: 2151
type: SIMPLE_ASSIGN
$DER.sink.tube_hot[4].liquidStream.HT[8].m.h = $DER.sink.tube_hot[4].liquidStream.HT[8].m.e + 0.001 * $DER.sink.tube_hot[4].liquidStream.HT[8].m.p
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2151(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2151};
  data->localData[0]->realVars[452] /* der(sink.tube_hot[4].liquidStream.HT[8].m.h) STATE_DER */ = data->localData[0]->realVars[787] /* der(sink.tube_hot[4].liquidStream.HT[8].m.e) DUMMY_DER */ + (0.001) * (data->localData[0]->realVars[887] /* der(sink.tube_hot[4].liquidStream.HT[8].m.p) DUMMY_DER */);
  TRACE_POP
}

/*
equation index: 2152
type: SIMPLE_ASSIGN
sink.tube_hot[4].wall_1L.T[8] = 2.0 * (sink.tube_hot[4].liquidStream.surf.T[8] * sink.tube_hot[4].wall_1L.G * 0.5 + sink.tube_hot[4].liquidStream.surf.Q_flow[8]) / sink.tube_hot[4].wall_1L.G
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2152(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2152};
  data->localData[0]->realVars[248] /* sink.tube_hot[4].wall_1L.T[8] STATE(1) */ = DIVISION_SIM((2.0) * (((data->localData[0]->realVars[4019] /* sink.tube_hot[4].liquidStream.surf.T[8] variable */) * (data->simulationInfo->realParameter[472] /* sink.tube_hot[4].wall_1L.G PARAM */)) * (0.5) + data->localData[0]->realVars[3919] /* sink.tube_hot[4].liquidStream.surf.Q_flow[8] variable */),data->simulationInfo->realParameter[472] /* sink.tube_hot[4].wall_1L.G PARAM */,"sink.tube_hot[4].wall_1L.G",equationIndexes);
  TRACE_POP
}

/*
equation index: 2153
type: SIMPLE_ASSIGN
sink.tube_hot[4].liquidStream.surf.T[7] = sink.tube_hot[4].liquidStream.TStart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2153(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2153};
  data->localData[0]->realVars[4018] /* sink.tube_hot[4].liquidStream.surf.T[7] variable */ = data->simulationInfo->realParameter[372] /* sink.tube_hot[4].liquidStream.TStart PARAM */;
  TRACE_POP
}

/*
equation index: 2154
type: SIMPLE_ASSIGN
sink.tube_hot[4].liquidStream.surf.Q_flow[7] = sink.tube_hot[4].liquidStream.HT[7].gamma * sink.tube_hot[4].liquidStream.All * (sink.tube_hot[4].liquidStream.surf.T[7] - sink.tube_hot[4].liquidStream.T[7])
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2154(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2154};
  data->localData[0]->realVars[3918] /* sink.tube_hot[4].liquidStream.surf.Q_flow[7] variable */ = (data->localData[0]->realVars[2318] /* sink.tube_hot[4].liquidStream.HT[7].gamma variable */) * ((data->simulationInfo->realParameter[142] /* sink.tube_hot[4].liquidStream.All PARAM */) * (data->localData[0]->realVars[4018] /* sink.tube_hot[4].liquidStream.surf.T[7] variable */ - data->localData[0]->realVars[3318] /* sink.tube_hot[4].liquidStream.T[7] variable */));
  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6849(DATA *data, threadData_t *threadData);

extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6850(DATA *data, threadData_t *threadData);

extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6851(DATA *data, threadData_t *threadData);


/*
equation index: 2158
type: SIMPLE_ASSIGN
$DER.sink.tube_hot[4].liquidStream.HT[7].m.h = $DER.sink.tube_hot[4].liquidStream.HT[7].m.e + 0.001 * $DER.sink.tube_hot[4].liquidStream.HT[7].m.p
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2158(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2158};
  data->localData[0]->realVars[451] /* der(sink.tube_hot[4].liquidStream.HT[7].m.h) STATE_DER */ = data->localData[0]->realVars[786] /* der(sink.tube_hot[4].liquidStream.HT[7].m.e) DUMMY_DER */ + (0.001) * (data->localData[0]->realVars[886] /* der(sink.tube_hot[4].liquidStream.HT[7].m.p) DUMMY_DER */);
  TRACE_POP
}

/*
equation index: 2159
type: SIMPLE_ASSIGN
sink.tube_hot[4].wall_1L.T[7] = 2.0 * (sink.tube_hot[4].liquidStream.surf.T[7] * sink.tube_hot[4].wall_1L.G * 0.5 + sink.tube_hot[4].liquidStream.surf.Q_flow[7]) / sink.tube_hot[4].wall_1L.G
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2159(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2159};
  data->localData[0]->realVars[247] /* sink.tube_hot[4].wall_1L.T[7] STATE(1) */ = DIVISION_SIM((2.0) * (((data->localData[0]->realVars[4018] /* sink.tube_hot[4].liquidStream.surf.T[7] variable */) * (data->simulationInfo->realParameter[472] /* sink.tube_hot[4].wall_1L.G PARAM */)) * (0.5) + data->localData[0]->realVars[3918] /* sink.tube_hot[4].liquidStream.surf.Q_flow[7] variable */),data->simulationInfo->realParameter[472] /* sink.tube_hot[4].wall_1L.G PARAM */,"sink.tube_hot[4].wall_1L.G",equationIndexes);
  TRACE_POP
}

/*
equation index: 2160
type: SIMPLE_ASSIGN
sink.tube_hot[4].liquidStream.surf.T[6] = sink.tube_hot[4].liquidStream.TStart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2160(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2160};
  data->localData[0]->realVars[4017] /* sink.tube_hot[4].liquidStream.surf.T[6] variable */ = data->simulationInfo->realParameter[372] /* sink.tube_hot[4].liquidStream.TStart PARAM */;
  TRACE_POP
}

/*
equation index: 2161
type: SIMPLE_ASSIGN
sink.tube_hot[4].liquidStream.surf.Q_flow[6] = sink.tube_hot[4].liquidStream.HT[6].gamma * sink.tube_hot[4].liquidStream.All * (sink.tube_hot[4].liquidStream.surf.T[6] - sink.tube_hot[4].liquidStream.T[6])
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2161(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2161};
  data->localData[0]->realVars[3917] /* sink.tube_hot[4].liquidStream.surf.Q_flow[6] variable */ = (data->localData[0]->realVars[2317] /* sink.tube_hot[4].liquidStream.HT[6].gamma variable */) * ((data->simulationInfo->realParameter[142] /* sink.tube_hot[4].liquidStream.All PARAM */) * (data->localData[0]->realVars[4017] /* sink.tube_hot[4].liquidStream.surf.T[6] variable */ - data->localData[0]->realVars[3317] /* sink.tube_hot[4].liquidStream.T[6] variable */));
  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6852(DATA *data, threadData_t *threadData);

extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6853(DATA *data, threadData_t *threadData);

extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6854(DATA *data, threadData_t *threadData);


/*
equation index: 2165
type: SIMPLE_ASSIGN
$DER.sink.tube_hot[4].liquidStream.HT[6].m.h = $DER.sink.tube_hot[4].liquidStream.HT[6].m.e + 0.001 * $DER.sink.tube_hot[4].liquidStream.HT[6].m.p
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2165(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2165};
  data->localData[0]->realVars[450] /* der(sink.tube_hot[4].liquidStream.HT[6].m.h) STATE_DER */ = data->localData[0]->realVars[785] /* der(sink.tube_hot[4].liquidStream.HT[6].m.e) DUMMY_DER */ + (0.001) * (data->localData[0]->realVars[885] /* der(sink.tube_hot[4].liquidStream.HT[6].m.p) DUMMY_DER */);
  TRACE_POP
}

/*
equation index: 2166
type: SIMPLE_ASSIGN
sink.tube_hot[4].wall_1L.T[6] = 2.0 * (sink.tube_hot[4].liquidStream.surf.T[6] * sink.tube_hot[4].wall_1L.G * 0.5 + sink.tube_hot[4].liquidStream.surf.Q_flow[6]) / sink.tube_hot[4].wall_1L.G
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2166(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2166};
  data->localData[0]->realVars[246] /* sink.tube_hot[4].wall_1L.T[6] STATE(1) */ = DIVISION_SIM((2.0) * (((data->localData[0]->realVars[4017] /* sink.tube_hot[4].liquidStream.surf.T[6] variable */) * (data->simulationInfo->realParameter[472] /* sink.tube_hot[4].wall_1L.G PARAM */)) * (0.5) + data->localData[0]->realVars[3917] /* sink.tube_hot[4].liquidStream.surf.Q_flow[6] variable */),data->simulationInfo->realParameter[472] /* sink.tube_hot[4].wall_1L.G PARAM */,"sink.tube_hot[4].wall_1L.G",equationIndexes);
  TRACE_POP
}

/*
equation index: 2167
type: SIMPLE_ASSIGN
sink.tube_hot[4].liquidStream.surf.T[5] = sink.tube_hot[4].liquidStream.TStart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2167(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2167};
  data->localData[0]->realVars[4016] /* sink.tube_hot[4].liquidStream.surf.T[5] variable */ = data->simulationInfo->realParameter[372] /* sink.tube_hot[4].liquidStream.TStart PARAM */;
  TRACE_POP
}

/*
equation index: 2168
type: SIMPLE_ASSIGN
sink.tube_hot[4].liquidStream.surf.Q_flow[5] = sink.tube_hot[4].liquidStream.HT[5].gamma * sink.tube_hot[4].liquidStream.All * (sink.tube_hot[4].liquidStream.surf.T[5] - sink.tube_hot[4].liquidStream.T[5])
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2168(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2168};
  data->localData[0]->realVars[3916] /* sink.tube_hot[4].liquidStream.surf.Q_flow[5] variable */ = (data->localData[0]->realVars[2316] /* sink.tube_hot[4].liquidStream.HT[5].gamma variable */) * ((data->simulationInfo->realParameter[142] /* sink.tube_hot[4].liquidStream.All PARAM */) * (data->localData[0]->realVars[4016] /* sink.tube_hot[4].liquidStream.surf.T[5] variable */ - data->localData[0]->realVars[3316] /* sink.tube_hot[4].liquidStream.T[5] variable */));
  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6855(DATA *data, threadData_t *threadData);

extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6856(DATA *data, threadData_t *threadData);

extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6857(DATA *data, threadData_t *threadData);


/*
equation index: 2172
type: SIMPLE_ASSIGN
$DER.sink.tube_hot[4].liquidStream.HT[5].m.h = $DER.sink.tube_hot[4].liquidStream.HT[5].m.e + 0.001 * $DER.sink.tube_hot[4].liquidStream.HT[5].m.p
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2172(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2172};
  data->localData[0]->realVars[449] /* der(sink.tube_hot[4].liquidStream.HT[5].m.h) STATE_DER */ = data->localData[0]->realVars[784] /* der(sink.tube_hot[4].liquidStream.HT[5].m.e) DUMMY_DER */ + (0.001) * (data->localData[0]->realVars[884] /* der(sink.tube_hot[4].liquidStream.HT[5].m.p) DUMMY_DER */);
  TRACE_POP
}

/*
equation index: 2173
type: SIMPLE_ASSIGN
sink.tube_hot[4].wall_1L.T[5] = 2.0 * (sink.tube_hot[4].liquidStream.surf.T[5] * sink.tube_hot[4].wall_1L.G * 0.5 + sink.tube_hot[4].liquidStream.surf.Q_flow[5]) / sink.tube_hot[4].wall_1L.G
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2173(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2173};
  data->localData[0]->realVars[245] /* sink.tube_hot[4].wall_1L.T[5] STATE(1) */ = DIVISION_SIM((2.0) * (((data->localData[0]->realVars[4016] /* sink.tube_hot[4].liquidStream.surf.T[5] variable */) * (data->simulationInfo->realParameter[472] /* sink.tube_hot[4].wall_1L.G PARAM */)) * (0.5) + data->localData[0]->realVars[3916] /* sink.tube_hot[4].liquidStream.surf.Q_flow[5] variable */),data->simulationInfo->realParameter[472] /* sink.tube_hot[4].wall_1L.G PARAM */,"sink.tube_hot[4].wall_1L.G",equationIndexes);
  TRACE_POP
}

/*
equation index: 2174
type: SIMPLE_ASSIGN
sink.tube_hot[4].liquidStream.surf.T[4] = sink.tube_hot[4].liquidStream.TStart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2174(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2174};
  data->localData[0]->realVars[4015] /* sink.tube_hot[4].liquidStream.surf.T[4] variable */ = data->simulationInfo->realParameter[372] /* sink.tube_hot[4].liquidStream.TStart PARAM */;
  TRACE_POP
}

/*
equation index: 2175
type: SIMPLE_ASSIGN
sink.tube_hot[4].liquidStream.surf.Q_flow[4] = sink.tube_hot[4].liquidStream.HT[4].gamma * sink.tube_hot[4].liquidStream.All * (sink.tube_hot[4].liquidStream.surf.T[4] - sink.tube_hot[4].liquidStream.T[4])
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2175(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2175};
  data->localData[0]->realVars[3915] /* sink.tube_hot[4].liquidStream.surf.Q_flow[4] variable */ = (data->localData[0]->realVars[2315] /* sink.tube_hot[4].liquidStream.HT[4].gamma variable */) * ((data->simulationInfo->realParameter[142] /* sink.tube_hot[4].liquidStream.All PARAM */) * (data->localData[0]->realVars[4015] /* sink.tube_hot[4].liquidStream.surf.T[4] variable */ - data->localData[0]->realVars[3315] /* sink.tube_hot[4].liquidStream.T[4] variable */));
  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6858(DATA *data, threadData_t *threadData);

extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6859(DATA *data, threadData_t *threadData);

extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6860(DATA *data, threadData_t *threadData);


/*
equation index: 2179
type: SIMPLE_ASSIGN
$DER.sink.tube_hot[4].liquidStream.HT[4].m.h = $DER.sink.tube_hot[4].liquidStream.HT[4].m.e + 0.001 * $DER.sink.tube_hot[4].liquidStream.HT[4].m.p
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2179(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2179};
  data->localData[0]->realVars[448] /* der(sink.tube_hot[4].liquidStream.HT[4].m.h) STATE_DER */ = data->localData[0]->realVars[783] /* der(sink.tube_hot[4].liquidStream.HT[4].m.e) DUMMY_DER */ + (0.001) * (data->localData[0]->realVars[883] /* der(sink.tube_hot[4].liquidStream.HT[4].m.p) DUMMY_DER */);
  TRACE_POP
}

/*
equation index: 2180
type: SIMPLE_ASSIGN
sink.tube_hot[4].wall_1L.T[4] = 2.0 * (sink.tube_hot[4].liquidStream.surf.T[4] * sink.tube_hot[4].wall_1L.G * 0.5 + sink.tube_hot[4].liquidStream.surf.Q_flow[4]) / sink.tube_hot[4].wall_1L.G
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2180(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2180};
  data->localData[0]->realVars[244] /* sink.tube_hot[4].wall_1L.T[4] STATE(1) */ = DIVISION_SIM((2.0) * (((data->localData[0]->realVars[4015] /* sink.tube_hot[4].liquidStream.surf.T[4] variable */) * (data->simulationInfo->realParameter[472] /* sink.tube_hot[4].wall_1L.G PARAM */)) * (0.5) + data->localData[0]->realVars[3915] /* sink.tube_hot[4].liquidStream.surf.Q_flow[4] variable */),data->simulationInfo->realParameter[472] /* sink.tube_hot[4].wall_1L.G PARAM */,"sink.tube_hot[4].wall_1L.G",equationIndexes);
  TRACE_POP
}

/*
equation index: 2181
type: SIMPLE_ASSIGN
sink.tube_hot[4].liquidStream.surf.T[3] = sink.tube_hot[4].liquidStream.TStart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2181(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2181};
  data->localData[0]->realVars[4014] /* sink.tube_hot[4].liquidStream.surf.T[3] variable */ = data->simulationInfo->realParameter[372] /* sink.tube_hot[4].liquidStream.TStart PARAM */;
  TRACE_POP
}

/*
equation index: 2182
type: SIMPLE_ASSIGN
sink.tube_hot[4].liquidStream.surf.Q_flow[3] = sink.tube_hot[4].liquidStream.HT[3].gamma * sink.tube_hot[4].liquidStream.All * (sink.tube_hot[4].liquidStream.surf.T[3] - sink.tube_hot[4].liquidStream.T[3])
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2182(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2182};
  data->localData[0]->realVars[3914] /* sink.tube_hot[4].liquidStream.surf.Q_flow[3] variable */ = (data->localData[0]->realVars[2314] /* sink.tube_hot[4].liquidStream.HT[3].gamma variable */) * ((data->simulationInfo->realParameter[142] /* sink.tube_hot[4].liquidStream.All PARAM */) * (data->localData[0]->realVars[4014] /* sink.tube_hot[4].liquidStream.surf.T[3] variable */ - data->localData[0]->realVars[3314] /* sink.tube_hot[4].liquidStream.T[3] variable */));
  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6861(DATA *data, threadData_t *threadData);

extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6862(DATA *data, threadData_t *threadData);

extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6863(DATA *data, threadData_t *threadData);


/*
equation index: 2186
type: SIMPLE_ASSIGN
$DER.sink.tube_hot[4].liquidStream.HT[3].m.h = $DER.sink.tube_hot[4].liquidStream.HT[3].m.e + 0.001 * $DER.sink.tube_hot[4].liquidStream.HT[3].m.p
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2186(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2186};
  data->localData[0]->realVars[447] /* der(sink.tube_hot[4].liquidStream.HT[3].m.h) STATE_DER */ = data->localData[0]->realVars[782] /* der(sink.tube_hot[4].liquidStream.HT[3].m.e) DUMMY_DER */ + (0.001) * (data->localData[0]->realVars[882] /* der(sink.tube_hot[4].liquidStream.HT[3].m.p) DUMMY_DER */);
  TRACE_POP
}

/*
equation index: 2187
type: SIMPLE_ASSIGN
sink.tube_hot[4].wall_1L.T[3] = 2.0 * (sink.tube_hot[4].liquidStream.surf.T[3] * sink.tube_hot[4].wall_1L.G * 0.5 + sink.tube_hot[4].liquidStream.surf.Q_flow[3]) / sink.tube_hot[4].wall_1L.G
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2187(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2187};
  data->localData[0]->realVars[243] /* sink.tube_hot[4].wall_1L.T[3] STATE(1) */ = DIVISION_SIM((2.0) * (((data->localData[0]->realVars[4014] /* sink.tube_hot[4].liquidStream.surf.T[3] variable */) * (data->simulationInfo->realParameter[472] /* sink.tube_hot[4].wall_1L.G PARAM */)) * (0.5) + data->localData[0]->realVars[3914] /* sink.tube_hot[4].liquidStream.surf.Q_flow[3] variable */),data->simulationInfo->realParameter[472] /* sink.tube_hot[4].wall_1L.G PARAM */,"sink.tube_hot[4].wall_1L.G",equationIndexes);
  TRACE_POP
}

/*
equation index: 2188
type: SIMPLE_ASSIGN
sink.tube_hot[4].liquidStream.surf.T[2] = sink.tube_hot[4].liquidStream.TStart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2188(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2188};
  data->localData[0]->realVars[4013] /* sink.tube_hot[4].liquidStream.surf.T[2] variable */ = data->simulationInfo->realParameter[372] /* sink.tube_hot[4].liquidStream.TStart PARAM */;
  TRACE_POP
}

/*
equation index: 2189
type: SIMPLE_ASSIGN
sink.tube_hot[4].liquidStream.surf.Q_flow[2] = sink.tube_hot[4].liquidStream.HT[2].gamma * sink.tube_hot[4].liquidStream.All * (sink.tube_hot[4].liquidStream.surf.T[2] - sink.tube_hot[4].liquidStream.T[2])
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2189(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2189};
  data->localData[0]->realVars[3913] /* sink.tube_hot[4].liquidStream.surf.Q_flow[2] variable */ = (data->localData[0]->realVars[2313] /* sink.tube_hot[4].liquidStream.HT[2].gamma variable */) * ((data->simulationInfo->realParameter[142] /* sink.tube_hot[4].liquidStream.All PARAM */) * (data->localData[0]->realVars[4013] /* sink.tube_hot[4].liquidStream.surf.T[2] variable */ - data->localData[0]->realVars[3313] /* sink.tube_hot[4].liquidStream.T[2] variable */));
  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6873(DATA *data, threadData_t *threadData);

extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6874(DATA *data, threadData_t *threadData);

extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6875(DATA *data, threadData_t *threadData);


/*
equation index: 2193
type: SIMPLE_ASSIGN
$DER.sink.tube_hot[4].liquidStream.HT[2].m.h = $DER.sink.tube_hot[4].liquidStream.HT[2].m.e + 0.001 * $DER.sink.tube_hot[4].liquidStream.HT[2].m.p
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2193(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2193};
  data->localData[0]->realVars[446] /* der(sink.tube_hot[4].liquidStream.HT[2].m.h) STATE_DER */ = data->localData[0]->realVars[781] /* der(sink.tube_hot[4].liquidStream.HT[2].m.e) DUMMY_DER */ + (0.001) * (data->localData[0]->realVars[881] /* der(sink.tube_hot[4].liquidStream.HT[2].m.p) DUMMY_DER */);
  TRACE_POP
}

/*
equation index: 2194
type: SIMPLE_ASSIGN
sink.tube_hot[4].wall_1L.T[2] = 2.0 * (sink.tube_hot[4].liquidStream.surf.T[2] * sink.tube_hot[4].wall_1L.G * 0.5 + sink.tube_hot[4].liquidStream.surf.Q_flow[2]) / sink.tube_hot[4].wall_1L.G
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2194(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2194};
  data->localData[0]->realVars[242] /* sink.tube_hot[4].wall_1L.T[2] STATE(1) */ = DIVISION_SIM((2.0) * (((data->localData[0]->realVars[4013] /* sink.tube_hot[4].liquidStream.surf.T[2] variable */) * (data->simulationInfo->realParameter[472] /* sink.tube_hot[4].wall_1L.G PARAM */)) * (0.5) + data->localData[0]->realVars[3913] /* sink.tube_hot[4].liquidStream.surf.Q_flow[2] variable */),data->simulationInfo->realParameter[472] /* sink.tube_hot[4].wall_1L.G PARAM */,"sink.tube_hot[4].wall_1L.G",equationIndexes);
  TRACE_POP
}

/*
equation index: 2195
type: SIMPLE_ASSIGN
sink.tube_hot[4].liquidStream.surf.T[1] = sink.tube_hot[4].liquidStream.TStart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2195(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2195};
  data->localData[0]->realVars[4012] /* sink.tube_hot[4].liquidStream.surf.T[1] variable */ = data->simulationInfo->realParameter[372] /* sink.tube_hot[4].liquidStream.TStart PARAM */;
  TRACE_POP
}

/*
equation index: 2196
type: SIMPLE_ASSIGN
sink.tube_hot[4].liquidStream.surf.Q_flow[1] = sink.tube_hot[4].liquidStream.HT[1].gamma * sink.tube_hot[4].liquidStream.All * (sink.tube_hot[4].liquidStream.surf.T[1] - sink.tube_hot[4].liquidStream.T[1])
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2196(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2196};
  data->localData[0]->realVars[3912] /* sink.tube_hot[4].liquidStream.surf.Q_flow[1] variable */ = (data->localData[0]->realVars[2312] /* sink.tube_hot[4].liquidStream.HT[1].gamma variable */) * ((data->simulationInfo->realParameter[142] /* sink.tube_hot[4].liquidStream.All PARAM */) * (data->localData[0]->realVars[4012] /* sink.tube_hot[4].liquidStream.surf.T[1] variable */ - data->localData[0]->realVars[3312] /* sink.tube_hot[4].liquidStream.T[1] variable */));
  TRACE_POP
}

/*
equation index: 2197
type: SIMPLE_ASSIGN
$DER.sink.tube_hot[4].liquidStream.E[1] = sink.tube_hot[4].liquidStream.wl_a[1] * (if sink.tube_hot[4].liquidStream.wl_a[1] > 0.0 then (max(-sink.tube_hot[1].liquidStream.wl_a[1], 1e-07) * sink.tube_hot[1].liquidStream.m[1].h + max(-sink.tube_hot[2].liquidStream.wl_a[1], 1e-07) * sink.tube_hot[2].liquidStream.m[1].h + max(-sink.tube_hot[3].liquidStream.wl_a[1], 1e-07) * sink.tube_hot[3].liquidStream.m[1].h + max(-sink.tube_hot[5].liquidStream.wl_a[1], 1e-07) * sink.tube_hot[5].liquidStream.m[1].h + max(-sink.tube_hot[6].liquidStream.wl_a[1], 1e-07) * sink.tube_hot[6].liquidStream.m[1].h + max(-sink.tube_hot[7].liquidStream.wl_a[1], 1e-07) * sink.tube_hot[7].liquidStream.m[1].h + max(-sink.tube_hot[8].liquidStream.wl_a[1], 1e-07) * sink.tube_hot[8].liquidStream.m[1].h + max(-sink.tube_hot[9].liquidStream.wl_a[1], 1e-07) * sink.tube_hot[9].liquidStream.m[1].h + max(-sink.tube_hot[10].liquidStream.wl_a[1], 1e-07) * sink.tube_hot[10].liquidStream.m[1].h + max(-sink.tube_cold.liquidStream.wl_b[4], 1e-07) * sink.pump.hob) / (max(-sink.tube_hot[1].liquidStream.wl_a[1], 1e-07) + max(-sink.tube_hot[2].liquidStream.wl_a[1], 1e-07) + max(-sink.tube_hot[3].liquidStream.wl_a[1], 1e-07) + max(-sink.tube_hot[5].liquidStream.wl_a[1], 1e-07) + max(-sink.tube_hot[6].liquidStream.wl_a[1], 1e-07) + max(-sink.tube_hot[7].liquidStream.wl_a[1], 1e-07) + max(-sink.tube_hot[8].liquidStream.wl_a[1], 1e-07) + max(-sink.tube_hot[9].liquidStream.wl_a[1], 1e-07) + max(-sink.tube_hot[10].liquidStream.wl_a[1], 1e-07) + max(-sink.tube_cold.liquidStream.wl_b[4], 1e-07)) else sink.tube_hot[4].liquidStream.m[1].h) + sink.tube_hot[4].liquidStream.surf.Q_flow[1] - sink.tube_hot[4].liquidStream.wl_a[1] * (if (-sink.tube_hot[4].liquidStream.wl_a[1]) > 0.0 then sink.tube_hot[4].liquidStream.HT[2].m.h else sink.tube_hot[4].liquidStream.m[1].h)
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2197(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2197};
  modelica_boolean tmp12;
  modelica_boolean tmp13;
  tmp12 = Greater(data->localData[0]->realVars[4085] /* sink.tube_hot[4].liquidStream.wl_a[1] DUMMY_STATE */,0.0);
  tmp13 = Greater((-data->localData[0]->realVars[4085] /* sink.tube_hot[4].liquidStream.wl_a[1] DUMMY_STATE */),0.0);
  data->localData[0]->realVars[680] /* der(sink.tube_hot[4].liquidStream.E[1]) DUMMY_DER */ = (data->localData[0]->realVars[4085] /* sink.tube_hot[4].liquidStream.wl_a[1] DUMMY_STATE */) * ((tmp12?DIVISION_SIM((fmax((-data->localData[0]->realVars[4082] /* sink.tube_hot[1].liquidStream.wl_a[1] DUMMY_STATE */),1e-07)) * (data->localData[0]->realVars[191] /* sink.tube_hot[1].liquidStream.m[1].h STATE(1) */) + (fmax((-data->localData[0]->realVars[4083] /* sink.tube_hot[2].liquidStream.wl_a[1] DUMMY_STATE */),1e-07)) * (data->localData[0]->realVars[193] /* sink.tube_hot[2].liquidStream.m[1].h STATE(1) */) + (fmax((-data->localData[0]->realVars[4084] /* sink.tube_hot[3].liquidStream.wl_a[1] DUMMY_STATE */),1e-07)) * (data->localData[0]->realVars[195] /* sink.tube_hot[3].liquidStream.m[1].h STATE(1) */) + (fmax((-data->localData[0]->realVars[4086] /* sink.tube_hot[5].liquidStream.wl_a[1] DUMMY_STATE */),1e-07)) * (data->localData[0]->realVars[199] /* sink.tube_hot[5].liquidStream.m[1].h STATE(1) */) + (fmax((-data->localData[0]->realVars[4087] /* sink.tube_hot[6].liquidStream.wl_a[1] DUMMY_STATE */),1e-07)) * (data->localData[0]->realVars[201] /* sink.tube_hot[6].liquidStream.m[1].h STATE(1) */) + (fmax((-data->localData[0]->realVars[4088] /* sink.tube_hot[7].liquidStream.wl_a[1] DUMMY_STATE */),1e-07)) * (data->localData[0]->realVars[203] /* sink.tube_hot[7].liquidStream.m[1].h STATE(1) */) + (fmax((-data->localData[0]->realVars[4089] /* sink.tube_hot[8].liquidStream.wl_a[1] DUMMY_STATE */),1e-07)) * (data->localData[0]->realVars[205] /* sink.tube_hot[8].liquidStream.m[1].h STATE(1) */) + (fmax((-data->localData[0]->realVars[4090] /* sink.tube_hot[9].liquidStream.wl_a[1] DUMMY_STATE */),1e-07)) * (data->localData[0]->realVars[207] /* sink.tube_hot[9].liquidStream.m[1].h STATE(1) */) + (fmax((-data->localData[0]->realVars[4091] /* sink.tube_hot[10].liquidStream.wl_a[1] DUMMY_STATE */),1e-07)) * (data->localData[0]->realVars[209] /* sink.tube_hot[10].liquidStream.m[1].h STATE(1) */) + (fmax((-data->localData[0]->realVars[1881] /* sink.tube_cold.liquidStream.wl_b[4] DUMMY_STATE */),1e-07)) * (data->localData[0]->realVars[1746] /* sink.pump.hob variable */),fmax((-data->localData[0]->realVars[4082] /* sink.tube_hot[1].liquidStream.wl_a[1] DUMMY_STATE */),1e-07) + fmax((-data->localData[0]->realVars[4083] /* sink.tube_hot[2].liquidStream.wl_a[1] DUMMY_STATE */),1e-07) + fmax((-data->localData[0]->realVars[4084] /* sink.tube_hot[3].liquidStream.wl_a[1] DUMMY_STATE */),1e-07) + fmax((-data->localData[0]->realVars[4086] /* sink.tube_hot[5].liquidStream.wl_a[1] DUMMY_STATE */),1e-07) + fmax((-data->localData[0]->realVars[4087] /* sink.tube_hot[6].liquidStream.wl_a[1] DUMMY_STATE */),1e-07) + fmax((-data->localData[0]->realVars[4088] /* sink.tube_hot[7].liquidStream.wl_a[1] DUMMY_STATE */),1e-07) + fmax((-data->localData[0]->realVars[4089] /* sink.tube_hot[8].liquidStream.wl_a[1] DUMMY_STATE */),1e-07) + fmax((-data->localData[0]->realVars[4090] /* sink.tube_hot[9].liquidStream.wl_a[1] DUMMY_STATE */),1e-07) + fmax((-data->localData[0]->realVars[4091] /* sink.tube_hot[10].liquidStream.wl_a[1] DUMMY_STATE */),1e-07) + fmax((-data->localData[0]->realVars[1881] /* sink.tube_cold.liquidStream.wl_b[4] DUMMY_STATE */),1e-07),"max(-sink.tube_hot[1].liquidStream.wl_a[1], 1e-07) + max(-sink.tube_hot[2].liquidStream.wl_a[1], 1e-07) + max(-sink.tube_hot[3].liquidStream.wl_a[1], 1e-07) + max(-sink.tube_hot[5].liquidStream.wl_a[1], 1e-07) + max(-sink.tube_hot[6].liquidStream.wl_a[1], 1e-07) + max(-sink.tube_hot[7].liquidStream.wl_a[1], 1e-07) + max(-sink.tube_hot[8].liquidStream.wl_a[1], 1e-07) + max(-sink.tube_hot[9].liquidStream.wl_a[1], 1e-07) + max(-sink.tube_hot[10].liquidStream.wl_a[1], 1e-07) + max(-sink.tube_cold.liquidStream.wl_b[4], 1e-07)",equationIndexes):data->localData[0]->realVars[197] /* sink.tube_hot[4].liquidStream.m[1].h STATE(1) */)) + data->localData[0]->realVars[3912] /* sink.tube_hot[4].liquidStream.surf.Q_flow[1] variable */ - ((data->localData[0]->realVars[4085] /* sink.tube_hot[4].liquidStream.wl_a[1] DUMMY_STATE */) * ((tmp13?data->localData[0]->realVars[135] /* sink.tube_hot[4].liquidStream.HT[2].m.h STATE(1) */:data->localData[0]->realVars[197] /* sink.tube_hot[4].liquidStream.m[1].h STATE(1) */)));
  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6934(DATA *data, threadData_t *threadData);

extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6935(DATA *data, threadData_t *threadData);


/*
equation index: 2200
type: SIMPLE_ASSIGN
$DER.sink.tube_hot[4].liquidStream.m[1].h = $DER.sink.tube_hot[4].liquidStream.HT[1].m.e + 0.001 * $DER.sink.tube_hot[4].liquidStream.HT[1].m.p
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2200(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2200};
  data->localData[0]->realVars[508] /* der(sink.tube_hot[4].liquidStream.m[1].h) STATE_DER */ = data->localData[0]->realVars[780] /* der(sink.tube_hot[4].liquidStream.HT[1].m.e) DUMMY_DER */ + (0.001) * (data->localData[0]->realVars[880] /* der(sink.tube_hot[4].liquidStream.HT[1].m.p) DUMMY_DER */);
  TRACE_POP
}

/*
equation index: 2201
type: SIMPLE_ASSIGN
sink.tube_hot[4].wall_1L.T[1] = 2.0 * (sink.tube_hot[4].liquidStream.surf.T[1] * sink.tube_hot[4].wall_1L.G * 0.5 + sink.tube_hot[4].liquidStream.surf.Q_flow[1]) / sink.tube_hot[4].wall_1L.G
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2201(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2201};
  data->localData[0]->realVars[241] /* sink.tube_hot[4].wall_1L.T[1] STATE(1) */ = DIVISION_SIM((2.0) * (((data->localData[0]->realVars[4012] /* sink.tube_hot[4].liquidStream.surf.T[1] variable */) * (data->simulationInfo->realParameter[472] /* sink.tube_hot[4].wall_1L.G PARAM */)) * (0.5) + data->localData[0]->realVars[3912] /* sink.tube_hot[4].liquidStream.surf.Q_flow[1] variable */),data->simulationInfo->realParameter[472] /* sink.tube_hot[4].wall_1L.G PARAM */,"sink.tube_hot[4].wall_1L.G",equationIndexes);
  TRACE_POP
}

/*
equation index: 2202
type: SIMPLE_ASSIGN
sink.tube_hot[3].liquidStream.surf.T[10] = sink.tube_hot[3].liquidStream.TStart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2202(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2202};
  data->localData[0]->realVars[4011] /* sink.tube_hot[3].liquidStream.surf.T[10] variable */ = data->simulationInfo->realParameter[371] /* sink.tube_hot[3].liquidStream.TStart PARAM */;
  TRACE_POP
}

/*
equation index: 2203
type: SIMPLE_ASSIGN
sink.tube_hot[3].liquidStream.surf.Q_flow[10] = sink.tube_hot[3].liquidStream.HT[10].gamma * sink.tube_hot[3].liquidStream.All * (sink.tube_hot[3].liquidStream.surf.T[10] - sink.tube_hot[3].liquidStream.T[10])
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2203(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2203};
  data->localData[0]->realVars[3911] /* sink.tube_hot[3].liquidStream.surf.Q_flow[10] variable */ = (data->localData[0]->realVars[2311] /* sink.tube_hot[3].liquidStream.HT[10].gamma variable */) * ((data->simulationInfo->realParameter[141] /* sink.tube_hot[3].liquidStream.All PARAM */) * (data->localData[0]->realVars[4011] /* sink.tube_hot[3].liquidStream.surf.T[10] variable */ - data->localData[0]->realVars[3311] /* sink.tube_hot[3].liquidStream.T[10] variable */));
  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6984(DATA *data, threadData_t *threadData);

extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6985(DATA *data, threadData_t *threadData);

extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6986(DATA *data, threadData_t *threadData);


/*
equation index: 2207
type: SIMPLE_ASSIGN
$DER.sink.tube_hot[3].liquidStream.m[10].h = $DER.sink.tube_hot[3].liquidStream.HT[10].m.e + 0.001 * $DER.sink.tube_hot[3].liquidStream.HT[10].m.p
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2207(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2207};
  data->localData[0]->realVars[507] /* der(sink.tube_hot[3].liquidStream.m[10].h) STATE_DER */ = data->localData[0]->realVars[779] /* der(sink.tube_hot[3].liquidStream.HT[10].m.e) DUMMY_DER */ + (0.001) * (data->localData[0]->realVars[879] /* der(sink.tube_hot[3].liquidStream.HT[10].m.p) DUMMY_DER */);
  TRACE_POP
}

/*
equation index: 2208
type: SIMPLE_ASSIGN
sink.tube_hot[3].wall_1L.T[10] = 2.0 * (sink.tube_hot[3].liquidStream.surf.T[10] * sink.tube_hot[3].wall_1L.G * 0.5 + sink.tube_hot[3].liquidStream.surf.Q_flow[10]) / sink.tube_hot[3].wall_1L.G
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2208(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2208};
  data->localData[0]->realVars[240] /* sink.tube_hot[3].wall_1L.T[10] STATE(1) */ = DIVISION_SIM((2.0) * (((data->localData[0]->realVars[4011] /* sink.tube_hot[3].liquidStream.surf.T[10] variable */) * (data->simulationInfo->realParameter[471] /* sink.tube_hot[3].wall_1L.G PARAM */)) * (0.5) + data->localData[0]->realVars[3911] /* sink.tube_hot[3].liquidStream.surf.Q_flow[10] variable */),data->simulationInfo->realParameter[471] /* sink.tube_hot[3].wall_1L.G PARAM */,"sink.tube_hot[3].wall_1L.G",equationIndexes);
  TRACE_POP
}

/*
equation index: 2209
type: SIMPLE_ASSIGN
sink.tube_hot[3].liquidStream.surf.T[9] = sink.tube_hot[3].liquidStream.TStart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2209(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2209};
  data->localData[0]->realVars[4010] /* sink.tube_hot[3].liquidStream.surf.T[9] variable */ = data->simulationInfo->realParameter[371] /* sink.tube_hot[3].liquidStream.TStart PARAM */;
  TRACE_POP
}

/*
equation index: 2210
type: SIMPLE_ASSIGN
sink.tube_hot[3].liquidStream.surf.Q_flow[9] = sink.tube_hot[3].liquidStream.HT[9].gamma * sink.tube_hot[3].liquidStream.All * (sink.tube_hot[3].liquidStream.surf.T[9] - sink.tube_hot[3].liquidStream.T[9])
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2210(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2210};
  data->localData[0]->realVars[3910] /* sink.tube_hot[3].liquidStream.surf.Q_flow[9] variable */ = (data->localData[0]->realVars[2310] /* sink.tube_hot[3].liquidStream.HT[9].gamma variable */) * ((data->simulationInfo->realParameter[141] /* sink.tube_hot[3].liquidStream.All PARAM */) * (data->localData[0]->realVars[4010] /* sink.tube_hot[3].liquidStream.surf.T[9] variable */ - data->localData[0]->realVars[3310] /* sink.tube_hot[3].liquidStream.T[9] variable */));
  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6231(DATA *data, threadData_t *threadData);

extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6232(DATA *data, threadData_t *threadData);

extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6233(DATA *data, threadData_t *threadData);


/*
equation index: 2214
type: SIMPLE_ASSIGN
$DER.sink.tube_hot[3].liquidStream.HT[9].m.h = $DER.sink.tube_hot[3].liquidStream.HT[9].m.e + 0.001 * $DER.sink.tube_hot[3].liquidStream.HT[9].m.p
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2214(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2214};
  data->localData[0]->realVars[445] /* der(sink.tube_hot[3].liquidStream.HT[9].m.h) STATE_DER */ = data->localData[0]->realVars[778] /* der(sink.tube_hot[3].liquidStream.HT[9].m.e) DUMMY_DER */ + (0.001) * (data->localData[0]->realVars[878] /* der(sink.tube_hot[3].liquidStream.HT[9].m.p) DUMMY_DER */);
  TRACE_POP
}

/*
equation index: 2215
type: SIMPLE_ASSIGN
sink.tube_hot[3].wall_1L.T[9] = 2.0 * (sink.tube_hot[3].liquidStream.surf.T[9] * sink.tube_hot[3].wall_1L.G * 0.5 + sink.tube_hot[3].liquidStream.surf.Q_flow[9]) / sink.tube_hot[3].wall_1L.G
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2215(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2215};
  data->localData[0]->realVars[239] /* sink.tube_hot[3].wall_1L.T[9] STATE(1) */ = DIVISION_SIM((2.0) * (((data->localData[0]->realVars[4010] /* sink.tube_hot[3].liquidStream.surf.T[9] variable */) * (data->simulationInfo->realParameter[471] /* sink.tube_hot[3].wall_1L.G PARAM */)) * (0.5) + data->localData[0]->realVars[3910] /* sink.tube_hot[3].liquidStream.surf.Q_flow[9] variable */),data->simulationInfo->realParameter[471] /* sink.tube_hot[3].wall_1L.G PARAM */,"sink.tube_hot[3].wall_1L.G",equationIndexes);
  TRACE_POP
}

/*
equation index: 2216
type: SIMPLE_ASSIGN
sink.tube_hot[3].liquidStream.surf.T[8] = sink.tube_hot[3].liquidStream.TStart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2216(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2216};
  data->localData[0]->realVars[4009] /* sink.tube_hot[3].liquidStream.surf.T[8] variable */ = data->simulationInfo->realParameter[371] /* sink.tube_hot[3].liquidStream.TStart PARAM */;
  TRACE_POP
}

/*
equation index: 2217
type: SIMPLE_ASSIGN
sink.tube_hot[3].liquidStream.surf.Q_flow[8] = sink.tube_hot[3].liquidStream.HT[8].gamma * sink.tube_hot[3].liquidStream.All * (sink.tube_hot[3].liquidStream.surf.T[8] - sink.tube_hot[3].liquidStream.T[8])
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2217(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2217};
  data->localData[0]->realVars[3909] /* sink.tube_hot[3].liquidStream.surf.Q_flow[8] variable */ = (data->localData[0]->realVars[2309] /* sink.tube_hot[3].liquidStream.HT[8].gamma variable */) * ((data->simulationInfo->realParameter[141] /* sink.tube_hot[3].liquidStream.All PARAM */) * (data->localData[0]->realVars[4009] /* sink.tube_hot[3].liquidStream.surf.T[8] variable */ - data->localData[0]->realVars[3309] /* sink.tube_hot[3].liquidStream.T[8] variable */));
  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6234(DATA *data, threadData_t *threadData);

extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6235(DATA *data, threadData_t *threadData);

extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6236(DATA *data, threadData_t *threadData);


/*
equation index: 2221
type: SIMPLE_ASSIGN
$DER.sink.tube_hot[3].liquidStream.HT[8].m.h = $DER.sink.tube_hot[3].liquidStream.HT[8].m.e + 0.001 * $DER.sink.tube_hot[3].liquidStream.HT[8].m.p
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2221(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2221};
  data->localData[0]->realVars[444] /* der(sink.tube_hot[3].liquidStream.HT[8].m.h) STATE_DER */ = data->localData[0]->realVars[777] /* der(sink.tube_hot[3].liquidStream.HT[8].m.e) DUMMY_DER */ + (0.001) * (data->localData[0]->realVars[877] /* der(sink.tube_hot[3].liquidStream.HT[8].m.p) DUMMY_DER */);
  TRACE_POP
}

/*
equation index: 2222
type: SIMPLE_ASSIGN
sink.tube_hot[3].wall_1L.T[8] = 2.0 * (sink.tube_hot[3].liquidStream.surf.T[8] * sink.tube_hot[3].wall_1L.G * 0.5 + sink.tube_hot[3].liquidStream.surf.Q_flow[8]) / sink.tube_hot[3].wall_1L.G
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2222(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2222};
  data->localData[0]->realVars[238] /* sink.tube_hot[3].wall_1L.T[8] STATE(1) */ = DIVISION_SIM((2.0) * (((data->localData[0]->realVars[4009] /* sink.tube_hot[3].liquidStream.surf.T[8] variable */) * (data->simulationInfo->realParameter[471] /* sink.tube_hot[3].wall_1L.G PARAM */)) * (0.5) + data->localData[0]->realVars[3909] /* sink.tube_hot[3].liquidStream.surf.Q_flow[8] variable */),data->simulationInfo->realParameter[471] /* sink.tube_hot[3].wall_1L.G PARAM */,"sink.tube_hot[3].wall_1L.G",equationIndexes);
  TRACE_POP
}

/*
equation index: 2223
type: SIMPLE_ASSIGN
sink.tube_hot[3].liquidStream.surf.T[7] = sink.tube_hot[3].liquidStream.TStart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2223(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2223};
  data->localData[0]->realVars[4008] /* sink.tube_hot[3].liquidStream.surf.T[7] variable */ = data->simulationInfo->realParameter[371] /* sink.tube_hot[3].liquidStream.TStart PARAM */;
  TRACE_POP
}

/*
equation index: 2224
type: SIMPLE_ASSIGN
sink.tube_hot[3].liquidStream.surf.Q_flow[7] = sink.tube_hot[3].liquidStream.HT[7].gamma * sink.tube_hot[3].liquidStream.All * (sink.tube_hot[3].liquidStream.surf.T[7] - sink.tube_hot[3].liquidStream.T[7])
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2224(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2224};
  data->localData[0]->realVars[3908] /* sink.tube_hot[3].liquidStream.surf.Q_flow[7] variable */ = (data->localData[0]->realVars[2308] /* sink.tube_hot[3].liquidStream.HT[7].gamma variable */) * ((data->simulationInfo->realParameter[141] /* sink.tube_hot[3].liquidStream.All PARAM */) * (data->localData[0]->realVars[4008] /* sink.tube_hot[3].liquidStream.surf.T[7] variable */ - data->localData[0]->realVars[3308] /* sink.tube_hot[3].liquidStream.T[7] variable */));
  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6237(DATA *data, threadData_t *threadData);

extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6238(DATA *data, threadData_t *threadData);

extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6239(DATA *data, threadData_t *threadData);


/*
equation index: 2228
type: SIMPLE_ASSIGN
$DER.sink.tube_hot[3].liquidStream.HT[7].m.h = $DER.sink.tube_hot[3].liquidStream.HT[7].m.e + 0.001 * $DER.sink.tube_hot[3].liquidStream.HT[7].m.p
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2228(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2228};
  data->localData[0]->realVars[443] /* der(sink.tube_hot[3].liquidStream.HT[7].m.h) STATE_DER */ = data->localData[0]->realVars[776] /* der(sink.tube_hot[3].liquidStream.HT[7].m.e) DUMMY_DER */ + (0.001) * (data->localData[0]->realVars[876] /* der(sink.tube_hot[3].liquidStream.HT[7].m.p) DUMMY_DER */);
  TRACE_POP
}

/*
equation index: 2229
type: SIMPLE_ASSIGN
sink.tube_hot[3].wall_1L.T[7] = 2.0 * (sink.tube_hot[3].liquidStream.surf.T[7] * sink.tube_hot[3].wall_1L.G * 0.5 + sink.tube_hot[3].liquidStream.surf.Q_flow[7]) / sink.tube_hot[3].wall_1L.G
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2229(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2229};
  data->localData[0]->realVars[237] /* sink.tube_hot[3].wall_1L.T[7] STATE(1) */ = DIVISION_SIM((2.0) * (((data->localData[0]->realVars[4008] /* sink.tube_hot[3].liquidStream.surf.T[7] variable */) * (data->simulationInfo->realParameter[471] /* sink.tube_hot[3].wall_1L.G PARAM */)) * (0.5) + data->localData[0]->realVars[3908] /* sink.tube_hot[3].liquidStream.surf.Q_flow[7] variable */),data->simulationInfo->realParameter[471] /* sink.tube_hot[3].wall_1L.G PARAM */,"sink.tube_hot[3].wall_1L.G",equationIndexes);
  TRACE_POP
}

/*
equation index: 2230
type: SIMPLE_ASSIGN
sink.tube_hot[3].liquidStream.surf.T[6] = sink.tube_hot[3].liquidStream.TStart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2230(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2230};
  data->localData[0]->realVars[4007] /* sink.tube_hot[3].liquidStream.surf.T[6] variable */ = data->simulationInfo->realParameter[371] /* sink.tube_hot[3].liquidStream.TStart PARAM */;
  TRACE_POP
}

/*
equation index: 2231
type: SIMPLE_ASSIGN
sink.tube_hot[3].liquidStream.surf.Q_flow[6] = sink.tube_hot[3].liquidStream.HT[6].gamma * sink.tube_hot[3].liquidStream.All * (sink.tube_hot[3].liquidStream.surf.T[6] - sink.tube_hot[3].liquidStream.T[6])
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2231(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2231};
  data->localData[0]->realVars[3907] /* sink.tube_hot[3].liquidStream.surf.Q_flow[6] variable */ = (data->localData[0]->realVars[2307] /* sink.tube_hot[3].liquidStream.HT[6].gamma variable */) * ((data->simulationInfo->realParameter[141] /* sink.tube_hot[3].liquidStream.All PARAM */) * (data->localData[0]->realVars[4007] /* sink.tube_hot[3].liquidStream.surf.T[6] variable */ - data->localData[0]->realVars[3307] /* sink.tube_hot[3].liquidStream.T[6] variable */));
  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6240(DATA *data, threadData_t *threadData);

extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6241(DATA *data, threadData_t *threadData);

extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6242(DATA *data, threadData_t *threadData);


/*
equation index: 2235
type: SIMPLE_ASSIGN
$DER.sink.tube_hot[3].liquidStream.HT[6].m.h = $DER.sink.tube_hot[3].liquidStream.HT[6].m.e + 0.001 * $DER.sink.tube_hot[3].liquidStream.HT[6].m.p
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2235(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2235};
  data->localData[0]->realVars[442] /* der(sink.tube_hot[3].liquidStream.HT[6].m.h) STATE_DER */ = data->localData[0]->realVars[775] /* der(sink.tube_hot[3].liquidStream.HT[6].m.e) DUMMY_DER */ + (0.001) * (data->localData[0]->realVars[875] /* der(sink.tube_hot[3].liquidStream.HT[6].m.p) DUMMY_DER */);
  TRACE_POP
}

/*
equation index: 2236
type: SIMPLE_ASSIGN
sink.tube_hot[3].wall_1L.T[6] = 2.0 * (sink.tube_hot[3].liquidStream.surf.T[6] * sink.tube_hot[3].wall_1L.G * 0.5 + sink.tube_hot[3].liquidStream.surf.Q_flow[6]) / sink.tube_hot[3].wall_1L.G
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2236(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2236};
  data->localData[0]->realVars[236] /* sink.tube_hot[3].wall_1L.T[6] STATE(1) */ = DIVISION_SIM((2.0) * (((data->localData[0]->realVars[4007] /* sink.tube_hot[3].liquidStream.surf.T[6] variable */) * (data->simulationInfo->realParameter[471] /* sink.tube_hot[3].wall_1L.G PARAM */)) * (0.5) + data->localData[0]->realVars[3907] /* sink.tube_hot[3].liquidStream.surf.Q_flow[6] variable */),data->simulationInfo->realParameter[471] /* sink.tube_hot[3].wall_1L.G PARAM */,"sink.tube_hot[3].wall_1L.G",equationIndexes);
  TRACE_POP
}

/*
equation index: 2237
type: SIMPLE_ASSIGN
sink.tube_hot[3].liquidStream.surf.T[5] = sink.tube_hot[3].liquidStream.TStart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2237(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2237};
  data->localData[0]->realVars[4006] /* sink.tube_hot[3].liquidStream.surf.T[5] variable */ = data->simulationInfo->realParameter[371] /* sink.tube_hot[3].liquidStream.TStart PARAM */;
  TRACE_POP
}

/*
equation index: 2238
type: SIMPLE_ASSIGN
sink.tube_hot[3].liquidStream.surf.Q_flow[5] = sink.tube_hot[3].liquidStream.HT[5].gamma * sink.tube_hot[3].liquidStream.All * (sink.tube_hot[3].liquidStream.surf.T[5] - sink.tube_hot[3].liquidStream.T[5])
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2238(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2238};
  data->localData[0]->realVars[3906] /* sink.tube_hot[3].liquidStream.surf.Q_flow[5] variable */ = (data->localData[0]->realVars[2306] /* sink.tube_hot[3].liquidStream.HT[5].gamma variable */) * ((data->simulationInfo->realParameter[141] /* sink.tube_hot[3].liquidStream.All PARAM */) * (data->localData[0]->realVars[4006] /* sink.tube_hot[3].liquidStream.surf.T[5] variable */ - data->localData[0]->realVars[3306] /* sink.tube_hot[3].liquidStream.T[5] variable */));
  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6243(DATA *data, threadData_t *threadData);

extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6244(DATA *data, threadData_t *threadData);

extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6245(DATA *data, threadData_t *threadData);


/*
equation index: 2242
type: SIMPLE_ASSIGN
$DER.sink.tube_hot[3].liquidStream.HT[5].m.h = $DER.sink.tube_hot[3].liquidStream.HT[5].m.e + 0.001 * $DER.sink.tube_hot[3].liquidStream.HT[5].m.p
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2242(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2242};
  data->localData[0]->realVars[441] /* der(sink.tube_hot[3].liquidStream.HT[5].m.h) STATE_DER */ = data->localData[0]->realVars[774] /* der(sink.tube_hot[3].liquidStream.HT[5].m.e) DUMMY_DER */ + (0.001) * (data->localData[0]->realVars[874] /* der(sink.tube_hot[3].liquidStream.HT[5].m.p) DUMMY_DER */);
  TRACE_POP
}

/*
equation index: 2243
type: SIMPLE_ASSIGN
sink.tube_hot[3].wall_1L.T[5] = 2.0 * (sink.tube_hot[3].liquidStream.surf.T[5] * sink.tube_hot[3].wall_1L.G * 0.5 + sink.tube_hot[3].liquidStream.surf.Q_flow[5]) / sink.tube_hot[3].wall_1L.G
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2243(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2243};
  data->localData[0]->realVars[235] /* sink.tube_hot[3].wall_1L.T[5] STATE(1) */ = DIVISION_SIM((2.0) * (((data->localData[0]->realVars[4006] /* sink.tube_hot[3].liquidStream.surf.T[5] variable */) * (data->simulationInfo->realParameter[471] /* sink.tube_hot[3].wall_1L.G PARAM */)) * (0.5) + data->localData[0]->realVars[3906] /* sink.tube_hot[3].liquidStream.surf.Q_flow[5] variable */),data->simulationInfo->realParameter[471] /* sink.tube_hot[3].wall_1L.G PARAM */,"sink.tube_hot[3].wall_1L.G",equationIndexes);
  TRACE_POP
}

/*
equation index: 2244
type: SIMPLE_ASSIGN
sink.tube_hot[3].liquidStream.surf.T[4] = sink.tube_hot[3].liquidStream.TStart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2244(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2244};
  data->localData[0]->realVars[4005] /* sink.tube_hot[3].liquidStream.surf.T[4] variable */ = data->simulationInfo->realParameter[371] /* sink.tube_hot[3].liquidStream.TStart PARAM */;
  TRACE_POP
}

/*
equation index: 2245
type: SIMPLE_ASSIGN
sink.tube_hot[3].liquidStream.surf.Q_flow[4] = sink.tube_hot[3].liquidStream.HT[4].gamma * sink.tube_hot[3].liquidStream.All * (sink.tube_hot[3].liquidStream.surf.T[4] - sink.tube_hot[3].liquidStream.T[4])
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2245(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2245};
  data->localData[0]->realVars[3905] /* sink.tube_hot[3].liquidStream.surf.Q_flow[4] variable */ = (data->localData[0]->realVars[2305] /* sink.tube_hot[3].liquidStream.HT[4].gamma variable */) * ((data->simulationInfo->realParameter[141] /* sink.tube_hot[3].liquidStream.All PARAM */) * (data->localData[0]->realVars[4005] /* sink.tube_hot[3].liquidStream.surf.T[4] variable */ - data->localData[0]->realVars[3305] /* sink.tube_hot[3].liquidStream.T[4] variable */));
  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6246(DATA *data, threadData_t *threadData);

extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6247(DATA *data, threadData_t *threadData);

extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6248(DATA *data, threadData_t *threadData);


/*
equation index: 2249
type: SIMPLE_ASSIGN
$DER.sink.tube_hot[3].liquidStream.HT[4].m.h = $DER.sink.tube_hot[3].liquidStream.HT[4].m.e + 0.001 * $DER.sink.tube_hot[3].liquidStream.HT[4].m.p
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2249(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2249};
  data->localData[0]->realVars[440] /* der(sink.tube_hot[3].liquidStream.HT[4].m.h) STATE_DER */ = data->localData[0]->realVars[773] /* der(sink.tube_hot[3].liquidStream.HT[4].m.e) DUMMY_DER */ + (0.001) * (data->localData[0]->realVars[873] /* der(sink.tube_hot[3].liquidStream.HT[4].m.p) DUMMY_DER */);
  TRACE_POP
}

/*
equation index: 2250
type: SIMPLE_ASSIGN
sink.tube_hot[3].wall_1L.T[4] = 2.0 * (sink.tube_hot[3].liquidStream.surf.T[4] * sink.tube_hot[3].wall_1L.G * 0.5 + sink.tube_hot[3].liquidStream.surf.Q_flow[4]) / sink.tube_hot[3].wall_1L.G
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2250(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2250};
  data->localData[0]->realVars[234] /* sink.tube_hot[3].wall_1L.T[4] STATE(1) */ = DIVISION_SIM((2.0) * (((data->localData[0]->realVars[4005] /* sink.tube_hot[3].liquidStream.surf.T[4] variable */) * (data->simulationInfo->realParameter[471] /* sink.tube_hot[3].wall_1L.G PARAM */)) * (0.5) + data->localData[0]->realVars[3905] /* sink.tube_hot[3].liquidStream.surf.Q_flow[4] variable */),data->simulationInfo->realParameter[471] /* sink.tube_hot[3].wall_1L.G PARAM */,"sink.tube_hot[3].wall_1L.G",equationIndexes);
  TRACE_POP
}

/*
equation index: 2251
type: SIMPLE_ASSIGN
sink.tube_hot[3].liquidStream.surf.T[3] = sink.tube_hot[3].liquidStream.TStart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2251(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2251};
  data->localData[0]->realVars[4004] /* sink.tube_hot[3].liquidStream.surf.T[3] variable */ = data->simulationInfo->realParameter[371] /* sink.tube_hot[3].liquidStream.TStart PARAM */;
  TRACE_POP
}

/*
equation index: 2252
type: SIMPLE_ASSIGN
sink.tube_hot[3].liquidStream.surf.Q_flow[3] = sink.tube_hot[3].liquidStream.HT[3].gamma * sink.tube_hot[3].liquidStream.All * (sink.tube_hot[3].liquidStream.surf.T[3] - sink.tube_hot[3].liquidStream.T[3])
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2252(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2252};
  data->localData[0]->realVars[3904] /* sink.tube_hot[3].liquidStream.surf.Q_flow[3] variable */ = (data->localData[0]->realVars[2304] /* sink.tube_hot[3].liquidStream.HT[3].gamma variable */) * ((data->simulationInfo->realParameter[141] /* sink.tube_hot[3].liquidStream.All PARAM */) * (data->localData[0]->realVars[4004] /* sink.tube_hot[3].liquidStream.surf.T[3] variable */ - data->localData[0]->realVars[3304] /* sink.tube_hot[3].liquidStream.T[3] variable */));
  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6249(DATA *data, threadData_t *threadData);

extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6250(DATA *data, threadData_t *threadData);

extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6251(DATA *data, threadData_t *threadData);


/*
equation index: 2256
type: SIMPLE_ASSIGN
$DER.sink.tube_hot[3].liquidStream.HT[3].m.h = $DER.sink.tube_hot[3].liquidStream.HT[3].m.e + 0.001 * $DER.sink.tube_hot[3].liquidStream.HT[3].m.p
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2256(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2256};
  data->localData[0]->realVars[439] /* der(sink.tube_hot[3].liquidStream.HT[3].m.h) STATE_DER */ = data->localData[0]->realVars[772] /* der(sink.tube_hot[3].liquidStream.HT[3].m.e) DUMMY_DER */ + (0.001) * (data->localData[0]->realVars[872] /* der(sink.tube_hot[3].liquidStream.HT[3].m.p) DUMMY_DER */);
  TRACE_POP
}

/*
equation index: 2257
type: SIMPLE_ASSIGN
sink.tube_hot[3].wall_1L.T[3] = 2.0 * (sink.tube_hot[3].liquidStream.surf.T[3] * sink.tube_hot[3].wall_1L.G * 0.5 + sink.tube_hot[3].liquidStream.surf.Q_flow[3]) / sink.tube_hot[3].wall_1L.G
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2257(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2257};
  data->localData[0]->realVars[233] /* sink.tube_hot[3].wall_1L.T[3] STATE(1) */ = DIVISION_SIM((2.0) * (((data->localData[0]->realVars[4004] /* sink.tube_hot[3].liquidStream.surf.T[3] variable */) * (data->simulationInfo->realParameter[471] /* sink.tube_hot[3].wall_1L.G PARAM */)) * (0.5) + data->localData[0]->realVars[3904] /* sink.tube_hot[3].liquidStream.surf.Q_flow[3] variable */),data->simulationInfo->realParameter[471] /* sink.tube_hot[3].wall_1L.G PARAM */,"sink.tube_hot[3].wall_1L.G",equationIndexes);
  TRACE_POP
}

/*
equation index: 2258
type: SIMPLE_ASSIGN
sink.tube_hot[3].liquidStream.surf.T[2] = sink.tube_hot[3].liquidStream.TStart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2258(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2258};
  data->localData[0]->realVars[4003] /* sink.tube_hot[3].liquidStream.surf.T[2] variable */ = data->simulationInfo->realParameter[371] /* sink.tube_hot[3].liquidStream.TStart PARAM */;
  TRACE_POP
}

/*
equation index: 2259
type: SIMPLE_ASSIGN
sink.tube_hot[3].liquidStream.surf.Q_flow[2] = sink.tube_hot[3].liquidStream.HT[2].gamma * sink.tube_hot[3].liquidStream.All * (sink.tube_hot[3].liquidStream.surf.T[2] - sink.tube_hot[3].liquidStream.T[2])
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2259(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2259};
  data->localData[0]->realVars[3903] /* sink.tube_hot[3].liquidStream.surf.Q_flow[2] variable */ = (data->localData[0]->realVars[2303] /* sink.tube_hot[3].liquidStream.HT[2].gamma variable */) * ((data->simulationInfo->realParameter[141] /* sink.tube_hot[3].liquidStream.All PARAM */) * (data->localData[0]->realVars[4003] /* sink.tube_hot[3].liquidStream.surf.T[2] variable */ - data->localData[0]->realVars[3303] /* sink.tube_hot[3].liquidStream.T[2] variable */));
  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6252(DATA *data, threadData_t *threadData);

extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6253(DATA *data, threadData_t *threadData);

extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6254(DATA *data, threadData_t *threadData);


/*
equation index: 2263
type: SIMPLE_ASSIGN
$DER.sink.tube_hot[3].liquidStream.HT[2].m.h = $DER.sink.tube_hot[3].liquidStream.HT[2].m.e + 0.001 * $DER.sink.tube_hot[3].liquidStream.HT[2].m.p
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2263(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2263};
  data->localData[0]->realVars[438] /* der(sink.tube_hot[3].liquidStream.HT[2].m.h) STATE_DER */ = data->localData[0]->realVars[771] /* der(sink.tube_hot[3].liquidStream.HT[2].m.e) DUMMY_DER */ + (0.001) * (data->localData[0]->realVars[871] /* der(sink.tube_hot[3].liquidStream.HT[2].m.p) DUMMY_DER */);
  TRACE_POP
}

/*
equation index: 2264
type: SIMPLE_ASSIGN
sink.tube_hot[3].wall_1L.T[2] = 2.0 * (sink.tube_hot[3].liquidStream.surf.T[2] * sink.tube_hot[3].wall_1L.G * 0.5 + sink.tube_hot[3].liquidStream.surf.Q_flow[2]) / sink.tube_hot[3].wall_1L.G
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2264(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2264};
  data->localData[0]->realVars[232] /* sink.tube_hot[3].wall_1L.T[2] STATE(1) */ = DIVISION_SIM((2.0) * (((data->localData[0]->realVars[4003] /* sink.tube_hot[3].liquidStream.surf.T[2] variable */) * (data->simulationInfo->realParameter[471] /* sink.tube_hot[3].wall_1L.G PARAM */)) * (0.5) + data->localData[0]->realVars[3903] /* sink.tube_hot[3].liquidStream.surf.Q_flow[2] variable */),data->simulationInfo->realParameter[471] /* sink.tube_hot[3].wall_1L.G PARAM */,"sink.tube_hot[3].wall_1L.G",equationIndexes);
  TRACE_POP
}

/*
equation index: 2265
type: SIMPLE_ASSIGN
sink.tube_hot[3].liquidStream.surf.T[1] = sink.tube_hot[3].liquidStream.TStart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2265(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2265};
  data->localData[0]->realVars[4002] /* sink.tube_hot[3].liquidStream.surf.T[1] variable */ = data->simulationInfo->realParameter[371] /* sink.tube_hot[3].liquidStream.TStart PARAM */;
  TRACE_POP
}

/*
equation index: 2266
type: SIMPLE_ASSIGN
sink.tube_hot[3].liquidStream.surf.Q_flow[1] = sink.tube_hot[3].liquidStream.HT[1].gamma * sink.tube_hot[3].liquidStream.All * (sink.tube_hot[3].liquidStream.surf.T[1] - sink.tube_hot[3].liquidStream.T[1])
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2266(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2266};
  data->localData[0]->realVars[3902] /* sink.tube_hot[3].liquidStream.surf.Q_flow[1] variable */ = (data->localData[0]->realVars[2302] /* sink.tube_hot[3].liquidStream.HT[1].gamma variable */) * ((data->simulationInfo->realParameter[141] /* sink.tube_hot[3].liquidStream.All PARAM */) * (data->localData[0]->realVars[4002] /* sink.tube_hot[3].liquidStream.surf.T[1] variable */ - data->localData[0]->realVars[3302] /* sink.tube_hot[3].liquidStream.T[1] variable */));
  TRACE_POP
}

/*
equation index: 2267
type: SIMPLE_ASSIGN
$DER.sink.tube_hot[3].liquidStream.E[1] = sink.tube_hot[3].liquidStream.wl_a[1] * (if sink.tube_hot[3].liquidStream.wl_a[1] > 0.0 then (max(-sink.tube_hot[1].liquidStream.wl_a[1], 1e-07) * sink.tube_hot[1].liquidStream.m[1].h + max(-sink.tube_hot[2].liquidStream.wl_a[1], 1e-07) * sink.tube_hot[2].liquidStream.m[1].h + max(-sink.tube_hot[4].liquidStream.wl_a[1], 1e-07) * sink.tube_hot[4].liquidStream.m[1].h + max(-sink.tube_hot[5].liquidStream.wl_a[1], 1e-07) * sink.tube_hot[5].liquidStream.m[1].h + max(-sink.tube_hot[6].liquidStream.wl_a[1], 1e-07) * sink.tube_hot[6].liquidStream.m[1].h + max(-sink.tube_hot[7].liquidStream.wl_a[1], 1e-07) * sink.tube_hot[7].liquidStream.m[1].h + max(-sink.tube_hot[8].liquidStream.wl_a[1], 1e-07) * sink.tube_hot[8].liquidStream.m[1].h + max(-sink.tube_hot[9].liquidStream.wl_a[1], 1e-07) * sink.tube_hot[9].liquidStream.m[1].h + max(-sink.tube_hot[10].liquidStream.wl_a[1], 1e-07) * sink.tube_hot[10].liquidStream.m[1].h + max(-sink.tube_cold.liquidStream.wl_b[4], 1e-07) * sink.pump.hob) / (max(-sink.tube_hot[1].liquidStream.wl_a[1], 1e-07) + max(-sink.tube_hot[2].liquidStream.wl_a[1], 1e-07) + max(-sink.tube_hot[4].liquidStream.wl_a[1], 1e-07) + max(-sink.tube_hot[5].liquidStream.wl_a[1], 1e-07) + max(-sink.tube_hot[6].liquidStream.wl_a[1], 1e-07) + max(-sink.tube_hot[7].liquidStream.wl_a[1], 1e-07) + max(-sink.tube_hot[8].liquidStream.wl_a[1], 1e-07) + max(-sink.tube_hot[9].liquidStream.wl_a[1], 1e-07) + max(-sink.tube_hot[10].liquidStream.wl_a[1], 1e-07) + max(-sink.tube_cold.liquidStream.wl_b[4], 1e-07)) else sink.tube_hot[3].liquidStream.m[1].h) + sink.tube_hot[3].liquidStream.surf.Q_flow[1] - sink.tube_hot[3].liquidStream.wl_a[1] * (if (-sink.tube_hot[3].liquidStream.wl_a[1]) > 0.0 then sink.tube_hot[3].liquidStream.HT[2].m.h else sink.tube_hot[3].liquidStream.m[1].h)
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2267(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2267};
  modelica_boolean tmp14;
  modelica_boolean tmp15;
  tmp14 = Greater(data->localData[0]->realVars[4084] /* sink.tube_hot[3].liquidStream.wl_a[1] DUMMY_STATE */,0.0);
  tmp15 = Greater((-data->localData[0]->realVars[4084] /* sink.tube_hot[3].liquidStream.wl_a[1] DUMMY_STATE */),0.0);
  data->localData[0]->realVars[670] /* der(sink.tube_hot[3].liquidStream.E[1]) DUMMY_DER */ = (data->localData[0]->realVars[4084] /* sink.tube_hot[3].liquidStream.wl_a[1] DUMMY_STATE */) * ((tmp14?DIVISION_SIM((fmax((-data->localData[0]->realVars[4082] /* sink.tube_hot[1].liquidStream.wl_a[1] DUMMY_STATE */),1e-07)) * (data->localData[0]->realVars[191] /* sink.tube_hot[1].liquidStream.m[1].h STATE(1) */) + (fmax((-data->localData[0]->realVars[4083] /* sink.tube_hot[2].liquidStream.wl_a[1] DUMMY_STATE */),1e-07)) * (data->localData[0]->realVars[193] /* sink.tube_hot[2].liquidStream.m[1].h STATE(1) */) + (fmax((-data->localData[0]->realVars[4085] /* sink.tube_hot[4].liquidStream.wl_a[1] DUMMY_STATE */),1e-07)) * (data->localData[0]->realVars[197] /* sink.tube_hot[4].liquidStream.m[1].h STATE(1) */) + (fmax((-data->localData[0]->realVars[4086] /* sink.tube_hot[5].liquidStream.wl_a[1] DUMMY_STATE */),1e-07)) * (data->localData[0]->realVars[199] /* sink.tube_hot[5].liquidStream.m[1].h STATE(1) */) + (fmax((-data->localData[0]->realVars[4087] /* sink.tube_hot[6].liquidStream.wl_a[1] DUMMY_STATE */),1e-07)) * (data->localData[0]->realVars[201] /* sink.tube_hot[6].liquidStream.m[1].h STATE(1) */) + (fmax((-data->localData[0]->realVars[4088] /* sink.tube_hot[7].liquidStream.wl_a[1] DUMMY_STATE */),1e-07)) * (data->localData[0]->realVars[203] /* sink.tube_hot[7].liquidStream.m[1].h STATE(1) */) + (fmax((-data->localData[0]->realVars[4089] /* sink.tube_hot[8].liquidStream.wl_a[1] DUMMY_STATE */),1e-07)) * (data->localData[0]->realVars[205] /* sink.tube_hot[8].liquidStream.m[1].h STATE(1) */) + (fmax((-data->localData[0]->realVars[4090] /* sink.tube_hot[9].liquidStream.wl_a[1] DUMMY_STATE */),1e-07)) * (data->localData[0]->realVars[207] /* sink.tube_hot[9].liquidStream.m[1].h STATE(1) */) + (fmax((-data->localData[0]->realVars[4091] /* sink.tube_hot[10].liquidStream.wl_a[1] DUMMY_STATE */),1e-07)) * (data->localData[0]->realVars[209] /* sink.tube_hot[10].liquidStream.m[1].h STATE(1) */) + (fmax((-data->localData[0]->realVars[1881] /* sink.tube_cold.liquidStream.wl_b[4] DUMMY_STATE */),1e-07)) * (data->localData[0]->realVars[1746] /* sink.pump.hob variable */),fmax((-data->localData[0]->realVars[4082] /* sink.tube_hot[1].liquidStream.wl_a[1] DUMMY_STATE */),1e-07) + fmax((-data->localData[0]->realVars[4083] /* sink.tube_hot[2].liquidStream.wl_a[1] DUMMY_STATE */),1e-07) + fmax((-data->localData[0]->realVars[4085] /* sink.tube_hot[4].liquidStream.wl_a[1] DUMMY_STATE */),1e-07) + fmax((-data->localData[0]->realVars[4086] /* sink.tube_hot[5].liquidStream.wl_a[1] DUMMY_STATE */),1e-07) + fmax((-data->localData[0]->realVars[4087] /* sink.tube_hot[6].liquidStream.wl_a[1] DUMMY_STATE */),1e-07) + fmax((-data->localData[0]->realVars[4088] /* sink.tube_hot[7].liquidStream.wl_a[1] DUMMY_STATE */),1e-07) + fmax((-data->localData[0]->realVars[4089] /* sink.tube_hot[8].liquidStream.wl_a[1] DUMMY_STATE */),1e-07) + fmax((-data->localData[0]->realVars[4090] /* sink.tube_hot[9].liquidStream.wl_a[1] DUMMY_STATE */),1e-07) + fmax((-data->localData[0]->realVars[4091] /* sink.tube_hot[10].liquidStream.wl_a[1] DUMMY_STATE */),1e-07) + fmax((-data->localData[0]->realVars[1881] /* sink.tube_cold.liquidStream.wl_b[4] DUMMY_STATE */),1e-07),"max(-sink.tube_hot[1].liquidStream.wl_a[1], 1e-07) + max(-sink.tube_hot[2].liquidStream.wl_a[1], 1e-07) + max(-sink.tube_hot[4].liquidStream.wl_a[1], 1e-07) + max(-sink.tube_hot[5].liquidStream.wl_a[1], 1e-07) + max(-sink.tube_hot[6].liquidStream.wl_a[1], 1e-07) + max(-sink.tube_hot[7].liquidStream.wl_a[1], 1e-07) + max(-sink.tube_hot[8].liquidStream.wl_a[1], 1e-07) + max(-sink.tube_hot[9].liquidStream.wl_a[1], 1e-07) + max(-sink.tube_hot[10].liquidStream.wl_a[1], 1e-07) + max(-sink.tube_cold.liquidStream.wl_b[4], 1e-07)",equationIndexes):data->localData[0]->realVars[195] /* sink.tube_hot[3].liquidStream.m[1].h STATE(1) */)) + data->localData[0]->realVars[3902] /* sink.tube_hot[3].liquidStream.surf.Q_flow[1] variable */ - ((data->localData[0]->realVars[4084] /* sink.tube_hot[3].liquidStream.wl_a[1] DUMMY_STATE */) * ((tmp15?data->localData[0]->realVars[127] /* sink.tube_hot[3].liquidStream.HT[2].m.h STATE(1) */:data->localData[0]->realVars[195] /* sink.tube_hot[3].liquidStream.m[1].h STATE(1) */)));
  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6937(DATA *data, threadData_t *threadData);

extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6938(DATA *data, threadData_t *threadData);


/*
equation index: 2270
type: SIMPLE_ASSIGN
$DER.sink.tube_hot[3].liquidStream.m[1].h = $DER.sink.tube_hot[3].liquidStream.HT[1].m.e + 0.001 * $DER.sink.tube_hot[3].liquidStream.HT[1].m.p
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2270(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2270};
  data->localData[0]->realVars[506] /* der(sink.tube_hot[3].liquidStream.m[1].h) STATE_DER */ = data->localData[0]->realVars[770] /* der(sink.tube_hot[3].liquidStream.HT[1].m.e) DUMMY_DER */ + (0.001) * (data->localData[0]->realVars[870] /* der(sink.tube_hot[3].liquidStream.HT[1].m.p) DUMMY_DER */);
  TRACE_POP
}

/*
equation index: 2271
type: SIMPLE_ASSIGN
sink.tube_hot[3].wall_1L.T[1] = 2.0 * (sink.tube_hot[3].liquidStream.surf.T[1] * sink.tube_hot[3].wall_1L.G * 0.5 + sink.tube_hot[3].liquidStream.surf.Q_flow[1]) / sink.tube_hot[3].wall_1L.G
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2271(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2271};
  data->localData[0]->realVars[231] /* sink.tube_hot[3].wall_1L.T[1] STATE(1) */ = DIVISION_SIM((2.0) * (((data->localData[0]->realVars[4002] /* sink.tube_hot[3].liquidStream.surf.T[1] variable */) * (data->simulationInfo->realParameter[471] /* sink.tube_hot[3].wall_1L.G PARAM */)) * (0.5) + data->localData[0]->realVars[3902] /* sink.tube_hot[3].liquidStream.surf.Q_flow[1] variable */),data->simulationInfo->realParameter[471] /* sink.tube_hot[3].wall_1L.G PARAM */,"sink.tube_hot[3].wall_1L.G",equationIndexes);
  TRACE_POP
}

/*
equation index: 2272
type: SIMPLE_ASSIGN
sink.tube_hot[2].liquidStream.surf.T[10] = sink.tube_hot[2].liquidStream.TStart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2272(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2272};
  data->localData[0]->realVars[4001] /* sink.tube_hot[2].liquidStream.surf.T[10] variable */ = data->simulationInfo->realParameter[370] /* sink.tube_hot[2].liquidStream.TStart PARAM */;
  TRACE_POP
}

/*
equation index: 2273
type: SIMPLE_ASSIGN
sink.tube_hot[2].liquidStream.surf.Q_flow[10] = sink.tube_hot[2].liquidStream.HT[10].gamma * sink.tube_hot[2].liquidStream.All * (sink.tube_hot[2].liquidStream.surf.T[10] - sink.tube_hot[2].liquidStream.T[10])
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2273(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2273};
  data->localData[0]->realVars[3901] /* sink.tube_hot[2].liquidStream.surf.Q_flow[10] variable */ = (data->localData[0]->realVars[2301] /* sink.tube_hot[2].liquidStream.HT[10].gamma variable */) * ((data->simulationInfo->realParameter[140] /* sink.tube_hot[2].liquidStream.All PARAM */) * (data->localData[0]->realVars[4001] /* sink.tube_hot[2].liquidStream.surf.T[10] variable */ - data->localData[0]->realVars[3301] /* sink.tube_hot[2].liquidStream.T[10] variable */));
  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6987(DATA *data, threadData_t *threadData);

extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6988(DATA *data, threadData_t *threadData);

extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6989(DATA *data, threadData_t *threadData);


/*
equation index: 2277
type: SIMPLE_ASSIGN
$DER.sink.tube_hot[2].liquidStream.m[10].h = $DER.sink.tube_hot[2].liquidStream.HT[10].m.e + 0.001 * $DER.sink.tube_hot[2].liquidStream.HT[10].m.p
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2277(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2277};
  data->localData[0]->realVars[505] /* der(sink.tube_hot[2].liquidStream.m[10].h) STATE_DER */ = data->localData[0]->realVars[769] /* der(sink.tube_hot[2].liquidStream.HT[10].m.e) DUMMY_DER */ + (0.001) * (data->localData[0]->realVars[869] /* der(sink.tube_hot[2].liquidStream.HT[10].m.p) DUMMY_DER */);
  TRACE_POP
}

/*
equation index: 2278
type: SIMPLE_ASSIGN
sink.tube_hot[2].wall_1L.T[10] = 2.0 * (sink.tube_hot[2].liquidStream.surf.T[10] * sink.tube_hot[2].wall_1L.G * 0.5 + sink.tube_hot[2].liquidStream.surf.Q_flow[10]) / sink.tube_hot[2].wall_1L.G
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2278(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2278};
  data->localData[0]->realVars[230] /* sink.tube_hot[2].wall_1L.T[10] STATE(1) */ = DIVISION_SIM((2.0) * (((data->localData[0]->realVars[4001] /* sink.tube_hot[2].liquidStream.surf.T[10] variable */) * (data->simulationInfo->realParameter[470] /* sink.tube_hot[2].wall_1L.G PARAM */)) * (0.5) + data->localData[0]->realVars[3901] /* sink.tube_hot[2].liquidStream.surf.Q_flow[10] variable */),data->simulationInfo->realParameter[470] /* sink.tube_hot[2].wall_1L.G PARAM */,"sink.tube_hot[2].wall_1L.G",equationIndexes);
  TRACE_POP
}

/*
equation index: 2279
type: SIMPLE_ASSIGN
sink.tube_hot[2].liquidStream.surf.T[9] = sink.tube_hot[2].liquidStream.TStart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2279(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2279};
  data->localData[0]->realVars[4000] /* sink.tube_hot[2].liquidStream.surf.T[9] variable */ = data->simulationInfo->realParameter[370] /* sink.tube_hot[2].liquidStream.TStart PARAM */;
  TRACE_POP
}

/*
equation index: 2280
type: SIMPLE_ASSIGN
sink.tube_hot[2].liquidStream.surf.Q_flow[9] = sink.tube_hot[2].liquidStream.HT[9].gamma * sink.tube_hot[2].liquidStream.All * (sink.tube_hot[2].liquidStream.surf.T[9] - sink.tube_hot[2].liquidStream.T[9])
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2280(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2280};
  data->localData[0]->realVars[3900] /* sink.tube_hot[2].liquidStream.surf.Q_flow[9] variable */ = (data->localData[0]->realVars[2300] /* sink.tube_hot[2].liquidStream.HT[9].gamma variable */) * ((data->simulationInfo->realParameter[140] /* sink.tube_hot[2].liquidStream.All PARAM */) * (data->localData[0]->realVars[4000] /* sink.tube_hot[2].liquidStream.surf.T[9] variable */ - data->localData[0]->realVars[3300] /* sink.tube_hot[2].liquidStream.T[9] variable */));
  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6406(DATA *data, threadData_t *threadData);

extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6407(DATA *data, threadData_t *threadData);

extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6408(DATA *data, threadData_t *threadData);


/*
equation index: 2284
type: SIMPLE_ASSIGN
$DER.sink.tube_hot[2].liquidStream.HT[9].m.h = $DER.sink.tube_hot[2].liquidStream.HT[9].m.e + 0.001 * $DER.sink.tube_hot[2].liquidStream.HT[9].m.p
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2284(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2284};
  data->localData[0]->realVars[437] /* der(sink.tube_hot[2].liquidStream.HT[9].m.h) STATE_DER */ = data->localData[0]->realVars[768] /* der(sink.tube_hot[2].liquidStream.HT[9].m.e) DUMMY_DER */ + (0.001) * (data->localData[0]->realVars[868] /* der(sink.tube_hot[2].liquidStream.HT[9].m.p) DUMMY_DER */);
  TRACE_POP
}

/*
equation index: 2285
type: SIMPLE_ASSIGN
sink.tube_hot[2].wall_1L.T[9] = 2.0 * (sink.tube_hot[2].liquidStream.surf.T[9] * sink.tube_hot[2].wall_1L.G * 0.5 + sink.tube_hot[2].liquidStream.surf.Q_flow[9]) / sink.tube_hot[2].wall_1L.G
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2285(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2285};
  data->localData[0]->realVars[229] /* sink.tube_hot[2].wall_1L.T[9] STATE(1) */ = DIVISION_SIM((2.0) * (((data->localData[0]->realVars[4000] /* sink.tube_hot[2].liquidStream.surf.T[9] variable */) * (data->simulationInfo->realParameter[470] /* sink.tube_hot[2].wall_1L.G PARAM */)) * (0.5) + data->localData[0]->realVars[3900] /* sink.tube_hot[2].liquidStream.surf.Q_flow[9] variable */),data->simulationInfo->realParameter[470] /* sink.tube_hot[2].wall_1L.G PARAM */,"sink.tube_hot[2].wall_1L.G",equationIndexes);
  TRACE_POP
}

/*
equation index: 2286
type: SIMPLE_ASSIGN
sink.tube_hot[2].liquidStream.surf.T[8] = sink.tube_hot[2].liquidStream.TStart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2286(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2286};
  data->localData[0]->realVars[3999] /* sink.tube_hot[2].liquidStream.surf.T[8] variable */ = data->simulationInfo->realParameter[370] /* sink.tube_hot[2].liquidStream.TStart PARAM */;
  TRACE_POP
}

/*
equation index: 2287
type: SIMPLE_ASSIGN
sink.tube_hot[2].liquidStream.surf.Q_flow[8] = sink.tube_hot[2].liquidStream.HT[8].gamma * sink.tube_hot[2].liquidStream.All * (sink.tube_hot[2].liquidStream.surf.T[8] - sink.tube_hot[2].liquidStream.T[8])
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2287(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2287};
  data->localData[0]->realVars[3899] /* sink.tube_hot[2].liquidStream.surf.Q_flow[8] variable */ = (data->localData[0]->realVars[2299] /* sink.tube_hot[2].liquidStream.HT[8].gamma variable */) * ((data->simulationInfo->realParameter[140] /* sink.tube_hot[2].liquidStream.All PARAM */) * (data->localData[0]->realVars[3999] /* sink.tube_hot[2].liquidStream.surf.T[8] variable */ - data->localData[0]->realVars[3299] /* sink.tube_hot[2].liquidStream.T[8] variable */));
  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6409(DATA *data, threadData_t *threadData);

extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6410(DATA *data, threadData_t *threadData);

extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6411(DATA *data, threadData_t *threadData);


/*
equation index: 2291
type: SIMPLE_ASSIGN
$DER.sink.tube_hot[2].liquidStream.HT[8].m.h = $DER.sink.tube_hot[2].liquidStream.HT[8].m.e + 0.001 * $DER.sink.tube_hot[2].liquidStream.HT[8].m.p
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2291(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2291};
  data->localData[0]->realVars[436] /* der(sink.tube_hot[2].liquidStream.HT[8].m.h) STATE_DER */ = data->localData[0]->realVars[767] /* der(sink.tube_hot[2].liquidStream.HT[8].m.e) DUMMY_DER */ + (0.001) * (data->localData[0]->realVars[867] /* der(sink.tube_hot[2].liquidStream.HT[8].m.p) DUMMY_DER */);
  TRACE_POP
}

/*
equation index: 2292
type: SIMPLE_ASSIGN
sink.tube_hot[2].wall_1L.T[8] = 2.0 * (sink.tube_hot[2].liquidStream.surf.T[8] * sink.tube_hot[2].wall_1L.G * 0.5 + sink.tube_hot[2].liquidStream.surf.Q_flow[8]) / sink.tube_hot[2].wall_1L.G
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2292(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2292};
  data->localData[0]->realVars[228] /* sink.tube_hot[2].wall_1L.T[8] STATE(1) */ = DIVISION_SIM((2.0) * (((data->localData[0]->realVars[3999] /* sink.tube_hot[2].liquidStream.surf.T[8] variable */) * (data->simulationInfo->realParameter[470] /* sink.tube_hot[2].wall_1L.G PARAM */)) * (0.5) + data->localData[0]->realVars[3899] /* sink.tube_hot[2].liquidStream.surf.Q_flow[8] variable */),data->simulationInfo->realParameter[470] /* sink.tube_hot[2].wall_1L.G PARAM */,"sink.tube_hot[2].wall_1L.G",equationIndexes);
  TRACE_POP
}

/*
equation index: 2293
type: SIMPLE_ASSIGN
sink.tube_hot[2].liquidStream.surf.T[7] = sink.tube_hot[2].liquidStream.TStart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2293(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2293};
  data->localData[0]->realVars[3998] /* sink.tube_hot[2].liquidStream.surf.T[7] variable */ = data->simulationInfo->realParameter[370] /* sink.tube_hot[2].liquidStream.TStart PARAM */;
  TRACE_POP
}

/*
equation index: 2294
type: SIMPLE_ASSIGN
sink.tube_hot[2].liquidStream.surf.Q_flow[7] = sink.tube_hot[2].liquidStream.HT[7].gamma * sink.tube_hot[2].liquidStream.All * (sink.tube_hot[2].liquidStream.surf.T[7] - sink.tube_hot[2].liquidStream.T[7])
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2294(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2294};
  data->localData[0]->realVars[3898] /* sink.tube_hot[2].liquidStream.surf.Q_flow[7] variable */ = (data->localData[0]->realVars[2298] /* sink.tube_hot[2].liquidStream.HT[7].gamma variable */) * ((data->simulationInfo->realParameter[140] /* sink.tube_hot[2].liquidStream.All PARAM */) * (data->localData[0]->realVars[3998] /* sink.tube_hot[2].liquidStream.surf.T[7] variable */ - data->localData[0]->realVars[3298] /* sink.tube_hot[2].liquidStream.T[7] variable */));
  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6412(DATA *data, threadData_t *threadData);

extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6413(DATA *data, threadData_t *threadData);

extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6414(DATA *data, threadData_t *threadData);


/*
equation index: 2298
type: SIMPLE_ASSIGN
$DER.sink.tube_hot[2].liquidStream.HT[7].m.h = $DER.sink.tube_hot[2].liquidStream.HT[7].m.e + 0.001 * $DER.sink.tube_hot[2].liquidStream.HT[7].m.p
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2298(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2298};
  data->localData[0]->realVars[435] /* der(sink.tube_hot[2].liquidStream.HT[7].m.h) STATE_DER */ = data->localData[0]->realVars[766] /* der(sink.tube_hot[2].liquidStream.HT[7].m.e) DUMMY_DER */ + (0.001) * (data->localData[0]->realVars[866] /* der(sink.tube_hot[2].liquidStream.HT[7].m.p) DUMMY_DER */);
  TRACE_POP
}

/*
equation index: 2299
type: SIMPLE_ASSIGN
sink.tube_hot[2].wall_1L.T[7] = 2.0 * (sink.tube_hot[2].liquidStream.surf.T[7] * sink.tube_hot[2].wall_1L.G * 0.5 + sink.tube_hot[2].liquidStream.surf.Q_flow[7]) / sink.tube_hot[2].wall_1L.G
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2299(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2299};
  data->localData[0]->realVars[227] /* sink.tube_hot[2].wall_1L.T[7] STATE(1) */ = DIVISION_SIM((2.0) * (((data->localData[0]->realVars[3998] /* sink.tube_hot[2].liquidStream.surf.T[7] variable */) * (data->simulationInfo->realParameter[470] /* sink.tube_hot[2].wall_1L.G PARAM */)) * (0.5) + data->localData[0]->realVars[3898] /* sink.tube_hot[2].liquidStream.surf.Q_flow[7] variable */),data->simulationInfo->realParameter[470] /* sink.tube_hot[2].wall_1L.G PARAM */,"sink.tube_hot[2].wall_1L.G",equationIndexes);
  TRACE_POP
}

/*
equation index: 2300
type: SIMPLE_ASSIGN
sink.tube_hot[2].liquidStream.surf.T[6] = sink.tube_hot[2].liquidStream.TStart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2300(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2300};
  data->localData[0]->realVars[3997] /* sink.tube_hot[2].liquidStream.surf.T[6] variable */ = data->simulationInfo->realParameter[370] /* sink.tube_hot[2].liquidStream.TStart PARAM */;
  TRACE_POP
}

/*
equation index: 2301
type: SIMPLE_ASSIGN
sink.tube_hot[2].liquidStream.surf.Q_flow[6] = sink.tube_hot[2].liquidStream.HT[6].gamma * sink.tube_hot[2].liquidStream.All * (sink.tube_hot[2].liquidStream.surf.T[6] - sink.tube_hot[2].liquidStream.T[6])
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2301(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2301};
  data->localData[0]->realVars[3897] /* sink.tube_hot[2].liquidStream.surf.Q_flow[6] variable */ = (data->localData[0]->realVars[2297] /* sink.tube_hot[2].liquidStream.HT[6].gamma variable */) * ((data->simulationInfo->realParameter[140] /* sink.tube_hot[2].liquidStream.All PARAM */) * (data->localData[0]->realVars[3997] /* sink.tube_hot[2].liquidStream.surf.T[6] variable */ - data->localData[0]->realVars[3297] /* sink.tube_hot[2].liquidStream.T[6] variable */));
  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6415(DATA *data, threadData_t *threadData);

extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6416(DATA *data, threadData_t *threadData);

extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6417(DATA *data, threadData_t *threadData);


/*
equation index: 2305
type: SIMPLE_ASSIGN
$DER.sink.tube_hot[2].liquidStream.HT[6].m.h = $DER.sink.tube_hot[2].liquidStream.HT[6].m.e + 0.001 * $DER.sink.tube_hot[2].liquidStream.HT[6].m.p
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2305(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2305};
  data->localData[0]->realVars[434] /* der(sink.tube_hot[2].liquidStream.HT[6].m.h) STATE_DER */ = data->localData[0]->realVars[765] /* der(sink.tube_hot[2].liquidStream.HT[6].m.e) DUMMY_DER */ + (0.001) * (data->localData[0]->realVars[865] /* der(sink.tube_hot[2].liquidStream.HT[6].m.p) DUMMY_DER */);
  TRACE_POP
}

/*
equation index: 2306
type: SIMPLE_ASSIGN
sink.tube_hot[2].wall_1L.T[6] = 2.0 * (sink.tube_hot[2].liquidStream.surf.T[6] * sink.tube_hot[2].wall_1L.G * 0.5 + sink.tube_hot[2].liquidStream.surf.Q_flow[6]) / sink.tube_hot[2].wall_1L.G
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2306(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2306};
  data->localData[0]->realVars[226] /* sink.tube_hot[2].wall_1L.T[6] STATE(1) */ = DIVISION_SIM((2.0) * (((data->localData[0]->realVars[3997] /* sink.tube_hot[2].liquidStream.surf.T[6] variable */) * (data->simulationInfo->realParameter[470] /* sink.tube_hot[2].wall_1L.G PARAM */)) * (0.5) + data->localData[0]->realVars[3897] /* sink.tube_hot[2].liquidStream.surf.Q_flow[6] variable */),data->simulationInfo->realParameter[470] /* sink.tube_hot[2].wall_1L.G PARAM */,"sink.tube_hot[2].wall_1L.G",equationIndexes);
  TRACE_POP
}

/*
equation index: 2307
type: SIMPLE_ASSIGN
sink.tube_hot[2].liquidStream.surf.T[5] = sink.tube_hot[2].liquidStream.TStart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2307(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2307};
  data->localData[0]->realVars[3996] /* sink.tube_hot[2].liquidStream.surf.T[5] variable */ = data->simulationInfo->realParameter[370] /* sink.tube_hot[2].liquidStream.TStart PARAM */;
  TRACE_POP
}

/*
equation index: 2308
type: SIMPLE_ASSIGN
sink.tube_hot[2].liquidStream.surf.Q_flow[5] = sink.tube_hot[2].liquidStream.HT[5].gamma * sink.tube_hot[2].liquidStream.All * (sink.tube_hot[2].liquidStream.surf.T[5] - sink.tube_hot[2].liquidStream.T[5])
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2308(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2308};
  data->localData[0]->realVars[3896] /* sink.tube_hot[2].liquidStream.surf.Q_flow[5] variable */ = (data->localData[0]->realVars[2296] /* sink.tube_hot[2].liquidStream.HT[5].gamma variable */) * ((data->simulationInfo->realParameter[140] /* sink.tube_hot[2].liquidStream.All PARAM */) * (data->localData[0]->realVars[3996] /* sink.tube_hot[2].liquidStream.surf.T[5] variable */ - data->localData[0]->realVars[3296] /* sink.tube_hot[2].liquidStream.T[5] variable */));
  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6418(DATA *data, threadData_t *threadData);

extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6419(DATA *data, threadData_t *threadData);

extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6420(DATA *data, threadData_t *threadData);


/*
equation index: 2312
type: SIMPLE_ASSIGN
$DER.sink.tube_hot[2].liquidStream.HT[5].m.h = $DER.sink.tube_hot[2].liquidStream.HT[5].m.e + 0.001 * $DER.sink.tube_hot[2].liquidStream.HT[5].m.p
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2312(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2312};
  data->localData[0]->realVars[433] /* der(sink.tube_hot[2].liquidStream.HT[5].m.h) STATE_DER */ = data->localData[0]->realVars[764] /* der(sink.tube_hot[2].liquidStream.HT[5].m.e) DUMMY_DER */ + (0.001) * (data->localData[0]->realVars[864] /* der(sink.tube_hot[2].liquidStream.HT[5].m.p) DUMMY_DER */);
  TRACE_POP
}

/*
equation index: 2313
type: SIMPLE_ASSIGN
sink.tube_hot[2].wall_1L.T[5] = 2.0 * (sink.tube_hot[2].liquidStream.surf.T[5] * sink.tube_hot[2].wall_1L.G * 0.5 + sink.tube_hot[2].liquidStream.surf.Q_flow[5]) / sink.tube_hot[2].wall_1L.G
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2313(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2313};
  data->localData[0]->realVars[225] /* sink.tube_hot[2].wall_1L.T[5] STATE(1) */ = DIVISION_SIM((2.0) * (((data->localData[0]->realVars[3996] /* sink.tube_hot[2].liquidStream.surf.T[5] variable */) * (data->simulationInfo->realParameter[470] /* sink.tube_hot[2].wall_1L.G PARAM */)) * (0.5) + data->localData[0]->realVars[3896] /* sink.tube_hot[2].liquidStream.surf.Q_flow[5] variable */),data->simulationInfo->realParameter[470] /* sink.tube_hot[2].wall_1L.G PARAM */,"sink.tube_hot[2].wall_1L.G",equationIndexes);
  TRACE_POP
}

/*
equation index: 2314
type: SIMPLE_ASSIGN
sink.tube_hot[2].liquidStream.surf.T[4] = sink.tube_hot[2].liquidStream.TStart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2314(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2314};
  data->localData[0]->realVars[3995] /* sink.tube_hot[2].liquidStream.surf.T[4] variable */ = data->simulationInfo->realParameter[370] /* sink.tube_hot[2].liquidStream.TStart PARAM */;
  TRACE_POP
}

/*
equation index: 2315
type: SIMPLE_ASSIGN
sink.tube_hot[2].liquidStream.surf.Q_flow[4] = sink.tube_hot[2].liquidStream.HT[4].gamma * sink.tube_hot[2].liquidStream.All * (sink.tube_hot[2].liquidStream.surf.T[4] - sink.tube_hot[2].liquidStream.T[4])
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2315(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2315};
  data->localData[0]->realVars[3895] /* sink.tube_hot[2].liquidStream.surf.Q_flow[4] variable */ = (data->localData[0]->realVars[2295] /* sink.tube_hot[2].liquidStream.HT[4].gamma variable */) * ((data->simulationInfo->realParameter[140] /* sink.tube_hot[2].liquidStream.All PARAM */) * (data->localData[0]->realVars[3995] /* sink.tube_hot[2].liquidStream.surf.T[4] variable */ - data->localData[0]->realVars[3295] /* sink.tube_hot[2].liquidStream.T[4] variable */));
  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6421(DATA *data, threadData_t *threadData);

extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6422(DATA *data, threadData_t *threadData);

extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6423(DATA *data, threadData_t *threadData);


/*
equation index: 2319
type: SIMPLE_ASSIGN
$DER.sink.tube_hot[2].liquidStream.HT[4].m.h = $DER.sink.tube_hot[2].liquidStream.HT[4].m.e + 0.001 * $DER.sink.tube_hot[2].liquidStream.HT[4].m.p
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2319(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2319};
  data->localData[0]->realVars[432] /* der(sink.tube_hot[2].liquidStream.HT[4].m.h) STATE_DER */ = data->localData[0]->realVars[763] /* der(sink.tube_hot[2].liquidStream.HT[4].m.e) DUMMY_DER */ + (0.001) * (data->localData[0]->realVars[863] /* der(sink.tube_hot[2].liquidStream.HT[4].m.p) DUMMY_DER */);
  TRACE_POP
}

/*
equation index: 2320
type: SIMPLE_ASSIGN
sink.tube_hot[2].wall_1L.T[4] = 2.0 * (sink.tube_hot[2].liquidStream.surf.T[4] * sink.tube_hot[2].wall_1L.G * 0.5 + sink.tube_hot[2].liquidStream.surf.Q_flow[4]) / sink.tube_hot[2].wall_1L.G
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2320(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2320};
  data->localData[0]->realVars[224] /* sink.tube_hot[2].wall_1L.T[4] STATE(1) */ = DIVISION_SIM((2.0) * (((data->localData[0]->realVars[3995] /* sink.tube_hot[2].liquidStream.surf.T[4] variable */) * (data->simulationInfo->realParameter[470] /* sink.tube_hot[2].wall_1L.G PARAM */)) * (0.5) + data->localData[0]->realVars[3895] /* sink.tube_hot[2].liquidStream.surf.Q_flow[4] variable */),data->simulationInfo->realParameter[470] /* sink.tube_hot[2].wall_1L.G PARAM */,"sink.tube_hot[2].wall_1L.G",equationIndexes);
  TRACE_POP
}

/*
equation index: 2321
type: SIMPLE_ASSIGN
sink.tube_hot[2].liquidStream.surf.T[3] = sink.tube_hot[2].liquidStream.TStart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2321(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2321};
  data->localData[0]->realVars[3994] /* sink.tube_hot[2].liquidStream.surf.T[3] variable */ = data->simulationInfo->realParameter[370] /* sink.tube_hot[2].liquidStream.TStart PARAM */;
  TRACE_POP
}

/*
equation index: 2322
type: SIMPLE_ASSIGN
sink.tube_hot[2].liquidStream.surf.Q_flow[3] = sink.tube_hot[2].liquidStream.HT[3].gamma * sink.tube_hot[2].liquidStream.All * (sink.tube_hot[2].liquidStream.surf.T[3] - sink.tube_hot[2].liquidStream.T[3])
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2322(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2322};
  data->localData[0]->realVars[3894] /* sink.tube_hot[2].liquidStream.surf.Q_flow[3] variable */ = (data->localData[0]->realVars[2294] /* sink.tube_hot[2].liquidStream.HT[3].gamma variable */) * ((data->simulationInfo->realParameter[140] /* sink.tube_hot[2].liquidStream.All PARAM */) * (data->localData[0]->realVars[3994] /* sink.tube_hot[2].liquidStream.surf.T[3] variable */ - data->localData[0]->realVars[3294] /* sink.tube_hot[2].liquidStream.T[3] variable */));
  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6424(DATA *data, threadData_t *threadData);

extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6425(DATA *data, threadData_t *threadData);

extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6426(DATA *data, threadData_t *threadData);


/*
equation index: 2326
type: SIMPLE_ASSIGN
$DER.sink.tube_hot[2].liquidStream.HT[3].m.h = $DER.sink.tube_hot[2].liquidStream.HT[3].m.e + 0.001 * $DER.sink.tube_hot[2].liquidStream.HT[3].m.p
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2326(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2326};
  data->localData[0]->realVars[431] /* der(sink.tube_hot[2].liquidStream.HT[3].m.h) STATE_DER */ = data->localData[0]->realVars[762] /* der(sink.tube_hot[2].liquidStream.HT[3].m.e) DUMMY_DER */ + (0.001) * (data->localData[0]->realVars[862] /* der(sink.tube_hot[2].liquidStream.HT[3].m.p) DUMMY_DER */);
  TRACE_POP
}

/*
equation index: 2327
type: SIMPLE_ASSIGN
sink.tube_hot[2].wall_1L.T[3] = 2.0 * (sink.tube_hot[2].liquidStream.surf.T[3] * sink.tube_hot[2].wall_1L.G * 0.5 + sink.tube_hot[2].liquidStream.surf.Q_flow[3]) / sink.tube_hot[2].wall_1L.G
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2327(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2327};
  data->localData[0]->realVars[223] /* sink.tube_hot[2].wall_1L.T[3] STATE(1) */ = DIVISION_SIM((2.0) * (((data->localData[0]->realVars[3994] /* sink.tube_hot[2].liquidStream.surf.T[3] variable */) * (data->simulationInfo->realParameter[470] /* sink.tube_hot[2].wall_1L.G PARAM */)) * (0.5) + data->localData[0]->realVars[3894] /* sink.tube_hot[2].liquidStream.surf.Q_flow[3] variable */),data->simulationInfo->realParameter[470] /* sink.tube_hot[2].wall_1L.G PARAM */,"sink.tube_hot[2].wall_1L.G",equationIndexes);
  TRACE_POP
}

/*
equation index: 2328
type: SIMPLE_ASSIGN
sink.tube_hot[2].liquidStream.surf.T[2] = sink.tube_hot[2].liquidStream.TStart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2328(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2328};
  data->localData[0]->realVars[3993] /* sink.tube_hot[2].liquidStream.surf.T[2] variable */ = data->simulationInfo->realParameter[370] /* sink.tube_hot[2].liquidStream.TStart PARAM */;
  TRACE_POP
}

/*
equation index: 2329
type: SIMPLE_ASSIGN
sink.tube_hot[2].liquidStream.surf.Q_flow[2] = sink.tube_hot[2].liquidStream.HT[2].gamma * sink.tube_hot[2].liquidStream.All * (sink.tube_hot[2].liquidStream.surf.T[2] - sink.tube_hot[2].liquidStream.T[2])
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2329(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2329};
  data->localData[0]->realVars[3893] /* sink.tube_hot[2].liquidStream.surf.Q_flow[2] variable */ = (data->localData[0]->realVars[2293] /* sink.tube_hot[2].liquidStream.HT[2].gamma variable */) * ((data->simulationInfo->realParameter[140] /* sink.tube_hot[2].liquidStream.All PARAM */) * (data->localData[0]->realVars[3993] /* sink.tube_hot[2].liquidStream.surf.T[2] variable */ - data->localData[0]->realVars[3293] /* sink.tube_hot[2].liquidStream.T[2] variable */));
  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6427(DATA *data, threadData_t *threadData);

extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6428(DATA *data, threadData_t *threadData);

extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6429(DATA *data, threadData_t *threadData);


/*
equation index: 2333
type: SIMPLE_ASSIGN
$DER.sink.tube_hot[2].liquidStream.HT[2].m.h = $DER.sink.tube_hot[2].liquidStream.HT[2].m.e + 0.001 * $DER.sink.tube_hot[2].liquidStream.HT[2].m.p
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2333(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2333};
  data->localData[0]->realVars[430] /* der(sink.tube_hot[2].liquidStream.HT[2].m.h) STATE_DER */ = data->localData[0]->realVars[761] /* der(sink.tube_hot[2].liquidStream.HT[2].m.e) DUMMY_DER */ + (0.001) * (data->localData[0]->realVars[861] /* der(sink.tube_hot[2].liquidStream.HT[2].m.p) DUMMY_DER */);
  TRACE_POP
}

/*
equation index: 2334
type: SIMPLE_ASSIGN
sink.tube_hot[2].wall_1L.T[2] = 2.0 * (sink.tube_hot[2].liquidStream.surf.T[2] * sink.tube_hot[2].wall_1L.G * 0.5 + sink.tube_hot[2].liquidStream.surf.Q_flow[2]) / sink.tube_hot[2].wall_1L.G
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2334(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2334};
  data->localData[0]->realVars[222] /* sink.tube_hot[2].wall_1L.T[2] STATE(1) */ = DIVISION_SIM((2.0) * (((data->localData[0]->realVars[3993] /* sink.tube_hot[2].liquidStream.surf.T[2] variable */) * (data->simulationInfo->realParameter[470] /* sink.tube_hot[2].wall_1L.G PARAM */)) * (0.5) + data->localData[0]->realVars[3893] /* sink.tube_hot[2].liquidStream.surf.Q_flow[2] variable */),data->simulationInfo->realParameter[470] /* sink.tube_hot[2].wall_1L.G PARAM */,"sink.tube_hot[2].wall_1L.G",equationIndexes);
  TRACE_POP
}

/*
equation index: 2335
type: SIMPLE_ASSIGN
sink.tube_hot[2].liquidStream.surf.T[1] = sink.tube_hot[2].liquidStream.TStart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2335(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2335};
  data->localData[0]->realVars[3992] /* sink.tube_hot[2].liquidStream.surf.T[1] variable */ = data->simulationInfo->realParameter[370] /* sink.tube_hot[2].liquidStream.TStart PARAM */;
  TRACE_POP
}

/*
equation index: 2336
type: SIMPLE_ASSIGN
sink.tube_hot[2].liquidStream.surf.Q_flow[1] = sink.tube_hot[2].liquidStream.HT[1].gamma * sink.tube_hot[2].liquidStream.All * (sink.tube_hot[2].liquidStream.surf.T[1] - sink.tube_hot[2].liquidStream.T[1])
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2336(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2336};
  data->localData[0]->realVars[3892] /* sink.tube_hot[2].liquidStream.surf.Q_flow[1] variable */ = (data->localData[0]->realVars[2292] /* sink.tube_hot[2].liquidStream.HT[1].gamma variable */) * ((data->simulationInfo->realParameter[140] /* sink.tube_hot[2].liquidStream.All PARAM */) * (data->localData[0]->realVars[3992] /* sink.tube_hot[2].liquidStream.surf.T[1] variable */ - data->localData[0]->realVars[3292] /* sink.tube_hot[2].liquidStream.T[1] variable */));
  TRACE_POP
}

/*
equation index: 2337
type: SIMPLE_ASSIGN
$DER.sink.tube_hot[2].liquidStream.E[1] = sink.tube_hot[2].liquidStream.wl_a[1] * (if sink.tube_hot[2].liquidStream.wl_a[1] > 0.0 then (max(-sink.tube_hot[1].liquidStream.wl_a[1], 1e-07) * sink.tube_hot[1].liquidStream.m[1].h + max(-sink.tube_hot[3].liquidStream.wl_a[1], 1e-07) * sink.tube_hot[3].liquidStream.m[1].h + max(-sink.tube_hot[4].liquidStream.wl_a[1], 1e-07) * sink.tube_hot[4].liquidStream.m[1].h + max(-sink.tube_hot[5].liquidStream.wl_a[1], 1e-07) * sink.tube_hot[5].liquidStream.m[1].h + max(-sink.tube_hot[6].liquidStream.wl_a[1], 1e-07) * sink.tube_hot[6].liquidStream.m[1].h + max(-sink.tube_hot[7].liquidStream.wl_a[1], 1e-07) * sink.tube_hot[7].liquidStream.m[1].h + max(-sink.tube_hot[8].liquidStream.wl_a[1], 1e-07) * sink.tube_hot[8].liquidStream.m[1].h + max(-sink.tube_hot[9].liquidStream.wl_a[1], 1e-07) * sink.tube_hot[9].liquidStream.m[1].h + max(-sink.tube_hot[10].liquidStream.wl_a[1], 1e-07) * sink.tube_hot[10].liquidStream.m[1].h + max(-sink.tube_cold.liquidStream.wl_b[4], 1e-07) * sink.pump.hob) / (max(-sink.tube_hot[1].liquidStream.wl_a[1], 1e-07) + max(-sink.tube_hot[3].liquidStream.wl_a[1], 1e-07) + max(-sink.tube_hot[4].liquidStream.wl_a[1], 1e-07) + max(-sink.tube_hot[5].liquidStream.wl_a[1], 1e-07) + max(-sink.tube_hot[6].liquidStream.wl_a[1], 1e-07) + max(-sink.tube_hot[7].liquidStream.wl_a[1], 1e-07) + max(-sink.tube_hot[8].liquidStream.wl_a[1], 1e-07) + max(-sink.tube_hot[9].liquidStream.wl_a[1], 1e-07) + max(-sink.tube_hot[10].liquidStream.wl_a[1], 1e-07) + max(-sink.tube_cold.liquidStream.wl_b[4], 1e-07)) else sink.tube_hot[2].liquidStream.m[1].h) + sink.tube_hot[2].liquidStream.surf.Q_flow[1] - sink.tube_hot[2].liquidStream.wl_a[1] * (if (-sink.tube_hot[2].liquidStream.wl_a[1]) > 0.0 then sink.tube_hot[2].liquidStream.HT[2].m.h else sink.tube_hot[2].liquidStream.m[1].h)
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2337(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2337};
  modelica_boolean tmp16;
  modelica_boolean tmp17;
  tmp16 = Greater(data->localData[0]->realVars[4083] /* sink.tube_hot[2].liquidStream.wl_a[1] DUMMY_STATE */,0.0);
  tmp17 = Greater((-data->localData[0]->realVars[4083] /* sink.tube_hot[2].liquidStream.wl_a[1] DUMMY_STATE */),0.0);
  data->localData[0]->realVars[660] /* der(sink.tube_hot[2].liquidStream.E[1]) DUMMY_DER */ = (data->localData[0]->realVars[4083] /* sink.tube_hot[2].liquidStream.wl_a[1] DUMMY_STATE */) * ((tmp16?DIVISION_SIM((fmax((-data->localData[0]->realVars[4082] /* sink.tube_hot[1].liquidStream.wl_a[1] DUMMY_STATE */),1e-07)) * (data->localData[0]->realVars[191] /* sink.tube_hot[1].liquidStream.m[1].h STATE(1) */) + (fmax((-data->localData[0]->realVars[4084] /* sink.tube_hot[3].liquidStream.wl_a[1] DUMMY_STATE */),1e-07)) * (data->localData[0]->realVars[195] /* sink.tube_hot[3].liquidStream.m[1].h STATE(1) */) + (fmax((-data->localData[0]->realVars[4085] /* sink.tube_hot[4].liquidStream.wl_a[1] DUMMY_STATE */),1e-07)) * (data->localData[0]->realVars[197] /* sink.tube_hot[4].liquidStream.m[1].h STATE(1) */) + (fmax((-data->localData[0]->realVars[4086] /* sink.tube_hot[5].liquidStream.wl_a[1] DUMMY_STATE */),1e-07)) * (data->localData[0]->realVars[199] /* sink.tube_hot[5].liquidStream.m[1].h STATE(1) */) + (fmax((-data->localData[0]->realVars[4087] /* sink.tube_hot[6].liquidStream.wl_a[1] DUMMY_STATE */),1e-07)) * (data->localData[0]->realVars[201] /* sink.tube_hot[6].liquidStream.m[1].h STATE(1) */) + (fmax((-data->localData[0]->realVars[4088] /* sink.tube_hot[7].liquidStream.wl_a[1] DUMMY_STATE */),1e-07)) * (data->localData[0]->realVars[203] /* sink.tube_hot[7].liquidStream.m[1].h STATE(1) */) + (fmax((-data->localData[0]->realVars[4089] /* sink.tube_hot[8].liquidStream.wl_a[1] DUMMY_STATE */),1e-07)) * (data->localData[0]->realVars[205] /* sink.tube_hot[8].liquidStream.m[1].h STATE(1) */) + (fmax((-data->localData[0]->realVars[4090] /* sink.tube_hot[9].liquidStream.wl_a[1] DUMMY_STATE */),1e-07)) * (data->localData[0]->realVars[207] /* sink.tube_hot[9].liquidStream.m[1].h STATE(1) */) + (fmax((-data->localData[0]->realVars[4091] /* sink.tube_hot[10].liquidStream.wl_a[1] DUMMY_STATE */),1e-07)) * (data->localData[0]->realVars[209] /* sink.tube_hot[10].liquidStream.m[1].h STATE(1) */) + (fmax((-data->localData[0]->realVars[1881] /* sink.tube_cold.liquidStream.wl_b[4] DUMMY_STATE */),1e-07)) * (data->localData[0]->realVars[1746] /* sink.pump.hob variable */),fmax((-data->localData[0]->realVars[4082] /* sink.tube_hot[1].liquidStream.wl_a[1] DUMMY_STATE */),1e-07) + fmax((-data->localData[0]->realVars[4084] /* sink.tube_hot[3].liquidStream.wl_a[1] DUMMY_STATE */),1e-07) + fmax((-data->localData[0]->realVars[4085] /* sink.tube_hot[4].liquidStream.wl_a[1] DUMMY_STATE */),1e-07) + fmax((-data->localData[0]->realVars[4086] /* sink.tube_hot[5].liquidStream.wl_a[1] DUMMY_STATE */),1e-07) + fmax((-data->localData[0]->realVars[4087] /* sink.tube_hot[6].liquidStream.wl_a[1] DUMMY_STATE */),1e-07) + fmax((-data->localData[0]->realVars[4088] /* sink.tube_hot[7].liquidStream.wl_a[1] DUMMY_STATE */),1e-07) + fmax((-data->localData[0]->realVars[4089] /* sink.tube_hot[8].liquidStream.wl_a[1] DUMMY_STATE */),1e-07) + fmax((-data->localData[0]->realVars[4090] /* sink.tube_hot[9].liquidStream.wl_a[1] DUMMY_STATE */),1e-07) + fmax((-data->localData[0]->realVars[4091] /* sink.tube_hot[10].liquidStream.wl_a[1] DUMMY_STATE */),1e-07) + fmax((-data->localData[0]->realVars[1881] /* sink.tube_cold.liquidStream.wl_b[4] DUMMY_STATE */),1e-07),"max(-sink.tube_hot[1].liquidStream.wl_a[1], 1e-07) + max(-sink.tube_hot[3].liquidStream.wl_a[1], 1e-07) + max(-sink.tube_hot[4].liquidStream.wl_a[1], 1e-07) + max(-sink.tube_hot[5].liquidStream.wl_a[1], 1e-07) + max(-sink.tube_hot[6].liquidStream.wl_a[1], 1e-07) + max(-sink.tube_hot[7].liquidStream.wl_a[1], 1e-07) + max(-sink.tube_hot[8].liquidStream.wl_a[1], 1e-07) + max(-sink.tube_hot[9].liquidStream.wl_a[1], 1e-07) + max(-sink.tube_hot[10].liquidStream.wl_a[1], 1e-07) + max(-sink.tube_cold.liquidStream.wl_b[4], 1e-07)",equationIndexes):data->localData[0]->realVars[193] /* sink.tube_hot[2].liquidStream.m[1].h STATE(1) */)) + data->localData[0]->realVars[3892] /* sink.tube_hot[2].liquidStream.surf.Q_flow[1] variable */ - ((data->localData[0]->realVars[4083] /* sink.tube_hot[2].liquidStream.wl_a[1] DUMMY_STATE */) * ((tmp17?data->localData[0]->realVars[119] /* sink.tube_hot[2].liquidStream.HT[2].m.h STATE(1) */:data->localData[0]->realVars[193] /* sink.tube_hot[2].liquidStream.m[1].h STATE(1) */)));
  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6940(DATA *data, threadData_t *threadData);

extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6941(DATA *data, threadData_t *threadData);


/*
equation index: 2340
type: SIMPLE_ASSIGN
$DER.sink.tube_hot[2].liquidStream.m[1].h = $DER.sink.tube_hot[2].liquidStream.HT[1].m.e + 0.001 * $DER.sink.tube_hot[2].liquidStream.HT[1].m.p
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2340(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2340};
  data->localData[0]->realVars[504] /* der(sink.tube_hot[2].liquidStream.m[1].h) STATE_DER */ = data->localData[0]->realVars[760] /* der(sink.tube_hot[2].liquidStream.HT[1].m.e) DUMMY_DER */ + (0.001) * (data->localData[0]->realVars[860] /* der(sink.tube_hot[2].liquidStream.HT[1].m.p) DUMMY_DER */);
  TRACE_POP
}

/*
equation index: 2341
type: SIMPLE_ASSIGN
sink.tube_hot[2].wall_1L.T[1] = 2.0 * (sink.tube_hot[2].liquidStream.surf.T[1] * sink.tube_hot[2].wall_1L.G * 0.5 + sink.tube_hot[2].liquidStream.surf.Q_flow[1]) / sink.tube_hot[2].wall_1L.G
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2341(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2341};
  data->localData[0]->realVars[221] /* sink.tube_hot[2].wall_1L.T[1] STATE(1) */ = DIVISION_SIM((2.0) * (((data->localData[0]->realVars[3992] /* sink.tube_hot[2].liquidStream.surf.T[1] variable */) * (data->simulationInfo->realParameter[470] /* sink.tube_hot[2].wall_1L.G PARAM */)) * (0.5) + data->localData[0]->realVars[3892] /* sink.tube_hot[2].liquidStream.surf.Q_flow[1] variable */),data->simulationInfo->realParameter[470] /* sink.tube_hot[2].wall_1L.G PARAM */,"sink.tube_hot[2].wall_1L.G",equationIndexes);
  TRACE_POP
}

/*
equation index: 2342
type: SIMPLE_ASSIGN
sink.tube_hot[1].liquidStream.surf.T[10] = sink.tube_hot[1].liquidStream.TStart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2342(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2342};
  data->localData[0]->realVars[3991] /* sink.tube_hot[1].liquidStream.surf.T[10] variable */ = data->simulationInfo->realParameter[369] /* sink.tube_hot[1].liquidStream.TStart PARAM */;
  TRACE_POP
}

/*
equation index: 2343
type: SIMPLE_ASSIGN
sink.tube_hot[1].liquidStream.surf.Q_flow[10] = sink.tube_hot[1].liquidStream.HT[10].gamma * sink.tube_hot[1].liquidStream.All * (sink.tube_hot[1].liquidStream.surf.T[10] - sink.tube_hot[1].liquidStream.T[10])
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2343(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2343};
  data->localData[0]->realVars[3891] /* sink.tube_hot[1].liquidStream.surf.Q_flow[10] variable */ = (data->localData[0]->realVars[2291] /* sink.tube_hot[1].liquidStream.HT[10].gamma variable */) * ((data->simulationInfo->realParameter[139] /* sink.tube_hot[1].liquidStream.All PARAM */) * (data->localData[0]->realVars[3991] /* sink.tube_hot[1].liquidStream.surf.T[10] variable */ - data->localData[0]->realVars[3291] /* sink.tube_hot[1].liquidStream.T[10] variable */));
  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6990(DATA *data, threadData_t *threadData);

extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6991(DATA *data, threadData_t *threadData);

extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6992(DATA *data, threadData_t *threadData);


/*
equation index: 2347
type: SIMPLE_ASSIGN
$DER.sink.tube_hot[1].liquidStream.m[10].h = $DER.sink.tube_hot[1].liquidStream.HT[10].m.e + 0.001 * $DER.sink.tube_hot[1].liquidStream.HT[10].m.p
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2347(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2347};
  data->localData[0]->realVars[503] /* der(sink.tube_hot[1].liquidStream.m[10].h) STATE_DER */ = data->localData[0]->realVars[759] /* der(sink.tube_hot[1].liquidStream.HT[10].m.e) DUMMY_DER */ + (0.001) * (data->localData[0]->realVars[859] /* der(sink.tube_hot[1].liquidStream.HT[10].m.p) DUMMY_DER */);
  TRACE_POP
}

/*
equation index: 2348
type: SIMPLE_ASSIGN
sink.tube_hot[1].wall_1L.T[10] = 2.0 * (sink.tube_hot[1].liquidStream.surf.T[10] * sink.tube_hot[1].wall_1L.G * 0.5 + sink.tube_hot[1].liquidStream.surf.Q_flow[10]) / sink.tube_hot[1].wall_1L.G
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2348(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2348};
  data->localData[0]->realVars[220] /* sink.tube_hot[1].wall_1L.T[10] STATE(1) */ = DIVISION_SIM((2.0) * (((data->localData[0]->realVars[3991] /* sink.tube_hot[1].liquidStream.surf.T[10] variable */) * (data->simulationInfo->realParameter[469] /* sink.tube_hot[1].wall_1L.G PARAM */)) * (0.5) + data->localData[0]->realVars[3891] /* sink.tube_hot[1].liquidStream.surf.Q_flow[10] variable */),data->simulationInfo->realParameter[469] /* sink.tube_hot[1].wall_1L.G PARAM */,"sink.tube_hot[1].wall_1L.G",equationIndexes);
  TRACE_POP
}

/*
equation index: 2349
type: SIMPLE_ASSIGN
sink.tube_hot[1].liquidStream.surf.T[9] = sink.tube_hot[1].liquidStream.TStart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2349(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2349};
  data->localData[0]->realVars[3990] /* sink.tube_hot[1].liquidStream.surf.T[9] variable */ = data->simulationInfo->realParameter[369] /* sink.tube_hot[1].liquidStream.TStart PARAM */;
  TRACE_POP
}

/*
equation index: 2350
type: SIMPLE_ASSIGN
sink.tube_hot[1].liquidStream.surf.Q_flow[9] = sink.tube_hot[1].liquidStream.HT[9].gamma * sink.tube_hot[1].liquidStream.All * (sink.tube_hot[1].liquidStream.surf.T[9] - sink.tube_hot[1].liquidStream.T[9])
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2350(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2350};
  data->localData[0]->realVars[3890] /* sink.tube_hot[1].liquidStream.surf.Q_flow[9] variable */ = (data->localData[0]->realVars[2290] /* sink.tube_hot[1].liquidStream.HT[9].gamma variable */) * ((data->simulationInfo->realParameter[139] /* sink.tube_hot[1].liquidStream.All PARAM */) * (data->localData[0]->realVars[3990] /* sink.tube_hot[1].liquidStream.surf.T[9] variable */ - data->localData[0]->realVars[3290] /* sink.tube_hot[1].liquidStream.T[9] variable */));
  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6589(DATA *data, threadData_t *threadData);

extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6590(DATA *data, threadData_t *threadData);

extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6591(DATA *data, threadData_t *threadData);


/*
equation index: 2354
type: SIMPLE_ASSIGN
$DER.sink.tube_hot[1].liquidStream.HT[9].m.h = $DER.sink.tube_hot[1].liquidStream.HT[9].m.e + 0.001 * $DER.sink.tube_hot[1].liquidStream.HT[9].m.p
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2354(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2354};
  data->localData[0]->realVars[429] /* der(sink.tube_hot[1].liquidStream.HT[9].m.h) STATE_DER */ = data->localData[0]->realVars[758] /* der(sink.tube_hot[1].liquidStream.HT[9].m.e) DUMMY_DER */ + (0.001) * (data->localData[0]->realVars[858] /* der(sink.tube_hot[1].liquidStream.HT[9].m.p) DUMMY_DER */);
  TRACE_POP
}

/*
equation index: 2355
type: SIMPLE_ASSIGN
sink.tube_hot[1].wall_1L.T[9] = 2.0 * (sink.tube_hot[1].liquidStream.surf.T[9] * sink.tube_hot[1].wall_1L.G * 0.5 + sink.tube_hot[1].liquidStream.surf.Q_flow[9]) / sink.tube_hot[1].wall_1L.G
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2355(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2355};
  data->localData[0]->realVars[219] /* sink.tube_hot[1].wall_1L.T[9] STATE(1) */ = DIVISION_SIM((2.0) * (((data->localData[0]->realVars[3990] /* sink.tube_hot[1].liquidStream.surf.T[9] variable */) * (data->simulationInfo->realParameter[469] /* sink.tube_hot[1].wall_1L.G PARAM */)) * (0.5) + data->localData[0]->realVars[3890] /* sink.tube_hot[1].liquidStream.surf.Q_flow[9] variable */),data->simulationInfo->realParameter[469] /* sink.tube_hot[1].wall_1L.G PARAM */,"sink.tube_hot[1].wall_1L.G",equationIndexes);
  TRACE_POP
}

/*
equation index: 2356
type: SIMPLE_ASSIGN
sink.tube_hot[1].liquidStream.surf.T[8] = sink.tube_hot[1].liquidStream.TStart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2356(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2356};
  data->localData[0]->realVars[3989] /* sink.tube_hot[1].liquidStream.surf.T[8] variable */ = data->simulationInfo->realParameter[369] /* sink.tube_hot[1].liquidStream.TStart PARAM */;
  TRACE_POP
}

/*
equation index: 2357
type: SIMPLE_ASSIGN
sink.tube_hot[1].liquidStream.surf.Q_flow[8] = sink.tube_hot[1].liquidStream.HT[8].gamma * sink.tube_hot[1].liquidStream.All * (sink.tube_hot[1].liquidStream.surf.T[8] - sink.tube_hot[1].liquidStream.T[8])
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2357(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2357};
  data->localData[0]->realVars[3889] /* sink.tube_hot[1].liquidStream.surf.Q_flow[8] variable */ = (data->localData[0]->realVars[2289] /* sink.tube_hot[1].liquidStream.HT[8].gamma variable */) * ((data->simulationInfo->realParameter[139] /* sink.tube_hot[1].liquidStream.All PARAM */) * (data->localData[0]->realVars[3989] /* sink.tube_hot[1].liquidStream.surf.T[8] variable */ - data->localData[0]->realVars[3289] /* sink.tube_hot[1].liquidStream.T[8] variable */));
  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6575(DATA *data, threadData_t *threadData);

extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6576(DATA *data, threadData_t *threadData);

extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6577(DATA *data, threadData_t *threadData);


/*
equation index: 2361
type: SIMPLE_ASSIGN
$DER.sink.tube_hot[1].liquidStream.HT[8].m.h = $DER.sink.tube_hot[1].liquidStream.HT[8].m.e + 0.001 * $DER.sink.tube_hot[1].liquidStream.HT[8].m.p
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2361(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2361};
  data->localData[0]->realVars[428] /* der(sink.tube_hot[1].liquidStream.HT[8].m.h) STATE_DER */ = data->localData[0]->realVars[757] /* der(sink.tube_hot[1].liquidStream.HT[8].m.e) DUMMY_DER */ + (0.001) * (data->localData[0]->realVars[857] /* der(sink.tube_hot[1].liquidStream.HT[8].m.p) DUMMY_DER */);
  TRACE_POP
}

/*
equation index: 2362
type: SIMPLE_ASSIGN
sink.tube_hot[1].wall_1L.T[8] = 2.0 * (sink.tube_hot[1].liquidStream.surf.T[8] * sink.tube_hot[1].wall_1L.G * 0.5 + sink.tube_hot[1].liquidStream.surf.Q_flow[8]) / sink.tube_hot[1].wall_1L.G
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2362(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2362};
  data->localData[0]->realVars[218] /* sink.tube_hot[1].wall_1L.T[8] STATE(1) */ = DIVISION_SIM((2.0) * (((data->localData[0]->realVars[3989] /* sink.tube_hot[1].liquidStream.surf.T[8] variable */) * (data->simulationInfo->realParameter[469] /* sink.tube_hot[1].wall_1L.G PARAM */)) * (0.5) + data->localData[0]->realVars[3889] /* sink.tube_hot[1].liquidStream.surf.Q_flow[8] variable */),data->simulationInfo->realParameter[469] /* sink.tube_hot[1].wall_1L.G PARAM */,"sink.tube_hot[1].wall_1L.G",equationIndexes);
  TRACE_POP
}

/*
equation index: 2363
type: SIMPLE_ASSIGN
sink.tube_hot[1].liquidStream.surf.T[7] = sink.tube_hot[1].liquidStream.TStart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2363(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2363};
  data->localData[0]->realVars[3988] /* sink.tube_hot[1].liquidStream.surf.T[7] variable */ = data->simulationInfo->realParameter[369] /* sink.tube_hot[1].liquidStream.TStart PARAM */;
  TRACE_POP
}

/*
equation index: 2364
type: SIMPLE_ASSIGN
sink.tube_hot[1].liquidStream.surf.Q_flow[7] = sink.tube_hot[1].liquidStream.HT[7].gamma * sink.tube_hot[1].liquidStream.All * (sink.tube_hot[1].liquidStream.surf.T[7] - sink.tube_hot[1].liquidStream.T[7])
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2364(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2364};
  data->localData[0]->realVars[3888] /* sink.tube_hot[1].liquidStream.surf.Q_flow[7] variable */ = (data->localData[0]->realVars[2288] /* sink.tube_hot[1].liquidStream.HT[7].gamma variable */) * ((data->simulationInfo->realParameter[139] /* sink.tube_hot[1].liquidStream.All PARAM */) * (data->localData[0]->realVars[3988] /* sink.tube_hot[1].liquidStream.surf.T[7] variable */ - data->localData[0]->realVars[3288] /* sink.tube_hot[1].liquidStream.T[7] variable */));
  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6561(DATA *data, threadData_t *threadData);

extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6562(DATA *data, threadData_t *threadData);

extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6563(DATA *data, threadData_t *threadData);


/*
equation index: 2368
type: SIMPLE_ASSIGN
$DER.sink.tube_hot[1].liquidStream.HT[7].m.h = $DER.sink.tube_hot[1].liquidStream.HT[7].m.e + 0.001 * $DER.sink.tube_hot[1].liquidStream.HT[7].m.p
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2368(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2368};
  data->localData[0]->realVars[427] /* der(sink.tube_hot[1].liquidStream.HT[7].m.h) STATE_DER */ = data->localData[0]->realVars[756] /* der(sink.tube_hot[1].liquidStream.HT[7].m.e) DUMMY_DER */ + (0.001) * (data->localData[0]->realVars[856] /* der(sink.tube_hot[1].liquidStream.HT[7].m.p) DUMMY_DER */);
  TRACE_POP
}

/*
equation index: 2369
type: SIMPLE_ASSIGN
sink.tube_hot[1].wall_1L.T[7] = 2.0 * (sink.tube_hot[1].liquidStream.surf.T[7] * sink.tube_hot[1].wall_1L.G * 0.5 + sink.tube_hot[1].liquidStream.surf.Q_flow[7]) / sink.tube_hot[1].wall_1L.G
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2369(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2369};
  data->localData[0]->realVars[217] /* sink.tube_hot[1].wall_1L.T[7] STATE(1) */ = DIVISION_SIM((2.0) * (((data->localData[0]->realVars[3988] /* sink.tube_hot[1].liquidStream.surf.T[7] variable */) * (data->simulationInfo->realParameter[469] /* sink.tube_hot[1].wall_1L.G PARAM */)) * (0.5) + data->localData[0]->realVars[3888] /* sink.tube_hot[1].liquidStream.surf.Q_flow[7] variable */),data->simulationInfo->realParameter[469] /* sink.tube_hot[1].wall_1L.G PARAM */,"sink.tube_hot[1].wall_1L.G",equationIndexes);
  TRACE_POP
}

/*
equation index: 2370
type: SIMPLE_ASSIGN
sink.tube_hot[1].liquidStream.surf.T[6] = sink.tube_hot[1].liquidStream.TStart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2370(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2370};
  data->localData[0]->realVars[3987] /* sink.tube_hot[1].liquidStream.surf.T[6] variable */ = data->simulationInfo->realParameter[369] /* sink.tube_hot[1].liquidStream.TStart PARAM */;
  TRACE_POP
}

/*
equation index: 2371
type: SIMPLE_ASSIGN
sink.tube_hot[1].liquidStream.surf.Q_flow[6] = sink.tube_hot[1].liquidStream.HT[6].gamma * sink.tube_hot[1].liquidStream.All * (sink.tube_hot[1].liquidStream.surf.T[6] - sink.tube_hot[1].liquidStream.T[6])
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2371(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2371};
  data->localData[0]->realVars[3887] /* sink.tube_hot[1].liquidStream.surf.Q_flow[6] variable */ = (data->localData[0]->realVars[2287] /* sink.tube_hot[1].liquidStream.HT[6].gamma variable */) * ((data->simulationInfo->realParameter[139] /* sink.tube_hot[1].liquidStream.All PARAM */) * (data->localData[0]->realVars[3987] /* sink.tube_hot[1].liquidStream.surf.T[6] variable */ - data->localData[0]->realVars[3287] /* sink.tube_hot[1].liquidStream.T[6] variable */));
  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6547(DATA *data, threadData_t *threadData);

extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6548(DATA *data, threadData_t *threadData);

extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6549(DATA *data, threadData_t *threadData);


/*
equation index: 2375
type: SIMPLE_ASSIGN
$DER.sink.tube_hot[1].liquidStream.HT[6].m.h = $DER.sink.tube_hot[1].liquidStream.HT[6].m.e + 0.001 * $DER.sink.tube_hot[1].liquidStream.HT[6].m.p
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2375(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2375};
  data->localData[0]->realVars[426] /* der(sink.tube_hot[1].liquidStream.HT[6].m.h) STATE_DER */ = data->localData[0]->realVars[755] /* der(sink.tube_hot[1].liquidStream.HT[6].m.e) DUMMY_DER */ + (0.001) * (data->localData[0]->realVars[855] /* der(sink.tube_hot[1].liquidStream.HT[6].m.p) DUMMY_DER */);
  TRACE_POP
}

/*
equation index: 2376
type: SIMPLE_ASSIGN
sink.tube_hot[1].wall_1L.T[6] = 2.0 * (sink.tube_hot[1].liquidStream.surf.T[6] * sink.tube_hot[1].wall_1L.G * 0.5 + sink.tube_hot[1].liquidStream.surf.Q_flow[6]) / sink.tube_hot[1].wall_1L.G
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2376(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2376};
  data->localData[0]->realVars[216] /* sink.tube_hot[1].wall_1L.T[6] STATE(1) */ = DIVISION_SIM((2.0) * (((data->localData[0]->realVars[3987] /* sink.tube_hot[1].liquidStream.surf.T[6] variable */) * (data->simulationInfo->realParameter[469] /* sink.tube_hot[1].wall_1L.G PARAM */)) * (0.5) + data->localData[0]->realVars[3887] /* sink.tube_hot[1].liquidStream.surf.Q_flow[6] variable */),data->simulationInfo->realParameter[469] /* sink.tube_hot[1].wall_1L.G PARAM */,"sink.tube_hot[1].wall_1L.G",equationIndexes);
  TRACE_POP
}

/*
equation index: 2377
type: SIMPLE_ASSIGN
sink.tube_hot[1].liquidStream.surf.T[5] = sink.tube_hot[1].liquidStream.TStart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2377(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2377};
  data->localData[0]->realVars[3986] /* sink.tube_hot[1].liquidStream.surf.T[5] variable */ = data->simulationInfo->realParameter[369] /* sink.tube_hot[1].liquidStream.TStart PARAM */;
  TRACE_POP
}

/*
equation index: 2378
type: SIMPLE_ASSIGN
sink.tube_hot[1].liquidStream.surf.Q_flow[5] = sink.tube_hot[1].liquidStream.HT[5].gamma * sink.tube_hot[1].liquidStream.All * (sink.tube_hot[1].liquidStream.surf.T[5] - sink.tube_hot[1].liquidStream.T[5])
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2378(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2378};
  data->localData[0]->realVars[3886] /* sink.tube_hot[1].liquidStream.surf.Q_flow[5] variable */ = (data->localData[0]->realVars[2286] /* sink.tube_hot[1].liquidStream.HT[5].gamma variable */) * ((data->simulationInfo->realParameter[139] /* sink.tube_hot[1].liquidStream.All PARAM */) * (data->localData[0]->realVars[3986] /* sink.tube_hot[1].liquidStream.surf.T[5] variable */ - data->localData[0]->realVars[3286] /* sink.tube_hot[1].liquidStream.T[5] variable */));
  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6533(DATA *data, threadData_t *threadData);

extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6534(DATA *data, threadData_t *threadData);

extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6535(DATA *data, threadData_t *threadData);


/*
equation index: 2382
type: SIMPLE_ASSIGN
$DER.sink.tube_hot[1].liquidStream.HT[5].m.h = $DER.sink.tube_hot[1].liquidStream.HT[5].m.e + 0.001 * $DER.sink.tube_hot[1].liquidStream.HT[5].m.p
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2382(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2382};
  data->localData[0]->realVars[425] /* der(sink.tube_hot[1].liquidStream.HT[5].m.h) STATE_DER */ = data->localData[0]->realVars[754] /* der(sink.tube_hot[1].liquidStream.HT[5].m.e) DUMMY_DER */ + (0.001) * (data->localData[0]->realVars[854] /* der(sink.tube_hot[1].liquidStream.HT[5].m.p) DUMMY_DER */);
  TRACE_POP
}

/*
equation index: 2383
type: SIMPLE_ASSIGN
sink.tube_hot[1].wall_1L.T[5] = 2.0 * (sink.tube_hot[1].liquidStream.surf.T[5] * sink.tube_hot[1].wall_1L.G * 0.5 + sink.tube_hot[1].liquidStream.surf.Q_flow[5]) / sink.tube_hot[1].wall_1L.G
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2383(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2383};
  data->localData[0]->realVars[215] /* sink.tube_hot[1].wall_1L.T[5] STATE(1) */ = DIVISION_SIM((2.0) * (((data->localData[0]->realVars[3986] /* sink.tube_hot[1].liquidStream.surf.T[5] variable */) * (data->simulationInfo->realParameter[469] /* sink.tube_hot[1].wall_1L.G PARAM */)) * (0.5) + data->localData[0]->realVars[3886] /* sink.tube_hot[1].liquidStream.surf.Q_flow[5] variable */),data->simulationInfo->realParameter[469] /* sink.tube_hot[1].wall_1L.G PARAM */,"sink.tube_hot[1].wall_1L.G",equationIndexes);
  TRACE_POP
}

/*
equation index: 2384
type: SIMPLE_ASSIGN
sink.tube_hot[1].liquidStream.surf.T[4] = sink.tube_hot[1].liquidStream.TStart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2384(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2384};
  data->localData[0]->realVars[3985] /* sink.tube_hot[1].liquidStream.surf.T[4] variable */ = data->simulationInfo->realParameter[369] /* sink.tube_hot[1].liquidStream.TStart PARAM */;
  TRACE_POP
}

/*
equation index: 2385
type: SIMPLE_ASSIGN
sink.tube_hot[1].liquidStream.surf.Q_flow[4] = sink.tube_hot[1].liquidStream.HT[4].gamma * sink.tube_hot[1].liquidStream.All * (sink.tube_hot[1].liquidStream.surf.T[4] - sink.tube_hot[1].liquidStream.T[4])
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2385(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2385};
  data->localData[0]->realVars[3885] /* sink.tube_hot[1].liquidStream.surf.Q_flow[4] variable */ = (data->localData[0]->realVars[2285] /* sink.tube_hot[1].liquidStream.HT[4].gamma variable */) * ((data->simulationInfo->realParameter[139] /* sink.tube_hot[1].liquidStream.All PARAM */) * (data->localData[0]->realVars[3985] /* sink.tube_hot[1].liquidStream.surf.T[4] variable */ - data->localData[0]->realVars[3285] /* sink.tube_hot[1].liquidStream.T[4] variable */));
  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6519(DATA *data, threadData_t *threadData);

extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6520(DATA *data, threadData_t *threadData);

extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6521(DATA *data, threadData_t *threadData);


/*
equation index: 2389
type: SIMPLE_ASSIGN
$DER.sink.tube_hot[1].liquidStream.HT[4].m.h = $DER.sink.tube_hot[1].liquidStream.HT[4].m.e + 0.001 * $DER.sink.tube_hot[1].liquidStream.HT[4].m.p
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2389(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2389};
  data->localData[0]->realVars[424] /* der(sink.tube_hot[1].liquidStream.HT[4].m.h) STATE_DER */ = data->localData[0]->realVars[753] /* der(sink.tube_hot[1].liquidStream.HT[4].m.e) DUMMY_DER */ + (0.001) * (data->localData[0]->realVars[853] /* der(sink.tube_hot[1].liquidStream.HT[4].m.p) DUMMY_DER */);
  TRACE_POP
}

/*
equation index: 2390
type: SIMPLE_ASSIGN
sink.tube_hot[1].wall_1L.T[4] = 2.0 * (sink.tube_hot[1].liquidStream.surf.T[4] * sink.tube_hot[1].wall_1L.G * 0.5 + sink.tube_hot[1].liquidStream.surf.Q_flow[4]) / sink.tube_hot[1].wall_1L.G
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2390(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2390};
  data->localData[0]->realVars[214] /* sink.tube_hot[1].wall_1L.T[4] STATE(1) */ = DIVISION_SIM((2.0) * (((data->localData[0]->realVars[3985] /* sink.tube_hot[1].liquidStream.surf.T[4] variable */) * (data->simulationInfo->realParameter[469] /* sink.tube_hot[1].wall_1L.G PARAM */)) * (0.5) + data->localData[0]->realVars[3885] /* sink.tube_hot[1].liquidStream.surf.Q_flow[4] variable */),data->simulationInfo->realParameter[469] /* sink.tube_hot[1].wall_1L.G PARAM */,"sink.tube_hot[1].wall_1L.G",equationIndexes);
  TRACE_POP
}

/*
equation index: 2391
type: SIMPLE_ASSIGN
sink.tube_hot[1].liquidStream.surf.T[3] = sink.tube_hot[1].liquidStream.TStart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2391(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2391};
  data->localData[0]->realVars[3984] /* sink.tube_hot[1].liquidStream.surf.T[3] variable */ = data->simulationInfo->realParameter[369] /* sink.tube_hot[1].liquidStream.TStart PARAM */;
  TRACE_POP
}

/*
equation index: 2392
type: SIMPLE_ASSIGN
sink.tube_hot[1].liquidStream.surf.Q_flow[3] = sink.tube_hot[1].liquidStream.HT[3].gamma * sink.tube_hot[1].liquidStream.All * (sink.tube_hot[1].liquidStream.surf.T[3] - sink.tube_hot[1].liquidStream.T[3])
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2392(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2392};
  data->localData[0]->realVars[3884] /* sink.tube_hot[1].liquidStream.surf.Q_flow[3] variable */ = (data->localData[0]->realVars[2284] /* sink.tube_hot[1].liquidStream.HT[3].gamma variable */) * ((data->simulationInfo->realParameter[139] /* sink.tube_hot[1].liquidStream.All PARAM */) * (data->localData[0]->realVars[3984] /* sink.tube_hot[1].liquidStream.surf.T[3] variable */ - data->localData[0]->realVars[3284] /* sink.tube_hot[1].liquidStream.T[3] variable */));
  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6505(DATA *data, threadData_t *threadData);

extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6506(DATA *data, threadData_t *threadData);

extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6507(DATA *data, threadData_t *threadData);


/*
equation index: 2396
type: SIMPLE_ASSIGN
$DER.sink.tube_hot[1].liquidStream.HT[3].m.h = $DER.sink.tube_hot[1].liquidStream.HT[3].m.e + 0.001 * $DER.sink.tube_hot[1].liquidStream.HT[3].m.p
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2396(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2396};
  data->localData[0]->realVars[423] /* der(sink.tube_hot[1].liquidStream.HT[3].m.h) STATE_DER */ = data->localData[0]->realVars[752] /* der(sink.tube_hot[1].liquidStream.HT[3].m.e) DUMMY_DER */ + (0.001) * (data->localData[0]->realVars[852] /* der(sink.tube_hot[1].liquidStream.HT[3].m.p) DUMMY_DER */);
  TRACE_POP
}

/*
equation index: 2397
type: SIMPLE_ASSIGN
sink.tube_hot[1].wall_1L.T[3] = 2.0 * (sink.tube_hot[1].liquidStream.surf.T[3] * sink.tube_hot[1].wall_1L.G * 0.5 + sink.tube_hot[1].liquidStream.surf.Q_flow[3]) / sink.tube_hot[1].wall_1L.G
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2397(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2397};
  data->localData[0]->realVars[213] /* sink.tube_hot[1].wall_1L.T[3] STATE(1) */ = DIVISION_SIM((2.0) * (((data->localData[0]->realVars[3984] /* sink.tube_hot[1].liquidStream.surf.T[3] variable */) * (data->simulationInfo->realParameter[469] /* sink.tube_hot[1].wall_1L.G PARAM */)) * (0.5) + data->localData[0]->realVars[3884] /* sink.tube_hot[1].liquidStream.surf.Q_flow[3] variable */),data->simulationInfo->realParameter[469] /* sink.tube_hot[1].wall_1L.G PARAM */,"sink.tube_hot[1].wall_1L.G",equationIndexes);
  TRACE_POP
}

/*
equation index: 2398
type: SIMPLE_ASSIGN
sink.tube_hot[1].liquidStream.surf.T[2] = sink.tube_hot[1].liquidStream.TStart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2398(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2398};
  data->localData[0]->realVars[3983] /* sink.tube_hot[1].liquidStream.surf.T[2] variable */ = data->simulationInfo->realParameter[369] /* sink.tube_hot[1].liquidStream.TStart PARAM */;
  TRACE_POP
}

/*
equation index: 2399
type: SIMPLE_ASSIGN
sink.tube_hot[1].liquidStream.surf.Q_flow[2] = sink.tube_hot[1].liquidStream.HT[2].gamma * sink.tube_hot[1].liquidStream.All * (sink.tube_hot[1].liquidStream.surf.T[2] - sink.tube_hot[1].liquidStream.T[2])
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2399(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2399};
  data->localData[0]->realVars[3883] /* sink.tube_hot[1].liquidStream.surf.Q_flow[2] variable */ = (data->localData[0]->realVars[2283] /* sink.tube_hot[1].liquidStream.HT[2].gamma variable */) * ((data->simulationInfo->realParameter[139] /* sink.tube_hot[1].liquidStream.All PARAM */) * (data->localData[0]->realVars[3983] /* sink.tube_hot[1].liquidStream.surf.T[2] variable */ - data->localData[0]->realVars[3283] /* sink.tube_hot[1].liquidStream.T[2] variable */));
  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6491(DATA *data, threadData_t *threadData);

extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6492(DATA *data, threadData_t *threadData);

extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6493(DATA *data, threadData_t *threadData);


/*
equation index: 2403
type: SIMPLE_ASSIGN
$DER.sink.tube_hot[1].liquidStream.HT[2].m.h = $DER.sink.tube_hot[1].liquidStream.HT[2].m.e + 0.001 * $DER.sink.tube_hot[1].liquidStream.HT[2].m.p
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2403(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2403};
  data->localData[0]->realVars[422] /* der(sink.tube_hot[1].liquidStream.HT[2].m.h) STATE_DER */ = data->localData[0]->realVars[751] /* der(sink.tube_hot[1].liquidStream.HT[2].m.e) DUMMY_DER */ + (0.001) * (data->localData[0]->realVars[851] /* der(sink.tube_hot[1].liquidStream.HT[2].m.p) DUMMY_DER */);
  TRACE_POP
}

/*
equation index: 2404
type: SIMPLE_ASSIGN
sink.tube_hot[1].wall_1L.T[2] = 2.0 * (sink.tube_hot[1].liquidStream.surf.T[2] * sink.tube_hot[1].wall_1L.G * 0.5 + sink.tube_hot[1].liquidStream.surf.Q_flow[2]) / sink.tube_hot[1].wall_1L.G
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2404(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2404};
  data->localData[0]->realVars[212] /* sink.tube_hot[1].wall_1L.T[2] STATE(1) */ = DIVISION_SIM((2.0) * (((data->localData[0]->realVars[3983] /* sink.tube_hot[1].liquidStream.surf.T[2] variable */) * (data->simulationInfo->realParameter[469] /* sink.tube_hot[1].wall_1L.G PARAM */)) * (0.5) + data->localData[0]->realVars[3883] /* sink.tube_hot[1].liquidStream.surf.Q_flow[2] variable */),data->simulationInfo->realParameter[469] /* sink.tube_hot[1].wall_1L.G PARAM */,"sink.tube_hot[1].wall_1L.G",equationIndexes);
  TRACE_POP
}

/*
equation index: 2405
type: SIMPLE_ASSIGN
sink.tube_hot[1].liquidStream.surf.T[1] = sink.tube_hot[1].liquidStream.TStart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2405(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2405};
  data->localData[0]->realVars[3982] /* sink.tube_hot[1].liquidStream.surf.T[1] variable */ = data->simulationInfo->realParameter[369] /* sink.tube_hot[1].liquidStream.TStart PARAM */;
  TRACE_POP
}

/*
equation index: 2406
type: SIMPLE_ASSIGN
sink.tube_hot[1].liquidStream.surf.Q_flow[1] = sink.tube_hot[1].liquidStream.HT[1].gamma * sink.tube_hot[1].liquidStream.All * (sink.tube_hot[1].liquidStream.surf.T[1] - sink.tube_hot[1].liquidStream.T[1])
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2406(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2406};
  data->localData[0]->realVars[3882] /* sink.tube_hot[1].liquidStream.surf.Q_flow[1] variable */ = (data->localData[0]->realVars[2282] /* sink.tube_hot[1].liquidStream.HT[1].gamma variable */) * ((data->simulationInfo->realParameter[139] /* sink.tube_hot[1].liquidStream.All PARAM */) * (data->localData[0]->realVars[3982] /* sink.tube_hot[1].liquidStream.surf.T[1] variable */ - data->localData[0]->realVars[3282] /* sink.tube_hot[1].liquidStream.T[1] variable */));
  TRACE_POP
}

/*
equation index: 2407
type: SIMPLE_ASSIGN
$DER.sink.tube_hot[1].liquidStream.E[1] = sink.tube_hot[1].liquidStream.wl_a[1] * (if sink.tube_hot[1].liquidStream.wl_a[1] > 0.0 then (max(-sink.tube_hot[2].liquidStream.wl_a[1], 1e-07) * sink.tube_hot[2].liquidStream.m[1].h + max(-sink.tube_hot[3].liquidStream.wl_a[1], 1e-07) * sink.tube_hot[3].liquidStream.m[1].h + max(-sink.tube_hot[4].liquidStream.wl_a[1], 1e-07) * sink.tube_hot[4].liquidStream.m[1].h + max(-sink.tube_hot[5].liquidStream.wl_a[1], 1e-07) * sink.tube_hot[5].liquidStream.m[1].h + max(-sink.tube_hot[6].liquidStream.wl_a[1], 1e-07) * sink.tube_hot[6].liquidStream.m[1].h + max(-sink.tube_hot[7].liquidStream.wl_a[1], 1e-07) * sink.tube_hot[7].liquidStream.m[1].h + max(-sink.tube_hot[8].liquidStream.wl_a[1], 1e-07) * sink.tube_hot[8].liquidStream.m[1].h + max(-sink.tube_hot[9].liquidStream.wl_a[1], 1e-07) * sink.tube_hot[9].liquidStream.m[1].h + max(-sink.tube_hot[10].liquidStream.wl_a[1], 1e-07) * sink.tube_hot[10].liquidStream.m[1].h + max(-sink.tube_cold.liquidStream.wl_b[4], 1e-07) * sink.pump.hob) / (max(-sink.tube_hot[2].liquidStream.wl_a[1], 1e-07) + max(-sink.tube_hot[3].liquidStream.wl_a[1], 1e-07) + max(-sink.tube_hot[4].liquidStream.wl_a[1], 1e-07) + max(-sink.tube_hot[5].liquidStream.wl_a[1], 1e-07) + max(-sink.tube_hot[6].liquidStream.wl_a[1], 1e-07) + max(-sink.tube_hot[7].liquidStream.wl_a[1], 1e-07) + max(-sink.tube_hot[8].liquidStream.wl_a[1], 1e-07) + max(-sink.tube_hot[9].liquidStream.wl_a[1], 1e-07) + max(-sink.tube_hot[10].liquidStream.wl_a[1], 1e-07) + max(-sink.tube_cold.liquidStream.wl_b[4], 1e-07)) else sink.tube_hot[1].liquidStream.m[1].h) + sink.tube_hot[1].liquidStream.surf.Q_flow[1] - sink.tube_hot[1].liquidStream.wl_a[1] * (if (-sink.tube_hot[1].liquidStream.wl_a[1]) > 0.0 then sink.tube_hot[1].liquidStream.HT[2].m.h else sink.tube_hot[1].liquidStream.m[1].h)
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2407(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2407};
  modelica_boolean tmp18;
  modelica_boolean tmp19;
  tmp18 = Greater(data->localData[0]->realVars[4082] /* sink.tube_hot[1].liquidStream.wl_a[1] DUMMY_STATE */,0.0);
  tmp19 = Greater((-data->localData[0]->realVars[4082] /* sink.tube_hot[1].liquidStream.wl_a[1] DUMMY_STATE */),0.0);
  data->localData[0]->realVars[650] /* der(sink.tube_hot[1].liquidStream.E[1]) DUMMY_DER */ = (data->localData[0]->realVars[4082] /* sink.tube_hot[1].liquidStream.wl_a[1] DUMMY_STATE */) * ((tmp18?DIVISION_SIM((fmax((-data->localData[0]->realVars[4083] /* sink.tube_hot[2].liquidStream.wl_a[1] DUMMY_STATE */),1e-07)) * (data->localData[0]->realVars[193] /* sink.tube_hot[2].liquidStream.m[1].h STATE(1) */) + (fmax((-data->localData[0]->realVars[4084] /* sink.tube_hot[3].liquidStream.wl_a[1] DUMMY_STATE */),1e-07)) * (data->localData[0]->realVars[195] /* sink.tube_hot[3].liquidStream.m[1].h STATE(1) */) + (fmax((-data->localData[0]->realVars[4085] /* sink.tube_hot[4].liquidStream.wl_a[1] DUMMY_STATE */),1e-07)) * (data->localData[0]->realVars[197] /* sink.tube_hot[4].liquidStream.m[1].h STATE(1) */) + (fmax((-data->localData[0]->realVars[4086] /* sink.tube_hot[5].liquidStream.wl_a[1] DUMMY_STATE */),1e-07)) * (data->localData[0]->realVars[199] /* sink.tube_hot[5].liquidStream.m[1].h STATE(1) */) + (fmax((-data->localData[0]->realVars[4087] /* sink.tube_hot[6].liquidStream.wl_a[1] DUMMY_STATE */),1e-07)) * (data->localData[0]->realVars[201] /* sink.tube_hot[6].liquidStream.m[1].h STATE(1) */) + (fmax((-data->localData[0]->realVars[4088] /* sink.tube_hot[7].liquidStream.wl_a[1] DUMMY_STATE */),1e-07)) * (data->localData[0]->realVars[203] /* sink.tube_hot[7].liquidStream.m[1].h STATE(1) */) + (fmax((-data->localData[0]->realVars[4089] /* sink.tube_hot[8].liquidStream.wl_a[1] DUMMY_STATE */),1e-07)) * (data->localData[0]->realVars[205] /* sink.tube_hot[8].liquidStream.m[1].h STATE(1) */) + (fmax((-data->localData[0]->realVars[4090] /* sink.tube_hot[9].liquidStream.wl_a[1] DUMMY_STATE */),1e-07)) * (data->localData[0]->realVars[207] /* sink.tube_hot[9].liquidStream.m[1].h STATE(1) */) + (fmax((-data->localData[0]->realVars[4091] /* sink.tube_hot[10].liquidStream.wl_a[1] DUMMY_STATE */),1e-07)) * (data->localData[0]->realVars[209] /* sink.tube_hot[10].liquidStream.m[1].h STATE(1) */) + (fmax((-data->localData[0]->realVars[1881] /* sink.tube_cold.liquidStream.wl_b[4] DUMMY_STATE */),1e-07)) * (data->localData[0]->realVars[1746] /* sink.pump.hob variable */),fmax((-data->localData[0]->realVars[4083] /* sink.tube_hot[2].liquidStream.wl_a[1] DUMMY_STATE */),1e-07) + fmax((-data->localData[0]->realVars[4084] /* sink.tube_hot[3].liquidStream.wl_a[1] DUMMY_STATE */),1e-07) + fmax((-data->localData[0]->realVars[4085] /* sink.tube_hot[4].liquidStream.wl_a[1] DUMMY_STATE */),1e-07) + fmax((-data->localData[0]->realVars[4086] /* sink.tube_hot[5].liquidStream.wl_a[1] DUMMY_STATE */),1e-07) + fmax((-data->localData[0]->realVars[4087] /* sink.tube_hot[6].liquidStream.wl_a[1] DUMMY_STATE */),1e-07) + fmax((-data->localData[0]->realVars[4088] /* sink.tube_hot[7].liquidStream.wl_a[1] DUMMY_STATE */),1e-07) + fmax((-data->localData[0]->realVars[4089] /* sink.tube_hot[8].liquidStream.wl_a[1] DUMMY_STATE */),1e-07) + fmax((-data->localData[0]->realVars[4090] /* sink.tube_hot[9].liquidStream.wl_a[1] DUMMY_STATE */),1e-07) + fmax((-data->localData[0]->realVars[4091] /* sink.tube_hot[10].liquidStream.wl_a[1] DUMMY_STATE */),1e-07) + fmax((-data->localData[0]->realVars[1881] /* sink.tube_cold.liquidStream.wl_b[4] DUMMY_STATE */),1e-07),"max(-sink.tube_hot[2].liquidStream.wl_a[1], 1e-07) + max(-sink.tube_hot[3].liquidStream.wl_a[1], 1e-07) + max(-sink.tube_hot[4].liquidStream.wl_a[1], 1e-07) + max(-sink.tube_hot[5].liquidStream.wl_a[1], 1e-07) + max(-sink.tube_hot[6].liquidStream.wl_a[1], 1e-07) + max(-sink.tube_hot[7].liquidStream.wl_a[1], 1e-07) + max(-sink.tube_hot[8].liquidStream.wl_a[1], 1e-07) + max(-sink.tube_hot[9].liquidStream.wl_a[1], 1e-07) + max(-sink.tube_hot[10].liquidStream.wl_a[1], 1e-07) + max(-sink.tube_cold.liquidStream.wl_b[4], 1e-07)",equationIndexes):data->localData[0]->realVars[191] /* sink.tube_hot[1].liquidStream.m[1].h STATE(1) */)) + data->localData[0]->realVars[3882] /* sink.tube_hot[1].liquidStream.surf.Q_flow[1] variable */ - ((data->localData[0]->realVars[4082] /* sink.tube_hot[1].liquidStream.wl_a[1] DUMMY_STATE */) * ((tmp19?data->localData[0]->realVars[111] /* sink.tube_hot[1].liquidStream.HT[2].m.h STATE(1) */:data->localData[0]->realVars[191] /* sink.tube_hot[1].liquidStream.m[1].h STATE(1) */)));
  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6943(DATA *data, threadData_t *threadData);

extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6944(DATA *data, threadData_t *threadData);


/*
equation index: 2410
type: SIMPLE_ASSIGN
$DER.sink.tube_hot[1].liquidStream.m[1].h = $DER.sink.tube_hot[1].liquidStream.HT[1].m.e + 0.001 * $DER.sink.tube_hot[1].liquidStream.HT[1].m.p
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2410(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2410};
  data->localData[0]->realVars[502] /* der(sink.tube_hot[1].liquidStream.m[1].h) STATE_DER */ = data->localData[0]->realVars[750] /* der(sink.tube_hot[1].liquidStream.HT[1].m.e) DUMMY_DER */ + (0.001) * (data->localData[0]->realVars[850] /* der(sink.tube_hot[1].liquidStream.HT[1].m.p) DUMMY_DER */);
  TRACE_POP
}

/*
equation index: 2411
type: SIMPLE_ASSIGN
$DER.sink.pump.hib = ((max(-sink.tube_hot[1].liquidStream.wl_a[1], 1e-07) * $DER.sink.tube_hot[1].liquidStream.m[1].h + (if noEvent((-sink.tube_hot[1].liquidStream.wl_a[1]) > 1e-07) then -$DER.sink.tube_hot[1].liquidStream.wl_a[1] else 0.0) * sink.tube_hot[1].liquidStream.m[1].h + max(-sink.tube_hot[2].liquidStream.wl_a[1], 1e-07) * $DER.sink.tube_hot[2].liquidStream.m[1].h + (if noEvent((-sink.tube_hot[2].liquidStream.wl_a[1]) > 1e-07) then -$DER.sink.tube_hot[2].liquidStream.wl_a[1] else 0.0) * sink.tube_hot[2].liquidStream.m[1].h + max(-sink.tube_hot[3].liquidStream.wl_a[1], 1e-07) * $DER.sink.tube_hot[3].liquidStream.m[1].h + (if noEvent((-sink.tube_hot[3].liquidStream.wl_a[1]) > 1e-07) then -$DER.sink.tube_hot[3].liquidStream.wl_a[1] else 0.0) * sink.tube_hot[3].liquidStream.m[1].h + max(-sink.tube_hot[4].liquidStream.wl_a[1], 1e-07) * $DER.sink.tube_hot[4].liquidStream.m[1].h + (if noEvent((-sink.tube_hot[4].liquidStream.wl_a[1]) > 1e-07) then -$DER.sink.tube_hot[4].liquidStream.wl_a[1] else 0.0) * sink.tube_hot[4].liquidStream.m[1].h + max(-sink.tube_hot[5].liquidStream.wl_a[1], 1e-07) * $DER.sink.tube_hot[5].liquidStream.m[1].h + (if noEvent((-sink.tube_hot[5].liquidStream.wl_a[1]) > 1e-07) then -$DER.sink.tube_hot[5].liquidStream.wl_a[1] else 0.0) * sink.tube_hot[5].liquidStream.m[1].h + max(-sink.tube_hot[6].liquidStream.wl_a[1], 1e-07) * $DER.sink.tube_hot[6].liquidStream.m[1].h + (if noEvent((-sink.tube_hot[6].liquidStream.wl_a[1]) > 1e-07) then -$DER.sink.tube_hot[6].liquidStream.wl_a[1] else 0.0) * sink.tube_hot[6].liquidStream.m[1].h + max(-sink.tube_hot[7].liquidStream.wl_a[1], 1e-07) * $DER.sink.tube_hot[7].liquidStream.m[1].h + (if noEvent((-sink.tube_hot[7].liquidStream.wl_a[1]) > 1e-07) then -$DER.sink.tube_hot[7].liquidStream.wl_a[1] else 0.0) * sink.tube_hot[7].liquidStream.m[1].h + max(-sink.tube_hot[8].liquidStream.wl_a[1], 1e-07) * $DER.sink.tube_hot[8].liquidStream.m[1].h + (if noEvent((-sink.tube_hot[8].liquidStream.wl_a[1]) > 1e-07) then -$DER.sink.tube_hot[8].liquidStream.wl_a[1] else 0.0) * sink.tube_hot[8].liquidStream.m[1].h + max(-sink.tube_hot[9].liquidStream.wl_a[1], 1e-07) * $DER.sink.tube_hot[9].liquidStream.m[1].h + (if noEvent((-sink.tube_hot[9].liquidStream.wl_a[1]) > 1e-07) then -$DER.sink.tube_hot[9].liquidStream.wl_a[1] else 0.0) * sink.tube_hot[9].liquidStream.m[1].h + max(-sink.tube_hot[10].liquidStream.wl_a[1], 1e-07) * $DER.sink.tube_hot[10].liquidStream.m[1].h + (if noEvent((-sink.tube_hot[10].liquidStream.wl_a[1]) > 1e-07) then -$DER.sink.tube_hot[10].liquidStream.wl_a[1] else 0.0) * sink.tube_hot[10].liquidStream.m[1].h) * (max(-sink.tube_hot[1].liquidStream.wl_a[1], 1e-07) + max(-sink.tube_hot[2].liquidStream.wl_a[1], 1e-07) + max(-sink.tube_hot[3].liquidStream.wl_a[1], 1e-07) + max(-sink.tube_hot[4].liquidStream.wl_a[1], 1e-07) + max(-sink.tube_hot[5].liquidStream.wl_a[1], 1e-07) + max(-sink.tube_hot[6].liquidStream.wl_a[1], 1e-07) + max(-sink.tube_hot[7].liquidStream.wl_a[1], 1e-07) + max(-sink.tube_hot[8].liquidStream.wl_a[1], 1e-07) + max(-sink.tube_hot[9].liquidStream.wl_a[1], 1e-07) + max(-sink.tube_hot[10].liquidStream.wl_a[1], 1e-07)) + ((-max(-sink.tube_hot[9].liquidStream.wl_a[1], 1e-07)) * sink.tube_hot[9].liquidStream.m[1].h - max(-sink.tube_hot[10].liquidStream.wl_a[1], 1e-07) * sink.tube_hot[10].liquidStream.m[1].h - max(-sink.tube_hot[8].liquidStream.wl_a[1], 1e-07) * sink.tube_hot[8].liquidStream.m[1].h - max(-sink.tube_hot[7].liquidStream.wl_a[1], 1e-07) * sink.tube_hot[7].liquidStream.m[1].h - max(-sink.tube_hot[6].liquidStream.wl_a[1], 1e-07) * sink.tube_hot[6].liquidStream.m[1].h - max(-sink.tube_hot[5].liquidStream.wl_a[1], 1e-07) * sink.tube_hot[5].liquidStream.m[1].h - max(-sink.tube_hot[4].liquidStream.wl_a[1], 1e-07) * sink.tube_hot[4].liquidStream.m[1].h - max(-sink.tube_hot[3].liquidStream.wl_a[1], 1e-07) * sink.tube_hot[3].liquidStream.m[1].h - max(-sink.tube_hot[2].liquidStream.wl_a[1], 1e-07) * sink.tube_hot[2].liquidStream.m[1].h - max(-sink.tube_hot[1].liquidStream.wl_a[1], 1e-07) * sink.tube_hot[1].liquidStream.m[1].h) * ((if noEvent((-sink.tube_hot[1].liquidStream.wl_a[1]) > 1e-07) then -$DER.sink.tube_hot[1].liquidStream.wl_a[1] else 0.0) + (if noEvent((-sink.tube_hot[2].liquidStream.wl_a[1]) > 1e-07) then -$DER.sink.tube_hot[2].liquidStream.wl_a[1] else 0.0) + (if noEvent((-sink.tube_hot[3].liquidStream.wl_a[1]) > 1e-07) then -$DER.sink.tube_hot[3].liquidStream.wl_a[1] else 0.0) + (if noEvent((-sink.tube_hot[4].liquidStream.wl_a[1]) > 1e-07) then -$DER.sink.tube_hot[4].liquidStream.wl_a[1] else 0.0) + (if noEvent((-sink.tube_hot[5].liquidStream.wl_a[1]) > 1e-07) then -$DER.sink.tube_hot[5].liquidStream.wl_a[1] else 0.0) + (if noEvent((-sink.tube_hot[6].liquidStream.wl_a[1]) > 1e-07) then -$DER.sink.tube_hot[6].liquidStream.wl_a[1] else 0.0) + (if noEvent((-sink.tube_hot[7].liquidStream.wl_a[1]) > 1e-07) then -$DER.sink.tube_hot[7].liquidStream.wl_a[1] else 0.0) + (if noEvent((-sink.tube_hot[8].liquidStream.wl_a[1]) > 1e-07) then -$DER.sink.tube_hot[8].liquidStream.wl_a[1] else 0.0) + (if noEvent((-sink.tube_hot[9].liquidStream.wl_a[1]) > 1e-07) then -$DER.sink.tube_hot[9].liquidStream.wl_a[1] else 0.0) + (if noEvent((-sink.tube_hot[10].liquidStream.wl_a[1]) > 1e-07) then -$DER.sink.tube_hot[10].liquidStream.wl_a[1] else 0.0))) / (max(-sink.tube_hot[1].liquidStream.wl_a[1], 1e-07) + max(-sink.tube_hot[2].liquidStream.wl_a[1], 1e-07) + max(-sink.tube_hot[3].liquidStream.wl_a[1], 1e-07) + max(-sink.tube_hot[4].liquidStream.wl_a[1], 1e-07) + max(-sink.tube_hot[5].liquidStream.wl_a[1], 1e-07) + max(-sink.tube_hot[6].liquidStream.wl_a[1], 1e-07) + max(-sink.tube_hot[7].liquidStream.wl_a[1], 1e-07) + max(-sink.tube_hot[8].liquidStream.wl_a[1], 1e-07) + max(-sink.tube_hot[9].liquidStream.wl_a[1], 1e-07) + max(-sink.tube_hot[10].liquidStream.wl_a[1], 1e-07)) ^ 2.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2411(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2411};
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
  modelica_real tmp40;
  tmp20 = Greater((-data->localData[0]->realVars[4082] /* sink.tube_hot[1].liquidStream.wl_a[1] DUMMY_STATE */),1e-07);
  tmp21 = Greater((-data->localData[0]->realVars[4083] /* sink.tube_hot[2].liquidStream.wl_a[1] DUMMY_STATE */),1e-07);
  tmp22 = Greater((-data->localData[0]->realVars[4084] /* sink.tube_hot[3].liquidStream.wl_a[1] DUMMY_STATE */),1e-07);
  tmp23 = Greater((-data->localData[0]->realVars[4085] /* sink.tube_hot[4].liquidStream.wl_a[1] DUMMY_STATE */),1e-07);
  tmp24 = Greater((-data->localData[0]->realVars[4086] /* sink.tube_hot[5].liquidStream.wl_a[1] DUMMY_STATE */),1e-07);
  tmp25 = Greater((-data->localData[0]->realVars[4087] /* sink.tube_hot[6].liquidStream.wl_a[1] DUMMY_STATE */),1e-07);
  tmp26 = Greater((-data->localData[0]->realVars[4088] /* sink.tube_hot[7].liquidStream.wl_a[1] DUMMY_STATE */),1e-07);
  tmp27 = Greater((-data->localData[0]->realVars[4089] /* sink.tube_hot[8].liquidStream.wl_a[1] DUMMY_STATE */),1e-07);
  tmp28 = Greater((-data->localData[0]->realVars[4090] /* sink.tube_hot[9].liquidStream.wl_a[1] DUMMY_STATE */),1e-07);
  tmp29 = Greater((-data->localData[0]->realVars[4091] /* sink.tube_hot[10].liquidStream.wl_a[1] DUMMY_STATE */),1e-07);
  tmp30 = Greater((-data->localData[0]->realVars[4082] /* sink.tube_hot[1].liquidStream.wl_a[1] DUMMY_STATE */),1e-07);
  tmp31 = Greater((-data->localData[0]->realVars[4083] /* sink.tube_hot[2].liquidStream.wl_a[1] DUMMY_STATE */),1e-07);
  tmp32 = Greater((-data->localData[0]->realVars[4084] /* sink.tube_hot[3].liquidStream.wl_a[1] DUMMY_STATE */),1e-07);
  tmp33 = Greater((-data->localData[0]->realVars[4085] /* sink.tube_hot[4].liquidStream.wl_a[1] DUMMY_STATE */),1e-07);
  tmp34 = Greater((-data->localData[0]->realVars[4086] /* sink.tube_hot[5].liquidStream.wl_a[1] DUMMY_STATE */),1e-07);
  tmp35 = Greater((-data->localData[0]->realVars[4087] /* sink.tube_hot[6].liquidStream.wl_a[1] DUMMY_STATE */),1e-07);
  tmp36 = Greater((-data->localData[0]->realVars[4088] /* sink.tube_hot[7].liquidStream.wl_a[1] DUMMY_STATE */),1e-07);
  tmp37 = Greater((-data->localData[0]->realVars[4089] /* sink.tube_hot[8].liquidStream.wl_a[1] DUMMY_STATE */),1e-07);
  tmp38 = Greater((-data->localData[0]->realVars[4090] /* sink.tube_hot[9].liquidStream.wl_a[1] DUMMY_STATE */),1e-07);
  tmp39 = Greater((-data->localData[0]->realVars[4091] /* sink.tube_hot[10].liquidStream.wl_a[1] DUMMY_STATE */),1e-07);
  tmp40 = fmax((-data->localData[0]->realVars[4082] /* sink.tube_hot[1].liquidStream.wl_a[1] DUMMY_STATE */),1e-07) + fmax((-data->localData[0]->realVars[4083] /* sink.tube_hot[2].liquidStream.wl_a[1] DUMMY_STATE */),1e-07) + fmax((-data->localData[0]->realVars[4084] /* sink.tube_hot[3].liquidStream.wl_a[1] DUMMY_STATE */),1e-07) + fmax((-data->localData[0]->realVars[4085] /* sink.tube_hot[4].liquidStream.wl_a[1] DUMMY_STATE */),1e-07) + fmax((-data->localData[0]->realVars[4086] /* sink.tube_hot[5].liquidStream.wl_a[1] DUMMY_STATE */),1e-07) + fmax((-data->localData[0]->realVars[4087] /* sink.tube_hot[6].liquidStream.wl_a[1] DUMMY_STATE */),1e-07) + fmax((-data->localData[0]->realVars[4088] /* sink.tube_hot[7].liquidStream.wl_a[1] DUMMY_STATE */),1e-07) + fmax((-data->localData[0]->realVars[4089] /* sink.tube_hot[8].liquidStream.wl_a[1] DUMMY_STATE */),1e-07) + fmax((-data->localData[0]->realVars[4090] /* sink.tube_hot[9].liquidStream.wl_a[1] DUMMY_STATE */),1e-07) + fmax((-data->localData[0]->realVars[4091] /* sink.tube_hot[10].liquidStream.wl_a[1] DUMMY_STATE */),1e-07);
  data->localData[0]->realVars[623] /* der(sink.pump.hib) DUMMY_DER */ = DIVISION_SIM(((fmax((-data->localData[0]->realVars[4082] /* sink.tube_hot[1].liquidStream.wl_a[1] DUMMY_STATE */),1e-07)) * (data->localData[0]->realVars[502] /* der(sink.tube_hot[1].liquidStream.m[1].h) STATE_DER */) + ((tmp20?(-data->localData[0]->realVars[1050] /* der(sink.tube_hot[1].liquidStream.wl_a[1]) DUMMY_DER */):0.0)) * (data->localData[0]->realVars[191] /* sink.tube_hot[1].liquidStream.m[1].h STATE(1) */) + (fmax((-data->localData[0]->realVars[4083] /* sink.tube_hot[2].liquidStream.wl_a[1] DUMMY_STATE */),1e-07)) * (data->localData[0]->realVars[504] /* der(sink.tube_hot[2].liquidStream.m[1].h) STATE_DER */) + ((tmp21?(-data->localData[0]->realVars[1051] /* der(sink.tube_hot[2].liquidStream.wl_a[1]) DUMMY_DER */):0.0)) * (data->localData[0]->realVars[193] /* sink.tube_hot[2].liquidStream.m[1].h STATE(1) */) + (fmax((-data->localData[0]->realVars[4084] /* sink.tube_hot[3].liquidStream.wl_a[1] DUMMY_STATE */),1e-07)) * (data->localData[0]->realVars[506] /* der(sink.tube_hot[3].liquidStream.m[1].h) STATE_DER */) + ((tmp22?(-data->localData[0]->realVars[1052] /* der(sink.tube_hot[3].liquidStream.wl_a[1]) DUMMY_DER */):0.0)) * (data->localData[0]->realVars[195] /* sink.tube_hot[3].liquidStream.m[1].h STATE(1) */) + (fmax((-data->localData[0]->realVars[4085] /* sink.tube_hot[4].liquidStream.wl_a[1] DUMMY_STATE */),1e-07)) * (data->localData[0]->realVars[508] /* der(sink.tube_hot[4].liquidStream.m[1].h) STATE_DER */) + ((tmp23?(-data->localData[0]->realVars[1053] /* der(sink.tube_hot[4].liquidStream.wl_a[1]) DUMMY_DER */):0.0)) * (data->localData[0]->realVars[197] /* sink.tube_hot[4].liquidStream.m[1].h STATE(1) */) + (fmax((-data->localData[0]->realVars[4086] /* sink.tube_hot[5].liquidStream.wl_a[1] DUMMY_STATE */),1e-07)) * (data->localData[0]->realVars[510] /* der(sink.tube_hot[5].liquidStream.m[1].h) STATE_DER */) + ((tmp24?(-data->localData[0]->realVars[1054] /* der(sink.tube_hot[5].liquidStream.wl_a[1]) DUMMY_DER */):0.0)) * (data->localData[0]->realVars[199] /* sink.tube_hot[5].liquidStream.m[1].h STATE(1) */) + (fmax((-data->localData[0]->realVars[4087] /* sink.tube_hot[6].liquidStream.wl_a[1] DUMMY_STATE */),1e-07)) * (data->localData[0]->realVars[512] /* der(sink.tube_hot[6].liquidStream.m[1].h) STATE_DER */) + ((tmp25?(-data->localData[0]->realVars[1055] /* der(sink.tube_hot[6].liquidStream.wl_a[1]) DUMMY_DER */):0.0)) * (data->localData[0]->realVars[201] /* sink.tube_hot[6].liquidStream.m[1].h STATE(1) */) + (fmax((-data->localData[0]->realVars[4088] /* sink.tube_hot[7].liquidStream.wl_a[1] DUMMY_STATE */),1e-07)) * (data->localData[0]->realVars[514] /* der(sink.tube_hot[7].liquidStream.m[1].h) STATE_DER */) + ((tmp26?(-data->localData[0]->realVars[1056] /* der(sink.tube_hot[7].liquidStream.wl_a[1]) DUMMY_DER */):0.0)) * (data->localData[0]->realVars[203] /* sink.tube_hot[7].liquidStream.m[1].h STATE(1) */) + (fmax((-data->localData[0]->realVars[4089] /* sink.tube_hot[8].liquidStream.wl_a[1] DUMMY_STATE */),1e-07)) * (data->localData[0]->realVars[516] /* der(sink.tube_hot[8].liquidStream.m[1].h) STATE_DER */) + ((tmp27?(-data->localData[0]->realVars[1057] /* der(sink.tube_hot[8].liquidStream.wl_a[1]) DUMMY_DER */):0.0)) * (data->localData[0]->realVars[205] /* sink.tube_hot[8].liquidStream.m[1].h STATE(1) */) + (fmax((-data->localData[0]->realVars[4090] /* sink.tube_hot[9].liquidStream.wl_a[1] DUMMY_STATE */),1e-07)) * (data->localData[0]->realVars[518] /* der(sink.tube_hot[9].liquidStream.m[1].h) STATE_DER */) + ((tmp28?(-data->localData[0]->realVars[1058] /* der(sink.tube_hot[9].liquidStream.wl_a[1]) DUMMY_DER */):0.0)) * (data->localData[0]->realVars[207] /* sink.tube_hot[9].liquidStream.m[1].h STATE(1) */) + (fmax((-data->localData[0]->realVars[4091] /* sink.tube_hot[10].liquidStream.wl_a[1] DUMMY_STATE */),1e-07)) * (data->localData[0]->realVars[520] /* der(sink.tube_hot[10].liquidStream.m[1].h) STATE_DER */) + ((tmp29?(-data->localData[0]->realVars[1059] /* der(sink.tube_hot[10].liquidStream.wl_a[1]) DUMMY_DER */):0.0)) * (data->localData[0]->realVars[209] /* sink.tube_hot[10].liquidStream.m[1].h STATE(1) */)) * (fmax((-data->localData[0]->realVars[4082] /* sink.tube_hot[1].liquidStream.wl_a[1] DUMMY_STATE */),1e-07) + fmax((-data->localData[0]->realVars[4083] /* sink.tube_hot[2].liquidStream.wl_a[1] DUMMY_STATE */),1e-07) + fmax((-data->localData[0]->realVars[4084] /* sink.tube_hot[3].liquidStream.wl_a[1] DUMMY_STATE */),1e-07) + fmax((-data->localData[0]->realVars[4085] /* sink.tube_hot[4].liquidStream.wl_a[1] DUMMY_STATE */),1e-07) + fmax((-data->localData[0]->realVars[4086] /* sink.tube_hot[5].liquidStream.wl_a[1] DUMMY_STATE */),1e-07) + fmax((-data->localData[0]->realVars[4087] /* sink.tube_hot[6].liquidStream.wl_a[1] DUMMY_STATE */),1e-07) + fmax((-data->localData[0]->realVars[4088] /* sink.tube_hot[7].liquidStream.wl_a[1] DUMMY_STATE */),1e-07) + fmax((-data->localData[0]->realVars[4089] /* sink.tube_hot[8].liquidStream.wl_a[1] DUMMY_STATE */),1e-07) + fmax((-data->localData[0]->realVars[4090] /* sink.tube_hot[9].liquidStream.wl_a[1] DUMMY_STATE */),1e-07) + fmax((-data->localData[0]->realVars[4091] /* sink.tube_hot[10].liquidStream.wl_a[1] DUMMY_STATE */),1e-07)) + (((-fmax((-data->localData[0]->realVars[4090] /* sink.tube_hot[9].liquidStream.wl_a[1] DUMMY_STATE */),1e-07))) * (data->localData[0]->realVars[207] /* sink.tube_hot[9].liquidStream.m[1].h STATE(1) */) - ((fmax((-data->localData[0]->realVars[4091] /* sink.tube_hot[10].liquidStream.wl_a[1] DUMMY_STATE */),1e-07)) * (data->localData[0]->realVars[209] /* sink.tube_hot[10].liquidStream.m[1].h STATE(1) */)) - ((fmax((-data->localData[0]->realVars[4089] /* sink.tube_hot[8].liquidStream.wl_a[1] DUMMY_STATE */),1e-07)) * (data->localData[0]->realVars[205] /* sink.tube_hot[8].liquidStream.m[1].h STATE(1) */)) - ((fmax((-data->localData[0]->realVars[4088] /* sink.tube_hot[7].liquidStream.wl_a[1] DUMMY_STATE */),1e-07)) * (data->localData[0]->realVars[203] /* sink.tube_hot[7].liquidStream.m[1].h STATE(1) */)) - ((fmax((-data->localData[0]->realVars[4087] /* sink.tube_hot[6].liquidStream.wl_a[1] DUMMY_STATE */),1e-07)) * (data->localData[0]->realVars[201] /* sink.tube_hot[6].liquidStream.m[1].h STATE(1) */)) - ((fmax((-data->localData[0]->realVars[4086] /* sink.tube_hot[5].liquidStream.wl_a[1] DUMMY_STATE */),1e-07)) * (data->localData[0]->realVars[199] /* sink.tube_hot[5].liquidStream.m[1].h STATE(1) */)) - ((fmax((-data->localData[0]->realVars[4085] /* sink.tube_hot[4].liquidStream.wl_a[1] DUMMY_STATE */),1e-07)) * (data->localData[0]->realVars[197] /* sink.tube_hot[4].liquidStream.m[1].h STATE(1) */)) - ((fmax((-data->localData[0]->realVars[4084] /* sink.tube_hot[3].liquidStream.wl_a[1] DUMMY_STATE */),1e-07)) * (data->localData[0]->realVars[195] /* sink.tube_hot[3].liquidStream.m[1].h STATE(1) */)) - ((fmax((-data->localData[0]->realVars[4083] /* sink.tube_hot[2].liquidStream.wl_a[1] DUMMY_STATE */),1e-07)) * (data->localData[0]->realVars[193] /* sink.tube_hot[2].liquidStream.m[1].h STATE(1) */)) - ((fmax((-data->localData[0]->realVars[4082] /* sink.tube_hot[1].liquidStream.wl_a[1] DUMMY_STATE */),1e-07)) * (data->localData[0]->realVars[191] /* sink.tube_hot[1].liquidStream.m[1].h STATE(1) */))) * ((tmp30?(-data->localData[0]->realVars[1050] /* der(sink.tube_hot[1].liquidStream.wl_a[1]) DUMMY_DER */):0.0) + (tmp31?(-data->localData[0]->realVars[1051] /* der(sink.tube_hot[2].liquidStream.wl_a[1]) DUMMY_DER */):0.0) + (tmp32?(-data->localData[0]->realVars[1052] /* der(sink.tube_hot[3].liquidStream.wl_a[1]) DUMMY_DER */):0.0) + (tmp33?(-data->localData[0]->realVars[1053] /* der(sink.tube_hot[4].liquidStream.wl_a[1]) DUMMY_DER */):0.0) + (tmp34?(-data->localData[0]->realVars[1054] /* der(sink.tube_hot[5].liquidStream.wl_a[1]) DUMMY_DER */):0.0) + (tmp35?(-data->localData[0]->realVars[1055] /* der(sink.tube_hot[6].liquidStream.wl_a[1]) DUMMY_DER */):0.0) + (tmp36?(-data->localData[0]->realVars[1056] /* der(sink.tube_hot[7].liquidStream.wl_a[1]) DUMMY_DER */):0.0) + (tmp37?(-data->localData[0]->realVars[1057] /* der(sink.tube_hot[8].liquidStream.wl_a[1]) DUMMY_DER */):0.0) + (tmp38?(-data->localData[0]->realVars[1058] /* der(sink.tube_hot[9].liquidStream.wl_a[1]) DUMMY_DER */):0.0) + (tmp39?(-data->localData[0]->realVars[1059] /* der(sink.tube_hot[10].liquidStream.wl_a[1]) DUMMY_DER */):0.0)),(tmp40 * tmp40),"(max(-sink.tube_hot[1].liquidStream.wl_a[1], 1e-07) + max(-sink.tube_hot[2].liquidStream.wl_a[1], 1e-07) + max(-sink.tube_hot[3].liquidStream.wl_a[1], 1e-07) + max(-sink.tube_hot[4].liquidStream.wl_a[1], 1e-07) + max(-sink.tube_hot[5].liquidStream.wl_a[1], 1e-07) + max(-sink.tube_hot[6].liquidStream.wl_a[1], 1e-07) + max(-sink.tube_hot[7].liquidStream.wl_a[1], 1e-07) + max(-sink.tube_hot[8].liquidStream.wl_a[1], 1e-07) + max(-sink.tube_hot[9].liquidStream.wl_a[1], 1e-07) + max(-sink.tube_hot[10].liquidStream.wl_a[1], 1e-07)) ^ 2.0",equationIndexes);
  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_7417(DATA *data, threadData_t *threadData);


/*
equation index: 2413
type: SIMPLE_ASSIGN
sink.tube_hot[1].wall_1L.T[1] = 2.0 * (sink.tube_hot[1].liquidStream.surf.T[1] * sink.tube_hot[1].wall_1L.G * 0.5 + sink.tube_hot[1].liquidStream.surf.Q_flow[1]) / sink.tube_hot[1].wall_1L.G
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2413(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2413};
  data->localData[0]->realVars[211] /* sink.tube_hot[1].wall_1L.T[1] STATE(1) */ = DIVISION_SIM((2.0) * (((data->localData[0]->realVars[3982] /* sink.tube_hot[1].liquidStream.surf.T[1] variable */) * (data->simulationInfo->realParameter[469] /* sink.tube_hot[1].wall_1L.G PARAM */)) * (0.5) + data->localData[0]->realVars[3882] /* sink.tube_hot[1].liquidStream.surf.Q_flow[1] variable */),data->simulationInfo->realParameter[469] /* sink.tube_hot[1].wall_1L.G PARAM */,"sink.tube_hot[1].wall_1L.G",equationIndexes);
  TRACE_POP
}

/*
equation index: 2414
type: ALGORITHM

  spreaderY0 := $START.spreaderY0;
  spreaderX0 := $START.spreaderX0;
  sink.initialTemperature := $START.sink.initialTemperature;
  sink.initialTemperature := initialTemperature;
  (spreaderX0, spreaderY0) := T05_3DICE_Integration.T05_Interface3DICE.Parse(args);
  Modelica.Utilities.Streams.print("args = " + args, "");
  Modelica.Utilities.Streams.print("initialTemperature = " + String(initialTemperature, 6, 0, true), "");
  Modelica.Utilities.Streams.print("spreaderX0 = " + String(spreaderX0, 6, 0, true), "");
  Modelica.Utilities.Streams.print("spreaderY0 = " + String(spreaderY0, 6, 0, true), "");
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2414(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2414};
  static const MMC_DEFSTRINGLIT(tmp41,7,"args = ");
  static const MMC_DEFSTRINGLIT(tmp42,21,"initialTemperature = ");
  modelica_string tmp43;
  static const MMC_DEFSTRINGLIT(tmp44,13,"spreaderX0 = ");
  modelica_string tmp45;
  static const MMC_DEFSTRINGLIT(tmp46,13,"spreaderY0 = ");
  modelica_string tmp47;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  data->simulationInfo->realParameter[523] /* spreaderY0 PARAM */ = data->simulationInfo->realParameter[523] /* spreaderY0 PARAM */;

  data->simulationInfo->realParameter[522] /* spreaderX0 PARAM */ = data->simulationInfo->realParameter[522] /* spreaderX0 PARAM */;

  data->simulationInfo->realParameter[26] /* sink.initialTemperature PARAM */ = data->simulationInfo->realParameter[26] /* sink.initialTemperature PARAM */;

  data->simulationInfo->realParameter[26] /* sink.initialTemperature PARAM */ = data->simulationInfo->realParameter[0] /* initialTemperature PARAM */;

  data->simulationInfo->realParameter[522] /* spreaderX0 PARAM */ = omc_T05__3DICE__Integration_T05__Interface3DICE_Parse(threadData, data->simulationInfo->stringParameter[0] /* args PARAM */ ,&data->simulationInfo->realParameter[523] /* spreaderY0 PARAM */);

  tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp41),data->simulationInfo->stringParameter[0] /* args PARAM */);
  omc_Modelica_Utilities_Streams_print(threadData, tmpMeta[0], (modelica_string) mmc_emptystring);

  tmp43 = modelica_real_to_modelica_string(data->simulationInfo->realParameter[0] /* initialTemperature PARAM */, ((modelica_integer) 6), ((modelica_integer) 0), 1);
  tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp42),tmp43);
  omc_Modelica_Utilities_Streams_print(threadData, tmpMeta[0], (modelica_string) mmc_emptystring);

  tmp45 = modelica_real_to_modelica_string(data->simulationInfo->realParameter[522] /* spreaderX0 PARAM */, ((modelica_integer) 6), ((modelica_integer) 0), 1);
  tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp44),tmp45);
  omc_Modelica_Utilities_Streams_print(threadData, tmpMeta[0], (modelica_string) mmc_emptystring);

  tmp47 = modelica_real_to_modelica_string(data->simulationInfo->realParameter[523] /* spreaderY0 PARAM */, ((modelica_integer) 6), ((modelica_integer) 0), 1);
  tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp46),tmp47);
  omc_Modelica_Utilities_Streams_print(threadData, tmpMeta[0], (modelica_string) mmc_emptystring);
  TRACE_POP
}

/*
equation index: 2415
type: SIMPLE_ASSIGN
sink.base.Tstart = sink.initialTemperature
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2415(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2415};
  data->simulationInfo->realParameter[1] /* sink.base.Tstart PARAM */ = data->simulationInfo->realParameter[26] /* sink.initialTemperature PARAM */;
  TRACE_POP
}

/*
equation index: 2416
type: SIMPLE_ASSIGN
$START.sink.base.T[10,10] = sink.base.Tstart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2416(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2416};
  data->modelData->realVarsData[99].attribute /* sink.base.T[10,10] STATE(1) */.start = data->simulationInfo->realParameter[1] /* sink.base.Tstart PARAM */;
    data->localData[0]->realVars[99] /* sink.base.T[10,10] STATE(1) */ = data->modelData->realVarsData[99].attribute /* sink.base.T[10,10] STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[99].info /* sink.base.T[10,10] */.name, (modelica_real) data->localData[0]->realVars[99] /* sink.base.T[10,10] STATE(1) */);
  TRACE_POP
}

/*
equation index: 2417
type: SIMPLE_ASSIGN
sink.base.T[10,10] = sink.base.Tstart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2417(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2417};
  data->localData[0]->realVars[99] /* sink.base.T[10,10] STATE(1) */ = data->simulationInfo->realParameter[1] /* sink.base.Tstart PARAM */;
  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4784(DATA *data, threadData_t *threadData);


/*
equation index: 2423
type: LINEAR

<var>sink.hpConnector[10].vHP.T[10]</var>
<row>

</row>
<matrix>
</matrix>
*/
OMC_DISABLE_OPT
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2423(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2423};
  /* Linear equation system */
  int retValue;
  double aux_x[1] = { data->localData[1]->realVars[1742] /* sink.hpConnector[10].vHP.T[10] variable */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 2423 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  
  retValue = solve_linear_system(data, threadData, 5, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,2423};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 2423 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[1742] /* sink.hpConnector[10].vHP.T[10] variable */ = aux_x[0];

  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6614(DATA *data, threadData_t *threadData);


/*
equation index: 2425
type: SIMPLE_ASSIGN
$START.sink.base.T[10,9] = sink.base.Tstart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2425(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2425};
  data->modelData->realVarsData[98].attribute /* sink.base.T[10,9] STATE(1) */.start = data->simulationInfo->realParameter[1] /* sink.base.Tstart PARAM */;
    data->localData[0]->realVars[98] /* sink.base.T[10,9] STATE(1) */ = data->modelData->realVarsData[98].attribute /* sink.base.T[10,9] STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[98].info /* sink.base.T[10,9] */.name, (modelica_real) data->localData[0]->realVars[98] /* sink.base.T[10,9] STATE(1) */);
  TRACE_POP
}

/*
equation index: 2426
type: SIMPLE_ASSIGN
sink.base.T[10,9] = sink.base.Tstart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2426(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2426};
  data->localData[0]->realVars[98] /* sink.base.T[10,9] STATE(1) */ = data->simulationInfo->realParameter[1] /* sink.base.Tstart PARAM */;
  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4785(DATA *data, threadData_t *threadData);


/*
equation index: 2432
type: LINEAR

<var>sink.hpConnector[9].vHP.T[10]</var>
<row>

</row>
<matrix>
</matrix>
*/
OMC_DISABLE_OPT
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2432(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2432};
  /* Linear equation system */
  int retValue;
  double aux_x[1] = { data->localData[1]->realVars[1732] /* sink.hpConnector[9].vHP.T[10] variable */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 2432 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  
  retValue = solve_linear_system(data, threadData, 6, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,2432};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 2432 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[1732] /* sink.hpConnector[9].vHP.T[10] variable */ = aux_x[0];

  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_5378(DATA *data, threadData_t *threadData);


/*
equation index: 2434
type: SIMPLE_ASSIGN
$START.sink.base.T[10,8] = sink.base.Tstart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2434(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2434};
  data->modelData->realVarsData[97].attribute /* sink.base.T[10,8] STATE(1) */.start = data->simulationInfo->realParameter[1] /* sink.base.Tstart PARAM */;
    data->localData[0]->realVars[97] /* sink.base.T[10,8] STATE(1) */ = data->modelData->realVarsData[97].attribute /* sink.base.T[10,8] STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[97].info /* sink.base.T[10,8] */.name, (modelica_real) data->localData[0]->realVars[97] /* sink.base.T[10,8] STATE(1) */);
  TRACE_POP
}

/*
equation index: 2435
type: SIMPLE_ASSIGN
sink.base.T[10,8] = sink.base.Tstart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2435(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2435};
  data->localData[0]->realVars[97] /* sink.base.T[10,8] STATE(1) */ = data->simulationInfo->realParameter[1] /* sink.base.Tstart PARAM */;
  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4786(DATA *data, threadData_t *threadData);


/*
equation index: 2441
type: LINEAR

<var>sink.hpConnector[8].vHP.T[10]</var>
<row>

</row>
<matrix>
</matrix>
*/
OMC_DISABLE_OPT
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2441(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2441};
  /* Linear equation system */
  int retValue;
  double aux_x[1] = { data->localData[1]->realVars[1722] /* sink.hpConnector[8].vHP.T[10] variable */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 2441 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  
  retValue = solve_linear_system(data, threadData, 7, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,2441};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 2441 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[1722] /* sink.hpConnector[8].vHP.T[10] variable */ = aux_x[0];

  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_5553(DATA *data, threadData_t *threadData);


/*
equation index: 2443
type: SIMPLE_ASSIGN
$START.sink.base.T[10,7] = sink.base.Tstart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2443(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2443};
  data->modelData->realVarsData[96].attribute /* sink.base.T[10,7] STATE(1) */.start = data->simulationInfo->realParameter[1] /* sink.base.Tstart PARAM */;
    data->localData[0]->realVars[96] /* sink.base.T[10,7] STATE(1) */ = data->modelData->realVarsData[96].attribute /* sink.base.T[10,7] STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[96].info /* sink.base.T[10,7] */.name, (modelica_real) data->localData[0]->realVars[96] /* sink.base.T[10,7] STATE(1) */);
  TRACE_POP
}

/*
equation index: 2444
type: SIMPLE_ASSIGN
sink.base.T[10,7] = sink.base.Tstart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2444(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2444};
  data->localData[0]->realVars[96] /* sink.base.T[10,7] STATE(1) */ = data->simulationInfo->realParameter[1] /* sink.base.Tstart PARAM */;
  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4787(DATA *data, threadData_t *threadData);


/*
equation index: 2450
type: LINEAR

<var>sink.hpConnector[7].vHP.T[10]</var>
<row>

</row>
<matrix>
</matrix>
*/
OMC_DISABLE_OPT
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2450(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2450};
  /* Linear equation system */
  int retValue;
  double aux_x[1] = { data->localData[1]->realVars[1712] /* sink.hpConnector[7].vHP.T[10] variable */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 2450 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  
  retValue = solve_linear_system(data, threadData, 8, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,2450};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 2450 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[1712] /* sink.hpConnector[7].vHP.T[10] variable */ = aux_x[0];

  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_5728(DATA *data, threadData_t *threadData);


/*
equation index: 2452
type: SIMPLE_ASSIGN
$START.sink.base.T[10,6] = sink.base.Tstart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2452(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2452};
  data->modelData->realVarsData[95].attribute /* sink.base.T[10,6] STATE(1) */.start = data->simulationInfo->realParameter[1] /* sink.base.Tstart PARAM */;
    data->localData[0]->realVars[95] /* sink.base.T[10,6] STATE(1) */ = data->modelData->realVarsData[95].attribute /* sink.base.T[10,6] STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[95].info /* sink.base.T[10,6] */.name, (modelica_real) data->localData[0]->realVars[95] /* sink.base.T[10,6] STATE(1) */);
  TRACE_POP
}

/*
equation index: 2453
type: SIMPLE_ASSIGN
sink.base.T[10,6] = sink.base.Tstart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2453(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2453};
  data->localData[0]->realVars[95] /* sink.base.T[10,6] STATE(1) */ = data->simulationInfo->realParameter[1] /* sink.base.Tstart PARAM */;
  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4788(DATA *data, threadData_t *threadData);


/*
equation index: 2459
type: LINEAR

<var>sink.hpConnector[6].vHP.T[10]</var>
<row>

</row>
<matrix>
</matrix>
*/
OMC_DISABLE_OPT
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2459(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2459};
  /* Linear equation system */
  int retValue;
  double aux_x[1] = { data->localData[1]->realVars[1702] /* sink.hpConnector[6].vHP.T[10] variable */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 2459 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  
  retValue = solve_linear_system(data, threadData, 9, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,2459};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 2459 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[1702] /* sink.hpConnector[6].vHP.T[10] variable */ = aux_x[0];

  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_5903(DATA *data, threadData_t *threadData);


/*
equation index: 2461
type: SIMPLE_ASSIGN
$START.sink.base.T[10,5] = sink.base.Tstart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2461(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2461};
  data->modelData->realVarsData[94].attribute /* sink.base.T[10,5] STATE(1) */.start = data->simulationInfo->realParameter[1] /* sink.base.Tstart PARAM */;
    data->localData[0]->realVars[94] /* sink.base.T[10,5] STATE(1) */ = data->modelData->realVarsData[94].attribute /* sink.base.T[10,5] STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[94].info /* sink.base.T[10,5] */.name, (modelica_real) data->localData[0]->realVars[94] /* sink.base.T[10,5] STATE(1) */);
  TRACE_POP
}

/*
equation index: 2462
type: SIMPLE_ASSIGN
sink.base.T[10,5] = sink.base.Tstart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2462(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2462};
  data->localData[0]->realVars[94] /* sink.base.T[10,5] STATE(1) */ = data->simulationInfo->realParameter[1] /* sink.base.Tstart PARAM */;
  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4789(DATA *data, threadData_t *threadData);


/*
equation index: 2468
type: LINEAR

<var>sink.hpConnector[5].vHP.T[10]</var>
<row>

</row>
<matrix>
</matrix>
*/
OMC_DISABLE_OPT
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2468(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2468};
  /* Linear equation system */
  int retValue;
  double aux_x[1] = { data->localData[1]->realVars[1692] /* sink.hpConnector[5].vHP.T[10] variable */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 2468 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  
  retValue = solve_linear_system(data, threadData, 10, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,2468};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 2468 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[1692] /* sink.hpConnector[5].vHP.T[10] variable */ = aux_x[0];

  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_5975(DATA *data, threadData_t *threadData);


/*
equation index: 2470
type: SIMPLE_ASSIGN
$START.sink.base.T[10,4] = sink.base.Tstart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2470(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2470};
  data->modelData->realVarsData[93].attribute /* sink.base.T[10,4] STATE(1) */.start = data->simulationInfo->realParameter[1] /* sink.base.Tstart PARAM */;
    data->localData[0]->realVars[93] /* sink.base.T[10,4] STATE(1) */ = data->modelData->realVarsData[93].attribute /* sink.base.T[10,4] STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[93].info /* sink.base.T[10,4] */.name, (modelica_real) data->localData[0]->realVars[93] /* sink.base.T[10,4] STATE(1) */);
  TRACE_POP
}

/*
equation index: 2471
type: SIMPLE_ASSIGN
sink.base.T[10,4] = sink.base.Tstart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2471(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2471};
  data->localData[0]->realVars[93] /* sink.base.T[10,4] STATE(1) */ = data->simulationInfo->realParameter[1] /* sink.base.Tstart PARAM */;
  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4790(DATA *data, threadData_t *threadData);


/*
equation index: 2477
type: LINEAR

<var>sink.hpConnector[4].vHP.T[10]</var>
<row>

</row>
<matrix>
</matrix>
*/
OMC_DISABLE_OPT
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2477(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2477};
  /* Linear equation system */
  int retValue;
  double aux_x[1] = { data->localData[1]->realVars[1682] /* sink.hpConnector[4].vHP.T[10] variable */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 2477 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  
  retValue = solve_linear_system(data, threadData, 11, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,2477};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 2477 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[1682] /* sink.hpConnector[4].vHP.T[10] variable */ = aux_x[0];

  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6768(DATA *data, threadData_t *threadData);


/*
equation index: 2479
type: SIMPLE_ASSIGN
$START.sink.base.T[10,3] = sink.base.Tstart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2479(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2479};
  data->modelData->realVarsData[92].attribute /* sink.base.T[10,3] STATE(1) */.start = data->simulationInfo->realParameter[1] /* sink.base.Tstart PARAM */;
    data->localData[0]->realVars[92] /* sink.base.T[10,3] STATE(1) */ = data->modelData->realVarsData[92].attribute /* sink.base.T[10,3] STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[92].info /* sink.base.T[10,3] */.name, (modelica_real) data->localData[0]->realVars[92] /* sink.base.T[10,3] STATE(1) */);
  TRACE_POP
}

/*
equation index: 2480
type: SIMPLE_ASSIGN
sink.base.T[10,3] = sink.base.Tstart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2480(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2480};
  data->localData[0]->realVars[92] /* sink.base.T[10,3] STATE(1) */ = data->simulationInfo->realParameter[1] /* sink.base.Tstart PARAM */;
  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4791(DATA *data, threadData_t *threadData);


/*
equation index: 2486
type: LINEAR

<var>sink.hpConnector[3].vHP.T[10]</var>
<row>

</row>
<matrix>
</matrix>
*/
OMC_DISABLE_OPT
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2486(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2486};
  /* Linear equation system */
  int retValue;
  double aux_x[1] = { data->localData[1]->realVars[1672] /* sink.hpConnector[3].vHP.T[10] variable */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 2486 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  
  retValue = solve_linear_system(data, threadData, 12, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,2486};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 2486 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[1672] /* sink.hpConnector[3].vHP.T[10] variable */ = aux_x[0];

  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6150(DATA *data, threadData_t *threadData);


/*
equation index: 2488
type: SIMPLE_ASSIGN
$START.sink.base.T[10,2] = sink.base.Tstart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2488(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2488};
  data->modelData->realVarsData[91].attribute /* sink.base.T[10,2] STATE(1) */.start = data->simulationInfo->realParameter[1] /* sink.base.Tstart PARAM */;
    data->localData[0]->realVars[91] /* sink.base.T[10,2] STATE(1) */ = data->modelData->realVarsData[91].attribute /* sink.base.T[10,2] STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[91].info /* sink.base.T[10,2] */.name, (modelica_real) data->localData[0]->realVars[91] /* sink.base.T[10,2] STATE(1) */);
  TRACE_POP
}

/*
equation index: 2489
type: SIMPLE_ASSIGN
sink.base.T[10,2] = sink.base.Tstart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2489(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2489};
  data->localData[0]->realVars[91] /* sink.base.T[10,2] STATE(1) */ = data->simulationInfo->realParameter[1] /* sink.base.Tstart PARAM */;
  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4792(DATA *data, threadData_t *threadData);


/*
equation index: 2495
type: LINEAR

<var>sink.hpConnector[2].vHP.T[10]</var>
<row>

</row>
<matrix>
</matrix>
*/
OMC_DISABLE_OPT
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2495(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2495};
  /* Linear equation system */
  int retValue;
  double aux_x[1] = { data->localData[1]->realVars[1662] /* sink.hpConnector[2].vHP.T[10] variable */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 2495 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  
  retValue = solve_linear_system(data, threadData, 13, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,2495};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 2495 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[1662] /* sink.hpConnector[2].vHP.T[10] variable */ = aux_x[0];

  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6325(DATA *data, threadData_t *threadData);


/*
equation index: 2497
type: SIMPLE_ASSIGN
$START.sink.base.T[10,1] = sink.base.Tstart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2497(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2497};
  data->modelData->realVarsData[90].attribute /* sink.base.T[10,1] STATE(1) */.start = data->simulationInfo->realParameter[1] /* sink.base.Tstart PARAM */;
    data->localData[0]->realVars[90] /* sink.base.T[10,1] STATE(1) */ = data->modelData->realVarsData[90].attribute /* sink.base.T[10,1] STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[90].info /* sink.base.T[10,1] */.name, (modelica_real) data->localData[0]->realVars[90] /* sink.base.T[10,1] STATE(1) */);
  TRACE_POP
}

/*
equation index: 2498
type: SIMPLE_ASSIGN
sink.base.T[10,1] = sink.base.Tstart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2498(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2498};
  data->localData[0]->realVars[90] /* sink.base.T[10,1] STATE(1) */ = data->simulationInfo->realParameter[1] /* sink.base.Tstart PARAM */;
  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4793(DATA *data, threadData_t *threadData);


/*
equation index: 2504
type: LINEAR

<var>sink.hpConnector[1].vHP.T[10]</var>
<row>

</row>
<matrix>
</matrix>
*/
OMC_DISABLE_OPT
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2504(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2504};
  /* Linear equation system */
  int retValue;
  double aux_x[1] = { data->localData[1]->realVars[1652] /* sink.hpConnector[1].vHP.T[10] variable */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 2504 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  
  retValue = solve_linear_system(data, threadData, 14, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,2504};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 2504 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[1652] /* sink.hpConnector[1].vHP.T[10] variable */ = aux_x[0];

  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6603(DATA *data, threadData_t *threadData);


/*
equation index: 2506
type: SIMPLE_ASSIGN
$START.sink.base.T[9,10] = sink.base.Tstart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2506(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2506};
  data->modelData->realVarsData[89].attribute /* sink.base.T[9,10] STATE(1) */.start = data->simulationInfo->realParameter[1] /* sink.base.Tstart PARAM */;
    data->localData[0]->realVars[89] /* sink.base.T[9,10] STATE(1) */ = data->modelData->realVarsData[89].attribute /* sink.base.T[9,10] STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[89].info /* sink.base.T[9,10] */.name, (modelica_real) data->localData[0]->realVars[89] /* sink.base.T[9,10] STATE(1) */);
  TRACE_POP
}

/*
equation index: 2507
type: SIMPLE_ASSIGN
sink.base.T[9,10] = sink.base.Tstart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2507(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2507};
  data->localData[0]->realVars[89] /* sink.base.T[9,10] STATE(1) */ = data->simulationInfo->realParameter[1] /* sink.base.Tstart PARAM */;
  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4794(DATA *data, threadData_t *threadData);

extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4758(DATA *data, threadData_t *threadData);


/*
equation index: 2514
type: LINEAR

<var>sink.hpConnector[10].vHP.T[9]</var>
<row>

</row>
<matrix>
</matrix>
*/
OMC_DISABLE_OPT
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2514(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2514};
  /* Linear equation system */
  int retValue;
  double aux_x[1] = { data->localData[1]->realVars[1741] /* sink.hpConnector[10].vHP.T[9] variable */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 2514 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  
  retValue = solve_linear_system(data, threadData, 15, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,2514};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 2514 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[1741] /* sink.hpConnector[10].vHP.T[9] variable */ = aux_x[0];

  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6624(DATA *data, threadData_t *threadData);


/*
equation index: 2516
type: SIMPLE_ASSIGN
$START.sink.base.T[9,9] = sink.base.Tstart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2516(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2516};
  data->modelData->realVarsData[88].attribute /* sink.base.T[9,9] STATE(1) */.start = data->simulationInfo->realParameter[1] /* sink.base.Tstart PARAM */;
    data->localData[0]->realVars[88] /* sink.base.T[9,9] STATE(1) */ = data->modelData->realVarsData[88].attribute /* sink.base.T[9,9] STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[88].info /* sink.base.T[9,9] */.name, (modelica_real) data->localData[0]->realVars[88] /* sink.base.T[9,9] STATE(1) */);
  TRACE_POP
}

/*
equation index: 2517
type: SIMPLE_ASSIGN
sink.base.T[9,9] = sink.base.Tstart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2517(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2517};
  data->localData[0]->realVars[88] /* sink.base.T[9,9] STATE(1) */ = data->simulationInfo->realParameter[1] /* sink.base.Tstart PARAM */;
  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4795(DATA *data, threadData_t *threadData);

extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4752(DATA *data, threadData_t *threadData);


/*
equation index: 2524
type: LINEAR

<var>sink.hpConnector[9].vHP.T[9]</var>
<row>

</row>
<matrix>
</matrix>
*/
OMC_DISABLE_OPT
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2524(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2524};
  /* Linear equation system */
  int retValue;
  double aux_x[1] = { data->localData[1]->realVars[1731] /* sink.hpConnector[9].vHP.T[9] variable */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 2524 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  
  retValue = solve_linear_system(data, threadData, 16, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,2524};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 2524 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[1731] /* sink.hpConnector[9].vHP.T[9] variable */ = aux_x[0];

  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_5367(DATA *data, threadData_t *threadData);


/*
equation index: 2526
type: SIMPLE_ASSIGN
$START.sink.base.T[9,8] = sink.base.Tstart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2526(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2526};
  data->modelData->realVarsData[87].attribute /* sink.base.T[9,8] STATE(1) */.start = data->simulationInfo->realParameter[1] /* sink.base.Tstart PARAM */;
    data->localData[0]->realVars[87] /* sink.base.T[9,8] STATE(1) */ = data->modelData->realVarsData[87].attribute /* sink.base.T[9,8] STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[87].info /* sink.base.T[9,8] */.name, (modelica_real) data->localData[0]->realVars[87] /* sink.base.T[9,8] STATE(1) */);
  TRACE_POP
}

/*
equation index: 2527
type: SIMPLE_ASSIGN
sink.base.T[9,8] = sink.base.Tstart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2527(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2527};
  data->localData[0]->realVars[87] /* sink.base.T[9,8] STATE(1) */ = data->simulationInfo->realParameter[1] /* sink.base.Tstart PARAM */;
  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4796(DATA *data, threadData_t *threadData);

extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4746(DATA *data, threadData_t *threadData);


/*
equation index: 2534
type: LINEAR

<var>sink.hpConnector[8].vHP.T[9]</var>
<row>

</row>
<matrix>
</matrix>
*/
OMC_DISABLE_OPT
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2534(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2534};
  /* Linear equation system */
  int retValue;
  double aux_x[1] = { data->localData[1]->realVars[1721] /* sink.hpConnector[8].vHP.T[9] variable */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 2534 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  
  retValue = solve_linear_system(data, threadData, 17, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,2534};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 2534 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[1721] /* sink.hpConnector[8].vHP.T[9] variable */ = aux_x[0];

  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_5542(DATA *data, threadData_t *threadData);


/*
equation index: 2536
type: SIMPLE_ASSIGN
$START.sink.base.T[9,7] = sink.base.Tstart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2536(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2536};
  data->modelData->realVarsData[86].attribute /* sink.base.T[9,7] STATE(1) */.start = data->simulationInfo->realParameter[1] /* sink.base.Tstart PARAM */;
    data->localData[0]->realVars[86] /* sink.base.T[9,7] STATE(1) */ = data->modelData->realVarsData[86].attribute /* sink.base.T[9,7] STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[86].info /* sink.base.T[9,7] */.name, (modelica_real) data->localData[0]->realVars[86] /* sink.base.T[9,7] STATE(1) */);
  TRACE_POP
}

/*
equation index: 2537
type: SIMPLE_ASSIGN
sink.base.T[9,7] = sink.base.Tstart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2537(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2537};
  data->localData[0]->realVars[86] /* sink.base.T[9,7] STATE(1) */ = data->simulationInfo->realParameter[1] /* sink.base.Tstart PARAM */;
  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4797(DATA *data, threadData_t *threadData);

extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4740(DATA *data, threadData_t *threadData);


/*
equation index: 2544
type: LINEAR

<var>sink.hpConnector[7].vHP.T[9]</var>
<row>

</row>
<matrix>
</matrix>
*/
OMC_DISABLE_OPT
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2544(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2544};
  /* Linear equation system */
  int retValue;
  double aux_x[1] = { data->localData[1]->realVars[1711] /* sink.hpConnector[7].vHP.T[9] variable */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 2544 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  
  retValue = solve_linear_system(data, threadData, 18, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,2544};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 2544 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[1711] /* sink.hpConnector[7].vHP.T[9] variable */ = aux_x[0];

  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_5717(DATA *data, threadData_t *threadData);


/*
equation index: 2546
type: SIMPLE_ASSIGN
$START.sink.base.T[9,6] = sink.base.Tstart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2546(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2546};
  data->modelData->realVarsData[85].attribute /* sink.base.T[9,6] STATE(1) */.start = data->simulationInfo->realParameter[1] /* sink.base.Tstart PARAM */;
    data->localData[0]->realVars[85] /* sink.base.T[9,6] STATE(1) */ = data->modelData->realVarsData[85].attribute /* sink.base.T[9,6] STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[85].info /* sink.base.T[9,6] */.name, (modelica_real) data->localData[0]->realVars[85] /* sink.base.T[9,6] STATE(1) */);
  TRACE_POP
}

/*
equation index: 2547
type: SIMPLE_ASSIGN
sink.base.T[9,6] = sink.base.Tstart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2547(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2547};
  data->localData[0]->realVars[85] /* sink.base.T[9,6] STATE(1) */ = data->simulationInfo->realParameter[1] /* sink.base.Tstart PARAM */;
  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4798(DATA *data, threadData_t *threadData);

extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4734(DATA *data, threadData_t *threadData);


/*
equation index: 2554
type: LINEAR

<var>sink.hpConnector[6].vHP.T[9]</var>
<row>

</row>
<matrix>
</matrix>
*/
OMC_DISABLE_OPT
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2554(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2554};
  /* Linear equation system */
  int retValue;
  double aux_x[1] = { data->localData[1]->realVars[1701] /* sink.hpConnector[6].vHP.T[9] variable */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 2554 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  
  retValue = solve_linear_system(data, threadData, 19, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,2554};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 2554 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[1701] /* sink.hpConnector[6].vHP.T[9] variable */ = aux_x[0];

  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_5892(DATA *data, threadData_t *threadData);


/*
equation index: 2556
type: SIMPLE_ASSIGN
$START.sink.base.T[9,5] = sink.base.Tstart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2556(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2556};
  data->modelData->realVarsData[84].attribute /* sink.base.T[9,5] STATE(1) */.start = data->simulationInfo->realParameter[1] /* sink.base.Tstart PARAM */;
    data->localData[0]->realVars[84] /* sink.base.T[9,5] STATE(1) */ = data->modelData->realVarsData[84].attribute /* sink.base.T[9,5] STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[84].info /* sink.base.T[9,5] */.name, (modelica_real) data->localData[0]->realVars[84] /* sink.base.T[9,5] STATE(1) */);
  TRACE_POP
}

/*
equation index: 2557
type: SIMPLE_ASSIGN
sink.base.T[9,5] = sink.base.Tstart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2557(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2557};
  data->localData[0]->realVars[84] /* sink.base.T[9,5] STATE(1) */ = data->simulationInfo->realParameter[1] /* sink.base.Tstart PARAM */;
  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4799(DATA *data, threadData_t *threadData);

extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4728(DATA *data, threadData_t *threadData);


/*
equation index: 2564
type: LINEAR

<var>sink.hpConnector[5].vHP.T[9]</var>
<row>

</row>
<matrix>
</matrix>
*/
OMC_DISABLE_OPT
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2564(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2564};
  /* Linear equation system */
  int retValue;
  double aux_x[1] = { data->localData[1]->realVars[1691] /* sink.hpConnector[5].vHP.T[9] variable */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 2564 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  
  retValue = solve_linear_system(data, threadData, 20, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,2564};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 2564 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[1691] /* sink.hpConnector[5].vHP.T[9] variable */ = aux_x[0];

  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_5985(DATA *data, threadData_t *threadData);


/*
equation index: 2566
type: SIMPLE_ASSIGN
$START.sink.base.T[9,4] = sink.base.Tstart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2566(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2566};
  data->modelData->realVarsData[83].attribute /* sink.base.T[9,4] STATE(1) */.start = data->simulationInfo->realParameter[1] /* sink.base.Tstart PARAM */;
    data->localData[0]->realVars[83] /* sink.base.T[9,4] STATE(1) */ = data->modelData->realVarsData[83].attribute /* sink.base.T[9,4] STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[83].info /* sink.base.T[9,4] */.name, (modelica_real) data->localData[0]->realVars[83] /* sink.base.T[9,4] STATE(1) */);
  TRACE_POP
}

/*
equation index: 2567
type: SIMPLE_ASSIGN
sink.base.T[9,4] = sink.base.Tstart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2567(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2567};
  data->localData[0]->realVars[83] /* sink.base.T[9,4] STATE(1) */ = data->simulationInfo->realParameter[1] /* sink.base.Tstart PARAM */;
  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4800(DATA *data, threadData_t *threadData);

extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4722(DATA *data, threadData_t *threadData);


/*
equation index: 2574
type: LINEAR

<var>sink.hpConnector[4].vHP.T[9]</var>
<row>

</row>
<matrix>
</matrix>
*/
OMC_DISABLE_OPT
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2574(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2574};
  /* Linear equation system */
  int retValue;
  double aux_x[1] = { data->localData[1]->realVars[1681] /* sink.hpConnector[4].vHP.T[9] variable */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 2574 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  
  retValue = solve_linear_system(data, threadData, 21, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,2574};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 2574 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[1681] /* sink.hpConnector[4].vHP.T[9] variable */ = aux_x[0];

  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6778(DATA *data, threadData_t *threadData);


/*
equation index: 2576
type: SIMPLE_ASSIGN
$START.sink.base.T[9,3] = sink.base.Tstart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2576(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2576};
  data->modelData->realVarsData[82].attribute /* sink.base.T[9,3] STATE(1) */.start = data->simulationInfo->realParameter[1] /* sink.base.Tstart PARAM */;
    data->localData[0]->realVars[82] /* sink.base.T[9,3] STATE(1) */ = data->modelData->realVarsData[82].attribute /* sink.base.T[9,3] STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[82].info /* sink.base.T[9,3] */.name, (modelica_real) data->localData[0]->realVars[82] /* sink.base.T[9,3] STATE(1) */);
  TRACE_POP
}

/*
equation index: 2577
type: SIMPLE_ASSIGN
sink.base.T[9,3] = sink.base.Tstart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2577(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2577};
  data->localData[0]->realVars[82] /* sink.base.T[9,3] STATE(1) */ = data->simulationInfo->realParameter[1] /* sink.base.Tstart PARAM */;
  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4801(DATA *data, threadData_t *threadData);

extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4716(DATA *data, threadData_t *threadData);


/*
equation index: 2584
type: LINEAR

<var>sink.hpConnector[3].vHP.T[9]</var>
<row>

</row>
<matrix>
</matrix>
*/
OMC_DISABLE_OPT
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2584(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2584};
  /* Linear equation system */
  int retValue;
  double aux_x[1] = { data->localData[1]->realVars[1671] /* sink.hpConnector[3].vHP.T[9] variable */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 2584 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  
  retValue = solve_linear_system(data, threadData, 22, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,2584};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 2584 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[1671] /* sink.hpConnector[3].vHP.T[9] variable */ = aux_x[0];

  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6160(DATA *data, threadData_t *threadData);


/*
equation index: 2586
type: SIMPLE_ASSIGN
$START.sink.base.T[9,2] = sink.base.Tstart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2586(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2586};
  data->modelData->realVarsData[81].attribute /* sink.base.T[9,2] STATE(1) */.start = data->simulationInfo->realParameter[1] /* sink.base.Tstart PARAM */;
    data->localData[0]->realVars[81] /* sink.base.T[9,2] STATE(1) */ = data->modelData->realVarsData[81].attribute /* sink.base.T[9,2] STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[81].info /* sink.base.T[9,2] */.name, (modelica_real) data->localData[0]->realVars[81] /* sink.base.T[9,2] STATE(1) */);
  TRACE_POP
}

/*
equation index: 2587
type: SIMPLE_ASSIGN
sink.base.T[9,2] = sink.base.Tstart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2587(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2587};
  data->localData[0]->realVars[81] /* sink.base.T[9,2] STATE(1) */ = data->simulationInfo->realParameter[1] /* sink.base.Tstart PARAM */;
  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4802(DATA *data, threadData_t *threadData);

extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4710(DATA *data, threadData_t *threadData);


/*
equation index: 2594
type: LINEAR

<var>sink.hpConnector[2].vHP.T[9]</var>
<row>

</row>
<matrix>
</matrix>
*/
OMC_DISABLE_OPT
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2594(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2594};
  /* Linear equation system */
  int retValue;
  double aux_x[1] = { data->localData[1]->realVars[1661] /* sink.hpConnector[2].vHP.T[9] variable */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 2594 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  
  retValue = solve_linear_system(data, threadData, 23, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,2594};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 2594 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[1661] /* sink.hpConnector[2].vHP.T[9] variable */ = aux_x[0];

  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6335(DATA *data, threadData_t *threadData);


/*
equation index: 2596
type: SIMPLE_ASSIGN
$START.sink.base.T[9,1] = sink.base.Tstart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2596(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2596};
  data->modelData->realVarsData[80].attribute /* sink.base.T[9,1] STATE(1) */.start = data->simulationInfo->realParameter[1] /* sink.base.Tstart PARAM */;
    data->localData[0]->realVars[80] /* sink.base.T[9,1] STATE(1) */ = data->modelData->realVarsData[80].attribute /* sink.base.T[9,1] STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[80].info /* sink.base.T[9,1] */.name, (modelica_real) data->localData[0]->realVars[80] /* sink.base.T[9,1] STATE(1) */);
  TRACE_POP
}

/*
equation index: 2597
type: SIMPLE_ASSIGN
sink.base.T[9,1] = sink.base.Tstart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2597(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2597};
  data->localData[0]->realVars[80] /* sink.base.T[9,1] STATE(1) */ = data->simulationInfo->realParameter[1] /* sink.base.Tstart PARAM */;
  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4803(DATA *data, threadData_t *threadData);

extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4704(DATA *data, threadData_t *threadData);


/*
equation index: 2604
type: LINEAR

<var>sink.hpConnector[1].vHP.T[9]</var>
<row>

</row>
<matrix>
</matrix>
*/
OMC_DISABLE_OPT
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2604(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2604};
  /* Linear equation system */
  int retValue;
  double aux_x[1] = { data->localData[1]->realVars[1651] /* sink.hpConnector[1].vHP.T[9] variable */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 2604 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  
  retValue = solve_linear_system(data, threadData, 24, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,2604};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 2604 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[1651] /* sink.hpConnector[1].vHP.T[9] variable */ = aux_x[0];

  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6592(DATA *data, threadData_t *threadData);


/*
equation index: 2606
type: SIMPLE_ASSIGN
$START.sink.base.T[8,10] = sink.base.Tstart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2606(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2606};
  data->modelData->realVarsData[79].attribute /* sink.base.T[8,10] STATE(1) */.start = data->simulationInfo->realParameter[1] /* sink.base.Tstart PARAM */;
    data->localData[0]->realVars[79] /* sink.base.T[8,10] STATE(1) */ = data->modelData->realVarsData[79].attribute /* sink.base.T[8,10] STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[79].info /* sink.base.T[8,10] */.name, (modelica_real) data->localData[0]->realVars[79] /* sink.base.T[8,10] STATE(1) */);
  TRACE_POP
}

/*
equation index: 2607
type: SIMPLE_ASSIGN
sink.base.T[8,10] = sink.base.Tstart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2607(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2607};
  data->localData[0]->realVars[79] /* sink.base.T[8,10] STATE(1) */ = data->simulationInfo->realParameter[1] /* sink.base.Tstart PARAM */;
  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4804(DATA *data, threadData_t *threadData);

extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4698(DATA *data, threadData_t *threadData);


/*
equation index: 2614
type: LINEAR

<var>sink.hpConnector[10].vHP.T[8]</var>
<row>

</row>
<matrix>
</matrix>
*/
OMC_DISABLE_OPT
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2614(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2614};
  /* Linear equation system */
  int retValue;
  double aux_x[1] = { data->localData[1]->realVars[1740] /* sink.hpConnector[10].vHP.T[8] variable */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 2614 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  
  retValue = solve_linear_system(data, threadData, 25, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,2614};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 2614 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[1740] /* sink.hpConnector[10].vHP.T[8] variable */ = aux_x[0];

  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6634(DATA *data, threadData_t *threadData);


/*
equation index: 2616
type: SIMPLE_ASSIGN
$START.sink.base.T[8,9] = sink.base.Tstart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2616(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2616};
  data->modelData->realVarsData[78].attribute /* sink.base.T[8,9] STATE(1) */.start = data->simulationInfo->realParameter[1] /* sink.base.Tstart PARAM */;
    data->localData[0]->realVars[78] /* sink.base.T[8,9] STATE(1) */ = data->modelData->realVarsData[78].attribute /* sink.base.T[8,9] STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[78].info /* sink.base.T[8,9] */.name, (modelica_real) data->localData[0]->realVars[78] /* sink.base.T[8,9] STATE(1) */);
  TRACE_POP
}

/*
equation index: 2617
type: SIMPLE_ASSIGN
sink.base.T[8,9] = sink.base.Tstart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2617(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2617};
  data->localData[0]->realVars[78] /* sink.base.T[8,9] STATE(1) */ = data->simulationInfo->realParameter[1] /* sink.base.Tstart PARAM */;
  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4805(DATA *data, threadData_t *threadData);

extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4692(DATA *data, threadData_t *threadData);


/*
equation index: 2624
type: LINEAR

<var>sink.hpConnector[9].vHP.T[8]</var>
<row>

</row>
<matrix>
</matrix>
*/
OMC_DISABLE_OPT
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2624(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2624};
  /* Linear equation system */
  int retValue;
  double aux_x[1] = { data->localData[1]->realVars[1730] /* sink.hpConnector[9].vHP.T[8] variable */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 2624 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  
  retValue = solve_linear_system(data, threadData, 26, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,2624};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 2624 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[1730] /* sink.hpConnector[9].vHP.T[8] variable */ = aux_x[0];

  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_5353(DATA *data, threadData_t *threadData);


/*
equation index: 2626
type: SIMPLE_ASSIGN
$START.sink.base.T[8,8] = sink.base.Tstart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2626(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2626};
  data->modelData->realVarsData[77].attribute /* sink.base.T[8,8] STATE(1) */.start = data->simulationInfo->realParameter[1] /* sink.base.Tstart PARAM */;
    data->localData[0]->realVars[77] /* sink.base.T[8,8] STATE(1) */ = data->modelData->realVarsData[77].attribute /* sink.base.T[8,8] STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[77].info /* sink.base.T[8,8] */.name, (modelica_real) data->localData[0]->realVars[77] /* sink.base.T[8,8] STATE(1) */);
  TRACE_POP
}

/*
equation index: 2627
type: SIMPLE_ASSIGN
sink.base.T[8,8] = sink.base.Tstart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2627(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2627};
  data->localData[0]->realVars[77] /* sink.base.T[8,8] STATE(1) */ = data->simulationInfo->realParameter[1] /* sink.base.Tstart PARAM */;
  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4806(DATA *data, threadData_t *threadData);

extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4686(DATA *data, threadData_t *threadData);


/*
equation index: 2634
type: LINEAR

<var>sink.hpConnector[8].vHP.T[8]</var>
<row>

</row>
<matrix>
</matrix>
*/
OMC_DISABLE_OPT
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2634(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2634};
  /* Linear equation system */
  int retValue;
  double aux_x[1] = { data->localData[1]->realVars[1720] /* sink.hpConnector[8].vHP.T[8] variable */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 2634 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  
  retValue = solve_linear_system(data, threadData, 27, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,2634};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 2634 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[1720] /* sink.hpConnector[8].vHP.T[8] variable */ = aux_x[0];

  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_5528(DATA *data, threadData_t *threadData);


/*
equation index: 2636
type: SIMPLE_ASSIGN
$START.sink.base.T[8,7] = sink.base.Tstart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2636(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2636};
  data->modelData->realVarsData[76].attribute /* sink.base.T[8,7] STATE(1) */.start = data->simulationInfo->realParameter[1] /* sink.base.Tstart PARAM */;
    data->localData[0]->realVars[76] /* sink.base.T[8,7] STATE(1) */ = data->modelData->realVarsData[76].attribute /* sink.base.T[8,7] STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[76].info /* sink.base.T[8,7] */.name, (modelica_real) data->localData[0]->realVars[76] /* sink.base.T[8,7] STATE(1) */);
  TRACE_POP
}

/*
equation index: 2637
type: SIMPLE_ASSIGN
sink.base.T[8,7] = sink.base.Tstart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2637(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2637};
  data->localData[0]->realVars[76] /* sink.base.T[8,7] STATE(1) */ = data->simulationInfo->realParameter[1] /* sink.base.Tstart PARAM */;
  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4807(DATA *data, threadData_t *threadData);

extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4680(DATA *data, threadData_t *threadData);


/*
equation index: 2644
type: LINEAR

<var>sink.hpConnector[7].vHP.T[8]</var>
<row>

</row>
<matrix>
</matrix>
*/
OMC_DISABLE_OPT
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2644(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2644};
  /* Linear equation system */
  int retValue;
  double aux_x[1] = { data->localData[1]->realVars[1710] /* sink.hpConnector[7].vHP.T[8] variable */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 2644 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  
  retValue = solve_linear_system(data, threadData, 28, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,2644};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 2644 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[1710] /* sink.hpConnector[7].vHP.T[8] variable */ = aux_x[0];

  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_5703(DATA *data, threadData_t *threadData);


/*
equation index: 2646
type: SIMPLE_ASSIGN
$START.sink.base.T[8,6] = sink.base.Tstart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2646(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2646};
  data->modelData->realVarsData[75].attribute /* sink.base.T[8,6] STATE(1) */.start = data->simulationInfo->realParameter[1] /* sink.base.Tstart PARAM */;
    data->localData[0]->realVars[75] /* sink.base.T[8,6] STATE(1) */ = data->modelData->realVarsData[75].attribute /* sink.base.T[8,6] STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[75].info /* sink.base.T[8,6] */.name, (modelica_real) data->localData[0]->realVars[75] /* sink.base.T[8,6] STATE(1) */);
  TRACE_POP
}

/*
equation index: 2647
type: SIMPLE_ASSIGN
sink.base.T[8,6] = sink.base.Tstart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2647(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2647};
  data->localData[0]->realVars[75] /* sink.base.T[8,6] STATE(1) */ = data->simulationInfo->realParameter[1] /* sink.base.Tstart PARAM */;
  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4808(DATA *data, threadData_t *threadData);

extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4674(DATA *data, threadData_t *threadData);


/*
equation index: 2654
type: LINEAR

<var>sink.hpConnector[6].vHP.T[8]</var>
<row>

</row>
<matrix>
</matrix>
*/
OMC_DISABLE_OPT
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2654(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2654};
  /* Linear equation system */
  int retValue;
  double aux_x[1] = { data->localData[1]->realVars[1700] /* sink.hpConnector[6].vHP.T[8] variable */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 2654 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  
  retValue = solve_linear_system(data, threadData, 29, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,2654};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 2654 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[1700] /* sink.hpConnector[6].vHP.T[8] variable */ = aux_x[0];

  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_5878(DATA *data, threadData_t *threadData);


/*
equation index: 2656
type: SIMPLE_ASSIGN
$START.sink.base.T[8,5] = sink.base.Tstart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2656(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2656};
  data->modelData->realVarsData[74].attribute /* sink.base.T[8,5] STATE(1) */.start = data->simulationInfo->realParameter[1] /* sink.base.Tstart PARAM */;
    data->localData[0]->realVars[74] /* sink.base.T[8,5] STATE(1) */ = data->modelData->realVarsData[74].attribute /* sink.base.T[8,5] STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[74].info /* sink.base.T[8,5] */.name, (modelica_real) data->localData[0]->realVars[74] /* sink.base.T[8,5] STATE(1) */);
  TRACE_POP
}

/*
equation index: 2657
type: SIMPLE_ASSIGN
sink.base.T[8,5] = sink.base.Tstart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2657(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2657};
  data->localData[0]->realVars[74] /* sink.base.T[8,5] STATE(1) */ = data->simulationInfo->realParameter[1] /* sink.base.Tstart PARAM */;
  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4809(DATA *data, threadData_t *threadData);

extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4668(DATA *data, threadData_t *threadData);


/*
equation index: 2664
type: LINEAR

<var>sink.hpConnector[5].vHP.T[8]</var>
<row>

</row>
<matrix>
</matrix>
*/
OMC_DISABLE_OPT
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2664(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2664};
  /* Linear equation system */
  int retValue;
  double aux_x[1] = { data->localData[1]->realVars[1690] /* sink.hpConnector[5].vHP.T[8] variable */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 2664 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  
  retValue = solve_linear_system(data, threadData, 30, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,2664};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 2664 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[1690] /* sink.hpConnector[5].vHP.T[8] variable */ = aux_x[0];

  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_5995(DATA *data, threadData_t *threadData);


/*
equation index: 2666
type: SIMPLE_ASSIGN
$START.sink.base.T[8,4] = sink.base.Tstart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2666(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2666};
  data->modelData->realVarsData[73].attribute /* sink.base.T[8,4] STATE(1) */.start = data->simulationInfo->realParameter[1] /* sink.base.Tstart PARAM */;
    data->localData[0]->realVars[73] /* sink.base.T[8,4] STATE(1) */ = data->modelData->realVarsData[73].attribute /* sink.base.T[8,4] STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[73].info /* sink.base.T[8,4] */.name, (modelica_real) data->localData[0]->realVars[73] /* sink.base.T[8,4] STATE(1) */);
  TRACE_POP
}

/*
equation index: 2667
type: SIMPLE_ASSIGN
sink.base.T[8,4] = sink.base.Tstart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2667(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2667};
  data->localData[0]->realVars[73] /* sink.base.T[8,4] STATE(1) */ = data->simulationInfo->realParameter[1] /* sink.base.Tstart PARAM */;
  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4810(DATA *data, threadData_t *threadData);

extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4662(DATA *data, threadData_t *threadData);


/*
equation index: 2674
type: LINEAR

<var>sink.hpConnector[4].vHP.T[8]</var>
<row>

</row>
<matrix>
</matrix>
*/
OMC_DISABLE_OPT
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2674(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2674};
  /* Linear equation system */
  int retValue;
  double aux_x[1] = { data->localData[1]->realVars[1680] /* sink.hpConnector[4].vHP.T[8] variable */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 2674 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  
  retValue = solve_linear_system(data, threadData, 31, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,2674};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 2674 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[1680] /* sink.hpConnector[4].vHP.T[8] variable */ = aux_x[0];

  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6788(DATA *data, threadData_t *threadData);


/*
equation index: 2676
type: SIMPLE_ASSIGN
$START.sink.base.T[8,3] = sink.base.Tstart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2676(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2676};
  data->modelData->realVarsData[72].attribute /* sink.base.T[8,3] STATE(1) */.start = data->simulationInfo->realParameter[1] /* sink.base.Tstart PARAM */;
    data->localData[0]->realVars[72] /* sink.base.T[8,3] STATE(1) */ = data->modelData->realVarsData[72].attribute /* sink.base.T[8,3] STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[72].info /* sink.base.T[8,3] */.name, (modelica_real) data->localData[0]->realVars[72] /* sink.base.T[8,3] STATE(1) */);
  TRACE_POP
}

/*
equation index: 2677
type: SIMPLE_ASSIGN
sink.base.T[8,3] = sink.base.Tstart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2677(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2677};
  data->localData[0]->realVars[72] /* sink.base.T[8,3] STATE(1) */ = data->simulationInfo->realParameter[1] /* sink.base.Tstart PARAM */;
  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4811(DATA *data, threadData_t *threadData);

extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4656(DATA *data, threadData_t *threadData);


/*
equation index: 2684
type: LINEAR

<var>sink.hpConnector[3].vHP.T[8]</var>
<row>

</row>
<matrix>
</matrix>
*/
OMC_DISABLE_OPT
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2684(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2684};
  /* Linear equation system */
  int retValue;
  double aux_x[1] = { data->localData[1]->realVars[1670] /* sink.hpConnector[3].vHP.T[8] variable */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 2684 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  
  retValue = solve_linear_system(data, threadData, 32, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,2684};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 2684 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[1670] /* sink.hpConnector[3].vHP.T[8] variable */ = aux_x[0];

  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6170(DATA *data, threadData_t *threadData);


/*
equation index: 2686
type: SIMPLE_ASSIGN
$START.sink.base.T[8,2] = sink.base.Tstart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2686(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2686};
  data->modelData->realVarsData[71].attribute /* sink.base.T[8,2] STATE(1) */.start = data->simulationInfo->realParameter[1] /* sink.base.Tstart PARAM */;
    data->localData[0]->realVars[71] /* sink.base.T[8,2] STATE(1) */ = data->modelData->realVarsData[71].attribute /* sink.base.T[8,2] STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[71].info /* sink.base.T[8,2] */.name, (modelica_real) data->localData[0]->realVars[71] /* sink.base.T[8,2] STATE(1) */);
  TRACE_POP
}

/*
equation index: 2687
type: SIMPLE_ASSIGN
sink.base.T[8,2] = sink.base.Tstart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2687(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2687};
  data->localData[0]->realVars[71] /* sink.base.T[8,2] STATE(1) */ = data->simulationInfo->realParameter[1] /* sink.base.Tstart PARAM */;
  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4812(DATA *data, threadData_t *threadData);

extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4650(DATA *data, threadData_t *threadData);


/*
equation index: 2694
type: LINEAR

<var>sink.hpConnector[2].vHP.T[8]</var>
<row>

</row>
<matrix>
</matrix>
*/
OMC_DISABLE_OPT
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2694(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2694};
  /* Linear equation system */
  int retValue;
  double aux_x[1] = { data->localData[1]->realVars[1660] /* sink.hpConnector[2].vHP.T[8] variable */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 2694 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  
  retValue = solve_linear_system(data, threadData, 33, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,2694};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 2694 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[1660] /* sink.hpConnector[2].vHP.T[8] variable */ = aux_x[0];

  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6345(DATA *data, threadData_t *threadData);


/*
equation index: 2696
type: SIMPLE_ASSIGN
$START.sink.base.T[8,1] = sink.base.Tstart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2696(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2696};
  data->modelData->realVarsData[70].attribute /* sink.base.T[8,1] STATE(1) */.start = data->simulationInfo->realParameter[1] /* sink.base.Tstart PARAM */;
    data->localData[0]->realVars[70] /* sink.base.T[8,1] STATE(1) */ = data->modelData->realVarsData[70].attribute /* sink.base.T[8,1] STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[70].info /* sink.base.T[8,1] */.name, (modelica_real) data->localData[0]->realVars[70] /* sink.base.T[8,1] STATE(1) */);
  TRACE_POP
}

/*
equation index: 2697
type: SIMPLE_ASSIGN
sink.base.T[8,1] = sink.base.Tstart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2697(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2697};
  data->localData[0]->realVars[70] /* sink.base.T[8,1] STATE(1) */ = data->simulationInfo->realParameter[1] /* sink.base.Tstart PARAM */;
  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4813(DATA *data, threadData_t *threadData);

extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4644(DATA *data, threadData_t *threadData);


/*
equation index: 2704
type: LINEAR

<var>sink.hpConnector[1].vHP.T[8]</var>
<row>

</row>
<matrix>
</matrix>
*/
OMC_DISABLE_OPT
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2704(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2704};
  /* Linear equation system */
  int retValue;
  double aux_x[1] = { data->localData[1]->realVars[1650] /* sink.hpConnector[1].vHP.T[8] variable */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 2704 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  
  retValue = solve_linear_system(data, threadData, 34, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,2704};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 2704 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[1650] /* sink.hpConnector[1].vHP.T[8] variable */ = aux_x[0];

  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6578(DATA *data, threadData_t *threadData);


/*
equation index: 2706
type: SIMPLE_ASSIGN
$START.sink.base.T[7,10] = sink.base.Tstart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2706(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2706};
  data->modelData->realVarsData[69].attribute /* sink.base.T[7,10] STATE(1) */.start = data->simulationInfo->realParameter[1] /* sink.base.Tstart PARAM */;
    data->localData[0]->realVars[69] /* sink.base.T[7,10] STATE(1) */ = data->modelData->realVarsData[69].attribute /* sink.base.T[7,10] STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[69].info /* sink.base.T[7,10] */.name, (modelica_real) data->localData[0]->realVars[69] /* sink.base.T[7,10] STATE(1) */);
  TRACE_POP
}

/*
equation index: 2707
type: SIMPLE_ASSIGN
sink.base.T[7,10] = sink.base.Tstart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2707(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2707};
  data->localData[0]->realVars[69] /* sink.base.T[7,10] STATE(1) */ = data->simulationInfo->realParameter[1] /* sink.base.Tstart PARAM */;
  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4814(DATA *data, threadData_t *threadData);

extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4638(DATA *data, threadData_t *threadData);


/*
equation index: 2714
type: LINEAR

<var>sink.hpConnector[10].vHP.T[7]</var>
<row>

</row>
<matrix>
</matrix>
*/
OMC_DISABLE_OPT
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2714(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2714};
  /* Linear equation system */
  int retValue;
  double aux_x[1] = { data->localData[1]->realVars[1739] /* sink.hpConnector[10].vHP.T[7] variable */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 2714 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  
  retValue = solve_linear_system(data, threadData, 35, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,2714};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 2714 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[1739] /* sink.hpConnector[10].vHP.T[7] variable */ = aux_x[0];

  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6644(DATA *data, threadData_t *threadData);


/*
equation index: 2716
type: SIMPLE_ASSIGN
$START.sink.base.T[7,9] = sink.base.Tstart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2716(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2716};
  data->modelData->realVarsData[68].attribute /* sink.base.T[7,9] STATE(1) */.start = data->simulationInfo->realParameter[1] /* sink.base.Tstart PARAM */;
    data->localData[0]->realVars[68] /* sink.base.T[7,9] STATE(1) */ = data->modelData->realVarsData[68].attribute /* sink.base.T[7,9] STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[68].info /* sink.base.T[7,9] */.name, (modelica_real) data->localData[0]->realVars[68] /* sink.base.T[7,9] STATE(1) */);
  TRACE_POP
}

/*
equation index: 2717
type: SIMPLE_ASSIGN
sink.base.T[7,9] = sink.base.Tstart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2717(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2717};
  data->localData[0]->realVars[68] /* sink.base.T[7,9] STATE(1) */ = data->simulationInfo->realParameter[1] /* sink.base.Tstart PARAM */;
  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4815(DATA *data, threadData_t *threadData);

extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4632(DATA *data, threadData_t *threadData);


/*
equation index: 2724
type: LINEAR

<var>sink.hpConnector[9].vHP.T[7]</var>
<row>

</row>
<matrix>
</matrix>
*/
OMC_DISABLE_OPT
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2724(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2724};
  /* Linear equation system */
  int retValue;
  double aux_x[1] = { data->localData[1]->realVars[1729] /* sink.hpConnector[9].vHP.T[7] variable */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 2724 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  
  retValue = solve_linear_system(data, threadData, 36, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,2724};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 2724 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[1729] /* sink.hpConnector[9].vHP.T[7] variable */ = aux_x[0];

  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_5339(DATA *data, threadData_t *threadData);


/*
equation index: 2726
type: SIMPLE_ASSIGN
$START.sink.base.T[7,8] = sink.base.Tstart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2726(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2726};
  data->modelData->realVarsData[67].attribute /* sink.base.T[7,8] STATE(1) */.start = data->simulationInfo->realParameter[1] /* sink.base.Tstart PARAM */;
    data->localData[0]->realVars[67] /* sink.base.T[7,8] STATE(1) */ = data->modelData->realVarsData[67].attribute /* sink.base.T[7,8] STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[67].info /* sink.base.T[7,8] */.name, (modelica_real) data->localData[0]->realVars[67] /* sink.base.T[7,8] STATE(1) */);
  TRACE_POP
}

/*
equation index: 2727
type: SIMPLE_ASSIGN
sink.base.T[7,8] = sink.base.Tstart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2727(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2727};
  data->localData[0]->realVars[67] /* sink.base.T[7,8] STATE(1) */ = data->simulationInfo->realParameter[1] /* sink.base.Tstart PARAM */;
  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4816(DATA *data, threadData_t *threadData);

extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4626(DATA *data, threadData_t *threadData);


/*
equation index: 2734
type: LINEAR

<var>sink.hpConnector[8].vHP.T[7]</var>
<row>

</row>
<matrix>
</matrix>
*/
OMC_DISABLE_OPT
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2734(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2734};
  /* Linear equation system */
  int retValue;
  double aux_x[1] = { data->localData[1]->realVars[1719] /* sink.hpConnector[8].vHP.T[7] variable */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 2734 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  
  retValue = solve_linear_system(data, threadData, 37, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,2734};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 2734 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[1719] /* sink.hpConnector[8].vHP.T[7] variable */ = aux_x[0];

  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_5514(DATA *data, threadData_t *threadData);


/*
equation index: 2736
type: SIMPLE_ASSIGN
$START.sink.base.T[7,7] = sink.base.Tstart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2736(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2736};
  data->modelData->realVarsData[66].attribute /* sink.base.T[7,7] STATE(1) */.start = data->simulationInfo->realParameter[1] /* sink.base.Tstart PARAM */;
    data->localData[0]->realVars[66] /* sink.base.T[7,7] STATE(1) */ = data->modelData->realVarsData[66].attribute /* sink.base.T[7,7] STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[66].info /* sink.base.T[7,7] */.name, (modelica_real) data->localData[0]->realVars[66] /* sink.base.T[7,7] STATE(1) */);
  TRACE_POP
}

/*
equation index: 2737
type: SIMPLE_ASSIGN
sink.base.T[7,7] = sink.base.Tstart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2737(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2737};
  data->localData[0]->realVars[66] /* sink.base.T[7,7] STATE(1) */ = data->simulationInfo->realParameter[1] /* sink.base.Tstart PARAM */;
  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4817(DATA *data, threadData_t *threadData);

extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4620(DATA *data, threadData_t *threadData);


/*
equation index: 2744
type: LINEAR

<var>sink.hpConnector[7].vHP.T[7]</var>
<row>

</row>
<matrix>
</matrix>
*/
OMC_DISABLE_OPT
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2744(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2744};
  /* Linear equation system */
  int retValue;
  double aux_x[1] = { data->localData[1]->realVars[1709] /* sink.hpConnector[7].vHP.T[7] variable */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 2744 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  
  retValue = solve_linear_system(data, threadData, 38, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,2744};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 2744 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[1709] /* sink.hpConnector[7].vHP.T[7] variable */ = aux_x[0];

  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_5689(DATA *data, threadData_t *threadData);


/*
equation index: 2746
type: SIMPLE_ASSIGN
$START.sink.base.T[7,6] = sink.base.Tstart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2746(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2746};
  data->modelData->realVarsData[65].attribute /* sink.base.T[7,6] STATE(1) */.start = data->simulationInfo->realParameter[1] /* sink.base.Tstart PARAM */;
    data->localData[0]->realVars[65] /* sink.base.T[7,6] STATE(1) */ = data->modelData->realVarsData[65].attribute /* sink.base.T[7,6] STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[65].info /* sink.base.T[7,6] */.name, (modelica_real) data->localData[0]->realVars[65] /* sink.base.T[7,6] STATE(1) */);
  TRACE_POP
}

/*
equation index: 2747
type: SIMPLE_ASSIGN
sink.base.T[7,6] = sink.base.Tstart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2747(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2747};
  data->localData[0]->realVars[65] /* sink.base.T[7,6] STATE(1) */ = data->simulationInfo->realParameter[1] /* sink.base.Tstart PARAM */;
  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4818(DATA *data, threadData_t *threadData);

extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4614(DATA *data, threadData_t *threadData);


/*
equation index: 2754
type: LINEAR

<var>sink.hpConnector[6].vHP.T[7]</var>
<row>

</row>
<matrix>
</matrix>
*/
OMC_DISABLE_OPT
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2754(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2754};
  /* Linear equation system */
  int retValue;
  double aux_x[1] = { data->localData[1]->realVars[1699] /* sink.hpConnector[6].vHP.T[7] variable */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 2754 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  
  retValue = solve_linear_system(data, threadData, 39, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,2754};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 2754 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[1699] /* sink.hpConnector[6].vHP.T[7] variable */ = aux_x[0];

  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_5864(DATA *data, threadData_t *threadData);


/*
equation index: 2756
type: SIMPLE_ASSIGN
$START.sink.base.T[7,5] = sink.base.Tstart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2756(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2756};
  data->modelData->realVarsData[64].attribute /* sink.base.T[7,5] STATE(1) */.start = data->simulationInfo->realParameter[1] /* sink.base.Tstart PARAM */;
    data->localData[0]->realVars[64] /* sink.base.T[7,5] STATE(1) */ = data->modelData->realVarsData[64].attribute /* sink.base.T[7,5] STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[64].info /* sink.base.T[7,5] */.name, (modelica_real) data->localData[0]->realVars[64] /* sink.base.T[7,5] STATE(1) */);
  TRACE_POP
}

/*
equation index: 2757
type: SIMPLE_ASSIGN
sink.base.T[7,5] = sink.base.Tstart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2757(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2757};
  data->localData[0]->realVars[64] /* sink.base.T[7,5] STATE(1) */ = data->simulationInfo->realParameter[1] /* sink.base.Tstart PARAM */;
  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4819(DATA *data, threadData_t *threadData);

extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4608(DATA *data, threadData_t *threadData);


/*
equation index: 2764
type: LINEAR

<var>sink.hpConnector[5].vHP.T[7]</var>
<row>

</row>
<matrix>
</matrix>
*/
OMC_DISABLE_OPT
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2764(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2764};
  /* Linear equation system */
  int retValue;
  double aux_x[1] = { data->localData[1]->realVars[1689] /* sink.hpConnector[5].vHP.T[7] variable */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 2764 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  
  retValue = solve_linear_system(data, threadData, 40, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,2764};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 2764 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[1689] /* sink.hpConnector[5].vHP.T[7] variable */ = aux_x[0];

  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6005(DATA *data, threadData_t *threadData);


/*
equation index: 2766
type: SIMPLE_ASSIGN
$START.sink.base.T[7,4] = sink.base.Tstart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2766(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2766};
  data->modelData->realVarsData[63].attribute /* sink.base.T[7,4] STATE(1) */.start = data->simulationInfo->realParameter[1] /* sink.base.Tstart PARAM */;
    data->localData[0]->realVars[63] /* sink.base.T[7,4] STATE(1) */ = data->modelData->realVarsData[63].attribute /* sink.base.T[7,4] STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[63].info /* sink.base.T[7,4] */.name, (modelica_real) data->localData[0]->realVars[63] /* sink.base.T[7,4] STATE(1) */);
  TRACE_POP
}

/*
equation index: 2767
type: SIMPLE_ASSIGN
sink.base.T[7,4] = sink.base.Tstart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2767(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2767};
  data->localData[0]->realVars[63] /* sink.base.T[7,4] STATE(1) */ = data->simulationInfo->realParameter[1] /* sink.base.Tstart PARAM */;
  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4820(DATA *data, threadData_t *threadData);

extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4602(DATA *data, threadData_t *threadData);


/*
equation index: 2774
type: LINEAR

<var>sink.hpConnector[4].vHP.T[7]</var>
<row>

</row>
<matrix>
</matrix>
*/
OMC_DISABLE_OPT
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2774(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2774};
  /* Linear equation system */
  int retValue;
  double aux_x[1] = { data->localData[1]->realVars[1679] /* sink.hpConnector[4].vHP.T[7] variable */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 2774 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  
  retValue = solve_linear_system(data, threadData, 41, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,2774};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 2774 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[1679] /* sink.hpConnector[4].vHP.T[7] variable */ = aux_x[0];

  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6798(DATA *data, threadData_t *threadData);


/*
equation index: 2776
type: SIMPLE_ASSIGN
$START.sink.base.T[7,3] = sink.base.Tstart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2776(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2776};
  data->modelData->realVarsData[62].attribute /* sink.base.T[7,3] STATE(1) */.start = data->simulationInfo->realParameter[1] /* sink.base.Tstart PARAM */;
    data->localData[0]->realVars[62] /* sink.base.T[7,3] STATE(1) */ = data->modelData->realVarsData[62].attribute /* sink.base.T[7,3] STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[62].info /* sink.base.T[7,3] */.name, (modelica_real) data->localData[0]->realVars[62] /* sink.base.T[7,3] STATE(1) */);
  TRACE_POP
}

/*
equation index: 2777
type: SIMPLE_ASSIGN
sink.base.T[7,3] = sink.base.Tstart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2777(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2777};
  data->localData[0]->realVars[62] /* sink.base.T[7,3] STATE(1) */ = data->simulationInfo->realParameter[1] /* sink.base.Tstart PARAM */;
  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4821(DATA *data, threadData_t *threadData);

extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4596(DATA *data, threadData_t *threadData);


/*
equation index: 2784
type: LINEAR

<var>sink.hpConnector[3].vHP.T[7]</var>
<row>

</row>
<matrix>
</matrix>
*/
OMC_DISABLE_OPT
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2784(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2784};
  /* Linear equation system */
  int retValue;
  double aux_x[1] = { data->localData[1]->realVars[1669] /* sink.hpConnector[3].vHP.T[7] variable */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 2784 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  
  retValue = solve_linear_system(data, threadData, 42, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,2784};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 2784 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[1669] /* sink.hpConnector[3].vHP.T[7] variable */ = aux_x[0];

  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6180(DATA *data, threadData_t *threadData);


/*
equation index: 2786
type: SIMPLE_ASSIGN
$START.sink.base.T[7,2] = sink.base.Tstart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2786(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2786};
  data->modelData->realVarsData[61].attribute /* sink.base.T[7,2] STATE(1) */.start = data->simulationInfo->realParameter[1] /* sink.base.Tstart PARAM */;
    data->localData[0]->realVars[61] /* sink.base.T[7,2] STATE(1) */ = data->modelData->realVarsData[61].attribute /* sink.base.T[7,2] STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[61].info /* sink.base.T[7,2] */.name, (modelica_real) data->localData[0]->realVars[61] /* sink.base.T[7,2] STATE(1) */);
  TRACE_POP
}

/*
equation index: 2787
type: SIMPLE_ASSIGN
sink.base.T[7,2] = sink.base.Tstart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2787(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2787};
  data->localData[0]->realVars[61] /* sink.base.T[7,2] STATE(1) */ = data->simulationInfo->realParameter[1] /* sink.base.Tstart PARAM */;
  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4822(DATA *data, threadData_t *threadData);

extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4590(DATA *data, threadData_t *threadData);


/*
equation index: 2794
type: LINEAR

<var>sink.hpConnector[2].vHP.T[7]</var>
<row>

</row>
<matrix>
</matrix>
*/
OMC_DISABLE_OPT
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2794(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2794};
  /* Linear equation system */
  int retValue;
  double aux_x[1] = { data->localData[1]->realVars[1659] /* sink.hpConnector[2].vHP.T[7] variable */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 2794 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  
  retValue = solve_linear_system(data, threadData, 43, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,2794};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 2794 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[1659] /* sink.hpConnector[2].vHP.T[7] variable */ = aux_x[0];

  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6355(DATA *data, threadData_t *threadData);


/*
equation index: 2796
type: SIMPLE_ASSIGN
$START.sink.base.T[7,1] = sink.base.Tstart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2796(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2796};
  data->modelData->realVarsData[60].attribute /* sink.base.T[7,1] STATE(1) */.start = data->simulationInfo->realParameter[1] /* sink.base.Tstart PARAM */;
    data->localData[0]->realVars[60] /* sink.base.T[7,1] STATE(1) */ = data->modelData->realVarsData[60].attribute /* sink.base.T[7,1] STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[60].info /* sink.base.T[7,1] */.name, (modelica_real) data->localData[0]->realVars[60] /* sink.base.T[7,1] STATE(1) */);
  TRACE_POP
}

/*
equation index: 2797
type: SIMPLE_ASSIGN
sink.base.T[7,1] = sink.base.Tstart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2797(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2797};
  data->localData[0]->realVars[60] /* sink.base.T[7,1] STATE(1) */ = data->simulationInfo->realParameter[1] /* sink.base.Tstart PARAM */;
  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4823(DATA *data, threadData_t *threadData);

extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4584(DATA *data, threadData_t *threadData);


/*
equation index: 2804
type: LINEAR

<var>sink.hpConnector[1].vHP.T[7]</var>
<row>

</row>
<matrix>
</matrix>
*/
OMC_DISABLE_OPT
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2804(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2804};
  /* Linear equation system */
  int retValue;
  double aux_x[1] = { data->localData[1]->realVars[1649] /* sink.hpConnector[1].vHP.T[7] variable */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 2804 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  
  retValue = solve_linear_system(data, threadData, 44, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,2804};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 2804 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[1649] /* sink.hpConnector[1].vHP.T[7] variable */ = aux_x[0];

  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6564(DATA *data, threadData_t *threadData);


/*
equation index: 2806
type: SIMPLE_ASSIGN
$START.sink.base.T[6,10] = sink.base.Tstart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2806(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2806};
  data->modelData->realVarsData[59].attribute /* sink.base.T[6,10] STATE(1) */.start = data->simulationInfo->realParameter[1] /* sink.base.Tstart PARAM */;
    data->localData[0]->realVars[59] /* sink.base.T[6,10] STATE(1) */ = data->modelData->realVarsData[59].attribute /* sink.base.T[6,10] STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[59].info /* sink.base.T[6,10] */.name, (modelica_real) data->localData[0]->realVars[59] /* sink.base.T[6,10] STATE(1) */);
  TRACE_POP
}

/*
equation index: 2807
type: SIMPLE_ASSIGN
sink.base.T[6,10] = sink.base.Tstart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2807(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2807};
  data->localData[0]->realVars[59] /* sink.base.T[6,10] STATE(1) */ = data->simulationInfo->realParameter[1] /* sink.base.Tstart PARAM */;
  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4824(DATA *data, threadData_t *threadData);

extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4578(DATA *data, threadData_t *threadData);


/*
equation index: 2814
type: LINEAR

<var>sink.hpConnector[10].vHP.T[6]</var>
<row>

</row>
<matrix>
</matrix>
*/
OMC_DISABLE_OPT
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2814(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2814};
  /* Linear equation system */
  int retValue;
  double aux_x[1] = { data->localData[1]->realVars[1738] /* sink.hpConnector[10].vHP.T[6] variable */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 2814 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  
  retValue = solve_linear_system(data, threadData, 45, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,2814};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 2814 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[1738] /* sink.hpConnector[10].vHP.T[6] variable */ = aux_x[0];

  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6654(DATA *data, threadData_t *threadData);


/*
equation index: 2816
type: SIMPLE_ASSIGN
$START.sink.base.T[6,9] = sink.base.Tstart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2816(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2816};
  data->modelData->realVarsData[58].attribute /* sink.base.T[6,9] STATE(1) */.start = data->simulationInfo->realParameter[1] /* sink.base.Tstart PARAM */;
    data->localData[0]->realVars[58] /* sink.base.T[6,9] STATE(1) */ = data->modelData->realVarsData[58].attribute /* sink.base.T[6,9] STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[58].info /* sink.base.T[6,9] */.name, (modelica_real) data->localData[0]->realVars[58] /* sink.base.T[6,9] STATE(1) */);
  TRACE_POP
}

/*
equation index: 2817
type: SIMPLE_ASSIGN
sink.base.T[6,9] = sink.base.Tstart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2817(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2817};
  data->localData[0]->realVars[58] /* sink.base.T[6,9] STATE(1) */ = data->simulationInfo->realParameter[1] /* sink.base.Tstart PARAM */;
  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4825(DATA *data, threadData_t *threadData);

extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4572(DATA *data, threadData_t *threadData);


/*
equation index: 2824
type: LINEAR

<var>sink.hpConnector[9].vHP.T[6]</var>
<row>

</row>
<matrix>
</matrix>
*/
OMC_DISABLE_OPT
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2824(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2824};
  /* Linear equation system */
  int retValue;
  double aux_x[1] = { data->localData[1]->realVars[1728] /* sink.hpConnector[9].vHP.T[6] variable */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 2824 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  
  retValue = solve_linear_system(data, threadData, 46, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,2824};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 2824 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[1728] /* sink.hpConnector[9].vHP.T[6] variable */ = aux_x[0];

  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_5325(DATA *data, threadData_t *threadData);


/*
equation index: 2826
type: SIMPLE_ASSIGN
$START.sink.base.T[6,8] = sink.base.Tstart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2826(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2826};
  data->modelData->realVarsData[57].attribute /* sink.base.T[6,8] STATE(1) */.start = data->simulationInfo->realParameter[1] /* sink.base.Tstart PARAM */;
    data->localData[0]->realVars[57] /* sink.base.T[6,8] STATE(1) */ = data->modelData->realVarsData[57].attribute /* sink.base.T[6,8] STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[57].info /* sink.base.T[6,8] */.name, (modelica_real) data->localData[0]->realVars[57] /* sink.base.T[6,8] STATE(1) */);
  TRACE_POP
}

/*
equation index: 2827
type: SIMPLE_ASSIGN
sink.base.T[6,8] = sink.base.Tstart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2827(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2827};
  data->localData[0]->realVars[57] /* sink.base.T[6,8] STATE(1) */ = data->simulationInfo->realParameter[1] /* sink.base.Tstart PARAM */;
  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4826(DATA *data, threadData_t *threadData);

extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4566(DATA *data, threadData_t *threadData);


/*
equation index: 2834
type: LINEAR

<var>sink.hpConnector[8].vHP.T[6]</var>
<row>

</row>
<matrix>
</matrix>
*/
OMC_DISABLE_OPT
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2834(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2834};
  /* Linear equation system */
  int retValue;
  double aux_x[1] = { data->localData[1]->realVars[1718] /* sink.hpConnector[8].vHP.T[6] variable */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 2834 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  
  retValue = solve_linear_system(data, threadData, 47, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,2834};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 2834 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[1718] /* sink.hpConnector[8].vHP.T[6] variable */ = aux_x[0];

  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_5500(DATA *data, threadData_t *threadData);


/*
equation index: 2836
type: SIMPLE_ASSIGN
$START.sink.base.T[6,7] = sink.base.Tstart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2836(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2836};
  data->modelData->realVarsData[56].attribute /* sink.base.T[6,7] STATE(1) */.start = data->simulationInfo->realParameter[1] /* sink.base.Tstart PARAM */;
    data->localData[0]->realVars[56] /* sink.base.T[6,7] STATE(1) */ = data->modelData->realVarsData[56].attribute /* sink.base.T[6,7] STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[56].info /* sink.base.T[6,7] */.name, (modelica_real) data->localData[0]->realVars[56] /* sink.base.T[6,7] STATE(1) */);
  TRACE_POP
}

/*
equation index: 2837
type: SIMPLE_ASSIGN
sink.base.T[6,7] = sink.base.Tstart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2837(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2837};
  data->localData[0]->realVars[56] /* sink.base.T[6,7] STATE(1) */ = data->simulationInfo->realParameter[1] /* sink.base.Tstart PARAM */;
  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4827(DATA *data, threadData_t *threadData);

extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4560(DATA *data, threadData_t *threadData);


/*
equation index: 2844
type: LINEAR

<var>sink.hpConnector[7].vHP.T[6]</var>
<row>

</row>
<matrix>
</matrix>
*/
OMC_DISABLE_OPT
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2844(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2844};
  /* Linear equation system */
  int retValue;
  double aux_x[1] = { data->localData[1]->realVars[1708] /* sink.hpConnector[7].vHP.T[6] variable */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 2844 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  
  retValue = solve_linear_system(data, threadData, 48, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,2844};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 2844 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[1708] /* sink.hpConnector[7].vHP.T[6] variable */ = aux_x[0];

  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_5675(DATA *data, threadData_t *threadData);


/*
equation index: 2846
type: SIMPLE_ASSIGN
$START.sink.base.T[6,6] = sink.base.Tstart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2846(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2846};
  data->modelData->realVarsData[55].attribute /* sink.base.T[6,6] STATE(1) */.start = data->simulationInfo->realParameter[1] /* sink.base.Tstart PARAM */;
    data->localData[0]->realVars[55] /* sink.base.T[6,6] STATE(1) */ = data->modelData->realVarsData[55].attribute /* sink.base.T[6,6] STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[55].info /* sink.base.T[6,6] */.name, (modelica_real) data->localData[0]->realVars[55] /* sink.base.T[6,6] STATE(1) */);
  TRACE_POP
}

/*
equation index: 2847
type: SIMPLE_ASSIGN
sink.base.T[6,6] = sink.base.Tstart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2847(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2847};
  data->localData[0]->realVars[55] /* sink.base.T[6,6] STATE(1) */ = data->simulationInfo->realParameter[1] /* sink.base.Tstart PARAM */;
  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4828(DATA *data, threadData_t *threadData);

extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4554(DATA *data, threadData_t *threadData);


/*
equation index: 2854
type: LINEAR

<var>sink.hpConnector[6].vHP.T[6]</var>
<row>

</row>
<matrix>
</matrix>
*/
OMC_DISABLE_OPT
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2854(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2854};
  /* Linear equation system */
  int retValue;
  double aux_x[1] = { data->localData[1]->realVars[1698] /* sink.hpConnector[6].vHP.T[6] variable */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 2854 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  
  retValue = solve_linear_system(data, threadData, 49, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,2854};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 2854 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[1698] /* sink.hpConnector[6].vHP.T[6] variable */ = aux_x[0];

  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_5850(DATA *data, threadData_t *threadData);


/*
equation index: 2856
type: SIMPLE_ASSIGN
$START.sink.base.T[6,5] = sink.base.Tstart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2856(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2856};
  data->modelData->realVarsData[54].attribute /* sink.base.T[6,5] STATE(1) */.start = data->simulationInfo->realParameter[1] /* sink.base.Tstart PARAM */;
    data->localData[0]->realVars[54] /* sink.base.T[6,5] STATE(1) */ = data->modelData->realVarsData[54].attribute /* sink.base.T[6,5] STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[54].info /* sink.base.T[6,5] */.name, (modelica_real) data->localData[0]->realVars[54] /* sink.base.T[6,5] STATE(1) */);
  TRACE_POP
}

/*
equation index: 2857
type: SIMPLE_ASSIGN
sink.base.T[6,5] = sink.base.Tstart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2857(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2857};
  data->localData[0]->realVars[54] /* sink.base.T[6,5] STATE(1) */ = data->simulationInfo->realParameter[1] /* sink.base.Tstart PARAM */;
  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4829(DATA *data, threadData_t *threadData);

extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4548(DATA *data, threadData_t *threadData);


/*
equation index: 2864
type: LINEAR

<var>sink.hpConnector[5].vHP.T[6]</var>
<row>

</row>
<matrix>
</matrix>
*/
OMC_DISABLE_OPT
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2864(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2864};
  /* Linear equation system */
  int retValue;
  double aux_x[1] = { data->localData[1]->realVars[1688] /* sink.hpConnector[5].vHP.T[6] variable */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 2864 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  
  retValue = solve_linear_system(data, threadData, 50, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,2864};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 2864 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[1688] /* sink.hpConnector[5].vHP.T[6] variable */ = aux_x[0];

  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6015(DATA *data, threadData_t *threadData);


/*
equation index: 2866
type: SIMPLE_ASSIGN
$START.sink.base.T[6,4] = sink.base.Tstart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2866(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2866};
  data->modelData->realVarsData[53].attribute /* sink.base.T[6,4] STATE(1) */.start = data->simulationInfo->realParameter[1] /* sink.base.Tstart PARAM */;
    data->localData[0]->realVars[53] /* sink.base.T[6,4] STATE(1) */ = data->modelData->realVarsData[53].attribute /* sink.base.T[6,4] STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[53].info /* sink.base.T[6,4] */.name, (modelica_real) data->localData[0]->realVars[53] /* sink.base.T[6,4] STATE(1) */);
  TRACE_POP
}

/*
equation index: 2867
type: SIMPLE_ASSIGN
sink.base.T[6,4] = sink.base.Tstart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2867(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2867};
  data->localData[0]->realVars[53] /* sink.base.T[6,4] STATE(1) */ = data->simulationInfo->realParameter[1] /* sink.base.Tstart PARAM */;
  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4830(DATA *data, threadData_t *threadData);

extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4542(DATA *data, threadData_t *threadData);


/*
equation index: 2874
type: LINEAR

<var>sink.hpConnector[4].vHP.T[6]</var>
<row>

</row>
<matrix>
</matrix>
*/
OMC_DISABLE_OPT
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2874(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2874};
  /* Linear equation system */
  int retValue;
  double aux_x[1] = { data->localData[1]->realVars[1678] /* sink.hpConnector[4].vHP.T[6] variable */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 2874 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  
  retValue = solve_linear_system(data, threadData, 51, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,2874};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 2874 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[1678] /* sink.hpConnector[4].vHP.T[6] variable */ = aux_x[0];

  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6808(DATA *data, threadData_t *threadData);


/*
equation index: 2876
type: SIMPLE_ASSIGN
$START.sink.base.T[6,3] = sink.base.Tstart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2876(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2876};
  data->modelData->realVarsData[52].attribute /* sink.base.T[6,3] STATE(1) */.start = data->simulationInfo->realParameter[1] /* sink.base.Tstart PARAM */;
    data->localData[0]->realVars[52] /* sink.base.T[6,3] STATE(1) */ = data->modelData->realVarsData[52].attribute /* sink.base.T[6,3] STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[52].info /* sink.base.T[6,3] */.name, (modelica_real) data->localData[0]->realVars[52] /* sink.base.T[6,3] STATE(1) */);
  TRACE_POP
}

/*
equation index: 2877
type: SIMPLE_ASSIGN
sink.base.T[6,3] = sink.base.Tstart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2877(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2877};
  data->localData[0]->realVars[52] /* sink.base.T[6,3] STATE(1) */ = data->simulationInfo->realParameter[1] /* sink.base.Tstart PARAM */;
  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4831(DATA *data, threadData_t *threadData);

extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4536(DATA *data, threadData_t *threadData);


/*
equation index: 2884
type: LINEAR

<var>sink.hpConnector[3].vHP.T[6]</var>
<row>

</row>
<matrix>
</matrix>
*/
OMC_DISABLE_OPT
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2884(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2884};
  /* Linear equation system */
  int retValue;
  double aux_x[1] = { data->localData[1]->realVars[1668] /* sink.hpConnector[3].vHP.T[6] variable */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 2884 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  
  retValue = solve_linear_system(data, threadData, 52, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,2884};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 2884 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[1668] /* sink.hpConnector[3].vHP.T[6] variable */ = aux_x[0];

  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6190(DATA *data, threadData_t *threadData);


/*
equation index: 2886
type: SIMPLE_ASSIGN
$START.sink.base.T[6,2] = sink.base.Tstart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2886(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2886};
  data->modelData->realVarsData[51].attribute /* sink.base.T[6,2] STATE(1) */.start = data->simulationInfo->realParameter[1] /* sink.base.Tstart PARAM */;
    data->localData[0]->realVars[51] /* sink.base.T[6,2] STATE(1) */ = data->modelData->realVarsData[51].attribute /* sink.base.T[6,2] STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[51].info /* sink.base.T[6,2] */.name, (modelica_real) data->localData[0]->realVars[51] /* sink.base.T[6,2] STATE(1) */);
  TRACE_POP
}

/*
equation index: 2887
type: SIMPLE_ASSIGN
sink.base.T[6,2] = sink.base.Tstart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2887(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2887};
  data->localData[0]->realVars[51] /* sink.base.T[6,2] STATE(1) */ = data->simulationInfo->realParameter[1] /* sink.base.Tstart PARAM */;
  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4832(DATA *data, threadData_t *threadData);

extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4530(DATA *data, threadData_t *threadData);


/*
equation index: 2894
type: LINEAR

<var>sink.hpConnector[2].vHP.T[6]</var>
<row>

</row>
<matrix>
</matrix>
*/
OMC_DISABLE_OPT
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2894(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2894};
  /* Linear equation system */
  int retValue;
  double aux_x[1] = { data->localData[1]->realVars[1658] /* sink.hpConnector[2].vHP.T[6] variable */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 2894 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  
  retValue = solve_linear_system(data, threadData, 53, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,2894};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 2894 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[1658] /* sink.hpConnector[2].vHP.T[6] variable */ = aux_x[0];

  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6365(DATA *data, threadData_t *threadData);


/*
equation index: 2896
type: SIMPLE_ASSIGN
$START.sink.base.T[6,1] = sink.base.Tstart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2896(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2896};
  data->modelData->realVarsData[50].attribute /* sink.base.T[6,1] STATE(1) */.start = data->simulationInfo->realParameter[1] /* sink.base.Tstart PARAM */;
    data->localData[0]->realVars[50] /* sink.base.T[6,1] STATE(1) */ = data->modelData->realVarsData[50].attribute /* sink.base.T[6,1] STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[50].info /* sink.base.T[6,1] */.name, (modelica_real) data->localData[0]->realVars[50] /* sink.base.T[6,1] STATE(1) */);
  TRACE_POP
}

/*
equation index: 2897
type: SIMPLE_ASSIGN
sink.base.T[6,1] = sink.base.Tstart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2897(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2897};
  data->localData[0]->realVars[50] /* sink.base.T[6,1] STATE(1) */ = data->simulationInfo->realParameter[1] /* sink.base.Tstart PARAM */;
  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4833(DATA *data, threadData_t *threadData);

extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4524(DATA *data, threadData_t *threadData);


/*
equation index: 2904
type: LINEAR

<var>sink.hpConnector[1].vHP.T[6]</var>
<row>

</row>
<matrix>
</matrix>
*/
OMC_DISABLE_OPT
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2904(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2904};
  /* Linear equation system */
  int retValue;
  double aux_x[1] = { data->localData[1]->realVars[1648] /* sink.hpConnector[1].vHP.T[6] variable */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 2904 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  
  retValue = solve_linear_system(data, threadData, 54, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,2904};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 2904 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[1648] /* sink.hpConnector[1].vHP.T[6] variable */ = aux_x[0];

  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6550(DATA *data, threadData_t *threadData);


/*
equation index: 2906
type: SIMPLE_ASSIGN
$START.sink.base.T[5,10] = sink.base.Tstart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2906(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2906};
  data->modelData->realVarsData[49].attribute /* sink.base.T[5,10] STATE(1) */.start = data->simulationInfo->realParameter[1] /* sink.base.Tstart PARAM */;
    data->localData[0]->realVars[49] /* sink.base.T[5,10] STATE(1) */ = data->modelData->realVarsData[49].attribute /* sink.base.T[5,10] STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[49].info /* sink.base.T[5,10] */.name, (modelica_real) data->localData[0]->realVars[49] /* sink.base.T[5,10] STATE(1) */);
  TRACE_POP
}

/*
equation index: 2907
type: SIMPLE_ASSIGN
sink.base.T[5,10] = sink.base.Tstart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2907(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2907};
  data->localData[0]->realVars[49] /* sink.base.T[5,10] STATE(1) */ = data->simulationInfo->realParameter[1] /* sink.base.Tstart PARAM */;
  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4834(DATA *data, threadData_t *threadData);

extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4518(DATA *data, threadData_t *threadData);


/*
equation index: 2914
type: LINEAR

<var>sink.hpConnector[10].vHP.T[5]</var>
<row>

</row>
<matrix>
</matrix>
*/
OMC_DISABLE_OPT
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2914(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2914};
  /* Linear equation system */
  int retValue;
  double aux_x[1] = { data->localData[1]->realVars[1737] /* sink.hpConnector[10].vHP.T[5] variable */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 2914 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  
  retValue = solve_linear_system(data, threadData, 55, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,2914};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 2914 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[1737] /* sink.hpConnector[10].vHP.T[5] variable */ = aux_x[0];

  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6664(DATA *data, threadData_t *threadData);


/*
equation index: 2916
type: SIMPLE_ASSIGN
$START.sink.base.T[5,9] = sink.base.Tstart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2916(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2916};
  data->modelData->realVarsData[48].attribute /* sink.base.T[5,9] STATE(1) */.start = data->simulationInfo->realParameter[1] /* sink.base.Tstart PARAM */;
    data->localData[0]->realVars[48] /* sink.base.T[5,9] STATE(1) */ = data->modelData->realVarsData[48].attribute /* sink.base.T[5,9] STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[48].info /* sink.base.T[5,9] */.name, (modelica_real) data->localData[0]->realVars[48] /* sink.base.T[5,9] STATE(1) */);
  TRACE_POP
}

/*
equation index: 2917
type: SIMPLE_ASSIGN
sink.base.T[5,9] = sink.base.Tstart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2917(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2917};
  data->localData[0]->realVars[48] /* sink.base.T[5,9] STATE(1) */ = data->simulationInfo->realParameter[1] /* sink.base.Tstart PARAM */;
  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4835(DATA *data, threadData_t *threadData);

extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4512(DATA *data, threadData_t *threadData);


/*
equation index: 2924
type: LINEAR

<var>sink.hpConnector[9].vHP.T[5]</var>
<row>

</row>
<matrix>
</matrix>
*/
OMC_DISABLE_OPT
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2924(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2924};
  /* Linear equation system */
  int retValue;
  double aux_x[1] = { data->localData[1]->realVars[1727] /* sink.hpConnector[9].vHP.T[5] variable */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 2924 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  
  retValue = solve_linear_system(data, threadData, 56, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,2924};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 2924 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[1727] /* sink.hpConnector[9].vHP.T[5] variable */ = aux_x[0];

  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_5311(DATA *data, threadData_t *threadData);


/*
equation index: 2926
type: SIMPLE_ASSIGN
$START.sink.base.T[5,8] = sink.base.Tstart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2926(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2926};
  data->modelData->realVarsData[47].attribute /* sink.base.T[5,8] STATE(1) */.start = data->simulationInfo->realParameter[1] /* sink.base.Tstart PARAM */;
    data->localData[0]->realVars[47] /* sink.base.T[5,8] STATE(1) */ = data->modelData->realVarsData[47].attribute /* sink.base.T[5,8] STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[47].info /* sink.base.T[5,8] */.name, (modelica_real) data->localData[0]->realVars[47] /* sink.base.T[5,8] STATE(1) */);
  TRACE_POP
}

/*
equation index: 2927
type: SIMPLE_ASSIGN
sink.base.T[5,8] = sink.base.Tstart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2927(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2927};
  data->localData[0]->realVars[47] /* sink.base.T[5,8] STATE(1) */ = data->simulationInfo->realParameter[1] /* sink.base.Tstart PARAM */;
  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4836(DATA *data, threadData_t *threadData);

extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4506(DATA *data, threadData_t *threadData);


/*
equation index: 2934
type: LINEAR

<var>sink.hpConnector[8].vHP.T[5]</var>
<row>

</row>
<matrix>
</matrix>
*/
OMC_DISABLE_OPT
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2934(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2934};
  /* Linear equation system */
  int retValue;
  double aux_x[1] = { data->localData[1]->realVars[1717] /* sink.hpConnector[8].vHP.T[5] variable */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 2934 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  
  retValue = solve_linear_system(data, threadData, 57, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,2934};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 2934 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[1717] /* sink.hpConnector[8].vHP.T[5] variable */ = aux_x[0];

  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_5486(DATA *data, threadData_t *threadData);


/*
equation index: 2936
type: SIMPLE_ASSIGN
$START.sink.base.T[5,7] = sink.base.Tstart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2936(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2936};
  data->modelData->realVarsData[46].attribute /* sink.base.T[5,7] STATE(1) */.start = data->simulationInfo->realParameter[1] /* sink.base.Tstart PARAM */;
    data->localData[0]->realVars[46] /* sink.base.T[5,7] STATE(1) */ = data->modelData->realVarsData[46].attribute /* sink.base.T[5,7] STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[46].info /* sink.base.T[5,7] */.name, (modelica_real) data->localData[0]->realVars[46] /* sink.base.T[5,7] STATE(1) */);
  TRACE_POP
}

/*
equation index: 2937
type: SIMPLE_ASSIGN
sink.base.T[5,7] = sink.base.Tstart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2937(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2937};
  data->localData[0]->realVars[46] /* sink.base.T[5,7] STATE(1) */ = data->simulationInfo->realParameter[1] /* sink.base.Tstart PARAM */;
  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4837(DATA *data, threadData_t *threadData);

extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4500(DATA *data, threadData_t *threadData);


/*
equation index: 2944
type: LINEAR

<var>sink.hpConnector[7].vHP.T[5]</var>
<row>

</row>
<matrix>
</matrix>
*/
OMC_DISABLE_OPT
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2944(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2944};
  /* Linear equation system */
  int retValue;
  double aux_x[1] = { data->localData[1]->realVars[1707] /* sink.hpConnector[7].vHP.T[5] variable */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 2944 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  
  retValue = solve_linear_system(data, threadData, 58, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,2944};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 2944 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[1707] /* sink.hpConnector[7].vHP.T[5] variable */ = aux_x[0];

  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_5661(DATA *data, threadData_t *threadData);


/*
equation index: 2946
type: SIMPLE_ASSIGN
$START.sink.base.T[5,6] = sink.base.Tstart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2946(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2946};
  data->modelData->realVarsData[45].attribute /* sink.base.T[5,6] STATE(1) */.start = data->simulationInfo->realParameter[1] /* sink.base.Tstart PARAM */;
    data->localData[0]->realVars[45] /* sink.base.T[5,6] STATE(1) */ = data->modelData->realVarsData[45].attribute /* sink.base.T[5,6] STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[45].info /* sink.base.T[5,6] */.name, (modelica_real) data->localData[0]->realVars[45] /* sink.base.T[5,6] STATE(1) */);
  TRACE_POP
}

/*
equation index: 2947
type: SIMPLE_ASSIGN
sink.base.T[5,6] = sink.base.Tstart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2947(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2947};
  data->localData[0]->realVars[45] /* sink.base.T[5,6] STATE(1) */ = data->simulationInfo->realParameter[1] /* sink.base.Tstart PARAM */;
  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4838(DATA *data, threadData_t *threadData);

extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4494(DATA *data, threadData_t *threadData);


/*
equation index: 2954
type: LINEAR

<var>sink.hpConnector[6].vHP.T[5]</var>
<row>

</row>
<matrix>
</matrix>
*/
OMC_DISABLE_OPT
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2954(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2954};
  /* Linear equation system */
  int retValue;
  double aux_x[1] = { data->localData[1]->realVars[1697] /* sink.hpConnector[6].vHP.T[5] variable */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 2954 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  
  retValue = solve_linear_system(data, threadData, 59, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,2954};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 2954 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[1697] /* sink.hpConnector[6].vHP.T[5] variable */ = aux_x[0];

  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_5836(DATA *data, threadData_t *threadData);


/*
equation index: 2956
type: SIMPLE_ASSIGN
$START.sink.base.T[5,5] = sink.base.Tstart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2956(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2956};
  data->modelData->realVarsData[44].attribute /* sink.base.T[5,5] STATE(1) */.start = data->simulationInfo->realParameter[1] /* sink.base.Tstart PARAM */;
    data->localData[0]->realVars[44] /* sink.base.T[5,5] STATE(1) */ = data->modelData->realVarsData[44].attribute /* sink.base.T[5,5] STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[44].info /* sink.base.T[5,5] */.name, (modelica_real) data->localData[0]->realVars[44] /* sink.base.T[5,5] STATE(1) */);
  TRACE_POP
}

/*
equation index: 2957
type: SIMPLE_ASSIGN
sink.base.T[5,5] = sink.base.Tstart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2957(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2957};
  data->localData[0]->realVars[44] /* sink.base.T[5,5] STATE(1) */ = data->simulationInfo->realParameter[1] /* sink.base.Tstart PARAM */;
  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4839(DATA *data, threadData_t *threadData);

extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4488(DATA *data, threadData_t *threadData);


/*
equation index: 2964
type: LINEAR

<var>sink.hpConnector[5].vHP.T[5]</var>
<row>

</row>
<matrix>
</matrix>
*/
OMC_DISABLE_OPT
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2964(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2964};
  /* Linear equation system */
  int retValue;
  double aux_x[1] = { data->localData[1]->realVars[1687] /* sink.hpConnector[5].vHP.T[5] variable */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 2964 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  
  retValue = solve_linear_system(data, threadData, 60, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,2964};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 2964 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[1687] /* sink.hpConnector[5].vHP.T[5] variable */ = aux_x[0];

  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6025(DATA *data, threadData_t *threadData);


/*
equation index: 2966
type: SIMPLE_ASSIGN
$START.sink.base.T[5,4] = sink.base.Tstart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2966(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2966};
  data->modelData->realVarsData[43].attribute /* sink.base.T[5,4] STATE(1) */.start = data->simulationInfo->realParameter[1] /* sink.base.Tstart PARAM */;
    data->localData[0]->realVars[43] /* sink.base.T[5,4] STATE(1) */ = data->modelData->realVarsData[43].attribute /* sink.base.T[5,4] STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[43].info /* sink.base.T[5,4] */.name, (modelica_real) data->localData[0]->realVars[43] /* sink.base.T[5,4] STATE(1) */);
  TRACE_POP
}

/*
equation index: 2967
type: SIMPLE_ASSIGN
sink.base.T[5,4] = sink.base.Tstart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2967(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2967};
  data->localData[0]->realVars[43] /* sink.base.T[5,4] STATE(1) */ = data->simulationInfo->realParameter[1] /* sink.base.Tstart PARAM */;
  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4840(DATA *data, threadData_t *threadData);

extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4482(DATA *data, threadData_t *threadData);


/*
equation index: 2974
type: LINEAR

<var>sink.hpConnector[4].vHP.T[5]</var>
<row>

</row>
<matrix>
</matrix>
*/
OMC_DISABLE_OPT
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2974(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2974};
  /* Linear equation system */
  int retValue;
  double aux_x[1] = { data->localData[1]->realVars[1677] /* sink.hpConnector[4].vHP.T[5] variable */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 2974 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  
  retValue = solve_linear_system(data, threadData, 61, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,2974};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 2974 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[1677] /* sink.hpConnector[4].vHP.T[5] variable */ = aux_x[0];

  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6818(DATA *data, threadData_t *threadData);


/*
equation index: 2976
type: SIMPLE_ASSIGN
$START.sink.base.T[5,3] = sink.base.Tstart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2976(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2976};
  data->modelData->realVarsData[42].attribute /* sink.base.T[5,3] STATE(1) */.start = data->simulationInfo->realParameter[1] /* sink.base.Tstart PARAM */;
    data->localData[0]->realVars[42] /* sink.base.T[5,3] STATE(1) */ = data->modelData->realVarsData[42].attribute /* sink.base.T[5,3] STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[42].info /* sink.base.T[5,3] */.name, (modelica_real) data->localData[0]->realVars[42] /* sink.base.T[5,3] STATE(1) */);
  TRACE_POP
}

/*
equation index: 2977
type: SIMPLE_ASSIGN
sink.base.T[5,3] = sink.base.Tstart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2977(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2977};
  data->localData[0]->realVars[42] /* sink.base.T[5,3] STATE(1) */ = data->simulationInfo->realParameter[1] /* sink.base.Tstart PARAM */;
  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4841(DATA *data, threadData_t *threadData);

extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4476(DATA *data, threadData_t *threadData);


/*
equation index: 2984
type: LINEAR

<var>sink.hpConnector[3].vHP.T[5]</var>
<row>

</row>
<matrix>
</matrix>
*/
OMC_DISABLE_OPT
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2984(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2984};
  /* Linear equation system */
  int retValue;
  double aux_x[1] = { data->localData[1]->realVars[1667] /* sink.hpConnector[3].vHP.T[5] variable */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 2984 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  
  retValue = solve_linear_system(data, threadData, 62, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,2984};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 2984 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[1667] /* sink.hpConnector[3].vHP.T[5] variable */ = aux_x[0];

  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6200(DATA *data, threadData_t *threadData);


/*
equation index: 2986
type: SIMPLE_ASSIGN
$START.sink.base.T[5,2] = sink.base.Tstart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2986(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2986};
  data->modelData->realVarsData[41].attribute /* sink.base.T[5,2] STATE(1) */.start = data->simulationInfo->realParameter[1] /* sink.base.Tstart PARAM */;
    data->localData[0]->realVars[41] /* sink.base.T[5,2] STATE(1) */ = data->modelData->realVarsData[41].attribute /* sink.base.T[5,2] STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[41].info /* sink.base.T[5,2] */.name, (modelica_real) data->localData[0]->realVars[41] /* sink.base.T[5,2] STATE(1) */);
  TRACE_POP
}

/*
equation index: 2987
type: SIMPLE_ASSIGN
sink.base.T[5,2] = sink.base.Tstart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2987(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2987};
  data->localData[0]->realVars[41] /* sink.base.T[5,2] STATE(1) */ = data->simulationInfo->realParameter[1] /* sink.base.Tstart PARAM */;
  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4842(DATA *data, threadData_t *threadData);

extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4470(DATA *data, threadData_t *threadData);


/*
equation index: 2994
type: LINEAR

<var>sink.hpConnector[2].vHP.T[5]</var>
<row>

</row>
<matrix>
</matrix>
*/
OMC_DISABLE_OPT
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2994(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2994};
  /* Linear equation system */
  int retValue;
  double aux_x[1] = { data->localData[1]->realVars[1657] /* sink.hpConnector[2].vHP.T[5] variable */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 2994 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  
  retValue = solve_linear_system(data, threadData, 63, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,2994};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 2994 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[1657] /* sink.hpConnector[2].vHP.T[5] variable */ = aux_x[0];

  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6375(DATA *data, threadData_t *threadData);


/*
equation index: 2996
type: SIMPLE_ASSIGN
$START.sink.base.T[5,1] = sink.base.Tstart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2996(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2996};
  data->modelData->realVarsData[40].attribute /* sink.base.T[5,1] STATE(1) */.start = data->simulationInfo->realParameter[1] /* sink.base.Tstart PARAM */;
    data->localData[0]->realVars[40] /* sink.base.T[5,1] STATE(1) */ = data->modelData->realVarsData[40].attribute /* sink.base.T[5,1] STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[40].info /* sink.base.T[5,1] */.name, (modelica_real) data->localData[0]->realVars[40] /* sink.base.T[5,1] STATE(1) */);
  TRACE_POP
}

/*
equation index: 2997
type: SIMPLE_ASSIGN
sink.base.T[5,1] = sink.base.Tstart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2997(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2997};
  data->localData[0]->realVars[40] /* sink.base.T[5,1] STATE(1) */ = data->simulationInfo->realParameter[1] /* sink.base.Tstart PARAM */;
  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4843(DATA *data, threadData_t *threadData);

extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4464(DATA *data, threadData_t *threadData);


/*
equation index: 3004
type: LINEAR

<var>sink.hpConnector[1].vHP.T[5]</var>
<row>

</row>
<matrix>
</matrix>
*/
OMC_DISABLE_OPT
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3004(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3004};
  /* Linear equation system */
  int retValue;
  double aux_x[1] = { data->localData[1]->realVars[1647] /* sink.hpConnector[1].vHP.T[5] variable */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 3004 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  
  retValue = solve_linear_system(data, threadData, 64, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,3004};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 3004 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[1647] /* sink.hpConnector[1].vHP.T[5] variable */ = aux_x[0];

  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6536(DATA *data, threadData_t *threadData);


/*
equation index: 3006
type: SIMPLE_ASSIGN
$START.sink.base.T[4,10] = sink.base.Tstart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3006(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3006};
  data->modelData->realVarsData[39].attribute /* sink.base.T[4,10] STATE(1) */.start = data->simulationInfo->realParameter[1] /* sink.base.Tstart PARAM */;
    data->localData[0]->realVars[39] /* sink.base.T[4,10] STATE(1) */ = data->modelData->realVarsData[39].attribute /* sink.base.T[4,10] STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[39].info /* sink.base.T[4,10] */.name, (modelica_real) data->localData[0]->realVars[39] /* sink.base.T[4,10] STATE(1) */);
  TRACE_POP
}

/*
equation index: 3007
type: SIMPLE_ASSIGN
sink.base.T[4,10] = sink.base.Tstart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3007(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3007};
  data->localData[0]->realVars[39] /* sink.base.T[4,10] STATE(1) */ = data->simulationInfo->realParameter[1] /* sink.base.Tstart PARAM */;
  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4844(DATA *data, threadData_t *threadData);

extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4458(DATA *data, threadData_t *threadData);


/*
equation index: 3014
type: LINEAR

<var>sink.hpConnector[10].vHP.T[4]</var>
<row>

</row>
<matrix>
</matrix>
*/
OMC_DISABLE_OPT
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3014(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3014};
  /* Linear equation system */
  int retValue;
  double aux_x[1] = { data->localData[1]->realVars[1736] /* sink.hpConnector[10].vHP.T[4] variable */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 3014 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  
  retValue = solve_linear_system(data, threadData, 65, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,3014};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 3014 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[1736] /* sink.hpConnector[10].vHP.T[4] variable */ = aux_x[0];

  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6674(DATA *data, threadData_t *threadData);


/*
equation index: 3016
type: SIMPLE_ASSIGN
$START.sink.base.T[4,9] = sink.base.Tstart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3016(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3016};
  data->modelData->realVarsData[38].attribute /* sink.base.T[4,9] STATE(1) */.start = data->simulationInfo->realParameter[1] /* sink.base.Tstart PARAM */;
    data->localData[0]->realVars[38] /* sink.base.T[4,9] STATE(1) */ = data->modelData->realVarsData[38].attribute /* sink.base.T[4,9] STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[38].info /* sink.base.T[4,9] */.name, (modelica_real) data->localData[0]->realVars[38] /* sink.base.T[4,9] STATE(1) */);
  TRACE_POP
}

/*
equation index: 3017
type: SIMPLE_ASSIGN
sink.base.T[4,9] = sink.base.Tstart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3017(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3017};
  data->localData[0]->realVars[38] /* sink.base.T[4,9] STATE(1) */ = data->simulationInfo->realParameter[1] /* sink.base.Tstart PARAM */;
  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4845(DATA *data, threadData_t *threadData);

extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4452(DATA *data, threadData_t *threadData);


/*
equation index: 3024
type: LINEAR

<var>sink.hpConnector[9].vHP.T[4]</var>
<row>

</row>
<matrix>
</matrix>
*/
OMC_DISABLE_OPT
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3024(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3024};
  /* Linear equation system */
  int retValue;
  double aux_x[1] = { data->localData[1]->realVars[1726] /* sink.hpConnector[9].vHP.T[4] variable */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 3024 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  
  retValue = solve_linear_system(data, threadData, 66, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,3024};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 3024 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[1726] /* sink.hpConnector[9].vHP.T[4] variable */ = aux_x[0];

  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_5297(DATA *data, threadData_t *threadData);


/*
equation index: 3026
type: SIMPLE_ASSIGN
$START.sink.base.T[4,8] = sink.base.Tstart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3026(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3026};
  data->modelData->realVarsData[37].attribute /* sink.base.T[4,8] STATE(1) */.start = data->simulationInfo->realParameter[1] /* sink.base.Tstart PARAM */;
    data->localData[0]->realVars[37] /* sink.base.T[4,8] STATE(1) */ = data->modelData->realVarsData[37].attribute /* sink.base.T[4,8] STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[37].info /* sink.base.T[4,8] */.name, (modelica_real) data->localData[0]->realVars[37] /* sink.base.T[4,8] STATE(1) */);
  TRACE_POP
}

/*
equation index: 3027
type: SIMPLE_ASSIGN
sink.base.T[4,8] = sink.base.Tstart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3027(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3027};
  data->localData[0]->realVars[37] /* sink.base.T[4,8] STATE(1) */ = data->simulationInfo->realParameter[1] /* sink.base.Tstart PARAM */;
  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4846(DATA *data, threadData_t *threadData);

extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4446(DATA *data, threadData_t *threadData);


/*
equation index: 3034
type: LINEAR

<var>sink.hpConnector[8].vHP.T[4]</var>
<row>

</row>
<matrix>
</matrix>
*/
OMC_DISABLE_OPT
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3034(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3034};
  /* Linear equation system */
  int retValue;
  double aux_x[1] = { data->localData[1]->realVars[1716] /* sink.hpConnector[8].vHP.T[4] variable */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 3034 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  
  retValue = solve_linear_system(data, threadData, 67, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,3034};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 3034 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[1716] /* sink.hpConnector[8].vHP.T[4] variable */ = aux_x[0];

  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_5472(DATA *data, threadData_t *threadData);


/*
equation index: 3036
type: SIMPLE_ASSIGN
$START.sink.base.T[4,7] = sink.base.Tstart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3036(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3036};
  data->modelData->realVarsData[36].attribute /* sink.base.T[4,7] STATE(1) */.start = data->simulationInfo->realParameter[1] /* sink.base.Tstart PARAM */;
    data->localData[0]->realVars[36] /* sink.base.T[4,7] STATE(1) */ = data->modelData->realVarsData[36].attribute /* sink.base.T[4,7] STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[36].info /* sink.base.T[4,7] */.name, (modelica_real) data->localData[0]->realVars[36] /* sink.base.T[4,7] STATE(1) */);
  TRACE_POP
}

/*
equation index: 3037
type: SIMPLE_ASSIGN
sink.base.T[4,7] = sink.base.Tstart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3037(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3037};
  data->localData[0]->realVars[36] /* sink.base.T[4,7] STATE(1) */ = data->simulationInfo->realParameter[1] /* sink.base.Tstart PARAM */;
  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4847(DATA *data, threadData_t *threadData);

extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4440(DATA *data, threadData_t *threadData);


/*
equation index: 3044
type: LINEAR

<var>sink.hpConnector[7].vHP.T[4]</var>
<row>

</row>
<matrix>
</matrix>
*/
OMC_DISABLE_OPT
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3044(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3044};
  /* Linear equation system */
  int retValue;
  double aux_x[1] = { data->localData[1]->realVars[1706] /* sink.hpConnector[7].vHP.T[4] variable */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 3044 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  
  retValue = solve_linear_system(data, threadData, 68, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,3044};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 3044 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[1706] /* sink.hpConnector[7].vHP.T[4] variable */ = aux_x[0];

  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_5647(DATA *data, threadData_t *threadData);


/*
equation index: 3046
type: SIMPLE_ASSIGN
$START.sink.base.T[4,6] = sink.base.Tstart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3046(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3046};
  data->modelData->realVarsData[35].attribute /* sink.base.T[4,6] STATE(1) */.start = data->simulationInfo->realParameter[1] /* sink.base.Tstart PARAM */;
    data->localData[0]->realVars[35] /* sink.base.T[4,6] STATE(1) */ = data->modelData->realVarsData[35].attribute /* sink.base.T[4,6] STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[35].info /* sink.base.T[4,6] */.name, (modelica_real) data->localData[0]->realVars[35] /* sink.base.T[4,6] STATE(1) */);
  TRACE_POP
}

/*
equation index: 3047
type: SIMPLE_ASSIGN
sink.base.T[4,6] = sink.base.Tstart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3047(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3047};
  data->localData[0]->realVars[35] /* sink.base.T[4,6] STATE(1) */ = data->simulationInfo->realParameter[1] /* sink.base.Tstart PARAM */;
  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4848(DATA *data, threadData_t *threadData);

extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4434(DATA *data, threadData_t *threadData);


/*
equation index: 3054
type: LINEAR

<var>sink.hpConnector[6].vHP.T[4]</var>
<row>

</row>
<matrix>
</matrix>
*/
OMC_DISABLE_OPT
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3054(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3054};
  /* Linear equation system */
  int retValue;
  double aux_x[1] = { data->localData[1]->realVars[1696] /* sink.hpConnector[6].vHP.T[4] variable */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 3054 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  
  retValue = solve_linear_system(data, threadData, 69, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,3054};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 3054 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[1696] /* sink.hpConnector[6].vHP.T[4] variable */ = aux_x[0];

  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_5822(DATA *data, threadData_t *threadData);


/*
equation index: 3056
type: SIMPLE_ASSIGN
$START.sink.base.T[4,5] = sink.base.Tstart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3056(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3056};
  data->modelData->realVarsData[34].attribute /* sink.base.T[4,5] STATE(1) */.start = data->simulationInfo->realParameter[1] /* sink.base.Tstart PARAM */;
    data->localData[0]->realVars[34] /* sink.base.T[4,5] STATE(1) */ = data->modelData->realVarsData[34].attribute /* sink.base.T[4,5] STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[34].info /* sink.base.T[4,5] */.name, (modelica_real) data->localData[0]->realVars[34] /* sink.base.T[4,5] STATE(1) */);
  TRACE_POP
}

/*
equation index: 3057
type: SIMPLE_ASSIGN
sink.base.T[4,5] = sink.base.Tstart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3057(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3057};
  data->localData[0]->realVars[34] /* sink.base.T[4,5] STATE(1) */ = data->simulationInfo->realParameter[1] /* sink.base.Tstart PARAM */;
  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4849(DATA *data, threadData_t *threadData);

extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4428(DATA *data, threadData_t *threadData);


/*
equation index: 3064
type: LINEAR

<var>sink.hpConnector[5].vHP.T[4]</var>
<row>

</row>
<matrix>
</matrix>
*/
OMC_DISABLE_OPT
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3064(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3064};
  /* Linear equation system */
  int retValue;
  double aux_x[1] = { data->localData[1]->realVars[1686] /* sink.hpConnector[5].vHP.T[4] variable */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 3064 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  
  retValue = solve_linear_system(data, threadData, 70, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,3064};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 3064 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[1686] /* sink.hpConnector[5].vHP.T[4] variable */ = aux_x[0];

  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6035(DATA *data, threadData_t *threadData);


/*
equation index: 3066
type: SIMPLE_ASSIGN
$START.sink.base.T[4,4] = sink.base.Tstart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3066(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3066};
  data->modelData->realVarsData[33].attribute /* sink.base.T[4,4] STATE(1) */.start = data->simulationInfo->realParameter[1] /* sink.base.Tstart PARAM */;
    data->localData[0]->realVars[33] /* sink.base.T[4,4] STATE(1) */ = data->modelData->realVarsData[33].attribute /* sink.base.T[4,4] STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[33].info /* sink.base.T[4,4] */.name, (modelica_real) data->localData[0]->realVars[33] /* sink.base.T[4,4] STATE(1) */);
  TRACE_POP
}

/*
equation index: 3067
type: SIMPLE_ASSIGN
sink.base.T[4,4] = sink.base.Tstart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3067(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3067};
  data->localData[0]->realVars[33] /* sink.base.T[4,4] STATE(1) */ = data->simulationInfo->realParameter[1] /* sink.base.Tstart PARAM */;
  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4850(DATA *data, threadData_t *threadData);

extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4422(DATA *data, threadData_t *threadData);


/*
equation index: 3074
type: LINEAR

<var>sink.hpConnector[4].vHP.T[4]</var>
<row>

</row>
<matrix>
</matrix>
*/
OMC_DISABLE_OPT
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3074(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3074};
  /* Linear equation system */
  int retValue;
  double aux_x[1] = { data->localData[1]->realVars[1676] /* sink.hpConnector[4].vHP.T[4] variable */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 3074 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  
  retValue = solve_linear_system(data, threadData, 71, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,3074};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 3074 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[1676] /* sink.hpConnector[4].vHP.T[4] variable */ = aux_x[0];

  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6828(DATA *data, threadData_t *threadData);


/*
equation index: 3076
type: SIMPLE_ASSIGN
$START.sink.base.T[4,3] = sink.base.Tstart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3076(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3076};
  data->modelData->realVarsData[32].attribute /* sink.base.T[4,3] STATE(1) */.start = data->simulationInfo->realParameter[1] /* sink.base.Tstart PARAM */;
    data->localData[0]->realVars[32] /* sink.base.T[4,3] STATE(1) */ = data->modelData->realVarsData[32].attribute /* sink.base.T[4,3] STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[32].info /* sink.base.T[4,3] */.name, (modelica_real) data->localData[0]->realVars[32] /* sink.base.T[4,3] STATE(1) */);
  TRACE_POP
}

/*
equation index: 3077
type: SIMPLE_ASSIGN
sink.base.T[4,3] = sink.base.Tstart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3077(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3077};
  data->localData[0]->realVars[32] /* sink.base.T[4,3] STATE(1) */ = data->simulationInfo->realParameter[1] /* sink.base.Tstart PARAM */;
  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4851(DATA *data, threadData_t *threadData);

extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4416(DATA *data, threadData_t *threadData);


/*
equation index: 3084
type: LINEAR

<var>sink.hpConnector[3].vHP.T[4]</var>
<row>

</row>
<matrix>
</matrix>
*/
OMC_DISABLE_OPT
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3084(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3084};
  /* Linear equation system */
  int retValue;
  double aux_x[1] = { data->localData[1]->realVars[1666] /* sink.hpConnector[3].vHP.T[4] variable */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 3084 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  
  retValue = solve_linear_system(data, threadData, 72, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,3084};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 3084 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[1666] /* sink.hpConnector[3].vHP.T[4] variable */ = aux_x[0];

  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6210(DATA *data, threadData_t *threadData);


/*
equation index: 3086
type: SIMPLE_ASSIGN
$START.sink.base.T[4,2] = sink.base.Tstart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3086(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3086};
  data->modelData->realVarsData[31].attribute /* sink.base.T[4,2] STATE(1) */.start = data->simulationInfo->realParameter[1] /* sink.base.Tstart PARAM */;
    data->localData[0]->realVars[31] /* sink.base.T[4,2] STATE(1) */ = data->modelData->realVarsData[31].attribute /* sink.base.T[4,2] STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[31].info /* sink.base.T[4,2] */.name, (modelica_real) data->localData[0]->realVars[31] /* sink.base.T[4,2] STATE(1) */);
  TRACE_POP
}

/*
equation index: 3087
type: SIMPLE_ASSIGN
sink.base.T[4,2] = sink.base.Tstart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3087(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3087};
  data->localData[0]->realVars[31] /* sink.base.T[4,2] STATE(1) */ = data->simulationInfo->realParameter[1] /* sink.base.Tstart PARAM */;
  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4852(DATA *data, threadData_t *threadData);

extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4410(DATA *data, threadData_t *threadData);


/*
equation index: 3094
type: LINEAR

<var>sink.hpConnector[2].vHP.T[4]</var>
<row>

</row>
<matrix>
</matrix>
*/
OMC_DISABLE_OPT
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3094(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3094};
  /* Linear equation system */
  int retValue;
  double aux_x[1] = { data->localData[1]->realVars[1656] /* sink.hpConnector[2].vHP.T[4] variable */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 3094 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  
  retValue = solve_linear_system(data, threadData, 73, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,3094};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 3094 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[1656] /* sink.hpConnector[2].vHP.T[4] variable */ = aux_x[0];

  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6385(DATA *data, threadData_t *threadData);


/*
equation index: 3096
type: SIMPLE_ASSIGN
$START.sink.base.T[4,1] = sink.base.Tstart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3096(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3096};
  data->modelData->realVarsData[30].attribute /* sink.base.T[4,1] STATE(1) */.start = data->simulationInfo->realParameter[1] /* sink.base.Tstart PARAM */;
    data->localData[0]->realVars[30] /* sink.base.T[4,1] STATE(1) */ = data->modelData->realVarsData[30].attribute /* sink.base.T[4,1] STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[30].info /* sink.base.T[4,1] */.name, (modelica_real) data->localData[0]->realVars[30] /* sink.base.T[4,1] STATE(1) */);
  TRACE_POP
}

/*
equation index: 3097
type: SIMPLE_ASSIGN
sink.base.T[4,1] = sink.base.Tstart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3097(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3097};
  data->localData[0]->realVars[30] /* sink.base.T[4,1] STATE(1) */ = data->simulationInfo->realParameter[1] /* sink.base.Tstart PARAM */;
  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4853(DATA *data, threadData_t *threadData);

extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4404(DATA *data, threadData_t *threadData);


/*
equation index: 3104
type: LINEAR

<var>sink.hpConnector[1].vHP.T[4]</var>
<row>

</row>
<matrix>
</matrix>
*/
OMC_DISABLE_OPT
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3104(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3104};
  /* Linear equation system */
  int retValue;
  double aux_x[1] = { data->localData[1]->realVars[1646] /* sink.hpConnector[1].vHP.T[4] variable */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 3104 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  
  retValue = solve_linear_system(data, threadData, 74, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,3104};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 3104 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[1646] /* sink.hpConnector[1].vHP.T[4] variable */ = aux_x[0];

  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6522(DATA *data, threadData_t *threadData);


/*
equation index: 3106
type: SIMPLE_ASSIGN
$START.sink.base.T[3,10] = sink.base.Tstart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3106(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3106};
  data->modelData->realVarsData[29].attribute /* sink.base.T[3,10] STATE(1) */.start = data->simulationInfo->realParameter[1] /* sink.base.Tstart PARAM */;
    data->localData[0]->realVars[29] /* sink.base.T[3,10] STATE(1) */ = data->modelData->realVarsData[29].attribute /* sink.base.T[3,10] STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[29].info /* sink.base.T[3,10] */.name, (modelica_real) data->localData[0]->realVars[29] /* sink.base.T[3,10] STATE(1) */);
  TRACE_POP
}

/*
equation index: 3107
type: SIMPLE_ASSIGN
sink.base.T[3,10] = sink.base.Tstart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3107(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3107};
  data->localData[0]->realVars[29] /* sink.base.T[3,10] STATE(1) */ = data->simulationInfo->realParameter[1] /* sink.base.Tstart PARAM */;
  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4854(DATA *data, threadData_t *threadData);

extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4398(DATA *data, threadData_t *threadData);


/*
equation index: 3114
type: LINEAR

<var>sink.hpConnector[10].vHP.T[3]</var>
<row>

</row>
<matrix>
</matrix>
*/
OMC_DISABLE_OPT
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3114(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3114};
  /* Linear equation system */
  int retValue;
  double aux_x[1] = { data->localData[1]->realVars[1735] /* sink.hpConnector[10].vHP.T[3] variable */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 3114 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  
  retValue = solve_linear_system(data, threadData, 75, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,3114};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 3114 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[1735] /* sink.hpConnector[10].vHP.T[3] variable */ = aux_x[0];

  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6684(DATA *data, threadData_t *threadData);


/*
equation index: 3116
type: SIMPLE_ASSIGN
$START.sink.base.T[3,9] = sink.base.Tstart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3116(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3116};
  data->modelData->realVarsData[28].attribute /* sink.base.T[3,9] STATE(1) */.start = data->simulationInfo->realParameter[1] /* sink.base.Tstart PARAM */;
    data->localData[0]->realVars[28] /* sink.base.T[3,9] STATE(1) */ = data->modelData->realVarsData[28].attribute /* sink.base.T[3,9] STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[28].info /* sink.base.T[3,9] */.name, (modelica_real) data->localData[0]->realVars[28] /* sink.base.T[3,9] STATE(1) */);
  TRACE_POP
}

/*
equation index: 3117
type: SIMPLE_ASSIGN
sink.base.T[3,9] = sink.base.Tstart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3117(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3117};
  data->localData[0]->realVars[28] /* sink.base.T[3,9] STATE(1) */ = data->simulationInfo->realParameter[1] /* sink.base.Tstart PARAM */;
  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4855(DATA *data, threadData_t *threadData);

extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4392(DATA *data, threadData_t *threadData);


/*
equation index: 3124
type: LINEAR

<var>sink.hpConnector[9].vHP.T[3]</var>
<row>

</row>
<matrix>
</matrix>
*/
OMC_DISABLE_OPT
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3124(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3124};
  /* Linear equation system */
  int retValue;
  double aux_x[1] = { data->localData[1]->realVars[1725] /* sink.hpConnector[9].vHP.T[3] variable */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 3124 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  
  retValue = solve_linear_system(data, threadData, 76, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,3124};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 3124 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[1725] /* sink.hpConnector[9].vHP.T[3] variable */ = aux_x[0];

  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_5283(DATA *data, threadData_t *threadData);


/*
equation index: 3126
type: SIMPLE_ASSIGN
$START.sink.base.T[3,8] = sink.base.Tstart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3126(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3126};
  data->modelData->realVarsData[27].attribute /* sink.base.T[3,8] STATE(1) */.start = data->simulationInfo->realParameter[1] /* sink.base.Tstart PARAM */;
    data->localData[0]->realVars[27] /* sink.base.T[3,8] STATE(1) */ = data->modelData->realVarsData[27].attribute /* sink.base.T[3,8] STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[27].info /* sink.base.T[3,8] */.name, (modelica_real) data->localData[0]->realVars[27] /* sink.base.T[3,8] STATE(1) */);
  TRACE_POP
}

/*
equation index: 3127
type: SIMPLE_ASSIGN
sink.base.T[3,8] = sink.base.Tstart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3127(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3127};
  data->localData[0]->realVars[27] /* sink.base.T[3,8] STATE(1) */ = data->simulationInfo->realParameter[1] /* sink.base.Tstart PARAM */;
  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4856(DATA *data, threadData_t *threadData);

extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4386(DATA *data, threadData_t *threadData);


/*
equation index: 3134
type: LINEAR

<var>sink.hpConnector[8].vHP.T[3]</var>
<row>

</row>
<matrix>
</matrix>
*/
OMC_DISABLE_OPT
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3134(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3134};
  /* Linear equation system */
  int retValue;
  double aux_x[1] = { data->localData[1]->realVars[1715] /* sink.hpConnector[8].vHP.T[3] variable */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 3134 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  
  retValue = solve_linear_system(data, threadData, 77, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,3134};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 3134 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[1715] /* sink.hpConnector[8].vHP.T[3] variable */ = aux_x[0];

  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_5458(DATA *data, threadData_t *threadData);


/*
equation index: 3136
type: SIMPLE_ASSIGN
$START.sink.base.T[3,7] = sink.base.Tstart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3136(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3136};
  data->modelData->realVarsData[26].attribute /* sink.base.T[3,7] STATE(1) */.start = data->simulationInfo->realParameter[1] /* sink.base.Tstart PARAM */;
    data->localData[0]->realVars[26] /* sink.base.T[3,7] STATE(1) */ = data->modelData->realVarsData[26].attribute /* sink.base.T[3,7] STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[26].info /* sink.base.T[3,7] */.name, (modelica_real) data->localData[0]->realVars[26] /* sink.base.T[3,7] STATE(1) */);
  TRACE_POP
}

/*
equation index: 3137
type: SIMPLE_ASSIGN
sink.base.T[3,7] = sink.base.Tstart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3137(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3137};
  data->localData[0]->realVars[26] /* sink.base.T[3,7] STATE(1) */ = data->simulationInfo->realParameter[1] /* sink.base.Tstart PARAM */;
  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4857(DATA *data, threadData_t *threadData);

extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4380(DATA *data, threadData_t *threadData);


/*
equation index: 3144
type: LINEAR

<var>sink.hpConnector[7].vHP.T[3]</var>
<row>

</row>
<matrix>
</matrix>
*/
OMC_DISABLE_OPT
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3144(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3144};
  /* Linear equation system */
  int retValue;
  double aux_x[1] = { data->localData[1]->realVars[1705] /* sink.hpConnector[7].vHP.T[3] variable */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 3144 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  
  retValue = solve_linear_system(data, threadData, 78, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,3144};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 3144 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[1705] /* sink.hpConnector[7].vHP.T[3] variable */ = aux_x[0];

  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_5633(DATA *data, threadData_t *threadData);


/*
equation index: 3146
type: SIMPLE_ASSIGN
$START.sink.base.T[3,6] = sink.base.Tstart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3146(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3146};
  data->modelData->realVarsData[25].attribute /* sink.base.T[3,6] STATE(1) */.start = data->simulationInfo->realParameter[1] /* sink.base.Tstart PARAM */;
    data->localData[0]->realVars[25] /* sink.base.T[3,6] STATE(1) */ = data->modelData->realVarsData[25].attribute /* sink.base.T[3,6] STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[25].info /* sink.base.T[3,6] */.name, (modelica_real) data->localData[0]->realVars[25] /* sink.base.T[3,6] STATE(1) */);
  TRACE_POP
}

/*
equation index: 3147
type: SIMPLE_ASSIGN
sink.base.T[3,6] = sink.base.Tstart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3147(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3147};
  data->localData[0]->realVars[25] /* sink.base.T[3,6] STATE(1) */ = data->simulationInfo->realParameter[1] /* sink.base.Tstart PARAM */;
  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4858(DATA *data, threadData_t *threadData);

extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4374(DATA *data, threadData_t *threadData);


/*
equation index: 3154
type: LINEAR

<var>sink.hpConnector[6].vHP.T[3]</var>
<row>

</row>
<matrix>
</matrix>
*/
OMC_DISABLE_OPT
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3154(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3154};
  /* Linear equation system */
  int retValue;
  double aux_x[1] = { data->localData[1]->realVars[1695] /* sink.hpConnector[6].vHP.T[3] variable */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 3154 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  
  retValue = solve_linear_system(data, threadData, 79, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,3154};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 3154 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[1695] /* sink.hpConnector[6].vHP.T[3] variable */ = aux_x[0];

  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_5808(DATA *data, threadData_t *threadData);


/*
equation index: 3156
type: SIMPLE_ASSIGN
$START.sink.base.T[3,5] = sink.base.Tstart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3156(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3156};
  data->modelData->realVarsData[24].attribute /* sink.base.T[3,5] STATE(1) */.start = data->simulationInfo->realParameter[1] /* sink.base.Tstart PARAM */;
    data->localData[0]->realVars[24] /* sink.base.T[3,5] STATE(1) */ = data->modelData->realVarsData[24].attribute /* sink.base.T[3,5] STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[24].info /* sink.base.T[3,5] */.name, (modelica_real) data->localData[0]->realVars[24] /* sink.base.T[3,5] STATE(1) */);
  TRACE_POP
}

/*
equation index: 3157
type: SIMPLE_ASSIGN
sink.base.T[3,5] = sink.base.Tstart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3157(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3157};
  data->localData[0]->realVars[24] /* sink.base.T[3,5] STATE(1) */ = data->simulationInfo->realParameter[1] /* sink.base.Tstart PARAM */;
  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4859(DATA *data, threadData_t *threadData);

extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4368(DATA *data, threadData_t *threadData);


/*
equation index: 3164
type: LINEAR

<var>sink.hpConnector[5].vHP.T[3]</var>
<row>

</row>
<matrix>
</matrix>
*/
OMC_DISABLE_OPT
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3164(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3164};
  /* Linear equation system */
  int retValue;
  double aux_x[1] = { data->localData[1]->realVars[1685] /* sink.hpConnector[5].vHP.T[3] variable */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 3164 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  
  retValue = solve_linear_system(data, threadData, 80, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,3164};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 3164 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[1685] /* sink.hpConnector[5].vHP.T[3] variable */ = aux_x[0];

  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6045(DATA *data, threadData_t *threadData);


/*
equation index: 3166
type: SIMPLE_ASSIGN
$START.sink.base.T[3,4] = sink.base.Tstart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3166(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3166};
  data->modelData->realVarsData[23].attribute /* sink.base.T[3,4] STATE(1) */.start = data->simulationInfo->realParameter[1] /* sink.base.Tstart PARAM */;
    data->localData[0]->realVars[23] /* sink.base.T[3,4] STATE(1) */ = data->modelData->realVarsData[23].attribute /* sink.base.T[3,4] STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[23].info /* sink.base.T[3,4] */.name, (modelica_real) data->localData[0]->realVars[23] /* sink.base.T[3,4] STATE(1) */);
  TRACE_POP
}

/*
equation index: 3167
type: SIMPLE_ASSIGN
sink.base.T[3,4] = sink.base.Tstart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3167(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3167};
  data->localData[0]->realVars[23] /* sink.base.T[3,4] STATE(1) */ = data->simulationInfo->realParameter[1] /* sink.base.Tstart PARAM */;
  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4860(DATA *data, threadData_t *threadData);

extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4362(DATA *data, threadData_t *threadData);


/*
equation index: 3174
type: LINEAR

<var>sink.hpConnector[4].vHP.T[3]</var>
<row>

</row>
<matrix>
</matrix>
*/
OMC_DISABLE_OPT
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3174(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3174};
  /* Linear equation system */
  int retValue;
  double aux_x[1] = { data->localData[1]->realVars[1675] /* sink.hpConnector[4].vHP.T[3] variable */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 3174 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  
  retValue = solve_linear_system(data, threadData, 81, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,3174};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 3174 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[1675] /* sink.hpConnector[4].vHP.T[3] variable */ = aux_x[0];

  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6838(DATA *data, threadData_t *threadData);


/*
equation index: 3176
type: SIMPLE_ASSIGN
$START.sink.base.T[3,3] = sink.base.Tstart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3176(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3176};
  data->modelData->realVarsData[22].attribute /* sink.base.T[3,3] STATE(1) */.start = data->simulationInfo->realParameter[1] /* sink.base.Tstart PARAM */;
    data->localData[0]->realVars[22] /* sink.base.T[3,3] STATE(1) */ = data->modelData->realVarsData[22].attribute /* sink.base.T[3,3] STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[22].info /* sink.base.T[3,3] */.name, (modelica_real) data->localData[0]->realVars[22] /* sink.base.T[3,3] STATE(1) */);
  TRACE_POP
}

/*
equation index: 3177
type: SIMPLE_ASSIGN
sink.base.T[3,3] = sink.base.Tstart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3177(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3177};
  data->localData[0]->realVars[22] /* sink.base.T[3,3] STATE(1) */ = data->simulationInfo->realParameter[1] /* sink.base.Tstart PARAM */;
  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4861(DATA *data, threadData_t *threadData);

extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4356(DATA *data, threadData_t *threadData);


/*
equation index: 3184
type: LINEAR

<var>sink.hpConnector[3].vHP.T[3]</var>
<row>

</row>
<matrix>
</matrix>
*/
OMC_DISABLE_OPT
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3184(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3184};
  /* Linear equation system */
  int retValue;
  double aux_x[1] = { data->localData[1]->realVars[1665] /* sink.hpConnector[3].vHP.T[3] variable */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 3184 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  
  retValue = solve_linear_system(data, threadData, 82, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,3184};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 3184 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[1665] /* sink.hpConnector[3].vHP.T[3] variable */ = aux_x[0];

  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6220(DATA *data, threadData_t *threadData);


/*
equation index: 3186
type: SIMPLE_ASSIGN
$START.sink.base.T[3,2] = sink.base.Tstart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3186(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3186};
  data->modelData->realVarsData[21].attribute /* sink.base.T[3,2] STATE(1) */.start = data->simulationInfo->realParameter[1] /* sink.base.Tstart PARAM */;
    data->localData[0]->realVars[21] /* sink.base.T[3,2] STATE(1) */ = data->modelData->realVarsData[21].attribute /* sink.base.T[3,2] STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[21].info /* sink.base.T[3,2] */.name, (modelica_real) data->localData[0]->realVars[21] /* sink.base.T[3,2] STATE(1) */);
  TRACE_POP
}

/*
equation index: 3187
type: SIMPLE_ASSIGN
sink.base.T[3,2] = sink.base.Tstart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3187(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3187};
  data->localData[0]->realVars[21] /* sink.base.T[3,2] STATE(1) */ = data->simulationInfo->realParameter[1] /* sink.base.Tstart PARAM */;
  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4862(DATA *data, threadData_t *threadData);

extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4350(DATA *data, threadData_t *threadData);


/*
equation index: 3194
type: LINEAR

<var>sink.hpConnector[2].vHP.T[3]</var>
<row>

</row>
<matrix>
</matrix>
*/
OMC_DISABLE_OPT
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3194(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3194};
  /* Linear equation system */
  int retValue;
  double aux_x[1] = { data->localData[1]->realVars[1655] /* sink.hpConnector[2].vHP.T[3] variable */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 3194 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  
  retValue = solve_linear_system(data, threadData, 83, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,3194};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 3194 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[1655] /* sink.hpConnector[2].vHP.T[3] variable */ = aux_x[0];

  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6395(DATA *data, threadData_t *threadData);


/*
equation index: 3196
type: SIMPLE_ASSIGN
$START.sink.base.T[3,1] = sink.base.Tstart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3196(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3196};
  data->modelData->realVarsData[20].attribute /* sink.base.T[3,1] STATE(1) */.start = data->simulationInfo->realParameter[1] /* sink.base.Tstart PARAM */;
    data->localData[0]->realVars[20] /* sink.base.T[3,1] STATE(1) */ = data->modelData->realVarsData[20].attribute /* sink.base.T[3,1] STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[20].info /* sink.base.T[3,1] */.name, (modelica_real) data->localData[0]->realVars[20] /* sink.base.T[3,1] STATE(1) */);
  TRACE_POP
}

/*
equation index: 3197
type: SIMPLE_ASSIGN
sink.base.T[3,1] = sink.base.Tstart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3197(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3197};
  data->localData[0]->realVars[20] /* sink.base.T[3,1] STATE(1) */ = data->simulationInfo->realParameter[1] /* sink.base.Tstart PARAM */;
  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4863(DATA *data, threadData_t *threadData);

extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4344(DATA *data, threadData_t *threadData);


/*
equation index: 3204
type: LINEAR

<var>sink.hpConnector[1].vHP.T[3]</var>
<row>

</row>
<matrix>
</matrix>
*/
OMC_DISABLE_OPT
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3204(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3204};
  /* Linear equation system */
  int retValue;
  double aux_x[1] = { data->localData[1]->realVars[1645] /* sink.hpConnector[1].vHP.T[3] variable */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 3204 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  
  retValue = solve_linear_system(data, threadData, 84, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,3204};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 3204 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[1645] /* sink.hpConnector[1].vHP.T[3] variable */ = aux_x[0];

  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6508(DATA *data, threadData_t *threadData);


/*
equation index: 3206
type: SIMPLE_ASSIGN
$START.sink.base.T[2,10] = sink.base.Tstart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3206(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3206};
  data->modelData->realVarsData[19].attribute /* sink.base.T[2,10] STATE(1) */.start = data->simulationInfo->realParameter[1] /* sink.base.Tstart PARAM */;
    data->localData[0]->realVars[19] /* sink.base.T[2,10] STATE(1) */ = data->modelData->realVarsData[19].attribute /* sink.base.T[2,10] STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[19].info /* sink.base.T[2,10] */.name, (modelica_real) data->localData[0]->realVars[19] /* sink.base.T[2,10] STATE(1) */);
  TRACE_POP
}

/*
equation index: 3207
type: SIMPLE_ASSIGN
sink.base.T[2,10] = sink.base.Tstart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3207(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3207};
  data->localData[0]->realVars[19] /* sink.base.T[2,10] STATE(1) */ = data->simulationInfo->realParameter[1] /* sink.base.Tstart PARAM */;
  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4864(DATA *data, threadData_t *threadData);

extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4338(DATA *data, threadData_t *threadData);


/*
equation index: 3214
type: LINEAR

<var>sink.hpConnector[10].vHP.T[2]</var>
<row>

</row>
<matrix>
</matrix>
*/
OMC_DISABLE_OPT
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3214(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3214};
  /* Linear equation system */
  int retValue;
  double aux_x[1] = { data->localData[1]->realVars[1734] /* sink.hpConnector[10].vHP.T[2] variable */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 3214 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  
  retValue = solve_linear_system(data, threadData, 85, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,3214};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 3214 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[1734] /* sink.hpConnector[10].vHP.T[2] variable */ = aux_x[0];

  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6694(DATA *data, threadData_t *threadData);


/*
equation index: 3216
type: SIMPLE_ASSIGN
$START.sink.base.T[2,9] = sink.base.Tstart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3216(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3216};
  data->modelData->realVarsData[18].attribute /* sink.base.T[2,9] STATE(1) */.start = data->simulationInfo->realParameter[1] /* sink.base.Tstart PARAM */;
    data->localData[0]->realVars[18] /* sink.base.T[2,9] STATE(1) */ = data->modelData->realVarsData[18].attribute /* sink.base.T[2,9] STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[18].info /* sink.base.T[2,9] */.name, (modelica_real) data->localData[0]->realVars[18] /* sink.base.T[2,9] STATE(1) */);
  TRACE_POP
}

/*
equation index: 3217
type: SIMPLE_ASSIGN
sink.base.T[2,9] = sink.base.Tstart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3217(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3217};
  data->localData[0]->realVars[18] /* sink.base.T[2,9] STATE(1) */ = data->simulationInfo->realParameter[1] /* sink.base.Tstart PARAM */;
  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4865(DATA *data, threadData_t *threadData);

extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4332(DATA *data, threadData_t *threadData);


/*
equation index: 3224
type: LINEAR

<var>sink.hpConnector[9].vHP.T[2]</var>
<row>

</row>
<matrix>
</matrix>
*/
OMC_DISABLE_OPT
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3224(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3224};
  /* Linear equation system */
  int retValue;
  double aux_x[1] = { data->localData[1]->realVars[1724] /* sink.hpConnector[9].vHP.T[2] variable */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 3224 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  
  retValue = solve_linear_system(data, threadData, 86, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,3224};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 3224 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[1724] /* sink.hpConnector[9].vHP.T[2] variable */ = aux_x[0];

  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_5269(DATA *data, threadData_t *threadData);


/*
equation index: 3226
type: SIMPLE_ASSIGN
$START.sink.base.T[2,8] = sink.base.Tstart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3226(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3226};
  data->modelData->realVarsData[17].attribute /* sink.base.T[2,8] STATE(1) */.start = data->simulationInfo->realParameter[1] /* sink.base.Tstart PARAM */;
    data->localData[0]->realVars[17] /* sink.base.T[2,8] STATE(1) */ = data->modelData->realVarsData[17].attribute /* sink.base.T[2,8] STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[17].info /* sink.base.T[2,8] */.name, (modelica_real) data->localData[0]->realVars[17] /* sink.base.T[2,8] STATE(1) */);
  TRACE_POP
}

/*
equation index: 3227
type: SIMPLE_ASSIGN
sink.base.T[2,8] = sink.base.Tstart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3227(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3227};
  data->localData[0]->realVars[17] /* sink.base.T[2,8] STATE(1) */ = data->simulationInfo->realParameter[1] /* sink.base.Tstart PARAM */;
  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4866(DATA *data, threadData_t *threadData);

extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4326(DATA *data, threadData_t *threadData);


/*
equation index: 3234
type: LINEAR

<var>sink.hpConnector[8].vHP.T[2]</var>
<row>

</row>
<matrix>
</matrix>
*/
OMC_DISABLE_OPT
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3234(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3234};
  /* Linear equation system */
  int retValue;
  double aux_x[1] = { data->localData[1]->realVars[1714] /* sink.hpConnector[8].vHP.T[2] variable */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 3234 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  
  retValue = solve_linear_system(data, threadData, 87, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,3234};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 3234 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[1714] /* sink.hpConnector[8].vHP.T[2] variable */ = aux_x[0];

  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_5444(DATA *data, threadData_t *threadData);


/*
equation index: 3236
type: SIMPLE_ASSIGN
$START.sink.base.T[2,7] = sink.base.Tstart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3236(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3236};
  data->modelData->realVarsData[16].attribute /* sink.base.T[2,7] STATE(1) */.start = data->simulationInfo->realParameter[1] /* sink.base.Tstart PARAM */;
    data->localData[0]->realVars[16] /* sink.base.T[2,7] STATE(1) */ = data->modelData->realVarsData[16].attribute /* sink.base.T[2,7] STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[16].info /* sink.base.T[2,7] */.name, (modelica_real) data->localData[0]->realVars[16] /* sink.base.T[2,7] STATE(1) */);
  TRACE_POP
}

/*
equation index: 3237
type: SIMPLE_ASSIGN
sink.base.T[2,7] = sink.base.Tstart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3237(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3237};
  data->localData[0]->realVars[16] /* sink.base.T[2,7] STATE(1) */ = data->simulationInfo->realParameter[1] /* sink.base.Tstart PARAM */;
  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4867(DATA *data, threadData_t *threadData);

extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4320(DATA *data, threadData_t *threadData);


/*
equation index: 3244
type: LINEAR

<var>sink.hpConnector[7].vHP.T[2]</var>
<row>

</row>
<matrix>
</matrix>
*/
OMC_DISABLE_OPT
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3244(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3244};
  /* Linear equation system */
  int retValue;
  double aux_x[1] = { data->localData[1]->realVars[1704] /* sink.hpConnector[7].vHP.T[2] variable */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 3244 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  
  retValue = solve_linear_system(data, threadData, 88, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,3244};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 3244 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[1704] /* sink.hpConnector[7].vHP.T[2] variable */ = aux_x[0];

  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_5619(DATA *data, threadData_t *threadData);


/*
equation index: 3246
type: SIMPLE_ASSIGN
$START.sink.base.T[2,6] = sink.base.Tstart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3246(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3246};
  data->modelData->realVarsData[15].attribute /* sink.base.T[2,6] STATE(1) */.start = data->simulationInfo->realParameter[1] /* sink.base.Tstart PARAM */;
    data->localData[0]->realVars[15] /* sink.base.T[2,6] STATE(1) */ = data->modelData->realVarsData[15].attribute /* sink.base.T[2,6] STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[15].info /* sink.base.T[2,6] */.name, (modelica_real) data->localData[0]->realVars[15] /* sink.base.T[2,6] STATE(1) */);
  TRACE_POP
}

/*
equation index: 3247
type: SIMPLE_ASSIGN
sink.base.T[2,6] = sink.base.Tstart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3247(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3247};
  data->localData[0]->realVars[15] /* sink.base.T[2,6] STATE(1) */ = data->simulationInfo->realParameter[1] /* sink.base.Tstart PARAM */;
  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4868(DATA *data, threadData_t *threadData);

extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4314(DATA *data, threadData_t *threadData);


/*
equation index: 3254
type: LINEAR

<var>sink.hpConnector[6].vHP.T[2]</var>
<row>

</row>
<matrix>
</matrix>
*/
OMC_DISABLE_OPT
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3254(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3254};
  /* Linear equation system */
  int retValue;
  double aux_x[1] = { data->localData[1]->realVars[1694] /* sink.hpConnector[6].vHP.T[2] variable */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 3254 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  
  retValue = solve_linear_system(data, threadData, 89, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,3254};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 3254 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[1694] /* sink.hpConnector[6].vHP.T[2] variable */ = aux_x[0];

  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_5794(DATA *data, threadData_t *threadData);


/*
equation index: 3256
type: SIMPLE_ASSIGN
$START.sink.base.T[2,5] = sink.base.Tstart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3256(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3256};
  data->modelData->realVarsData[14].attribute /* sink.base.T[2,5] STATE(1) */.start = data->simulationInfo->realParameter[1] /* sink.base.Tstart PARAM */;
    data->localData[0]->realVars[14] /* sink.base.T[2,5] STATE(1) */ = data->modelData->realVarsData[14].attribute /* sink.base.T[2,5] STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[14].info /* sink.base.T[2,5] */.name, (modelica_real) data->localData[0]->realVars[14] /* sink.base.T[2,5] STATE(1) */);
  TRACE_POP
}

/*
equation index: 3257
type: SIMPLE_ASSIGN
sink.base.T[2,5] = sink.base.Tstart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3257(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3257};
  data->localData[0]->realVars[14] /* sink.base.T[2,5] STATE(1) */ = data->simulationInfo->realParameter[1] /* sink.base.Tstart PARAM */;
  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4869(DATA *data, threadData_t *threadData);

extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4308(DATA *data, threadData_t *threadData);


/*
equation index: 3264
type: LINEAR

<var>sink.hpConnector[5].vHP.T[2]</var>
<row>

</row>
<matrix>
</matrix>
*/
OMC_DISABLE_OPT
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3264(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3264};
  /* Linear equation system */
  int retValue;
  double aux_x[1] = { data->localData[1]->realVars[1684] /* sink.hpConnector[5].vHP.T[2] variable */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 3264 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  
  retValue = solve_linear_system(data, threadData, 90, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,3264};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 3264 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[1684] /* sink.hpConnector[5].vHP.T[2] variable */ = aux_x[0];

  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6055(DATA *data, threadData_t *threadData);


/*
equation index: 3266
type: SIMPLE_ASSIGN
$START.sink.base.T[2,4] = sink.base.Tstart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3266(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3266};
  data->modelData->realVarsData[13].attribute /* sink.base.T[2,4] STATE(1) */.start = data->simulationInfo->realParameter[1] /* sink.base.Tstart PARAM */;
    data->localData[0]->realVars[13] /* sink.base.T[2,4] STATE(1) */ = data->modelData->realVarsData[13].attribute /* sink.base.T[2,4] STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[13].info /* sink.base.T[2,4] */.name, (modelica_real) data->localData[0]->realVars[13] /* sink.base.T[2,4] STATE(1) */);
  TRACE_POP
}

/*
equation index: 3267
type: SIMPLE_ASSIGN
sink.base.T[2,4] = sink.base.Tstart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3267(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3267};
  data->localData[0]->realVars[13] /* sink.base.T[2,4] STATE(1) */ = data->simulationInfo->realParameter[1] /* sink.base.Tstart PARAM */;
  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4870(DATA *data, threadData_t *threadData);

extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4302(DATA *data, threadData_t *threadData);


/*
equation index: 3274
type: LINEAR

<var>sink.hpConnector[4].vHP.T[2]</var>
<row>

</row>
<matrix>
</matrix>
*/
OMC_DISABLE_OPT
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3274(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3274};
  /* Linear equation system */
  int retValue;
  double aux_x[1] = { data->localData[1]->realVars[1674] /* sink.hpConnector[4].vHP.T[2] variable */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 3274 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  
  retValue = solve_linear_system(data, threadData, 91, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,3274};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 3274 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[1674] /* sink.hpConnector[4].vHP.T[2] variable */ = aux_x[0];

  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6876(DATA *data, threadData_t *threadData);


/*
equation index: 3276
type: SIMPLE_ASSIGN
$START.sink.base.T[2,3] = sink.base.Tstart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3276(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3276};
  data->modelData->realVarsData[12].attribute /* sink.base.T[2,3] STATE(1) */.start = data->simulationInfo->realParameter[1] /* sink.base.Tstart PARAM */;
    data->localData[0]->realVars[12] /* sink.base.T[2,3] STATE(1) */ = data->modelData->realVarsData[12].attribute /* sink.base.T[2,3] STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[12].info /* sink.base.T[2,3] */.name, (modelica_real) data->localData[0]->realVars[12] /* sink.base.T[2,3] STATE(1) */);
  TRACE_POP
}

/*
equation index: 3277
type: SIMPLE_ASSIGN
sink.base.T[2,3] = sink.base.Tstart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3277(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3277};
  data->localData[0]->realVars[12] /* sink.base.T[2,3] STATE(1) */ = data->simulationInfo->realParameter[1] /* sink.base.Tstart PARAM */;
  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4871(DATA *data, threadData_t *threadData);

extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4296(DATA *data, threadData_t *threadData);


/*
equation index: 3284
type: LINEAR

<var>sink.hpConnector[3].vHP.T[2]</var>
<row>

</row>
<matrix>
</matrix>
*/
OMC_DISABLE_OPT
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3284(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3284};
  /* Linear equation system */
  int retValue;
  double aux_x[1] = { data->localData[1]->realVars[1664] /* sink.hpConnector[3].vHP.T[2] variable */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 3284 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  
  retValue = solve_linear_system(data, threadData, 92, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,3284};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 3284 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[1664] /* sink.hpConnector[3].vHP.T[2] variable */ = aux_x[0];

  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6230(DATA *data, threadData_t *threadData);


/*
equation index: 3286
type: SIMPLE_ASSIGN
$START.sink.base.T[2,2] = sink.base.Tstart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3286(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3286};
  data->modelData->realVarsData[11].attribute /* sink.base.T[2,2] STATE(1) */.start = data->simulationInfo->realParameter[1] /* sink.base.Tstart PARAM */;
    data->localData[0]->realVars[11] /* sink.base.T[2,2] STATE(1) */ = data->modelData->realVarsData[11].attribute /* sink.base.T[2,2] STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[11].info /* sink.base.T[2,2] */.name, (modelica_real) data->localData[0]->realVars[11] /* sink.base.T[2,2] STATE(1) */);
  TRACE_POP
}

/*
equation index: 3287
type: SIMPLE_ASSIGN
sink.base.T[2,2] = sink.base.Tstart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3287(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3287};
  data->localData[0]->realVars[11] /* sink.base.T[2,2] STATE(1) */ = data->simulationInfo->realParameter[1] /* sink.base.Tstart PARAM */;
  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4872(DATA *data, threadData_t *threadData);

extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4290(DATA *data, threadData_t *threadData);


/*
equation index: 3294
type: LINEAR

<var>sink.hpConnector[2].vHP.T[2]</var>
<row>

</row>
<matrix>
</matrix>
*/
OMC_DISABLE_OPT
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3294(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3294};
  /* Linear equation system */
  int retValue;
  double aux_x[1] = { data->localData[1]->realVars[1654] /* sink.hpConnector[2].vHP.T[2] variable */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 3294 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  
  retValue = solve_linear_system(data, threadData, 93, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,3294};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 3294 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[1654] /* sink.hpConnector[2].vHP.T[2] variable */ = aux_x[0];

  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6405(DATA *data, threadData_t *threadData);


/*
equation index: 3296
type: SIMPLE_ASSIGN
$START.sink.base.T[2,1] = sink.base.Tstart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3296(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3296};
  data->modelData->realVarsData[10].attribute /* sink.base.T[2,1] STATE(1) */.start = data->simulationInfo->realParameter[1] /* sink.base.Tstart PARAM */;
    data->localData[0]->realVars[10] /* sink.base.T[2,1] STATE(1) */ = data->modelData->realVarsData[10].attribute /* sink.base.T[2,1] STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[10].info /* sink.base.T[2,1] */.name, (modelica_real) data->localData[0]->realVars[10] /* sink.base.T[2,1] STATE(1) */);
  TRACE_POP
}

/*
equation index: 3297
type: SIMPLE_ASSIGN
sink.base.T[2,1] = sink.base.Tstart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3297(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3297};
  data->localData[0]->realVars[10] /* sink.base.T[2,1] STATE(1) */ = data->simulationInfo->realParameter[1] /* sink.base.Tstart PARAM */;
  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4873(DATA *data, threadData_t *threadData);

extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4284(DATA *data, threadData_t *threadData);


/*
equation index: 3304
type: LINEAR

<var>sink.hpConnector[1].vHP.T[2]</var>
<row>

</row>
<matrix>
</matrix>
*/
OMC_DISABLE_OPT
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3304(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3304};
  /* Linear equation system */
  int retValue;
  double aux_x[1] = { data->localData[1]->realVars[1644] /* sink.hpConnector[1].vHP.T[2] variable */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 3304 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  
  retValue = solve_linear_system(data, threadData, 94, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,3304};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 3304 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[1644] /* sink.hpConnector[1].vHP.T[2] variable */ = aux_x[0];

  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6494(DATA *data, threadData_t *threadData);


/*
equation index: 3306
type: SIMPLE_ASSIGN
$START.sink.base.T[1,10] = sink.base.Tstart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3306(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3306};
  data->modelData->realVarsData[9].attribute /* sink.base.T[1,10] STATE(1) */.start = data->simulationInfo->realParameter[1] /* sink.base.Tstart PARAM */;
    data->localData[0]->realVars[9] /* sink.base.T[1,10] STATE(1) */ = data->modelData->realVarsData[9].attribute /* sink.base.T[1,10] STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[9].info /* sink.base.T[1,10] */.name, (modelica_real) data->localData[0]->realVars[9] /* sink.base.T[1,10] STATE(1) */);
  TRACE_POP
}

/*
equation index: 3307
type: SIMPLE_ASSIGN
sink.base.T[1,10] = sink.base.Tstart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3307(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3307};
  data->localData[0]->realVars[9] /* sink.base.T[1,10] STATE(1) */ = data->simulationInfo->realParameter[1] /* sink.base.Tstart PARAM */;
  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4874(DATA *data, threadData_t *threadData);

extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4278(DATA *data, threadData_t *threadData);


/*
equation index: 3314
type: LINEAR

<var>sink.hpConnector[10].vHP.T[1]</var>
<row>

</row>
<matrix>
</matrix>
*/
OMC_DISABLE_OPT
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3314(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3314};
  /* Linear equation system */
  int retValue;
  double aux_x[1] = { data->localData[1]->realVars[1733] /* sink.hpConnector[10].vHP.T[1] variable */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 3314 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  
  retValue = solve_linear_system(data, threadData, 95, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,3314};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 3314 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[1733] /* sink.hpConnector[10].vHP.T[1] variable */ = aux_x[0];

  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_5159(DATA *data, threadData_t *threadData);


/*
equation index: 3316
type: SIMPLE_ASSIGN
$START.sink.base.T[1,9] = sink.base.Tstart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3316(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3316};
  data->modelData->realVarsData[8].attribute /* sink.base.T[1,9] STATE(1) */.start = data->simulationInfo->realParameter[1] /* sink.base.Tstart PARAM */;
    data->localData[0]->realVars[8] /* sink.base.T[1,9] STATE(1) */ = data->modelData->realVarsData[8].attribute /* sink.base.T[1,9] STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[8].info /* sink.base.T[1,9] */.name, (modelica_real) data->localData[0]->realVars[8] /* sink.base.T[1,9] STATE(1) */);
  TRACE_POP
}

/*
equation index: 3317
type: SIMPLE_ASSIGN
sink.base.T[1,9] = sink.base.Tstart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3317(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3317};
  data->localData[0]->realVars[8] /* sink.base.T[1,9] STATE(1) */ = data->simulationInfo->realParameter[1] /* sink.base.Tstart PARAM */;
  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4875(DATA *data, threadData_t *threadData);

extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4272(DATA *data, threadData_t *threadData);

extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4218(DATA *data, threadData_t *threadData);


/*
equation index: 3325
type: LINEAR

<var>sink.hpConnector[9].vHP.T[1]</var>
<row>

</row>
<matrix>
</matrix>
*/
OMC_DISABLE_OPT
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3325(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3325};
  /* Linear equation system */
  int retValue;
  double aux_x[1] = { data->localData[1]->realVars[1723] /* sink.hpConnector[9].vHP.T[1] variable */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 3325 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  
  retValue = solve_linear_system(data, threadData, 96, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,3325};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 3325 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[1723] /* sink.hpConnector[9].vHP.T[1] variable */ = aux_x[0];

  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_5255(DATA *data, threadData_t *threadData);


/*
equation index: 3327
type: SIMPLE_ASSIGN
$START.sink.base.T[1,8] = sink.base.Tstart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3327(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3327};
  data->modelData->realVarsData[7].attribute /* sink.base.T[1,8] STATE(1) */.start = data->simulationInfo->realParameter[1] /* sink.base.Tstart PARAM */;
    data->localData[0]->realVars[7] /* sink.base.T[1,8] STATE(1) */ = data->modelData->realVarsData[7].attribute /* sink.base.T[1,8] STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[7].info /* sink.base.T[1,8] */.name, (modelica_real) data->localData[0]->realVars[7] /* sink.base.T[1,8] STATE(1) */);
  TRACE_POP
}

/*
equation index: 3328
type: SIMPLE_ASSIGN
sink.base.T[1,8] = sink.base.Tstart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3328(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3328};
  data->localData[0]->realVars[7] /* sink.base.T[1,8] STATE(1) */ = data->simulationInfo->realParameter[1] /* sink.base.Tstart PARAM */;
  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4876(DATA *data, threadData_t *threadData);

extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4266(DATA *data, threadData_t *threadData);

extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4212(DATA *data, threadData_t *threadData);


/*
equation index: 3336
type: LINEAR

<var>sink.hpConnector[8].vHP.T[1]</var>
<row>

</row>
<matrix>
</matrix>
*/
OMC_DISABLE_OPT
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3336(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3336};
  /* Linear equation system */
  int retValue;
  double aux_x[1] = { data->localData[1]->realVars[1713] /* sink.hpConnector[8].vHP.T[1] variable */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 3336 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  
  retValue = solve_linear_system(data, threadData, 97, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,3336};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 3336 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[1713] /* sink.hpConnector[8].vHP.T[1] variable */ = aux_x[0];

  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_5394(DATA *data, threadData_t *threadData);


/*
equation index: 3338
type: SIMPLE_ASSIGN
$START.sink.base.T[1,7] = sink.base.Tstart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3338(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3338};
  data->modelData->realVarsData[6].attribute /* sink.base.T[1,7] STATE(1) */.start = data->simulationInfo->realParameter[1] /* sink.base.Tstart PARAM */;
    data->localData[0]->realVars[6] /* sink.base.T[1,7] STATE(1) */ = data->modelData->realVarsData[6].attribute /* sink.base.T[1,7] STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[6].info /* sink.base.T[1,7] */.name, (modelica_real) data->localData[0]->realVars[6] /* sink.base.T[1,7] STATE(1) */);
  TRACE_POP
}

/*
equation index: 3339
type: SIMPLE_ASSIGN
sink.base.T[1,7] = sink.base.Tstart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3339(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3339};
  data->localData[0]->realVars[6] /* sink.base.T[1,7] STATE(1) */ = data->simulationInfo->realParameter[1] /* sink.base.Tstart PARAM */;
  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4877(DATA *data, threadData_t *threadData);

extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4260(DATA *data, threadData_t *threadData);

extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4206(DATA *data, threadData_t *threadData);


/*
equation index: 3347
type: LINEAR

<var>sink.hpConnector[7].vHP.T[1]</var>
<row>

</row>
<matrix>
</matrix>
*/
OMC_DISABLE_OPT
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3347(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3347};
  /* Linear equation system */
  int retValue;
  double aux_x[1] = { data->localData[1]->realVars[1703] /* sink.hpConnector[7].vHP.T[1] variable */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 3347 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  
  retValue = solve_linear_system(data, threadData, 98, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,3347};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 3347 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[1703] /* sink.hpConnector[7].vHP.T[1] variable */ = aux_x[0];

  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_5569(DATA *data, threadData_t *threadData);


/*
equation index: 3349
type: SIMPLE_ASSIGN
$START.sink.base.T[1,6] = sink.base.Tstart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3349(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3349};
  data->modelData->realVarsData[5].attribute /* sink.base.T[1,6] STATE(1) */.start = data->simulationInfo->realParameter[1] /* sink.base.Tstart PARAM */;
    data->localData[0]->realVars[5] /* sink.base.T[1,6] STATE(1) */ = data->modelData->realVarsData[5].attribute /* sink.base.T[1,6] STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[5].info /* sink.base.T[1,6] */.name, (modelica_real) data->localData[0]->realVars[5] /* sink.base.T[1,6] STATE(1) */);
  TRACE_POP
}

/*
equation index: 3350
type: SIMPLE_ASSIGN
sink.base.T[1,6] = sink.base.Tstart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3350(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3350};
  data->localData[0]->realVars[5] /* sink.base.T[1,6] STATE(1) */ = data->simulationInfo->realParameter[1] /* sink.base.Tstart PARAM */;
  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4878(DATA *data, threadData_t *threadData);

extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4254(DATA *data, threadData_t *threadData);

extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4200(DATA *data, threadData_t *threadData);


/*
equation index: 3358
type: LINEAR

<var>sink.hpConnector[6].vHP.T[1]</var>
<row>

</row>
<matrix>
</matrix>
*/
OMC_DISABLE_OPT
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3358(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3358};
  /* Linear equation system */
  int retValue;
  double aux_x[1] = { data->localData[1]->realVars[1693] /* sink.hpConnector[6].vHP.T[1] variable */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 3358 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  
  retValue = solve_linear_system(data, threadData, 99, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,3358};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 3358 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[1693] /* sink.hpConnector[6].vHP.T[1] variable */ = aux_x[0];

  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_5744(DATA *data, threadData_t *threadData);


/*
equation index: 3360
type: SIMPLE_ASSIGN
$START.sink.base.T[1,5] = sink.base.Tstart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3360(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3360};
  data->modelData->realVarsData[4].attribute /* sink.base.T[1,5] STATE(1) */.start = data->simulationInfo->realParameter[1] /* sink.base.Tstart PARAM */;
    data->localData[0]->realVars[4] /* sink.base.T[1,5] STATE(1) */ = data->modelData->realVarsData[4].attribute /* sink.base.T[1,5] STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[4].info /* sink.base.T[1,5] */.name, (modelica_real) data->localData[0]->realVars[4] /* sink.base.T[1,5] STATE(1) */);
  TRACE_POP
}

/*
equation index: 3361
type: SIMPLE_ASSIGN
sink.base.T[1,5] = sink.base.Tstart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3361(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3361};
  data->localData[0]->realVars[4] /* sink.base.T[1,5] STATE(1) */ = data->simulationInfo->realParameter[1] /* sink.base.Tstart PARAM */;
  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4879(DATA *data, threadData_t *threadData);

extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4248(DATA *data, threadData_t *threadData);

extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4194(DATA *data, threadData_t *threadData);


/*
equation index: 3369
type: LINEAR

<var>sink.hpConnector[5].vHP.T[1]</var>
<row>

</row>
<matrix>
</matrix>
*/
OMC_DISABLE_OPT
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3369(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3369};
  /* Linear equation system */
  int retValue;
  double aux_x[1] = { data->localData[1]->realVars[1683] /* sink.hpConnector[5].vHP.T[1] variable */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 3369 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  
  retValue = solve_linear_system(data, threadData, 100, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,3369};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 3369 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[1683] /* sink.hpConnector[5].vHP.T[1] variable */ = aux_x[0];

  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_5920(DATA *data, threadData_t *threadData);


/*
equation index: 3371
type: SIMPLE_ASSIGN
$START.sink.base.T[1,4] = sink.base.Tstart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3371(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3371};
  data->modelData->realVarsData[3].attribute /* sink.base.T[1,4] STATE(1) */.start = data->simulationInfo->realParameter[1] /* sink.base.Tstart PARAM */;
    data->localData[0]->realVars[3] /* sink.base.T[1,4] STATE(1) */ = data->modelData->realVarsData[3].attribute /* sink.base.T[1,4] STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[3].info /* sink.base.T[1,4] */.name, (modelica_real) data->localData[0]->realVars[3] /* sink.base.T[1,4] STATE(1) */);
  TRACE_POP
}

/*
equation index: 3372
type: SIMPLE_ASSIGN
sink.base.T[1,4] = sink.base.Tstart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3372(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3372};
  data->localData[0]->realVars[3] /* sink.base.T[1,4] STATE(1) */ = data->simulationInfo->realParameter[1] /* sink.base.Tstart PARAM */;
  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4880(DATA *data, threadData_t *threadData);

extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4242(DATA *data, threadData_t *threadData);

extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4188(DATA *data, threadData_t *threadData);


/*
equation index: 3380
type: LINEAR

<var>sink.hpConnector[4].vHP.T[1]</var>
<row>

</row>
<matrix>
</matrix>
*/
OMC_DISABLE_OPT
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3380(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3380};
  /* Linear equation system */
  int retValue;
  double aux_x[1] = { data->localData[1]->realVars[1673] /* sink.hpConnector[4].vHP.T[1] variable */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 3380 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  
  retValue = solve_linear_system(data, threadData, 101, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,3380};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 3380 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[1673] /* sink.hpConnector[4].vHP.T[1] variable */ = aux_x[0];

  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6894(DATA *data, threadData_t *threadData);


/*
equation index: 3382
type: SIMPLE_ASSIGN
$START.sink.base.T[1,3] = sink.base.Tstart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3382(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3382};
  data->modelData->realVarsData[2].attribute /* sink.base.T[1,3] STATE(1) */.start = data->simulationInfo->realParameter[1] /* sink.base.Tstart PARAM */;
    data->localData[0]->realVars[2] /* sink.base.T[1,3] STATE(1) */ = data->modelData->realVarsData[2].attribute /* sink.base.T[1,3] STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[2].info /* sink.base.T[1,3] */.name, (modelica_real) data->localData[0]->realVars[2] /* sink.base.T[1,3] STATE(1) */);
  TRACE_POP
}

/*
equation index: 3383
type: SIMPLE_ASSIGN
sink.base.T[1,3] = sink.base.Tstart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3383(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3383};
  data->localData[0]->realVars[2] /* sink.base.T[1,3] STATE(1) */ = data->simulationInfo->realParameter[1] /* sink.base.Tstart PARAM */;
  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4881(DATA *data, threadData_t *threadData);

extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4236(DATA *data, threadData_t *threadData);

extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4182(DATA *data, threadData_t *threadData);


/*
equation index: 3391
type: LINEAR

<var>sink.hpConnector[3].vHP.T[1]</var>
<row>

</row>
<matrix>
</matrix>
*/
OMC_DISABLE_OPT
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3391(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3391};
  /* Linear equation system */
  int retValue;
  double aux_x[1] = { data->localData[1]->realVars[1663] /* sink.hpConnector[3].vHP.T[1] variable */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 3391 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  
  retValue = solve_linear_system(data, threadData, 102, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,3391};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 3391 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[1663] /* sink.hpConnector[3].vHP.T[1] variable */ = aux_x[0];

  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6095(DATA *data, threadData_t *threadData);


/*
equation index: 3393
type: SIMPLE_ASSIGN
$START.sink.base.T[1,2] = sink.base.Tstart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3393(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3393};
  data->modelData->realVarsData[1].attribute /* sink.base.T[1,2] STATE(1) */.start = data->simulationInfo->realParameter[1] /* sink.base.Tstart PARAM */;
    data->localData[0]->realVars[1] /* sink.base.T[1,2] STATE(1) */ = data->modelData->realVarsData[1].attribute /* sink.base.T[1,2] STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[1].info /* sink.base.T[1,2] */.name, (modelica_real) data->localData[0]->realVars[1] /* sink.base.T[1,2] STATE(1) */);
  TRACE_POP
}

/*
equation index: 3394
type: SIMPLE_ASSIGN
sink.base.T[1,2] = sink.base.Tstart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3394(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3394};
  data->localData[0]->realVars[1] /* sink.base.T[1,2] STATE(1) */ = data->simulationInfo->realParameter[1] /* sink.base.Tstart PARAM */;
  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4882(DATA *data, threadData_t *threadData);

extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4230(DATA *data, threadData_t *threadData);

extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4176(DATA *data, threadData_t *threadData);


/*
equation index: 3402
type: LINEAR

<var>sink.hpConnector[2].vHP.T[1]</var>
<row>

</row>
<matrix>
</matrix>
*/
OMC_DISABLE_OPT
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3402(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3402};
  /* Linear equation system */
  int retValue;
  double aux_x[1] = { data->localData[1]->realVars[1653] /* sink.hpConnector[2].vHP.T[1] variable */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 3402 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  
  retValue = solve_linear_system(data, threadData, 103, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,3402};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 3402 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[1653] /* sink.hpConnector[2].vHP.T[1] variable */ = aux_x[0];

  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6270(DATA *data, threadData_t *threadData);


/*
equation index: 3404
type: SIMPLE_ASSIGN
$START.sink.base.T[1,1] = sink.base.Tstart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3404(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3404};
  data->modelData->realVarsData[0].attribute /* sink.base.T[1,1] STATE(1) */.start = data->simulationInfo->realParameter[1] /* sink.base.Tstart PARAM */;
    data->localData[0]->realVars[0] /* sink.base.T[1,1] STATE(1) */ = data->modelData->realVarsData[0].attribute /* sink.base.T[1,1] STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[0].info /* sink.base.T[1,1] */.name, (modelica_real) data->localData[0]->realVars[0] /* sink.base.T[1,1] STATE(1) */);
  TRACE_POP
}

/*
equation index: 3405
type: SIMPLE_ASSIGN
sink.base.T[1,1] = sink.base.Tstart
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3405(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3405};
  data->localData[0]->realVars[0] /* sink.base.T[1,1] STATE(1) */ = data->simulationInfo->realParameter[1] /* sink.base.Tstart PARAM */;
  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4883(DATA *data, threadData_t *threadData);

extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4170(DATA *data, threadData_t *threadData);

extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4224(DATA *data, threadData_t *threadData);


/*
equation index: 3413
type: LINEAR

<var>sink.hpConnector[1].vHP.T[1]</var>
<row>

</row>
<matrix>
</matrix>
*/
OMC_DISABLE_OPT
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3413(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3413};
  /* Linear equation system */
  int retValue;
  double aux_x[1] = { data->localData[1]->realVars[1643] /* sink.hpConnector[1].vHP.T[1] variable */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 3413 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  
  retValue = solve_linear_system(data, threadData, 104, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,3413};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 3413 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[1643] /* sink.hpConnector[1].vHP.T[1] variable */ = aux_x[0];

  TRACE_POP
}
extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6481(DATA *data, threadData_t *threadData);

extern void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4164(DATA *data, threadData_t *threadData);


/*
equation index: 3416
type: SIMPLE_ASSIGN
sink.tube_cold.liquidStream.HT[5].Pr = 6.773709090909089
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3416(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3416};
  data->localData[0]->realVars[1784] /* sink.tube_cold.liquidStream.HT[5].Pr variable */ = 6.773709090909089;
  TRACE_POP
}

/*
equation index: 3417
type: SIMPLE_ASSIGN
sink.tube_cold.liquidStream.HT[4].Pr = 6.773709090909089
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3417(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3417};
  data->localData[0]->realVars[1783] /* sink.tube_cold.liquidStream.HT[4].Pr variable */ = 6.773709090909089;
  TRACE_POP
}

/*
equation index: 3418
type: SIMPLE_ASSIGN
sink.tube_cold.liquidStream.HT[3].Pr = 6.773709090909089
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3418(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3418};
  data->localData[0]->realVars[1782] /* sink.tube_cold.liquidStream.HT[3].Pr variable */ = 6.773709090909089;
  TRACE_POP
}

/*
equation index: 3419
type: SIMPLE_ASSIGN
sink.tube_cold.liquidStream.HT[2].Pr = 6.773709090909089
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3419(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3419};
  data->localData[0]->realVars[1781] /* sink.tube_cold.liquidStream.HT[2].Pr variable */ = 6.773709090909089;
  TRACE_POP
}

/*
equation index: 3420
type: SIMPLE_ASSIGN
sink.tube_cold.liquidStream.HT[1].Pr = 6.773709090909089
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3420(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3420};
  data->localData[0]->realVars[1780] /* sink.tube_cold.liquidStream.HT[1].Pr variable */ = 6.773709090909089;
  TRACE_POP
}

/*
equation index: 3421
type: SIMPLE_ASSIGN
sink.tube_hot[10].liquidStream.HT[10].Pr = 6.773709090909089
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3421(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3421};
  data->localData[0]->realVars[2181] /* sink.tube_hot[10].liquidStream.HT[10].Pr variable */ = 6.773709090909089;
  TRACE_POP
}

/*
equation index: 3422
type: SIMPLE_ASSIGN
sink.tube_hot[10].liquidStream.HT[9].Pr = 6.773709090909089
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3422(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3422};
  data->localData[0]->realVars[2180] /* sink.tube_hot[10].liquidStream.HT[9].Pr variable */ = 6.773709090909089;
  TRACE_POP
}

/*
equation index: 3423
type: SIMPLE_ASSIGN
sink.tube_hot[10].liquidStream.HT[8].Pr = 6.773709090909089
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3423(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3423};
  data->localData[0]->realVars[2179] /* sink.tube_hot[10].liquidStream.HT[8].Pr variable */ = 6.773709090909089;
  TRACE_POP
}

/*
equation index: 3424
type: SIMPLE_ASSIGN
sink.tube_hot[10].liquidStream.HT[7].Pr = 6.773709090909089
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3424(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3424};
  data->localData[0]->realVars[2178] /* sink.tube_hot[10].liquidStream.HT[7].Pr variable */ = 6.773709090909089;
  TRACE_POP
}

/*
equation index: 3425
type: SIMPLE_ASSIGN
sink.tube_hot[10].liquidStream.HT[6].Pr = 6.773709090909089
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3425(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3425};
  data->localData[0]->realVars[2177] /* sink.tube_hot[10].liquidStream.HT[6].Pr variable */ = 6.773709090909089;
  TRACE_POP
}

/*
equation index: 3426
type: SIMPLE_ASSIGN
sink.tube_hot[10].liquidStream.HT[5].Pr = 6.773709090909089
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3426(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3426};
  data->localData[0]->realVars[2176] /* sink.tube_hot[10].liquidStream.HT[5].Pr variable */ = 6.773709090909089;
  TRACE_POP
}

/*
equation index: 3427
type: SIMPLE_ASSIGN
sink.tube_hot[10].liquidStream.HT[4].Pr = 6.773709090909089
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3427(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3427};
  data->localData[0]->realVars[2175] /* sink.tube_hot[10].liquidStream.HT[4].Pr variable */ = 6.773709090909089;
  TRACE_POP
}

/*
equation index: 3428
type: SIMPLE_ASSIGN
sink.tube_hot[10].liquidStream.HT[3].Pr = 6.773709090909089
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3428(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3428};
  data->localData[0]->realVars[2174] /* sink.tube_hot[10].liquidStream.HT[3].Pr variable */ = 6.773709090909089;
  TRACE_POP
}

/*
equation index: 3429
type: SIMPLE_ASSIGN
sink.tube_hot[10].liquidStream.HT[2].Pr = 6.773709090909089
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3429(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3429};
  data->localData[0]->realVars[2173] /* sink.tube_hot[10].liquidStream.HT[2].Pr variable */ = 6.773709090909089;
  TRACE_POP
}

/*
equation index: 3430
type: SIMPLE_ASSIGN
sink.tube_hot[10].liquidStream.HT[1].Pr = 6.773709090909089
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3430(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3430};
  data->localData[0]->realVars[2172] /* sink.tube_hot[10].liquidStream.HT[1].Pr variable */ = 6.773709090909089;
  TRACE_POP
}

/*
equation index: 3431
type: SIMPLE_ASSIGN
sink.tube_hot[9].liquidStream.HT[10].Pr = 6.773709090909089
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3431(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3431};
  data->localData[0]->realVars[2171] /* sink.tube_hot[9].liquidStream.HT[10].Pr variable */ = 6.773709090909089;
  TRACE_POP
}

/*
equation index: 3432
type: SIMPLE_ASSIGN
sink.tube_hot[9].liquidStream.HT[9].Pr = 6.773709090909089
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3432(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3432};
  data->localData[0]->realVars[2170] /* sink.tube_hot[9].liquidStream.HT[9].Pr variable */ = 6.773709090909089;
  TRACE_POP
}

/*
equation index: 3433
type: SIMPLE_ASSIGN
sink.tube_hot[9].liquidStream.HT[8].Pr = 6.773709090909089
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3433(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3433};
  data->localData[0]->realVars[2169] /* sink.tube_hot[9].liquidStream.HT[8].Pr variable */ = 6.773709090909089;
  TRACE_POP
}

/*
equation index: 3434
type: SIMPLE_ASSIGN
sink.tube_hot[9].liquidStream.HT[7].Pr = 6.773709090909089
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3434(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3434};
  data->localData[0]->realVars[2168] /* sink.tube_hot[9].liquidStream.HT[7].Pr variable */ = 6.773709090909089;
  TRACE_POP
}

/*
equation index: 3435
type: SIMPLE_ASSIGN
sink.tube_hot[9].liquidStream.HT[6].Pr = 6.773709090909089
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3435(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3435};
  data->localData[0]->realVars[2167] /* sink.tube_hot[9].liquidStream.HT[6].Pr variable */ = 6.773709090909089;
  TRACE_POP
}

/*
equation index: 3436
type: SIMPLE_ASSIGN
sink.tube_hot[9].liquidStream.HT[5].Pr = 6.773709090909089
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3436(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3436};
  data->localData[0]->realVars[2166] /* sink.tube_hot[9].liquidStream.HT[5].Pr variable */ = 6.773709090909089;
  TRACE_POP
}

/*
equation index: 3437
type: SIMPLE_ASSIGN
sink.tube_hot[9].liquidStream.HT[4].Pr = 6.773709090909089
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3437(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3437};
  data->localData[0]->realVars[2165] /* sink.tube_hot[9].liquidStream.HT[4].Pr variable */ = 6.773709090909089;
  TRACE_POP
}

/*
equation index: 3438
type: SIMPLE_ASSIGN
sink.tube_hot[9].liquidStream.HT[3].Pr = 6.773709090909089
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3438(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3438};
  data->localData[0]->realVars[2164] /* sink.tube_hot[9].liquidStream.HT[3].Pr variable */ = 6.773709090909089;
  TRACE_POP
}

/*
equation index: 3439
type: SIMPLE_ASSIGN
sink.tube_hot[9].liquidStream.HT[2].Pr = 6.773709090909089
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3439(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3439};
  data->localData[0]->realVars[2163] /* sink.tube_hot[9].liquidStream.HT[2].Pr variable */ = 6.773709090909089;
  TRACE_POP
}

/*
equation index: 3440
type: SIMPLE_ASSIGN
sink.tube_hot[9].liquidStream.HT[1].Pr = 6.773709090909089
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3440(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3440};
  data->localData[0]->realVars[2162] /* sink.tube_hot[9].liquidStream.HT[1].Pr variable */ = 6.773709090909089;
  TRACE_POP
}

/*
equation index: 3441
type: SIMPLE_ASSIGN
sink.tube_hot[8].liquidStream.HT[10].Pr = 6.773709090909089
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3441(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3441};
  data->localData[0]->realVars[2161] /* sink.tube_hot[8].liquidStream.HT[10].Pr variable */ = 6.773709090909089;
  TRACE_POP
}

/*
equation index: 3442
type: SIMPLE_ASSIGN
sink.tube_hot[8].liquidStream.HT[9].Pr = 6.773709090909089
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3442(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3442};
  data->localData[0]->realVars[2160] /* sink.tube_hot[8].liquidStream.HT[9].Pr variable */ = 6.773709090909089;
  TRACE_POP
}

/*
equation index: 3443
type: SIMPLE_ASSIGN
sink.tube_hot[8].liquidStream.HT[8].Pr = 6.773709090909089
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3443(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3443};
  data->localData[0]->realVars[2159] /* sink.tube_hot[8].liquidStream.HT[8].Pr variable */ = 6.773709090909089;
  TRACE_POP
}

/*
equation index: 3444
type: SIMPLE_ASSIGN
sink.tube_hot[8].liquidStream.HT[7].Pr = 6.773709090909089
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3444(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3444};
  data->localData[0]->realVars[2158] /* sink.tube_hot[8].liquidStream.HT[7].Pr variable */ = 6.773709090909089;
  TRACE_POP
}

/*
equation index: 3445
type: SIMPLE_ASSIGN
sink.tube_hot[8].liquidStream.HT[6].Pr = 6.773709090909089
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3445(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3445};
  data->localData[0]->realVars[2157] /* sink.tube_hot[8].liquidStream.HT[6].Pr variable */ = 6.773709090909089;
  TRACE_POP
}

/*
equation index: 3446
type: SIMPLE_ASSIGN
sink.tube_hot[8].liquidStream.HT[5].Pr = 6.773709090909089
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3446(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3446};
  data->localData[0]->realVars[2156] /* sink.tube_hot[8].liquidStream.HT[5].Pr variable */ = 6.773709090909089;
  TRACE_POP
}

/*
equation index: 3447
type: SIMPLE_ASSIGN
sink.tube_hot[8].liquidStream.HT[4].Pr = 6.773709090909089
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3447(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3447};
  data->localData[0]->realVars[2155] /* sink.tube_hot[8].liquidStream.HT[4].Pr variable */ = 6.773709090909089;
  TRACE_POP
}

/*
equation index: 3448
type: SIMPLE_ASSIGN
sink.tube_hot[8].liquidStream.HT[3].Pr = 6.773709090909089
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3448(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3448};
  data->localData[0]->realVars[2154] /* sink.tube_hot[8].liquidStream.HT[3].Pr variable */ = 6.773709090909089;
  TRACE_POP
}

/*
equation index: 3449
type: SIMPLE_ASSIGN
sink.tube_hot[8].liquidStream.HT[2].Pr = 6.773709090909089
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3449(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3449};
  data->localData[0]->realVars[2153] /* sink.tube_hot[8].liquidStream.HT[2].Pr variable */ = 6.773709090909089;
  TRACE_POP
}

/*
equation index: 3450
type: SIMPLE_ASSIGN
sink.tube_hot[8].liquidStream.HT[1].Pr = 6.773709090909089
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3450(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3450};
  data->localData[0]->realVars[2152] /* sink.tube_hot[8].liquidStream.HT[1].Pr variable */ = 6.773709090909089;
  TRACE_POP
}

/*
equation index: 3451
type: SIMPLE_ASSIGN
sink.tube_hot[7].liquidStream.HT[10].Pr = 6.773709090909089
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3451(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3451};
  data->localData[0]->realVars[2151] /* sink.tube_hot[7].liquidStream.HT[10].Pr variable */ = 6.773709090909089;
  TRACE_POP
}

/*
equation index: 3452
type: SIMPLE_ASSIGN
sink.tube_hot[7].liquidStream.HT[9].Pr = 6.773709090909089
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3452(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3452};
  data->localData[0]->realVars[2150] /* sink.tube_hot[7].liquidStream.HT[9].Pr variable */ = 6.773709090909089;
  TRACE_POP
}

/*
equation index: 3453
type: SIMPLE_ASSIGN
sink.tube_hot[7].liquidStream.HT[8].Pr = 6.773709090909089
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3453(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3453};
  data->localData[0]->realVars[2149] /* sink.tube_hot[7].liquidStream.HT[8].Pr variable */ = 6.773709090909089;
  TRACE_POP
}

/*
equation index: 3454
type: SIMPLE_ASSIGN
sink.tube_hot[7].liquidStream.HT[7].Pr = 6.773709090909089
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3454(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3454};
  data->localData[0]->realVars[2148] /* sink.tube_hot[7].liquidStream.HT[7].Pr variable */ = 6.773709090909089;
  TRACE_POP
}

/*
equation index: 3455
type: SIMPLE_ASSIGN
sink.tube_hot[7].liquidStream.HT[6].Pr = 6.773709090909089
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3455(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3455};
  data->localData[0]->realVars[2147] /* sink.tube_hot[7].liquidStream.HT[6].Pr variable */ = 6.773709090909089;
  TRACE_POP
}

/*
equation index: 3456
type: SIMPLE_ASSIGN
sink.tube_hot[7].liquidStream.HT[5].Pr = 6.773709090909089
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3456(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3456};
  data->localData[0]->realVars[2146] /* sink.tube_hot[7].liquidStream.HT[5].Pr variable */ = 6.773709090909089;
  TRACE_POP
}

/*
equation index: 3457
type: SIMPLE_ASSIGN
sink.tube_hot[7].liquidStream.HT[4].Pr = 6.773709090909089
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3457(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3457};
  data->localData[0]->realVars[2145] /* sink.tube_hot[7].liquidStream.HT[4].Pr variable */ = 6.773709090909089;
  TRACE_POP
}

/*
equation index: 3458
type: SIMPLE_ASSIGN
sink.tube_hot[7].liquidStream.HT[3].Pr = 6.773709090909089
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3458(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3458};
  data->localData[0]->realVars[2144] /* sink.tube_hot[7].liquidStream.HT[3].Pr variable */ = 6.773709090909089;
  TRACE_POP
}

/*
equation index: 3459
type: SIMPLE_ASSIGN
sink.tube_hot[7].liquidStream.HT[2].Pr = 6.773709090909089
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3459(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3459};
  data->localData[0]->realVars[2143] /* sink.tube_hot[7].liquidStream.HT[2].Pr variable */ = 6.773709090909089;
  TRACE_POP
}

/*
equation index: 3460
type: SIMPLE_ASSIGN
sink.tube_hot[7].liquidStream.HT[1].Pr = 6.773709090909089
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3460(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3460};
  data->localData[0]->realVars[2142] /* sink.tube_hot[7].liquidStream.HT[1].Pr variable */ = 6.773709090909089;
  TRACE_POP
}

/*
equation index: 3461
type: SIMPLE_ASSIGN
sink.tube_hot[6].liquidStream.HT[10].Pr = 6.773709090909089
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3461(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3461};
  data->localData[0]->realVars[2141] /* sink.tube_hot[6].liquidStream.HT[10].Pr variable */ = 6.773709090909089;
  TRACE_POP
}

/*
equation index: 3462
type: SIMPLE_ASSIGN
sink.tube_hot[6].liquidStream.HT[9].Pr = 6.773709090909089
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3462(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3462};
  data->localData[0]->realVars[2140] /* sink.tube_hot[6].liquidStream.HT[9].Pr variable */ = 6.773709090909089;
  TRACE_POP
}

/*
equation index: 3463
type: SIMPLE_ASSIGN
sink.tube_hot[6].liquidStream.HT[8].Pr = 6.773709090909089
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3463(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3463};
  data->localData[0]->realVars[2139] /* sink.tube_hot[6].liquidStream.HT[8].Pr variable */ = 6.773709090909089;
  TRACE_POP
}

/*
equation index: 3464
type: SIMPLE_ASSIGN
sink.tube_hot[6].liquidStream.HT[7].Pr = 6.773709090909089
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3464(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3464};
  data->localData[0]->realVars[2138] /* sink.tube_hot[6].liquidStream.HT[7].Pr variable */ = 6.773709090909089;
  TRACE_POP
}

/*
equation index: 3465
type: SIMPLE_ASSIGN
sink.tube_hot[6].liquidStream.HT[6].Pr = 6.773709090909089
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3465(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3465};
  data->localData[0]->realVars[2137] /* sink.tube_hot[6].liquidStream.HT[6].Pr variable */ = 6.773709090909089;
  TRACE_POP
}

/*
equation index: 3466
type: SIMPLE_ASSIGN
sink.tube_hot[6].liquidStream.HT[5].Pr = 6.773709090909089
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3466(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3466};
  data->localData[0]->realVars[2136] /* sink.tube_hot[6].liquidStream.HT[5].Pr variable */ = 6.773709090909089;
  TRACE_POP
}

/*
equation index: 3467
type: SIMPLE_ASSIGN
sink.tube_hot[6].liquidStream.HT[4].Pr = 6.773709090909089
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3467(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3467};
  data->localData[0]->realVars[2135] /* sink.tube_hot[6].liquidStream.HT[4].Pr variable */ = 6.773709090909089;
  TRACE_POP
}

/*
equation index: 3468
type: SIMPLE_ASSIGN
sink.tube_hot[6].liquidStream.HT[3].Pr = 6.773709090909089
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3468(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3468};
  data->localData[0]->realVars[2134] /* sink.tube_hot[6].liquidStream.HT[3].Pr variable */ = 6.773709090909089;
  TRACE_POP
}

/*
equation index: 3469
type: SIMPLE_ASSIGN
sink.tube_hot[6].liquidStream.HT[2].Pr = 6.773709090909089
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3469(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3469};
  data->localData[0]->realVars[2133] /* sink.tube_hot[6].liquidStream.HT[2].Pr variable */ = 6.773709090909089;
  TRACE_POP
}

/*
equation index: 3470
type: SIMPLE_ASSIGN
sink.tube_hot[6].liquidStream.HT[1].Pr = 6.773709090909089
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3470(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3470};
  data->localData[0]->realVars[2132] /* sink.tube_hot[6].liquidStream.HT[1].Pr variable */ = 6.773709090909089;
  TRACE_POP
}

/*
equation index: 3471
type: SIMPLE_ASSIGN
sink.tube_hot[5].liquidStream.HT[10].Pr = 6.773709090909089
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3471(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3471};
  data->localData[0]->realVars[2131] /* sink.tube_hot[5].liquidStream.HT[10].Pr variable */ = 6.773709090909089;
  TRACE_POP
}

/*
equation index: 3472
type: SIMPLE_ASSIGN
sink.tube_hot[5].liquidStream.HT[9].Pr = 6.773709090909089
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3472(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3472};
  data->localData[0]->realVars[2130] /* sink.tube_hot[5].liquidStream.HT[9].Pr variable */ = 6.773709090909089;
  TRACE_POP
}

/*
equation index: 3473
type: SIMPLE_ASSIGN
sink.tube_hot[5].liquidStream.HT[8].Pr = 6.773709090909089
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3473(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3473};
  data->localData[0]->realVars[2129] /* sink.tube_hot[5].liquidStream.HT[8].Pr variable */ = 6.773709090909089;
  TRACE_POP
}

/*
equation index: 3474
type: SIMPLE_ASSIGN
sink.tube_hot[5].liquidStream.HT[7].Pr = 6.773709090909089
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3474(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3474};
  data->localData[0]->realVars[2128] /* sink.tube_hot[5].liquidStream.HT[7].Pr variable */ = 6.773709090909089;
  TRACE_POP
}

/*
equation index: 3475
type: SIMPLE_ASSIGN
sink.tube_hot[5].liquidStream.HT[6].Pr = 6.773709090909089
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3475(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3475};
  data->localData[0]->realVars[2127] /* sink.tube_hot[5].liquidStream.HT[6].Pr variable */ = 6.773709090909089;
  TRACE_POP
}

/*
equation index: 3476
type: SIMPLE_ASSIGN
sink.tube_hot[5].liquidStream.HT[5].Pr = 6.773709090909089
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3476(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3476};
  data->localData[0]->realVars[2126] /* sink.tube_hot[5].liquidStream.HT[5].Pr variable */ = 6.773709090909089;
  TRACE_POP
}

/*
equation index: 3477
type: SIMPLE_ASSIGN
sink.tube_hot[5].liquidStream.HT[4].Pr = 6.773709090909089
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3477(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3477};
  data->localData[0]->realVars[2125] /* sink.tube_hot[5].liquidStream.HT[4].Pr variable */ = 6.773709090909089;
  TRACE_POP
}

/*
equation index: 3478
type: SIMPLE_ASSIGN
sink.tube_hot[5].liquidStream.HT[3].Pr = 6.773709090909089
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3478(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3478};
  data->localData[0]->realVars[2124] /* sink.tube_hot[5].liquidStream.HT[3].Pr variable */ = 6.773709090909089;
  TRACE_POP
}

/*
equation index: 3479
type: SIMPLE_ASSIGN
sink.tube_hot[5].liquidStream.HT[2].Pr = 6.773709090909089
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3479(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3479};
  data->localData[0]->realVars[2123] /* sink.tube_hot[5].liquidStream.HT[2].Pr variable */ = 6.773709090909089;
  TRACE_POP
}

/*
equation index: 3480
type: SIMPLE_ASSIGN
sink.tube_hot[5].liquidStream.HT[1].Pr = 6.773709090909089
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3480(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3480};
  data->localData[0]->realVars[2122] /* sink.tube_hot[5].liquidStream.HT[1].Pr variable */ = 6.773709090909089;
  TRACE_POP
}

/*
equation index: 3481
type: SIMPLE_ASSIGN
sink.tube_hot[4].liquidStream.HT[10].Pr = 6.773709090909089
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3481(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3481};
  data->localData[0]->realVars[2121] /* sink.tube_hot[4].liquidStream.HT[10].Pr variable */ = 6.773709090909089;
  TRACE_POP
}

/*
equation index: 3482
type: SIMPLE_ASSIGN
sink.tube_hot[4].liquidStream.HT[9].Pr = 6.773709090909089
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3482(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3482};
  data->localData[0]->realVars[2120] /* sink.tube_hot[4].liquidStream.HT[9].Pr variable */ = 6.773709090909089;
  TRACE_POP
}

/*
equation index: 3483
type: SIMPLE_ASSIGN
sink.tube_hot[4].liquidStream.HT[8].Pr = 6.773709090909089
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3483(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3483};
  data->localData[0]->realVars[2119] /* sink.tube_hot[4].liquidStream.HT[8].Pr variable */ = 6.773709090909089;
  TRACE_POP
}

/*
equation index: 3484
type: SIMPLE_ASSIGN
sink.tube_hot[4].liquidStream.HT[7].Pr = 6.773709090909089
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3484(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3484};
  data->localData[0]->realVars[2118] /* sink.tube_hot[4].liquidStream.HT[7].Pr variable */ = 6.773709090909089;
  TRACE_POP
}

/*
equation index: 3485
type: SIMPLE_ASSIGN
sink.tube_hot[4].liquidStream.HT[6].Pr = 6.773709090909089
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3485(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3485};
  data->localData[0]->realVars[2117] /* sink.tube_hot[4].liquidStream.HT[6].Pr variable */ = 6.773709090909089;
  TRACE_POP
}

/*
equation index: 3486
type: SIMPLE_ASSIGN
sink.tube_hot[4].liquidStream.HT[5].Pr = 6.773709090909089
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3486(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3486};
  data->localData[0]->realVars[2116] /* sink.tube_hot[4].liquidStream.HT[5].Pr variable */ = 6.773709090909089;
  TRACE_POP
}

/*
equation index: 3487
type: SIMPLE_ASSIGN
sink.tube_hot[4].liquidStream.HT[4].Pr = 6.773709090909089
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3487(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3487};
  data->localData[0]->realVars[2115] /* sink.tube_hot[4].liquidStream.HT[4].Pr variable */ = 6.773709090909089;
  TRACE_POP
}

/*
equation index: 3488
type: SIMPLE_ASSIGN
sink.tube_hot[4].liquidStream.HT[3].Pr = 6.773709090909089
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3488(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3488};
  data->localData[0]->realVars[2114] /* sink.tube_hot[4].liquidStream.HT[3].Pr variable */ = 6.773709090909089;
  TRACE_POP
}

/*
equation index: 3489
type: SIMPLE_ASSIGN
sink.tube_hot[4].liquidStream.HT[2].Pr = 6.773709090909089
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3489(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3489};
  data->localData[0]->realVars[2113] /* sink.tube_hot[4].liquidStream.HT[2].Pr variable */ = 6.773709090909089;
  TRACE_POP
}

/*
equation index: 3490
type: SIMPLE_ASSIGN
sink.tube_hot[4].liquidStream.HT[1].Pr = 6.773709090909089
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3490(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3490};
  data->localData[0]->realVars[2112] /* sink.tube_hot[4].liquidStream.HT[1].Pr variable */ = 6.773709090909089;
  TRACE_POP
}

/*
equation index: 3491
type: SIMPLE_ASSIGN
sink.tube_hot[3].liquidStream.HT[10].Pr = 6.773709090909089
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3491(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3491};
  data->localData[0]->realVars[2111] /* sink.tube_hot[3].liquidStream.HT[10].Pr variable */ = 6.773709090909089;
  TRACE_POP
}

/*
equation index: 3492
type: SIMPLE_ASSIGN
sink.tube_hot[3].liquidStream.HT[9].Pr = 6.773709090909089
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3492(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3492};
  data->localData[0]->realVars[2110] /* sink.tube_hot[3].liquidStream.HT[9].Pr variable */ = 6.773709090909089;
  TRACE_POP
}

/*
equation index: 3493
type: SIMPLE_ASSIGN
sink.tube_hot[3].liquidStream.HT[8].Pr = 6.773709090909089
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3493(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3493};
  data->localData[0]->realVars[2109] /* sink.tube_hot[3].liquidStream.HT[8].Pr variable */ = 6.773709090909089;
  TRACE_POP
}

/*
equation index: 3494
type: SIMPLE_ASSIGN
sink.tube_hot[3].liquidStream.HT[7].Pr = 6.773709090909089
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3494(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3494};
  data->localData[0]->realVars[2108] /* sink.tube_hot[3].liquidStream.HT[7].Pr variable */ = 6.773709090909089;
  TRACE_POP
}

/*
equation index: 3495
type: SIMPLE_ASSIGN
sink.tube_hot[3].liquidStream.HT[6].Pr = 6.773709090909089
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3495(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3495};
  data->localData[0]->realVars[2107] /* sink.tube_hot[3].liquidStream.HT[6].Pr variable */ = 6.773709090909089;
  TRACE_POP
}

/*
equation index: 3496
type: SIMPLE_ASSIGN
sink.tube_hot[3].liquidStream.HT[5].Pr = 6.773709090909089
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3496(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3496};
  data->localData[0]->realVars[2106] /* sink.tube_hot[3].liquidStream.HT[5].Pr variable */ = 6.773709090909089;
  TRACE_POP
}

/*
equation index: 3497
type: SIMPLE_ASSIGN
sink.tube_hot[3].liquidStream.HT[4].Pr = 6.773709090909089
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3497(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3497};
  data->localData[0]->realVars[2105] /* sink.tube_hot[3].liquidStream.HT[4].Pr variable */ = 6.773709090909089;
  TRACE_POP
}

/*
equation index: 3498
type: SIMPLE_ASSIGN
sink.tube_hot[3].liquidStream.HT[3].Pr = 6.773709090909089
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3498(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3498};
  data->localData[0]->realVars[2104] /* sink.tube_hot[3].liquidStream.HT[3].Pr variable */ = 6.773709090909089;
  TRACE_POP
}

/*
equation index: 3499
type: SIMPLE_ASSIGN
sink.tube_hot[3].liquidStream.HT[2].Pr = 6.773709090909089
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3499(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3499};
  data->localData[0]->realVars[2103] /* sink.tube_hot[3].liquidStream.HT[2].Pr variable */ = 6.773709090909089;
  TRACE_POP
}

/*
equation index: 3500
type: SIMPLE_ASSIGN
sink.tube_hot[3].liquidStream.HT[1].Pr = 6.773709090909089
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3500(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3500};
  data->localData[0]->realVars[2102] /* sink.tube_hot[3].liquidStream.HT[1].Pr variable */ = 6.773709090909089;
  TRACE_POP
}

/*
equation index: 3501
type: SIMPLE_ASSIGN
sink.tube_hot[2].liquidStream.HT[10].Pr = 6.773709090909089
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3501(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3501};
  data->localData[0]->realVars[2101] /* sink.tube_hot[2].liquidStream.HT[10].Pr variable */ = 6.773709090909089;
  TRACE_POP
}

/*
equation index: 3502
type: SIMPLE_ASSIGN
sink.tube_hot[2].liquidStream.HT[9].Pr = 6.773709090909089
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3502(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3502};
  data->localData[0]->realVars[2100] /* sink.tube_hot[2].liquidStream.HT[9].Pr variable */ = 6.773709090909089;
  TRACE_POP
}

/*
equation index: 3503
type: SIMPLE_ASSIGN
sink.tube_hot[2].liquidStream.HT[8].Pr = 6.773709090909089
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3503(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3503};
  data->localData[0]->realVars[2099] /* sink.tube_hot[2].liquidStream.HT[8].Pr variable */ = 6.773709090909089;
  TRACE_POP
}

/*
equation index: 3504
type: SIMPLE_ASSIGN
sink.tube_hot[2].liquidStream.HT[7].Pr = 6.773709090909089
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3504(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3504};
  data->localData[0]->realVars[2098] /* sink.tube_hot[2].liquidStream.HT[7].Pr variable */ = 6.773709090909089;
  TRACE_POP
}

/*
equation index: 3505
type: SIMPLE_ASSIGN
sink.tube_hot[2].liquidStream.HT[6].Pr = 6.773709090909089
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3505(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3505};
  data->localData[0]->realVars[2097] /* sink.tube_hot[2].liquidStream.HT[6].Pr variable */ = 6.773709090909089;
  TRACE_POP
}

/*
equation index: 3506
type: SIMPLE_ASSIGN
sink.tube_hot[2].liquidStream.HT[5].Pr = 6.773709090909089
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3506(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3506};
  data->localData[0]->realVars[2096] /* sink.tube_hot[2].liquidStream.HT[5].Pr variable */ = 6.773709090909089;
  TRACE_POP
}

/*
equation index: 3507
type: SIMPLE_ASSIGN
sink.tube_hot[2].liquidStream.HT[4].Pr = 6.773709090909089
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3507(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3507};
  data->localData[0]->realVars[2095] /* sink.tube_hot[2].liquidStream.HT[4].Pr variable */ = 6.773709090909089;
  TRACE_POP
}

/*
equation index: 3508
type: SIMPLE_ASSIGN
sink.tube_hot[2].liquidStream.HT[3].Pr = 6.773709090909089
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3508(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3508};
  data->localData[0]->realVars[2094] /* sink.tube_hot[2].liquidStream.HT[3].Pr variable */ = 6.773709090909089;
  TRACE_POP
}

/*
equation index: 3509
type: SIMPLE_ASSIGN
sink.tube_hot[2].liquidStream.HT[2].Pr = 6.773709090909089
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3509(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3509};
  data->localData[0]->realVars[2093] /* sink.tube_hot[2].liquidStream.HT[2].Pr variable */ = 6.773709090909089;
  TRACE_POP
}

/*
equation index: 3510
type: SIMPLE_ASSIGN
sink.tube_hot[2].liquidStream.HT[1].Pr = 6.773709090909089
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3510(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3510};
  data->localData[0]->realVars[2092] /* sink.tube_hot[2].liquidStream.HT[1].Pr variable */ = 6.773709090909089;
  TRACE_POP
}

/*
equation index: 3511
type: SIMPLE_ASSIGN
sink.tube_hot[1].liquidStream.HT[10].Pr = 6.773709090909089
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3511(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3511};
  data->localData[0]->realVars[2091] /* sink.tube_hot[1].liquidStream.HT[10].Pr variable */ = 6.773709090909089;
  TRACE_POP
}

/*
equation index: 3512
type: SIMPLE_ASSIGN
sink.tube_hot[1].liquidStream.HT[9].Pr = 6.773709090909089
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3512(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3512};
  data->localData[0]->realVars[2090] /* sink.tube_hot[1].liquidStream.HT[9].Pr variable */ = 6.773709090909089;
  TRACE_POP
}

/*
equation index: 3513
type: SIMPLE_ASSIGN
sink.tube_hot[1].liquidStream.HT[8].Pr = 6.773709090909089
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3513(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3513};
  data->localData[0]->realVars[2089] /* sink.tube_hot[1].liquidStream.HT[8].Pr variable */ = 6.773709090909089;
  TRACE_POP
}

/*
equation index: 3514
type: SIMPLE_ASSIGN
sink.tube_hot[1].liquidStream.HT[7].Pr = 6.773709090909089
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3514(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3514};
  data->localData[0]->realVars[2088] /* sink.tube_hot[1].liquidStream.HT[7].Pr variable */ = 6.773709090909089;
  TRACE_POP
}

/*
equation index: 3515
type: SIMPLE_ASSIGN
sink.tube_hot[1].liquidStream.HT[6].Pr = 6.773709090909089
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3515(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3515};
  data->localData[0]->realVars[2087] /* sink.tube_hot[1].liquidStream.HT[6].Pr variable */ = 6.773709090909089;
  TRACE_POP
}

/*
equation index: 3516
type: SIMPLE_ASSIGN
sink.tube_hot[1].liquidStream.HT[5].Pr = 6.773709090909089
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3516(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3516};
  data->localData[0]->realVars[2086] /* sink.tube_hot[1].liquidStream.HT[5].Pr variable */ = 6.773709090909089;
  TRACE_POP
}

/*
equation index: 3517
type: SIMPLE_ASSIGN
sink.tube_hot[1].liquidStream.HT[4].Pr = 6.773709090909089
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3517(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3517};
  data->localData[0]->realVars[2085] /* sink.tube_hot[1].liquidStream.HT[4].Pr variable */ = 6.773709090909089;
  TRACE_POP
}

/*
equation index: 3518
type: SIMPLE_ASSIGN
sink.tube_hot[1].liquidStream.HT[3].Pr = 6.773709090909089
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3518(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3518};
  data->localData[0]->realVars[2084] /* sink.tube_hot[1].liquidStream.HT[3].Pr variable */ = 6.773709090909089;
  TRACE_POP
}

/*
equation index: 3519
type: SIMPLE_ASSIGN
sink.tube_hot[1].liquidStream.HT[2].Pr = 6.773709090909089
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3519(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3519};
  data->localData[0]->realVars[2083] /* sink.tube_hot[1].liquidStream.HT[2].Pr variable */ = 6.773709090909089;
  TRACE_POP
}

/*
equation index: 3520
type: SIMPLE_ASSIGN
sink.tube_hot[1].liquidStream.HT[1].Pr = 6.773709090909089
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3520(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3520};
  data->localData[0]->realVars[2082] /* sink.tube_hot[1].liquidStream.HT[1].Pr variable */ = 6.773709090909089;
  TRACE_POP
}

/*
equation index: 3521
type: SIMPLE_ASSIGN
sink.tube_hot[1].liquidStream.m[1].d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3521(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3521};
  data->localData[0]->realVars[3482] /* sink.tube_hot[1].liquidStream.m[1].d variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 3522
type: SIMPLE_ASSIGN
sink.tube_hot[1].liquidStream.m[1].c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3522(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3522};
  data->localData[0]->realVars[3382] /* sink.tube_hot[1].liquidStream.m[1].c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 3523
type: SIMPLE_ASSIGN
sink.tube_hot[1].liquidStream.m[2].d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3523(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3523};
  data->localData[0]->realVars[3483] /* sink.tube_hot[1].liquidStream.m[2].d variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 3524
type: SIMPLE_ASSIGN
sink.tube_hot[1].liquidStream.m[2].c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3524(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3524};
  data->localData[0]->realVars[3383] /* sink.tube_hot[1].liquidStream.m[2].c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 3525
type: SIMPLE_ASSIGN
sink.tube_hot[1].liquidStream.m[3].d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3525(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3525};
  data->localData[0]->realVars[3484] /* sink.tube_hot[1].liquidStream.m[3].d variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 3526
type: SIMPLE_ASSIGN
sink.tube_hot[1].liquidStream.m[3].c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3526(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3526};
  data->localData[0]->realVars[3384] /* sink.tube_hot[1].liquidStream.m[3].c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 3527
type: SIMPLE_ASSIGN
sink.tube_hot[1].liquidStream.m[4].d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3527(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3527};
  data->localData[0]->realVars[3485] /* sink.tube_hot[1].liquidStream.m[4].d variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 3528
type: SIMPLE_ASSIGN
sink.tube_hot[1].liquidStream.m[4].c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3528(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3528};
  data->localData[0]->realVars[3385] /* sink.tube_hot[1].liquidStream.m[4].c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 3529
type: SIMPLE_ASSIGN
sink.tube_hot[1].liquidStream.m[5].d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3529(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3529};
  data->localData[0]->realVars[3486] /* sink.tube_hot[1].liquidStream.m[5].d variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 3530
type: SIMPLE_ASSIGN
sink.tube_hot[1].liquidStream.m[5].c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3530(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3530};
  data->localData[0]->realVars[3386] /* sink.tube_hot[1].liquidStream.m[5].c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 3531
type: SIMPLE_ASSIGN
sink.tube_hot[1].liquidStream.m[6].d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3531(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3531};
  data->localData[0]->realVars[3487] /* sink.tube_hot[1].liquidStream.m[6].d variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 3532
type: SIMPLE_ASSIGN
sink.tube_hot[1].liquidStream.m[6].c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3532(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3532};
  data->localData[0]->realVars[3387] /* sink.tube_hot[1].liquidStream.m[6].c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 3533
type: SIMPLE_ASSIGN
sink.tube_hot[1].liquidStream.m[7].d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3533(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3533};
  data->localData[0]->realVars[3488] /* sink.tube_hot[1].liquidStream.m[7].d variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 3534
type: SIMPLE_ASSIGN
sink.tube_hot[1].liquidStream.m[7].c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3534(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3534};
  data->localData[0]->realVars[3388] /* sink.tube_hot[1].liquidStream.m[7].c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 3535
type: SIMPLE_ASSIGN
sink.tube_hot[1].liquidStream.m[8].d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3535(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3535};
  data->localData[0]->realVars[3489] /* sink.tube_hot[1].liquidStream.m[8].d variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 3536
type: SIMPLE_ASSIGN
sink.tube_hot[1].liquidStream.m[8].c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3536(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3536};
  data->localData[0]->realVars[3389] /* sink.tube_hot[1].liquidStream.m[8].c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 3537
type: SIMPLE_ASSIGN
sink.tube_hot[1].liquidStream.m[9].d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3537(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3537};
  data->localData[0]->realVars[3490] /* sink.tube_hot[1].liquidStream.m[9].d variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 3538
type: SIMPLE_ASSIGN
sink.tube_hot[1].liquidStream.m[9].c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3538(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3538};
  data->localData[0]->realVars[3390] /* sink.tube_hot[1].liquidStream.m[9].c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 3539
type: SIMPLE_ASSIGN
sink.tube_hot[1].liquidStream.m[10].d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3539(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3539};
  data->localData[0]->realVars[3491] /* sink.tube_hot[1].liquidStream.m[10].d variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 3540
type: SIMPLE_ASSIGN
sink.tube_hot[1].liquidStream.m[10].c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3540(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3540};
  data->localData[0]->realVars[3391] /* sink.tube_hot[1].liquidStream.m[10].c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 3541
type: SIMPLE_ASSIGN
sink.tube_hot[1].liquidStream.HT[1].m.d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3541(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3541};
  data->localData[0]->realVars[2582] /* sink.tube_hot[1].liquidStream.HT[1].m.d variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 3542
type: SIMPLE_ASSIGN
sink.tube_hot[1].liquidStream.HT[1].m.c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3542(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3542};
  data->localData[0]->realVars[2482] /* sink.tube_hot[1].liquidStream.HT[1].m.c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 3543
type: SIMPLE_ASSIGN
sink.tube_hot[1].liquidStream.HT[1].m.lambda = 0.55
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3543(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3543};
  data->localData[0]->realVars[2782] /* sink.tube_hot[1].liquidStream.HT[1].m.lambda variable */ = 0.55;
  TRACE_POP
}

/*
equation index: 3544
type: SIMPLE_ASSIGN
sink.tube_hot[1].liquidStream.HT[1].m.mu = 0.0008899999999999999
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3544(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3544};
  data->localData[0]->realVars[2882] /* sink.tube_hot[1].liquidStream.HT[1].m.mu variable */ = 0.0008899999999999999;
  TRACE_POP
}

/*
equation index: 3545
type: SIMPLE_ASSIGN
sink.tube_hot[1].liquidStream.HT[2].m.d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3545(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3545};
  data->localData[0]->realVars[2583] /* sink.tube_hot[1].liquidStream.HT[2].m.d variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 3546
type: SIMPLE_ASSIGN
sink.tube_hot[1].liquidStream.HT[2].m.c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3546(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3546};
  data->localData[0]->realVars[2483] /* sink.tube_hot[1].liquidStream.HT[2].m.c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 3547
type: SIMPLE_ASSIGN
sink.tube_hot[1].liquidStream.HT[2].m.lambda = 0.55
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3547(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3547};
  data->localData[0]->realVars[2783] /* sink.tube_hot[1].liquidStream.HT[2].m.lambda variable */ = 0.55;
  TRACE_POP
}

/*
equation index: 3548
type: SIMPLE_ASSIGN
sink.tube_hot[1].liquidStream.HT[2].m.mu = 0.0008899999999999999
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3548(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3548};
  data->localData[0]->realVars[2883] /* sink.tube_hot[1].liquidStream.HT[2].m.mu variable */ = 0.0008899999999999999;
  TRACE_POP
}

/*
equation index: 3549
type: SIMPLE_ASSIGN
sink.tube_hot[1].liquidStream.HT[3].m.d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3549(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3549};
  data->localData[0]->realVars[2584] /* sink.tube_hot[1].liquidStream.HT[3].m.d variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 3550
type: SIMPLE_ASSIGN
sink.tube_hot[1].liquidStream.HT[3].m.c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3550(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3550};
  data->localData[0]->realVars[2484] /* sink.tube_hot[1].liquidStream.HT[3].m.c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 3551
type: SIMPLE_ASSIGN
sink.tube_hot[1].liquidStream.HT[3].m.lambda = 0.55
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3551(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3551};
  data->localData[0]->realVars[2784] /* sink.tube_hot[1].liquidStream.HT[3].m.lambda variable */ = 0.55;
  TRACE_POP
}

/*
equation index: 3552
type: SIMPLE_ASSIGN
sink.tube_hot[1].liquidStream.HT[3].m.mu = 0.0008899999999999999
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3552(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3552};
  data->localData[0]->realVars[2884] /* sink.tube_hot[1].liquidStream.HT[3].m.mu variable */ = 0.0008899999999999999;
  TRACE_POP
}

/*
equation index: 3553
type: SIMPLE_ASSIGN
sink.tube_hot[1].liquidStream.HT[4].m.d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3553(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3553};
  data->localData[0]->realVars[2585] /* sink.tube_hot[1].liquidStream.HT[4].m.d variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 3554
type: SIMPLE_ASSIGN
sink.tube_hot[1].liquidStream.HT[4].m.c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3554(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3554};
  data->localData[0]->realVars[2485] /* sink.tube_hot[1].liquidStream.HT[4].m.c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 3555
type: SIMPLE_ASSIGN
sink.tube_hot[1].liquidStream.HT[4].m.lambda = 0.55
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3555(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3555};
  data->localData[0]->realVars[2785] /* sink.tube_hot[1].liquidStream.HT[4].m.lambda variable */ = 0.55;
  TRACE_POP
}

/*
equation index: 3556
type: SIMPLE_ASSIGN
sink.tube_hot[1].liquidStream.HT[4].m.mu = 0.0008899999999999999
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3556(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3556};
  data->localData[0]->realVars[2885] /* sink.tube_hot[1].liquidStream.HT[4].m.mu variable */ = 0.0008899999999999999;
  TRACE_POP
}

/*
equation index: 3557
type: SIMPLE_ASSIGN
sink.tube_hot[1].liquidStream.HT[5].m.d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3557(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3557};
  data->localData[0]->realVars[2586] /* sink.tube_hot[1].liquidStream.HT[5].m.d variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 3558
type: SIMPLE_ASSIGN
sink.tube_hot[1].liquidStream.HT[5].m.c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3558(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3558};
  data->localData[0]->realVars[2486] /* sink.tube_hot[1].liquidStream.HT[5].m.c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 3559
type: SIMPLE_ASSIGN
sink.tube_hot[1].liquidStream.HT[5].m.lambda = 0.55
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3559(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3559};
  data->localData[0]->realVars[2786] /* sink.tube_hot[1].liquidStream.HT[5].m.lambda variable */ = 0.55;
  TRACE_POP
}

/*
equation index: 3560
type: SIMPLE_ASSIGN
sink.tube_hot[1].liquidStream.HT[5].m.mu = 0.0008899999999999999
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3560(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3560};
  data->localData[0]->realVars[2886] /* sink.tube_hot[1].liquidStream.HT[5].m.mu variable */ = 0.0008899999999999999;
  TRACE_POP
}

/*
equation index: 3561
type: SIMPLE_ASSIGN
sink.tube_hot[1].liquidStream.HT[6].m.d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3561(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3561};
  data->localData[0]->realVars[2587] /* sink.tube_hot[1].liquidStream.HT[6].m.d variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 3562
type: SIMPLE_ASSIGN
sink.tube_hot[1].liquidStream.HT[6].m.c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3562(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3562};
  data->localData[0]->realVars[2487] /* sink.tube_hot[1].liquidStream.HT[6].m.c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 3563
type: SIMPLE_ASSIGN
sink.tube_hot[1].liquidStream.HT[6].m.lambda = 0.55
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3563(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3563};
  data->localData[0]->realVars[2787] /* sink.tube_hot[1].liquidStream.HT[6].m.lambda variable */ = 0.55;
  TRACE_POP
}

/*
equation index: 3564
type: SIMPLE_ASSIGN
sink.tube_hot[1].liquidStream.HT[6].m.mu = 0.0008899999999999999
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3564(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3564};
  data->localData[0]->realVars[2887] /* sink.tube_hot[1].liquidStream.HT[6].m.mu variable */ = 0.0008899999999999999;
  TRACE_POP
}

/*
equation index: 3565
type: SIMPLE_ASSIGN
sink.tube_hot[1].liquidStream.HT[7].m.d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3565(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3565};
  data->localData[0]->realVars[2588] /* sink.tube_hot[1].liquidStream.HT[7].m.d variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 3566
type: SIMPLE_ASSIGN
sink.tube_hot[1].liquidStream.HT[7].m.c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3566(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3566};
  data->localData[0]->realVars[2488] /* sink.tube_hot[1].liquidStream.HT[7].m.c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 3567
type: SIMPLE_ASSIGN
sink.tube_hot[1].liquidStream.HT[7].m.lambda = 0.55
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3567(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3567};
  data->localData[0]->realVars[2788] /* sink.tube_hot[1].liquidStream.HT[7].m.lambda variable */ = 0.55;
  TRACE_POP
}

/*
equation index: 3568
type: SIMPLE_ASSIGN
sink.tube_hot[1].liquidStream.HT[7].m.mu = 0.0008899999999999999
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3568(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3568};
  data->localData[0]->realVars[2888] /* sink.tube_hot[1].liquidStream.HT[7].m.mu variable */ = 0.0008899999999999999;
  TRACE_POP
}

/*
equation index: 3569
type: SIMPLE_ASSIGN
sink.tube_hot[1].liquidStream.HT[8].m.d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3569(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3569};
  data->localData[0]->realVars[2589] /* sink.tube_hot[1].liquidStream.HT[8].m.d variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 3570
type: SIMPLE_ASSIGN
sink.tube_hot[1].liquidStream.HT[8].m.c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3570(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3570};
  data->localData[0]->realVars[2489] /* sink.tube_hot[1].liquidStream.HT[8].m.c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 3571
type: SIMPLE_ASSIGN
sink.tube_hot[1].liquidStream.HT[8].m.lambda = 0.55
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3571(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3571};
  data->localData[0]->realVars[2789] /* sink.tube_hot[1].liquidStream.HT[8].m.lambda variable */ = 0.55;
  TRACE_POP
}

/*
equation index: 3572
type: SIMPLE_ASSIGN
sink.tube_hot[1].liquidStream.HT[8].m.mu = 0.0008899999999999999
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3572(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3572};
  data->localData[0]->realVars[2889] /* sink.tube_hot[1].liquidStream.HT[8].m.mu variable */ = 0.0008899999999999999;
  TRACE_POP
}

/*
equation index: 3573
type: SIMPLE_ASSIGN
sink.tube_hot[1].liquidStream.HT[9].m.d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3573(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3573};
  data->localData[0]->realVars[2590] /* sink.tube_hot[1].liquidStream.HT[9].m.d variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 3574
type: SIMPLE_ASSIGN
sink.tube_hot[1].liquidStream.HT[9].m.c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3574(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3574};
  data->localData[0]->realVars[2490] /* sink.tube_hot[1].liquidStream.HT[9].m.c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 3575
type: SIMPLE_ASSIGN
sink.tube_hot[1].liquidStream.HT[9].m.lambda = 0.55
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3575(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3575};
  data->localData[0]->realVars[2790] /* sink.tube_hot[1].liquidStream.HT[9].m.lambda variable */ = 0.55;
  TRACE_POP
}

/*
equation index: 3576
type: SIMPLE_ASSIGN
sink.tube_hot[1].liquidStream.HT[9].m.mu = 0.0008899999999999999
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3576(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3576};
  data->localData[0]->realVars[2890] /* sink.tube_hot[1].liquidStream.HT[9].m.mu variable */ = 0.0008899999999999999;
  TRACE_POP
}

/*
equation index: 3577
type: SIMPLE_ASSIGN
sink.tube_hot[1].liquidStream.HT[10].m.d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3577(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3577};
  data->localData[0]->realVars[2591] /* sink.tube_hot[1].liquidStream.HT[10].m.d variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 3578
type: SIMPLE_ASSIGN
sink.tube_hot[1].liquidStream.HT[10].m.c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3578(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3578};
  data->localData[0]->realVars[2491] /* sink.tube_hot[1].liquidStream.HT[10].m.c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 3579
type: SIMPLE_ASSIGN
sink.tube_hot[1].liquidStream.HT[10].m.lambda = 0.55
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3579(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3579};
  data->localData[0]->realVars[2791] /* sink.tube_hot[1].liquidStream.HT[10].m.lambda variable */ = 0.55;
  TRACE_POP
}

/*
equation index: 3580
type: SIMPLE_ASSIGN
sink.tube_hot[1].liquidStream.HT[10].m.mu = 0.0008899999999999999
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3580(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3580};
  data->localData[0]->realVars[2891] /* sink.tube_hot[1].liquidStream.HT[10].m.mu variable */ = 0.0008899999999999999;
  TRACE_POP
}

/*
equation index: 3581
type: SIMPLE_ASSIGN
sink.tube_hot[2].liquidStream.m[1].d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3581(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3581};
  data->localData[0]->realVars[3492] /* sink.tube_hot[2].liquidStream.m[1].d variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 3582
type: SIMPLE_ASSIGN
sink.tube_hot[2].liquidStream.m[1].c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3582(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3582};
  data->localData[0]->realVars[3392] /* sink.tube_hot[2].liquidStream.m[1].c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 3583
type: SIMPLE_ASSIGN
sink.tube_hot[2].liquidStream.m[2].d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3583(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3583};
  data->localData[0]->realVars[3493] /* sink.tube_hot[2].liquidStream.m[2].d variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 3584
type: SIMPLE_ASSIGN
sink.tube_hot[2].liquidStream.m[2].c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3584(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3584};
  data->localData[0]->realVars[3393] /* sink.tube_hot[2].liquidStream.m[2].c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 3585
type: SIMPLE_ASSIGN
sink.tube_hot[2].liquidStream.m[3].d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3585(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3585};
  data->localData[0]->realVars[3494] /* sink.tube_hot[2].liquidStream.m[3].d variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 3586
type: SIMPLE_ASSIGN
sink.tube_hot[2].liquidStream.m[3].c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3586(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3586};
  data->localData[0]->realVars[3394] /* sink.tube_hot[2].liquidStream.m[3].c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 3587
type: SIMPLE_ASSIGN
sink.tube_hot[2].liquidStream.m[4].d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3587(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3587};
  data->localData[0]->realVars[3495] /* sink.tube_hot[2].liquidStream.m[4].d variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 3588
type: SIMPLE_ASSIGN
sink.tube_hot[2].liquidStream.m[4].c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3588(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3588};
  data->localData[0]->realVars[3395] /* sink.tube_hot[2].liquidStream.m[4].c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 3589
type: SIMPLE_ASSIGN
sink.tube_hot[2].liquidStream.m[5].d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3589(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3589};
  data->localData[0]->realVars[3496] /* sink.tube_hot[2].liquidStream.m[5].d variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 3590
type: SIMPLE_ASSIGN
sink.tube_hot[2].liquidStream.m[5].c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3590(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3590};
  data->localData[0]->realVars[3396] /* sink.tube_hot[2].liquidStream.m[5].c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 3591
type: SIMPLE_ASSIGN
sink.tube_hot[2].liquidStream.m[6].d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3591(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3591};
  data->localData[0]->realVars[3497] /* sink.tube_hot[2].liquidStream.m[6].d variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 3592
type: SIMPLE_ASSIGN
sink.tube_hot[2].liquidStream.m[6].c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3592(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3592};
  data->localData[0]->realVars[3397] /* sink.tube_hot[2].liquidStream.m[6].c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 3593
type: SIMPLE_ASSIGN
sink.tube_hot[2].liquidStream.m[7].d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3593(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3593};
  data->localData[0]->realVars[3498] /* sink.tube_hot[2].liquidStream.m[7].d variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 3594
type: SIMPLE_ASSIGN
sink.tube_hot[2].liquidStream.m[7].c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3594(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3594};
  data->localData[0]->realVars[3398] /* sink.tube_hot[2].liquidStream.m[7].c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 3595
type: SIMPLE_ASSIGN
sink.tube_hot[2].liquidStream.m[8].d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3595(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3595};
  data->localData[0]->realVars[3499] /* sink.tube_hot[2].liquidStream.m[8].d variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 3596
type: SIMPLE_ASSIGN
sink.tube_hot[2].liquidStream.m[8].c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3596(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3596};
  data->localData[0]->realVars[3399] /* sink.tube_hot[2].liquidStream.m[8].c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 3597
type: SIMPLE_ASSIGN
sink.tube_hot[2].liquidStream.m[9].d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3597(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3597};
  data->localData[0]->realVars[3500] /* sink.tube_hot[2].liquidStream.m[9].d variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 3598
type: SIMPLE_ASSIGN
sink.tube_hot[2].liquidStream.m[9].c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3598(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3598};
  data->localData[0]->realVars[3400] /* sink.tube_hot[2].liquidStream.m[9].c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 3599
type: SIMPLE_ASSIGN
sink.tube_hot[2].liquidStream.m[10].d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3599(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3599};
  data->localData[0]->realVars[3501] /* sink.tube_hot[2].liquidStream.m[10].d variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 3600
type: SIMPLE_ASSIGN
sink.tube_hot[2].liquidStream.m[10].c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3600(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3600};
  data->localData[0]->realVars[3401] /* sink.tube_hot[2].liquidStream.m[10].c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 3601
type: SIMPLE_ASSIGN
sink.tube_hot[2].liquidStream.HT[1].m.d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3601(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3601};
  data->localData[0]->realVars[2592] /* sink.tube_hot[2].liquidStream.HT[1].m.d variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 3602
type: SIMPLE_ASSIGN
sink.tube_hot[2].liquidStream.HT[1].m.c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3602(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3602};
  data->localData[0]->realVars[2492] /* sink.tube_hot[2].liquidStream.HT[1].m.c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 3603
type: SIMPLE_ASSIGN
sink.tube_hot[2].liquidStream.HT[1].m.lambda = 0.55
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3603(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3603};
  data->localData[0]->realVars[2792] /* sink.tube_hot[2].liquidStream.HT[1].m.lambda variable */ = 0.55;
  TRACE_POP
}

/*
equation index: 3604
type: SIMPLE_ASSIGN
sink.tube_hot[2].liquidStream.HT[1].m.mu = 0.0008899999999999999
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3604(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3604};
  data->localData[0]->realVars[2892] /* sink.tube_hot[2].liquidStream.HT[1].m.mu variable */ = 0.0008899999999999999;
  TRACE_POP
}

/*
equation index: 3605
type: SIMPLE_ASSIGN
sink.tube_hot[2].liquidStream.HT[2].m.d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3605(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3605};
  data->localData[0]->realVars[2593] /* sink.tube_hot[2].liquidStream.HT[2].m.d variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 3606
type: SIMPLE_ASSIGN
sink.tube_hot[2].liquidStream.HT[2].m.c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3606(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3606};
  data->localData[0]->realVars[2493] /* sink.tube_hot[2].liquidStream.HT[2].m.c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 3607
type: SIMPLE_ASSIGN
sink.tube_hot[2].liquidStream.HT[2].m.lambda = 0.55
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3607(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3607};
  data->localData[0]->realVars[2793] /* sink.tube_hot[2].liquidStream.HT[2].m.lambda variable */ = 0.55;
  TRACE_POP
}

/*
equation index: 3608
type: SIMPLE_ASSIGN
sink.tube_hot[2].liquidStream.HT[2].m.mu = 0.0008899999999999999
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3608(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3608};
  data->localData[0]->realVars[2893] /* sink.tube_hot[2].liquidStream.HT[2].m.mu variable */ = 0.0008899999999999999;
  TRACE_POP
}

/*
equation index: 3609
type: SIMPLE_ASSIGN
sink.tube_hot[2].liquidStream.HT[3].m.d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3609(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3609};
  data->localData[0]->realVars[2594] /* sink.tube_hot[2].liquidStream.HT[3].m.d variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 3610
type: SIMPLE_ASSIGN
sink.tube_hot[2].liquidStream.HT[3].m.c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3610(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3610};
  data->localData[0]->realVars[2494] /* sink.tube_hot[2].liquidStream.HT[3].m.c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 3611
type: SIMPLE_ASSIGN
sink.tube_hot[2].liquidStream.HT[3].m.lambda = 0.55
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3611(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3611};
  data->localData[0]->realVars[2794] /* sink.tube_hot[2].liquidStream.HT[3].m.lambda variable */ = 0.55;
  TRACE_POP
}

/*
equation index: 3612
type: SIMPLE_ASSIGN
sink.tube_hot[2].liquidStream.HT[3].m.mu = 0.0008899999999999999
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3612(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3612};
  data->localData[0]->realVars[2894] /* sink.tube_hot[2].liquidStream.HT[3].m.mu variable */ = 0.0008899999999999999;
  TRACE_POP
}

/*
equation index: 3613
type: SIMPLE_ASSIGN
sink.tube_hot[2].liquidStream.HT[4].m.d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3613(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3613};
  data->localData[0]->realVars[2595] /* sink.tube_hot[2].liquidStream.HT[4].m.d variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 3614
type: SIMPLE_ASSIGN
sink.tube_hot[2].liquidStream.HT[4].m.c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3614(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3614};
  data->localData[0]->realVars[2495] /* sink.tube_hot[2].liquidStream.HT[4].m.c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 3615
type: SIMPLE_ASSIGN
sink.tube_hot[2].liquidStream.HT[4].m.lambda = 0.55
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3615(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3615};
  data->localData[0]->realVars[2795] /* sink.tube_hot[2].liquidStream.HT[4].m.lambda variable */ = 0.55;
  TRACE_POP
}

/*
equation index: 3616
type: SIMPLE_ASSIGN
sink.tube_hot[2].liquidStream.HT[4].m.mu = 0.0008899999999999999
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3616(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3616};
  data->localData[0]->realVars[2895] /* sink.tube_hot[2].liquidStream.HT[4].m.mu variable */ = 0.0008899999999999999;
  TRACE_POP
}

/*
equation index: 3617
type: SIMPLE_ASSIGN
sink.tube_hot[2].liquidStream.HT[5].m.d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3617(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3617};
  data->localData[0]->realVars[2596] /* sink.tube_hot[2].liquidStream.HT[5].m.d variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 3618
type: SIMPLE_ASSIGN
sink.tube_hot[2].liquidStream.HT[5].m.c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3618(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3618};
  data->localData[0]->realVars[2496] /* sink.tube_hot[2].liquidStream.HT[5].m.c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 3619
type: SIMPLE_ASSIGN
sink.tube_hot[2].liquidStream.HT[5].m.lambda = 0.55
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3619(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3619};
  data->localData[0]->realVars[2796] /* sink.tube_hot[2].liquidStream.HT[5].m.lambda variable */ = 0.55;
  TRACE_POP
}

/*
equation index: 3620
type: SIMPLE_ASSIGN
sink.tube_hot[2].liquidStream.HT[5].m.mu = 0.0008899999999999999
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3620(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3620};
  data->localData[0]->realVars[2896] /* sink.tube_hot[2].liquidStream.HT[5].m.mu variable */ = 0.0008899999999999999;
  TRACE_POP
}

/*
equation index: 3621
type: SIMPLE_ASSIGN
sink.tube_hot[2].liquidStream.HT[6].m.d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3621(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3621};
  data->localData[0]->realVars[2597] /* sink.tube_hot[2].liquidStream.HT[6].m.d variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 3622
type: SIMPLE_ASSIGN
sink.tube_hot[2].liquidStream.HT[6].m.c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3622(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3622};
  data->localData[0]->realVars[2497] /* sink.tube_hot[2].liquidStream.HT[6].m.c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 3623
type: SIMPLE_ASSIGN
sink.tube_hot[2].liquidStream.HT[6].m.lambda = 0.55
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3623(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3623};
  data->localData[0]->realVars[2797] /* sink.tube_hot[2].liquidStream.HT[6].m.lambda variable */ = 0.55;
  TRACE_POP
}

/*
equation index: 3624
type: SIMPLE_ASSIGN
sink.tube_hot[2].liquidStream.HT[6].m.mu = 0.0008899999999999999
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3624(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3624};
  data->localData[0]->realVars[2897] /* sink.tube_hot[2].liquidStream.HT[6].m.mu variable */ = 0.0008899999999999999;
  TRACE_POP
}

/*
equation index: 3625
type: SIMPLE_ASSIGN
sink.tube_hot[2].liquidStream.HT[7].m.d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3625(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3625};
  data->localData[0]->realVars[2598] /* sink.tube_hot[2].liquidStream.HT[7].m.d variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 3626
type: SIMPLE_ASSIGN
sink.tube_hot[2].liquidStream.HT[7].m.c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3626(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3626};
  data->localData[0]->realVars[2498] /* sink.tube_hot[2].liquidStream.HT[7].m.c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 3627
type: SIMPLE_ASSIGN
sink.tube_hot[2].liquidStream.HT[7].m.lambda = 0.55
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3627(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3627};
  data->localData[0]->realVars[2798] /* sink.tube_hot[2].liquidStream.HT[7].m.lambda variable */ = 0.55;
  TRACE_POP
}

/*
equation index: 3628
type: SIMPLE_ASSIGN
sink.tube_hot[2].liquidStream.HT[7].m.mu = 0.0008899999999999999
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3628(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3628};
  data->localData[0]->realVars[2898] /* sink.tube_hot[2].liquidStream.HT[7].m.mu variable */ = 0.0008899999999999999;
  TRACE_POP
}

/*
equation index: 3629
type: SIMPLE_ASSIGN
sink.tube_hot[2].liquidStream.HT[8].m.d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3629(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3629};
  data->localData[0]->realVars[2599] /* sink.tube_hot[2].liquidStream.HT[8].m.d variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 3630
type: SIMPLE_ASSIGN
sink.tube_hot[2].liquidStream.HT[8].m.c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3630(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3630};
  data->localData[0]->realVars[2499] /* sink.tube_hot[2].liquidStream.HT[8].m.c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 3631
type: SIMPLE_ASSIGN
sink.tube_hot[2].liquidStream.HT[8].m.lambda = 0.55
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3631(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3631};
  data->localData[0]->realVars[2799] /* sink.tube_hot[2].liquidStream.HT[8].m.lambda variable */ = 0.55;
  TRACE_POP
}

/*
equation index: 3632
type: SIMPLE_ASSIGN
sink.tube_hot[2].liquidStream.HT[8].m.mu = 0.0008899999999999999
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3632(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3632};
  data->localData[0]->realVars[2899] /* sink.tube_hot[2].liquidStream.HT[8].m.mu variable */ = 0.0008899999999999999;
  TRACE_POP
}

/*
equation index: 3633
type: SIMPLE_ASSIGN
sink.tube_hot[2].liquidStream.HT[9].m.d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3633(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3633};
  data->localData[0]->realVars[2600] /* sink.tube_hot[2].liquidStream.HT[9].m.d variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 3634
type: SIMPLE_ASSIGN
sink.tube_hot[2].liquidStream.HT[9].m.c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3634(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3634};
  data->localData[0]->realVars[2500] /* sink.tube_hot[2].liquidStream.HT[9].m.c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 3635
type: SIMPLE_ASSIGN
sink.tube_hot[2].liquidStream.HT[9].m.lambda = 0.55
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3635(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3635};
  data->localData[0]->realVars[2800] /* sink.tube_hot[2].liquidStream.HT[9].m.lambda variable */ = 0.55;
  TRACE_POP
}

/*
equation index: 3636
type: SIMPLE_ASSIGN
sink.tube_hot[2].liquidStream.HT[9].m.mu = 0.0008899999999999999
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3636(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3636};
  data->localData[0]->realVars[2900] /* sink.tube_hot[2].liquidStream.HT[9].m.mu variable */ = 0.0008899999999999999;
  TRACE_POP
}

/*
equation index: 3637
type: SIMPLE_ASSIGN
sink.tube_hot[2].liquidStream.HT[10].m.d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3637(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3637};
  data->localData[0]->realVars[2601] /* sink.tube_hot[2].liquidStream.HT[10].m.d variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 3638
type: SIMPLE_ASSIGN
sink.tube_hot[2].liquidStream.HT[10].m.c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3638(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3638};
  data->localData[0]->realVars[2501] /* sink.tube_hot[2].liquidStream.HT[10].m.c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 3639
type: SIMPLE_ASSIGN
sink.tube_hot[2].liquidStream.HT[10].m.lambda = 0.55
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3639(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3639};
  data->localData[0]->realVars[2801] /* sink.tube_hot[2].liquidStream.HT[10].m.lambda variable */ = 0.55;
  TRACE_POP
}

/*
equation index: 3640
type: SIMPLE_ASSIGN
sink.tube_hot[2].liquidStream.HT[10].m.mu = 0.0008899999999999999
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3640(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3640};
  data->localData[0]->realVars[2901] /* sink.tube_hot[2].liquidStream.HT[10].m.mu variable */ = 0.0008899999999999999;
  TRACE_POP
}

/*
equation index: 3641
type: SIMPLE_ASSIGN
sink.tube_hot[3].liquidStream.m[1].d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3641(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3641};
  data->localData[0]->realVars[3502] /* sink.tube_hot[3].liquidStream.m[1].d variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 3642
type: SIMPLE_ASSIGN
sink.tube_hot[3].liquidStream.m[1].c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3642(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3642};
  data->localData[0]->realVars[3402] /* sink.tube_hot[3].liquidStream.m[1].c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 3643
type: SIMPLE_ASSIGN
sink.tube_hot[3].liquidStream.m[2].d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3643(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3643};
  data->localData[0]->realVars[3503] /* sink.tube_hot[3].liquidStream.m[2].d variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 3644
type: SIMPLE_ASSIGN
sink.tube_hot[3].liquidStream.m[2].c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3644(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3644};
  data->localData[0]->realVars[3403] /* sink.tube_hot[3].liquidStream.m[2].c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 3645
type: SIMPLE_ASSIGN
sink.tube_hot[3].liquidStream.m[3].d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3645(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3645};
  data->localData[0]->realVars[3504] /* sink.tube_hot[3].liquidStream.m[3].d variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 3646
type: SIMPLE_ASSIGN
sink.tube_hot[3].liquidStream.m[3].c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3646(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3646};
  data->localData[0]->realVars[3404] /* sink.tube_hot[3].liquidStream.m[3].c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 3647
type: SIMPLE_ASSIGN
sink.tube_hot[3].liquidStream.m[4].d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3647(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3647};
  data->localData[0]->realVars[3505] /* sink.tube_hot[3].liquidStream.m[4].d variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 3648
type: SIMPLE_ASSIGN
sink.tube_hot[3].liquidStream.m[4].c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3648(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3648};
  data->localData[0]->realVars[3405] /* sink.tube_hot[3].liquidStream.m[4].c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 3649
type: SIMPLE_ASSIGN
sink.tube_hot[3].liquidStream.m[5].d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3649(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3649};
  data->localData[0]->realVars[3506] /* sink.tube_hot[3].liquidStream.m[5].d variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 3650
type: SIMPLE_ASSIGN
sink.tube_hot[3].liquidStream.m[5].c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3650(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3650};
  data->localData[0]->realVars[3406] /* sink.tube_hot[3].liquidStream.m[5].c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 3651
type: SIMPLE_ASSIGN
sink.tube_hot[3].liquidStream.m[6].d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3651(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3651};
  data->localData[0]->realVars[3507] /* sink.tube_hot[3].liquidStream.m[6].d variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 3652
type: SIMPLE_ASSIGN
sink.tube_hot[3].liquidStream.m[6].c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3652(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3652};
  data->localData[0]->realVars[3407] /* sink.tube_hot[3].liquidStream.m[6].c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 3653
type: SIMPLE_ASSIGN
sink.tube_hot[3].liquidStream.m[7].d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3653(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3653};
  data->localData[0]->realVars[3508] /* sink.tube_hot[3].liquidStream.m[7].d variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 3654
type: SIMPLE_ASSIGN
sink.tube_hot[3].liquidStream.m[7].c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3654(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3654};
  data->localData[0]->realVars[3408] /* sink.tube_hot[3].liquidStream.m[7].c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 3655
type: SIMPLE_ASSIGN
sink.tube_hot[3].liquidStream.m[8].d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3655(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3655};
  data->localData[0]->realVars[3509] /* sink.tube_hot[3].liquidStream.m[8].d variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 3656
type: SIMPLE_ASSIGN
sink.tube_hot[3].liquidStream.m[8].c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3656(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3656};
  data->localData[0]->realVars[3409] /* sink.tube_hot[3].liquidStream.m[8].c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 3657
type: SIMPLE_ASSIGN
sink.tube_hot[3].liquidStream.m[9].d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3657(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3657};
  data->localData[0]->realVars[3510] /* sink.tube_hot[3].liquidStream.m[9].d variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 3658
type: SIMPLE_ASSIGN
sink.tube_hot[3].liquidStream.m[9].c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3658(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3658};
  data->localData[0]->realVars[3410] /* sink.tube_hot[3].liquidStream.m[9].c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 3659
type: SIMPLE_ASSIGN
sink.tube_hot[3].liquidStream.m[10].d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3659(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3659};
  data->localData[0]->realVars[3511] /* sink.tube_hot[3].liquidStream.m[10].d variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 3660
type: SIMPLE_ASSIGN
sink.tube_hot[3].liquidStream.m[10].c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3660(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3660};
  data->localData[0]->realVars[3411] /* sink.tube_hot[3].liquidStream.m[10].c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 3661
type: SIMPLE_ASSIGN
sink.tube_hot[3].liquidStream.HT[1].m.d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3661(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3661};
  data->localData[0]->realVars[2602] /* sink.tube_hot[3].liquidStream.HT[1].m.d variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 3662
type: SIMPLE_ASSIGN
sink.tube_hot[3].liquidStream.HT[1].m.c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3662(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3662};
  data->localData[0]->realVars[2502] /* sink.tube_hot[3].liquidStream.HT[1].m.c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 3663
type: SIMPLE_ASSIGN
sink.tube_hot[3].liquidStream.HT[1].m.lambda = 0.55
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3663(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3663};
  data->localData[0]->realVars[2802] /* sink.tube_hot[3].liquidStream.HT[1].m.lambda variable */ = 0.55;
  TRACE_POP
}

/*
equation index: 3664
type: SIMPLE_ASSIGN
sink.tube_hot[3].liquidStream.HT[1].m.mu = 0.0008899999999999999
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3664(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3664};
  data->localData[0]->realVars[2902] /* sink.tube_hot[3].liquidStream.HT[1].m.mu variable */ = 0.0008899999999999999;
  TRACE_POP
}

/*
equation index: 3665
type: SIMPLE_ASSIGN
sink.tube_hot[3].liquidStream.HT[2].m.d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3665(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3665};
  data->localData[0]->realVars[2603] /* sink.tube_hot[3].liquidStream.HT[2].m.d variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 3666
type: SIMPLE_ASSIGN
sink.tube_hot[3].liquidStream.HT[2].m.c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3666(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3666};
  data->localData[0]->realVars[2503] /* sink.tube_hot[3].liquidStream.HT[2].m.c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 3667
type: SIMPLE_ASSIGN
sink.tube_hot[3].liquidStream.HT[2].m.lambda = 0.55
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3667(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3667};
  data->localData[0]->realVars[2803] /* sink.tube_hot[3].liquidStream.HT[2].m.lambda variable */ = 0.55;
  TRACE_POP
}

/*
equation index: 3668
type: SIMPLE_ASSIGN
sink.tube_hot[3].liquidStream.HT[2].m.mu = 0.0008899999999999999
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3668(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3668};
  data->localData[0]->realVars[2903] /* sink.tube_hot[3].liquidStream.HT[2].m.mu variable */ = 0.0008899999999999999;
  TRACE_POP
}

/*
equation index: 3669
type: SIMPLE_ASSIGN
sink.tube_hot[3].liquidStream.HT[3].m.d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3669(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3669};
  data->localData[0]->realVars[2604] /* sink.tube_hot[3].liquidStream.HT[3].m.d variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 3670
type: SIMPLE_ASSIGN
sink.tube_hot[3].liquidStream.HT[3].m.c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3670(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3670};
  data->localData[0]->realVars[2504] /* sink.tube_hot[3].liquidStream.HT[3].m.c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 3671
type: SIMPLE_ASSIGN
sink.tube_hot[3].liquidStream.HT[3].m.lambda = 0.55
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3671(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3671};
  data->localData[0]->realVars[2804] /* sink.tube_hot[3].liquidStream.HT[3].m.lambda variable */ = 0.55;
  TRACE_POP
}

/*
equation index: 3672
type: SIMPLE_ASSIGN
sink.tube_hot[3].liquidStream.HT[3].m.mu = 0.0008899999999999999
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3672(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3672};
  data->localData[0]->realVars[2904] /* sink.tube_hot[3].liquidStream.HT[3].m.mu variable */ = 0.0008899999999999999;
  TRACE_POP
}

/*
equation index: 3673
type: SIMPLE_ASSIGN
sink.tube_hot[3].liquidStream.HT[4].m.d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3673(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3673};
  data->localData[0]->realVars[2605] /* sink.tube_hot[3].liquidStream.HT[4].m.d variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 3674
type: SIMPLE_ASSIGN
sink.tube_hot[3].liquidStream.HT[4].m.c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3674(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3674};
  data->localData[0]->realVars[2505] /* sink.tube_hot[3].liquidStream.HT[4].m.c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 3675
type: SIMPLE_ASSIGN
sink.tube_hot[3].liquidStream.HT[4].m.lambda = 0.55
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3675(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3675};
  data->localData[0]->realVars[2805] /* sink.tube_hot[3].liquidStream.HT[4].m.lambda variable */ = 0.55;
  TRACE_POP
}

/*
equation index: 3676
type: SIMPLE_ASSIGN
sink.tube_hot[3].liquidStream.HT[4].m.mu = 0.0008899999999999999
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3676(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3676};
  data->localData[0]->realVars[2905] /* sink.tube_hot[3].liquidStream.HT[4].m.mu variable */ = 0.0008899999999999999;
  TRACE_POP
}

/*
equation index: 3677
type: SIMPLE_ASSIGN
sink.tube_hot[3].liquidStream.HT[5].m.d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3677(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3677};
  data->localData[0]->realVars[2606] /* sink.tube_hot[3].liquidStream.HT[5].m.d variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 3678
type: SIMPLE_ASSIGN
sink.tube_hot[3].liquidStream.HT[5].m.c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3678(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3678};
  data->localData[0]->realVars[2506] /* sink.tube_hot[3].liquidStream.HT[5].m.c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 3679
type: SIMPLE_ASSIGN
sink.tube_hot[3].liquidStream.HT[5].m.lambda = 0.55
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3679(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3679};
  data->localData[0]->realVars[2806] /* sink.tube_hot[3].liquidStream.HT[5].m.lambda variable */ = 0.55;
  TRACE_POP
}

/*
equation index: 3680
type: SIMPLE_ASSIGN
sink.tube_hot[3].liquidStream.HT[5].m.mu = 0.0008899999999999999
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3680(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3680};
  data->localData[0]->realVars[2906] /* sink.tube_hot[3].liquidStream.HT[5].m.mu variable */ = 0.0008899999999999999;
  TRACE_POP
}

/*
equation index: 3681
type: SIMPLE_ASSIGN
sink.tube_hot[3].liquidStream.HT[6].m.d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3681(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3681};
  data->localData[0]->realVars[2607] /* sink.tube_hot[3].liquidStream.HT[6].m.d variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 3682
type: SIMPLE_ASSIGN
sink.tube_hot[3].liquidStream.HT[6].m.c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3682(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3682};
  data->localData[0]->realVars[2507] /* sink.tube_hot[3].liquidStream.HT[6].m.c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 3683
type: SIMPLE_ASSIGN
sink.tube_hot[3].liquidStream.HT[6].m.lambda = 0.55
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3683(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3683};
  data->localData[0]->realVars[2807] /* sink.tube_hot[3].liquidStream.HT[6].m.lambda variable */ = 0.55;
  TRACE_POP
}

/*
equation index: 3684
type: SIMPLE_ASSIGN
sink.tube_hot[3].liquidStream.HT[6].m.mu = 0.0008899999999999999
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3684(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3684};
  data->localData[0]->realVars[2907] /* sink.tube_hot[3].liquidStream.HT[6].m.mu variable */ = 0.0008899999999999999;
  TRACE_POP
}

/*
equation index: 3685
type: SIMPLE_ASSIGN
sink.tube_hot[3].liquidStream.HT[7].m.d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3685(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3685};
  data->localData[0]->realVars[2608] /* sink.tube_hot[3].liquidStream.HT[7].m.d variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 3686
type: SIMPLE_ASSIGN
sink.tube_hot[3].liquidStream.HT[7].m.c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3686(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3686};
  data->localData[0]->realVars[2508] /* sink.tube_hot[3].liquidStream.HT[7].m.c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 3687
type: SIMPLE_ASSIGN
sink.tube_hot[3].liquidStream.HT[7].m.lambda = 0.55
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3687(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3687};
  data->localData[0]->realVars[2808] /* sink.tube_hot[3].liquidStream.HT[7].m.lambda variable */ = 0.55;
  TRACE_POP
}

/*
equation index: 3688
type: SIMPLE_ASSIGN
sink.tube_hot[3].liquidStream.HT[7].m.mu = 0.0008899999999999999
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3688(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3688};
  data->localData[0]->realVars[2908] /* sink.tube_hot[3].liquidStream.HT[7].m.mu variable */ = 0.0008899999999999999;
  TRACE_POP
}

/*
equation index: 3689
type: SIMPLE_ASSIGN
sink.tube_hot[3].liquidStream.HT[8].m.d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3689(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3689};
  data->localData[0]->realVars[2609] /* sink.tube_hot[3].liquidStream.HT[8].m.d variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 3690
type: SIMPLE_ASSIGN
sink.tube_hot[3].liquidStream.HT[8].m.c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3690(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3690};
  data->localData[0]->realVars[2509] /* sink.tube_hot[3].liquidStream.HT[8].m.c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 3691
type: SIMPLE_ASSIGN
sink.tube_hot[3].liquidStream.HT[8].m.lambda = 0.55
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3691(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3691};
  data->localData[0]->realVars[2809] /* sink.tube_hot[3].liquidStream.HT[8].m.lambda variable */ = 0.55;
  TRACE_POP
}

/*
equation index: 3692
type: SIMPLE_ASSIGN
sink.tube_hot[3].liquidStream.HT[8].m.mu = 0.0008899999999999999
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3692(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3692};
  data->localData[0]->realVars[2909] /* sink.tube_hot[3].liquidStream.HT[8].m.mu variable */ = 0.0008899999999999999;
  TRACE_POP
}

/*
equation index: 3693
type: SIMPLE_ASSIGN
sink.tube_hot[3].liquidStream.HT[9].m.d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3693(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3693};
  data->localData[0]->realVars[2610] /* sink.tube_hot[3].liquidStream.HT[9].m.d variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 3694
type: SIMPLE_ASSIGN
sink.tube_hot[3].liquidStream.HT[9].m.c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3694(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3694};
  data->localData[0]->realVars[2510] /* sink.tube_hot[3].liquidStream.HT[9].m.c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 3695
type: SIMPLE_ASSIGN
sink.tube_hot[3].liquidStream.HT[9].m.lambda = 0.55
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3695(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3695};
  data->localData[0]->realVars[2810] /* sink.tube_hot[3].liquidStream.HT[9].m.lambda variable */ = 0.55;
  TRACE_POP
}

/*
equation index: 3696
type: SIMPLE_ASSIGN
sink.tube_hot[3].liquidStream.HT[9].m.mu = 0.0008899999999999999
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3696(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3696};
  data->localData[0]->realVars[2910] /* sink.tube_hot[3].liquidStream.HT[9].m.mu variable */ = 0.0008899999999999999;
  TRACE_POP
}

/*
equation index: 3697
type: SIMPLE_ASSIGN
sink.tube_hot[3].liquidStream.HT[10].m.d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3697(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3697};
  data->localData[0]->realVars[2611] /* sink.tube_hot[3].liquidStream.HT[10].m.d variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 3698
type: SIMPLE_ASSIGN
sink.tube_hot[3].liquidStream.HT[10].m.c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3698(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3698};
  data->localData[0]->realVars[2511] /* sink.tube_hot[3].liquidStream.HT[10].m.c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 3699
type: SIMPLE_ASSIGN
sink.tube_hot[3].liquidStream.HT[10].m.lambda = 0.55
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3699(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3699};
  data->localData[0]->realVars[2811] /* sink.tube_hot[3].liquidStream.HT[10].m.lambda variable */ = 0.55;
  TRACE_POP
}

/*
equation index: 3700
type: SIMPLE_ASSIGN
sink.tube_hot[3].liquidStream.HT[10].m.mu = 0.0008899999999999999
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3700(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3700};
  data->localData[0]->realVars[2911] /* sink.tube_hot[3].liquidStream.HT[10].m.mu variable */ = 0.0008899999999999999;
  TRACE_POP
}

/*
equation index: 3701
type: SIMPLE_ASSIGN
sink.tube_hot[4].liquidStream.m[1].d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3701(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3701};
  data->localData[0]->realVars[3512] /* sink.tube_hot[4].liquidStream.m[1].d variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 3702
type: SIMPLE_ASSIGN
sink.tube_hot[4].liquidStream.m[1].c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3702(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3702};
  data->localData[0]->realVars[3412] /* sink.tube_hot[4].liquidStream.m[1].c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 3703
type: SIMPLE_ASSIGN
sink.tube_hot[4].liquidStream.m[2].d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3703(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3703};
  data->localData[0]->realVars[3513] /* sink.tube_hot[4].liquidStream.m[2].d variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 3704
type: SIMPLE_ASSIGN
sink.tube_hot[4].liquidStream.m[2].c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3704(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3704};
  data->localData[0]->realVars[3413] /* sink.tube_hot[4].liquidStream.m[2].c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 3705
type: SIMPLE_ASSIGN
sink.tube_hot[4].liquidStream.m[3].d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3705(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3705};
  data->localData[0]->realVars[3514] /* sink.tube_hot[4].liquidStream.m[3].d variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 3706
type: SIMPLE_ASSIGN
sink.tube_hot[4].liquidStream.m[3].c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3706(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3706};
  data->localData[0]->realVars[3414] /* sink.tube_hot[4].liquidStream.m[3].c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 3707
type: SIMPLE_ASSIGN
sink.tube_hot[4].liquidStream.m[4].d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3707(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3707};
  data->localData[0]->realVars[3515] /* sink.tube_hot[4].liquidStream.m[4].d variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 3708
type: SIMPLE_ASSIGN
sink.tube_hot[4].liquidStream.m[4].c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3708(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3708};
  data->localData[0]->realVars[3415] /* sink.tube_hot[4].liquidStream.m[4].c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 3709
type: SIMPLE_ASSIGN
sink.tube_hot[4].liquidStream.m[5].d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3709(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3709};
  data->localData[0]->realVars[3516] /* sink.tube_hot[4].liquidStream.m[5].d variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 3710
type: SIMPLE_ASSIGN
sink.tube_hot[4].liquidStream.m[5].c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3710(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3710};
  data->localData[0]->realVars[3416] /* sink.tube_hot[4].liquidStream.m[5].c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 3711
type: SIMPLE_ASSIGN
sink.tube_hot[4].liquidStream.m[6].d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3711(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3711};
  data->localData[0]->realVars[3517] /* sink.tube_hot[4].liquidStream.m[6].d variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 3712
type: SIMPLE_ASSIGN
sink.tube_hot[4].liquidStream.m[6].c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3712(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3712};
  data->localData[0]->realVars[3417] /* sink.tube_hot[4].liquidStream.m[6].c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 3713
type: SIMPLE_ASSIGN
sink.tube_hot[4].liquidStream.m[7].d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3713(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3713};
  data->localData[0]->realVars[3518] /* sink.tube_hot[4].liquidStream.m[7].d variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 3714
type: SIMPLE_ASSIGN
sink.tube_hot[4].liquidStream.m[7].c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3714(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3714};
  data->localData[0]->realVars[3418] /* sink.tube_hot[4].liquidStream.m[7].c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 3715
type: SIMPLE_ASSIGN
sink.tube_hot[4].liquidStream.m[8].d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3715(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3715};
  data->localData[0]->realVars[3519] /* sink.tube_hot[4].liquidStream.m[8].d variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 3716
type: SIMPLE_ASSIGN
sink.tube_hot[4].liquidStream.m[8].c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3716(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3716};
  data->localData[0]->realVars[3419] /* sink.tube_hot[4].liquidStream.m[8].c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 3717
type: SIMPLE_ASSIGN
sink.tube_hot[4].liquidStream.m[9].d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3717(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3717};
  data->localData[0]->realVars[3520] /* sink.tube_hot[4].liquidStream.m[9].d variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 3718
type: SIMPLE_ASSIGN
sink.tube_hot[4].liquidStream.m[9].c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3718(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3718};
  data->localData[0]->realVars[3420] /* sink.tube_hot[4].liquidStream.m[9].c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 3719
type: SIMPLE_ASSIGN
sink.tube_hot[4].liquidStream.m[10].d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3719(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3719};
  data->localData[0]->realVars[3521] /* sink.tube_hot[4].liquidStream.m[10].d variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 3720
type: SIMPLE_ASSIGN
sink.tube_hot[4].liquidStream.m[10].c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3720(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3720};
  data->localData[0]->realVars[3421] /* sink.tube_hot[4].liquidStream.m[10].c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 3721
type: SIMPLE_ASSIGN
sink.tube_hot[4].liquidStream.HT[1].m.d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3721(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3721};
  data->localData[0]->realVars[2612] /* sink.tube_hot[4].liquidStream.HT[1].m.d variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 3722
type: SIMPLE_ASSIGN
sink.tube_hot[4].liquidStream.HT[1].m.c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3722(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3722};
  data->localData[0]->realVars[2512] /* sink.tube_hot[4].liquidStream.HT[1].m.c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 3723
type: SIMPLE_ASSIGN
sink.tube_hot[4].liquidStream.HT[1].m.lambda = 0.55
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3723(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3723};
  data->localData[0]->realVars[2812] /* sink.tube_hot[4].liquidStream.HT[1].m.lambda variable */ = 0.55;
  TRACE_POP
}

/*
equation index: 3724
type: SIMPLE_ASSIGN
sink.tube_hot[4].liquidStream.HT[1].m.mu = 0.0008899999999999999
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3724(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3724};
  data->localData[0]->realVars[2912] /* sink.tube_hot[4].liquidStream.HT[1].m.mu variable */ = 0.0008899999999999999;
  TRACE_POP
}

/*
equation index: 3725
type: SIMPLE_ASSIGN
sink.tube_hot[4].liquidStream.HT[2].m.d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3725(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3725};
  data->localData[0]->realVars[2613] /* sink.tube_hot[4].liquidStream.HT[2].m.d variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 3726
type: SIMPLE_ASSIGN
sink.tube_hot[4].liquidStream.HT[2].m.c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3726(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3726};
  data->localData[0]->realVars[2513] /* sink.tube_hot[4].liquidStream.HT[2].m.c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 3727
type: SIMPLE_ASSIGN
sink.tube_hot[4].liquidStream.HT[2].m.lambda = 0.55
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3727(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3727};
  data->localData[0]->realVars[2813] /* sink.tube_hot[4].liquidStream.HT[2].m.lambda variable */ = 0.55;
  TRACE_POP
}

/*
equation index: 3728
type: SIMPLE_ASSIGN
sink.tube_hot[4].liquidStream.HT[2].m.mu = 0.0008899999999999999
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3728(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3728};
  data->localData[0]->realVars[2913] /* sink.tube_hot[4].liquidStream.HT[2].m.mu variable */ = 0.0008899999999999999;
  TRACE_POP
}

/*
equation index: 3729
type: SIMPLE_ASSIGN
sink.tube_hot[4].liquidStream.HT[3].m.d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3729(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3729};
  data->localData[0]->realVars[2614] /* sink.tube_hot[4].liquidStream.HT[3].m.d variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 3730
type: SIMPLE_ASSIGN
sink.tube_hot[4].liquidStream.HT[3].m.c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3730(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3730};
  data->localData[0]->realVars[2514] /* sink.tube_hot[4].liquidStream.HT[3].m.c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 3731
type: SIMPLE_ASSIGN
sink.tube_hot[4].liquidStream.HT[3].m.lambda = 0.55
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3731(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3731};
  data->localData[0]->realVars[2814] /* sink.tube_hot[4].liquidStream.HT[3].m.lambda variable */ = 0.55;
  TRACE_POP
}

/*
equation index: 3732
type: SIMPLE_ASSIGN
sink.tube_hot[4].liquidStream.HT[3].m.mu = 0.0008899999999999999
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3732(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3732};
  data->localData[0]->realVars[2914] /* sink.tube_hot[4].liquidStream.HT[3].m.mu variable */ = 0.0008899999999999999;
  TRACE_POP
}

/*
equation index: 3733
type: SIMPLE_ASSIGN
sink.tube_hot[4].liquidStream.HT[4].m.d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3733(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3733};
  data->localData[0]->realVars[2615] /* sink.tube_hot[4].liquidStream.HT[4].m.d variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 3734
type: SIMPLE_ASSIGN
sink.tube_hot[4].liquidStream.HT[4].m.c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3734(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3734};
  data->localData[0]->realVars[2515] /* sink.tube_hot[4].liquidStream.HT[4].m.c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 3735
type: SIMPLE_ASSIGN
sink.tube_hot[4].liquidStream.HT[4].m.lambda = 0.55
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3735(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3735};
  data->localData[0]->realVars[2815] /* sink.tube_hot[4].liquidStream.HT[4].m.lambda variable */ = 0.55;
  TRACE_POP
}

/*
equation index: 3736
type: SIMPLE_ASSIGN
sink.tube_hot[4].liquidStream.HT[4].m.mu = 0.0008899999999999999
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3736(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3736};
  data->localData[0]->realVars[2915] /* sink.tube_hot[4].liquidStream.HT[4].m.mu variable */ = 0.0008899999999999999;
  TRACE_POP
}

/*
equation index: 3737
type: SIMPLE_ASSIGN
sink.tube_hot[4].liquidStream.HT[5].m.d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3737(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3737};
  data->localData[0]->realVars[2616] /* sink.tube_hot[4].liquidStream.HT[5].m.d variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 3738
type: SIMPLE_ASSIGN
sink.tube_hot[4].liquidStream.HT[5].m.c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3738(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3738};
  data->localData[0]->realVars[2516] /* sink.tube_hot[4].liquidStream.HT[5].m.c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 3739
type: SIMPLE_ASSIGN
sink.tube_hot[4].liquidStream.HT[5].m.lambda = 0.55
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3739(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3739};
  data->localData[0]->realVars[2816] /* sink.tube_hot[4].liquidStream.HT[5].m.lambda variable */ = 0.55;
  TRACE_POP
}

/*
equation index: 3740
type: SIMPLE_ASSIGN
sink.tube_hot[4].liquidStream.HT[5].m.mu = 0.0008899999999999999
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3740(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3740};
  data->localData[0]->realVars[2916] /* sink.tube_hot[4].liquidStream.HT[5].m.mu variable */ = 0.0008899999999999999;
  TRACE_POP
}

/*
equation index: 3741
type: SIMPLE_ASSIGN
sink.tube_hot[4].liquidStream.HT[6].m.d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3741(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3741};
  data->localData[0]->realVars[2617] /* sink.tube_hot[4].liquidStream.HT[6].m.d variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 3742
type: SIMPLE_ASSIGN
sink.tube_hot[4].liquidStream.HT[6].m.c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3742(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3742};
  data->localData[0]->realVars[2517] /* sink.tube_hot[4].liquidStream.HT[6].m.c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 3743
type: SIMPLE_ASSIGN
sink.tube_hot[4].liquidStream.HT[6].m.lambda = 0.55
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3743(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3743};
  data->localData[0]->realVars[2817] /* sink.tube_hot[4].liquidStream.HT[6].m.lambda variable */ = 0.55;
  TRACE_POP
}

/*
equation index: 3744
type: SIMPLE_ASSIGN
sink.tube_hot[4].liquidStream.HT[6].m.mu = 0.0008899999999999999
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3744(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3744};
  data->localData[0]->realVars[2917] /* sink.tube_hot[4].liquidStream.HT[6].m.mu variable */ = 0.0008899999999999999;
  TRACE_POP
}

/*
equation index: 3745
type: SIMPLE_ASSIGN
sink.tube_hot[4].liquidStream.HT[7].m.d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3745(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3745};
  data->localData[0]->realVars[2618] /* sink.tube_hot[4].liquidStream.HT[7].m.d variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 3746
type: SIMPLE_ASSIGN
sink.tube_hot[4].liquidStream.HT[7].m.c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3746(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3746};
  data->localData[0]->realVars[2518] /* sink.tube_hot[4].liquidStream.HT[7].m.c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 3747
type: SIMPLE_ASSIGN
sink.tube_hot[4].liquidStream.HT[7].m.lambda = 0.55
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3747(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3747};
  data->localData[0]->realVars[2818] /* sink.tube_hot[4].liquidStream.HT[7].m.lambda variable */ = 0.55;
  TRACE_POP
}

/*
equation index: 3748
type: SIMPLE_ASSIGN
sink.tube_hot[4].liquidStream.HT[7].m.mu = 0.0008899999999999999
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3748(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3748};
  data->localData[0]->realVars[2918] /* sink.tube_hot[4].liquidStream.HT[7].m.mu variable */ = 0.0008899999999999999;
  TRACE_POP
}

/*
equation index: 3749
type: SIMPLE_ASSIGN
sink.tube_hot[4].liquidStream.HT[8].m.d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3749(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3749};
  data->localData[0]->realVars[2619] /* sink.tube_hot[4].liquidStream.HT[8].m.d variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 3750
type: SIMPLE_ASSIGN
sink.tube_hot[4].liquidStream.HT[8].m.c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3750(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3750};
  data->localData[0]->realVars[2519] /* sink.tube_hot[4].liquidStream.HT[8].m.c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 3751
type: SIMPLE_ASSIGN
sink.tube_hot[4].liquidStream.HT[8].m.lambda = 0.55
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3751(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3751};
  data->localData[0]->realVars[2819] /* sink.tube_hot[4].liquidStream.HT[8].m.lambda variable */ = 0.55;
  TRACE_POP
}

/*
equation index: 3752
type: SIMPLE_ASSIGN
sink.tube_hot[4].liquidStream.HT[8].m.mu = 0.0008899999999999999
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3752(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3752};
  data->localData[0]->realVars[2919] /* sink.tube_hot[4].liquidStream.HT[8].m.mu variable */ = 0.0008899999999999999;
  TRACE_POP
}

/*
equation index: 3753
type: SIMPLE_ASSIGN
sink.tube_hot[4].liquidStream.HT[9].m.d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3753(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3753};
  data->localData[0]->realVars[2620] /* sink.tube_hot[4].liquidStream.HT[9].m.d variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 3754
type: SIMPLE_ASSIGN
sink.tube_hot[4].liquidStream.HT[9].m.c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3754(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3754};
  data->localData[0]->realVars[2520] /* sink.tube_hot[4].liquidStream.HT[9].m.c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 3755
type: SIMPLE_ASSIGN
sink.tube_hot[4].liquidStream.HT[9].m.lambda = 0.55
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3755(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3755};
  data->localData[0]->realVars[2820] /* sink.tube_hot[4].liquidStream.HT[9].m.lambda variable */ = 0.55;
  TRACE_POP
}

/*
equation index: 3756
type: SIMPLE_ASSIGN
sink.tube_hot[4].liquidStream.HT[9].m.mu = 0.0008899999999999999
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3756(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3756};
  data->localData[0]->realVars[2920] /* sink.tube_hot[4].liquidStream.HT[9].m.mu variable */ = 0.0008899999999999999;
  TRACE_POP
}

/*
equation index: 3757
type: SIMPLE_ASSIGN
sink.tube_hot[4].liquidStream.HT[10].m.d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3757(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3757};
  data->localData[0]->realVars[2621] /* sink.tube_hot[4].liquidStream.HT[10].m.d variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 3758
type: SIMPLE_ASSIGN
sink.tube_hot[4].liquidStream.HT[10].m.c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3758(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3758};
  data->localData[0]->realVars[2521] /* sink.tube_hot[4].liquidStream.HT[10].m.c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 3759
type: SIMPLE_ASSIGN
sink.tube_hot[4].liquidStream.HT[10].m.lambda = 0.55
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3759(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3759};
  data->localData[0]->realVars[2821] /* sink.tube_hot[4].liquidStream.HT[10].m.lambda variable */ = 0.55;
  TRACE_POP
}

/*
equation index: 3760
type: SIMPLE_ASSIGN
sink.tube_hot[4].liquidStream.HT[10].m.mu = 0.0008899999999999999
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3760(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3760};
  data->localData[0]->realVars[2921] /* sink.tube_hot[4].liquidStream.HT[10].m.mu variable */ = 0.0008899999999999999;
  TRACE_POP
}

/*
equation index: 3761
type: SIMPLE_ASSIGN
sink.tube_hot[5].liquidStream.m[1].d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3761(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3761};
  data->localData[0]->realVars[3522] /* sink.tube_hot[5].liquidStream.m[1].d variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 3762
type: SIMPLE_ASSIGN
sink.tube_hot[5].liquidStream.m[1].c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3762(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3762};
  data->localData[0]->realVars[3422] /* sink.tube_hot[5].liquidStream.m[1].c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 3763
type: SIMPLE_ASSIGN
sink.tube_hot[5].liquidStream.m[2].d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3763(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3763};
  data->localData[0]->realVars[3523] /* sink.tube_hot[5].liquidStream.m[2].d variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 3764
type: SIMPLE_ASSIGN
sink.tube_hot[5].liquidStream.m[2].c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3764(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3764};
  data->localData[0]->realVars[3423] /* sink.tube_hot[5].liquidStream.m[2].c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 3765
type: SIMPLE_ASSIGN
sink.tube_hot[5].liquidStream.m[3].d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3765(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3765};
  data->localData[0]->realVars[3524] /* sink.tube_hot[5].liquidStream.m[3].d variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 3766
type: SIMPLE_ASSIGN
sink.tube_hot[5].liquidStream.m[3].c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3766(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3766};
  data->localData[0]->realVars[3424] /* sink.tube_hot[5].liquidStream.m[3].c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 3767
type: SIMPLE_ASSIGN
sink.tube_hot[5].liquidStream.m[4].d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3767(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3767};
  data->localData[0]->realVars[3525] /* sink.tube_hot[5].liquidStream.m[4].d variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 3768
type: SIMPLE_ASSIGN
sink.tube_hot[5].liquidStream.m[4].c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3768(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3768};
  data->localData[0]->realVars[3425] /* sink.tube_hot[5].liquidStream.m[4].c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 3769
type: SIMPLE_ASSIGN
sink.tube_hot[5].liquidStream.m[5].d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3769(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3769};
  data->localData[0]->realVars[3526] /* sink.tube_hot[5].liquidStream.m[5].d variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 3770
type: SIMPLE_ASSIGN
sink.tube_hot[5].liquidStream.m[5].c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3770(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3770};
  data->localData[0]->realVars[3426] /* sink.tube_hot[5].liquidStream.m[5].c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 3771
type: SIMPLE_ASSIGN
sink.tube_hot[5].liquidStream.m[6].d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3771(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3771};
  data->localData[0]->realVars[3527] /* sink.tube_hot[5].liquidStream.m[6].d variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 3772
type: SIMPLE_ASSIGN
sink.tube_hot[5].liquidStream.m[6].c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3772(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3772};
  data->localData[0]->realVars[3427] /* sink.tube_hot[5].liquidStream.m[6].c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 3773
type: SIMPLE_ASSIGN
sink.tube_hot[5].liquidStream.m[7].d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3773(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3773};
  data->localData[0]->realVars[3528] /* sink.tube_hot[5].liquidStream.m[7].d variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 3774
type: SIMPLE_ASSIGN
sink.tube_hot[5].liquidStream.m[7].c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3774(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3774};
  data->localData[0]->realVars[3428] /* sink.tube_hot[5].liquidStream.m[7].c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 3775
type: SIMPLE_ASSIGN
sink.tube_hot[5].liquidStream.m[8].d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3775(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3775};
  data->localData[0]->realVars[3529] /* sink.tube_hot[5].liquidStream.m[8].d variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 3776
type: SIMPLE_ASSIGN
sink.tube_hot[5].liquidStream.m[8].c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3776(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3776};
  data->localData[0]->realVars[3429] /* sink.tube_hot[5].liquidStream.m[8].c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 3777
type: SIMPLE_ASSIGN
sink.tube_hot[5].liquidStream.m[9].d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3777(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3777};
  data->localData[0]->realVars[3530] /* sink.tube_hot[5].liquidStream.m[9].d variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 3778
type: SIMPLE_ASSIGN
sink.tube_hot[5].liquidStream.m[9].c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3778(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3778};
  data->localData[0]->realVars[3430] /* sink.tube_hot[5].liquidStream.m[9].c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 3779
type: SIMPLE_ASSIGN
sink.tube_hot[5].liquidStream.m[10].d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3779(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3779};
  data->localData[0]->realVars[3531] /* sink.tube_hot[5].liquidStream.m[10].d variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 3780
type: SIMPLE_ASSIGN
sink.tube_hot[5].liquidStream.m[10].c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3780(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3780};
  data->localData[0]->realVars[3431] /* sink.tube_hot[5].liquidStream.m[10].c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 3781
type: SIMPLE_ASSIGN
sink.tube_hot[5].liquidStream.HT[1].m.d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3781(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3781};
  data->localData[0]->realVars[2622] /* sink.tube_hot[5].liquidStream.HT[1].m.d variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 3782
type: SIMPLE_ASSIGN
sink.tube_hot[5].liquidStream.HT[1].m.c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3782(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3782};
  data->localData[0]->realVars[2522] /* sink.tube_hot[5].liquidStream.HT[1].m.c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 3783
type: SIMPLE_ASSIGN
sink.tube_hot[5].liquidStream.HT[1].m.lambda = 0.55
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3783(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3783};
  data->localData[0]->realVars[2822] /* sink.tube_hot[5].liquidStream.HT[1].m.lambda variable */ = 0.55;
  TRACE_POP
}

/*
equation index: 3784
type: SIMPLE_ASSIGN
sink.tube_hot[5].liquidStream.HT[1].m.mu = 0.0008899999999999999
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3784(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3784};
  data->localData[0]->realVars[2922] /* sink.tube_hot[5].liquidStream.HT[1].m.mu variable */ = 0.0008899999999999999;
  TRACE_POP
}

/*
equation index: 3785
type: SIMPLE_ASSIGN
sink.tube_hot[5].liquidStream.HT[2].m.d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3785(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3785};
  data->localData[0]->realVars[2623] /* sink.tube_hot[5].liquidStream.HT[2].m.d variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 3786
type: SIMPLE_ASSIGN
sink.tube_hot[5].liquidStream.HT[2].m.c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3786(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3786};
  data->localData[0]->realVars[2523] /* sink.tube_hot[5].liquidStream.HT[2].m.c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 3787
type: SIMPLE_ASSIGN
sink.tube_hot[5].liquidStream.HT[2].m.lambda = 0.55
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3787(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3787};
  data->localData[0]->realVars[2823] /* sink.tube_hot[5].liquidStream.HT[2].m.lambda variable */ = 0.55;
  TRACE_POP
}

/*
equation index: 3788
type: SIMPLE_ASSIGN
sink.tube_hot[5].liquidStream.HT[2].m.mu = 0.0008899999999999999
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3788(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3788};
  data->localData[0]->realVars[2923] /* sink.tube_hot[5].liquidStream.HT[2].m.mu variable */ = 0.0008899999999999999;
  TRACE_POP
}

/*
equation index: 3789
type: SIMPLE_ASSIGN
sink.tube_hot[5].liquidStream.HT[3].m.d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3789(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3789};
  data->localData[0]->realVars[2624] /* sink.tube_hot[5].liquidStream.HT[3].m.d variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 3790
type: SIMPLE_ASSIGN
sink.tube_hot[5].liquidStream.HT[3].m.c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3790(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3790};
  data->localData[0]->realVars[2524] /* sink.tube_hot[5].liquidStream.HT[3].m.c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 3791
type: SIMPLE_ASSIGN
sink.tube_hot[5].liquidStream.HT[3].m.lambda = 0.55
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3791(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3791};
  data->localData[0]->realVars[2824] /* sink.tube_hot[5].liquidStream.HT[3].m.lambda variable */ = 0.55;
  TRACE_POP
}

/*
equation index: 3792
type: SIMPLE_ASSIGN
sink.tube_hot[5].liquidStream.HT[3].m.mu = 0.0008899999999999999
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3792(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3792};
  data->localData[0]->realVars[2924] /* sink.tube_hot[5].liquidStream.HT[3].m.mu variable */ = 0.0008899999999999999;
  TRACE_POP
}

/*
equation index: 3793
type: SIMPLE_ASSIGN
sink.tube_hot[5].liquidStream.HT[4].m.d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3793(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3793};
  data->localData[0]->realVars[2625] /* sink.tube_hot[5].liquidStream.HT[4].m.d variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 3794
type: SIMPLE_ASSIGN
sink.tube_hot[5].liquidStream.HT[4].m.c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3794(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3794};
  data->localData[0]->realVars[2525] /* sink.tube_hot[5].liquidStream.HT[4].m.c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 3795
type: SIMPLE_ASSIGN
sink.tube_hot[5].liquidStream.HT[4].m.lambda = 0.55
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3795(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3795};
  data->localData[0]->realVars[2825] /* sink.tube_hot[5].liquidStream.HT[4].m.lambda variable */ = 0.55;
  TRACE_POP
}

/*
equation index: 3796
type: SIMPLE_ASSIGN
sink.tube_hot[5].liquidStream.HT[4].m.mu = 0.0008899999999999999
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3796(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3796};
  data->localData[0]->realVars[2925] /* sink.tube_hot[5].liquidStream.HT[4].m.mu variable */ = 0.0008899999999999999;
  TRACE_POP
}

/*
equation index: 3797
type: SIMPLE_ASSIGN
sink.tube_hot[5].liquidStream.HT[5].m.d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3797(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3797};
  data->localData[0]->realVars[2626] /* sink.tube_hot[5].liquidStream.HT[5].m.d variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 3798
type: SIMPLE_ASSIGN
sink.tube_hot[5].liquidStream.HT[5].m.c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3798(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3798};
  data->localData[0]->realVars[2526] /* sink.tube_hot[5].liquidStream.HT[5].m.c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 3799
type: SIMPLE_ASSIGN
sink.tube_hot[5].liquidStream.HT[5].m.lambda = 0.55
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3799(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3799};
  data->localData[0]->realVars[2826] /* sink.tube_hot[5].liquidStream.HT[5].m.lambda variable */ = 0.55;
  TRACE_POP
}

/*
equation index: 3800
type: SIMPLE_ASSIGN
sink.tube_hot[5].liquidStream.HT[5].m.mu = 0.0008899999999999999
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3800(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3800};
  data->localData[0]->realVars[2926] /* sink.tube_hot[5].liquidStream.HT[5].m.mu variable */ = 0.0008899999999999999;
  TRACE_POP
}

/*
equation index: 3801
type: SIMPLE_ASSIGN
sink.tube_hot[5].liquidStream.HT[6].m.d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3801(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3801};
  data->localData[0]->realVars[2627] /* sink.tube_hot[5].liquidStream.HT[6].m.d variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 3802
type: SIMPLE_ASSIGN
sink.tube_hot[5].liquidStream.HT[6].m.c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3802(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3802};
  data->localData[0]->realVars[2527] /* sink.tube_hot[5].liquidStream.HT[6].m.c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 3803
type: SIMPLE_ASSIGN
sink.tube_hot[5].liquidStream.HT[6].m.lambda = 0.55
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3803(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3803};
  data->localData[0]->realVars[2827] /* sink.tube_hot[5].liquidStream.HT[6].m.lambda variable */ = 0.55;
  TRACE_POP
}

/*
equation index: 3804
type: SIMPLE_ASSIGN
sink.tube_hot[5].liquidStream.HT[6].m.mu = 0.0008899999999999999
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3804(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3804};
  data->localData[0]->realVars[2927] /* sink.tube_hot[5].liquidStream.HT[6].m.mu variable */ = 0.0008899999999999999;
  TRACE_POP
}

/*
equation index: 3805
type: SIMPLE_ASSIGN
sink.tube_hot[5].liquidStream.HT[7].m.d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3805(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3805};
  data->localData[0]->realVars[2628] /* sink.tube_hot[5].liquidStream.HT[7].m.d variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 3806
type: SIMPLE_ASSIGN
sink.tube_hot[5].liquidStream.HT[7].m.c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3806(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3806};
  data->localData[0]->realVars[2528] /* sink.tube_hot[5].liquidStream.HT[7].m.c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 3807
type: SIMPLE_ASSIGN
sink.tube_hot[5].liquidStream.HT[7].m.lambda = 0.55
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3807(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3807};
  data->localData[0]->realVars[2828] /* sink.tube_hot[5].liquidStream.HT[7].m.lambda variable */ = 0.55;
  TRACE_POP
}

/*
equation index: 3808
type: SIMPLE_ASSIGN
sink.tube_hot[5].liquidStream.HT[7].m.mu = 0.0008899999999999999
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3808(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3808};
  data->localData[0]->realVars[2928] /* sink.tube_hot[5].liquidStream.HT[7].m.mu variable */ = 0.0008899999999999999;
  TRACE_POP
}

/*
equation index: 3809
type: SIMPLE_ASSIGN
sink.tube_hot[5].liquidStream.HT[8].m.d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3809(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3809};
  data->localData[0]->realVars[2629] /* sink.tube_hot[5].liquidStream.HT[8].m.d variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 3810
type: SIMPLE_ASSIGN
sink.tube_hot[5].liquidStream.HT[8].m.c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3810(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3810};
  data->localData[0]->realVars[2529] /* sink.tube_hot[5].liquidStream.HT[8].m.c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 3811
type: SIMPLE_ASSIGN
sink.tube_hot[5].liquidStream.HT[8].m.lambda = 0.55
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3811(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3811};
  data->localData[0]->realVars[2829] /* sink.tube_hot[5].liquidStream.HT[8].m.lambda variable */ = 0.55;
  TRACE_POP
}

/*
equation index: 3812
type: SIMPLE_ASSIGN
sink.tube_hot[5].liquidStream.HT[8].m.mu = 0.0008899999999999999
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3812(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3812};
  data->localData[0]->realVars[2929] /* sink.tube_hot[5].liquidStream.HT[8].m.mu variable */ = 0.0008899999999999999;
  TRACE_POP
}

/*
equation index: 3813
type: SIMPLE_ASSIGN
sink.tube_hot[5].liquidStream.HT[9].m.d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3813(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3813};
  data->localData[0]->realVars[2630] /* sink.tube_hot[5].liquidStream.HT[9].m.d variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 3814
type: SIMPLE_ASSIGN
sink.tube_hot[5].liquidStream.HT[9].m.c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3814(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3814};
  data->localData[0]->realVars[2530] /* sink.tube_hot[5].liquidStream.HT[9].m.c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 3815
type: SIMPLE_ASSIGN
sink.tube_hot[5].liquidStream.HT[9].m.lambda = 0.55
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3815(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3815};
  data->localData[0]->realVars[2830] /* sink.tube_hot[5].liquidStream.HT[9].m.lambda variable */ = 0.55;
  TRACE_POP
}

/*
equation index: 3816
type: SIMPLE_ASSIGN
sink.tube_hot[5].liquidStream.HT[9].m.mu = 0.0008899999999999999
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3816(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3816};
  data->localData[0]->realVars[2930] /* sink.tube_hot[5].liquidStream.HT[9].m.mu variable */ = 0.0008899999999999999;
  TRACE_POP
}

/*
equation index: 3817
type: SIMPLE_ASSIGN
sink.tube_hot[5].liquidStream.HT[10].m.d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3817(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3817};
  data->localData[0]->realVars[2631] /* sink.tube_hot[5].liquidStream.HT[10].m.d variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 3818
type: SIMPLE_ASSIGN
sink.tube_hot[5].liquidStream.HT[10].m.c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3818(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3818};
  data->localData[0]->realVars[2531] /* sink.tube_hot[5].liquidStream.HT[10].m.c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 3819
type: SIMPLE_ASSIGN
sink.tube_hot[5].liquidStream.HT[10].m.lambda = 0.55
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3819(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3819};
  data->localData[0]->realVars[2831] /* sink.tube_hot[5].liquidStream.HT[10].m.lambda variable */ = 0.55;
  TRACE_POP
}

/*
equation index: 3820
type: SIMPLE_ASSIGN
sink.tube_hot[5].liquidStream.HT[10].m.mu = 0.0008899999999999999
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3820(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3820};
  data->localData[0]->realVars[2931] /* sink.tube_hot[5].liquidStream.HT[10].m.mu variable */ = 0.0008899999999999999;
  TRACE_POP
}

/*
equation index: 3821
type: SIMPLE_ASSIGN
sink.tube_hot[6].liquidStream.m[1].d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3821(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3821};
  data->localData[0]->realVars[3532] /* sink.tube_hot[6].liquidStream.m[1].d variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 3822
type: SIMPLE_ASSIGN
sink.tube_hot[6].liquidStream.m[1].c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3822(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3822};
  data->localData[0]->realVars[3432] /* sink.tube_hot[6].liquidStream.m[1].c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 3823
type: SIMPLE_ASSIGN
sink.tube_hot[6].liquidStream.m[2].d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3823(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3823};
  data->localData[0]->realVars[3533] /* sink.tube_hot[6].liquidStream.m[2].d variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 3824
type: SIMPLE_ASSIGN
sink.tube_hot[6].liquidStream.m[2].c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3824(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3824};
  data->localData[0]->realVars[3433] /* sink.tube_hot[6].liquidStream.m[2].c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 3825
type: SIMPLE_ASSIGN
sink.tube_hot[6].liquidStream.m[3].d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3825(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3825};
  data->localData[0]->realVars[3534] /* sink.tube_hot[6].liquidStream.m[3].d variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 3826
type: SIMPLE_ASSIGN
sink.tube_hot[6].liquidStream.m[3].c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3826(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3826};
  data->localData[0]->realVars[3434] /* sink.tube_hot[6].liquidStream.m[3].c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 3827
type: SIMPLE_ASSIGN
sink.tube_hot[6].liquidStream.m[4].d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3827(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3827};
  data->localData[0]->realVars[3535] /* sink.tube_hot[6].liquidStream.m[4].d variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 3828
type: SIMPLE_ASSIGN
sink.tube_hot[6].liquidStream.m[4].c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3828(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3828};
  data->localData[0]->realVars[3435] /* sink.tube_hot[6].liquidStream.m[4].c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 3829
type: SIMPLE_ASSIGN
sink.tube_hot[6].liquidStream.m[5].d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3829(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3829};
  data->localData[0]->realVars[3536] /* sink.tube_hot[6].liquidStream.m[5].d variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 3830
type: SIMPLE_ASSIGN
sink.tube_hot[6].liquidStream.m[5].c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3830(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3830};
  data->localData[0]->realVars[3436] /* sink.tube_hot[6].liquidStream.m[5].c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 3831
type: SIMPLE_ASSIGN
sink.tube_hot[6].liquidStream.m[6].d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3831(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3831};
  data->localData[0]->realVars[3537] /* sink.tube_hot[6].liquidStream.m[6].d variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 3832
type: SIMPLE_ASSIGN
sink.tube_hot[6].liquidStream.m[6].c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3832(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3832};
  data->localData[0]->realVars[3437] /* sink.tube_hot[6].liquidStream.m[6].c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 3833
type: SIMPLE_ASSIGN
sink.tube_hot[6].liquidStream.m[7].d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3833(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3833};
  data->localData[0]->realVars[3538] /* sink.tube_hot[6].liquidStream.m[7].d variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 3834
type: SIMPLE_ASSIGN
sink.tube_hot[6].liquidStream.m[7].c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3834(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3834};
  data->localData[0]->realVars[3438] /* sink.tube_hot[6].liquidStream.m[7].c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 3835
type: SIMPLE_ASSIGN
sink.tube_hot[6].liquidStream.m[8].d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3835(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3835};
  data->localData[0]->realVars[3539] /* sink.tube_hot[6].liquidStream.m[8].d variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 3836
type: SIMPLE_ASSIGN
sink.tube_hot[6].liquidStream.m[8].c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3836(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3836};
  data->localData[0]->realVars[3439] /* sink.tube_hot[6].liquidStream.m[8].c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 3837
type: SIMPLE_ASSIGN
sink.tube_hot[6].liquidStream.m[9].d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3837(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3837};
  data->localData[0]->realVars[3540] /* sink.tube_hot[6].liquidStream.m[9].d variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 3838
type: SIMPLE_ASSIGN
sink.tube_hot[6].liquidStream.m[9].c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3838(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3838};
  data->localData[0]->realVars[3440] /* sink.tube_hot[6].liquidStream.m[9].c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 3839
type: SIMPLE_ASSIGN
sink.tube_hot[6].liquidStream.m[10].d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3839(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3839};
  data->localData[0]->realVars[3541] /* sink.tube_hot[6].liquidStream.m[10].d variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 3840
type: SIMPLE_ASSIGN
sink.tube_hot[6].liquidStream.m[10].c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3840(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3840};
  data->localData[0]->realVars[3441] /* sink.tube_hot[6].liquidStream.m[10].c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 3841
type: SIMPLE_ASSIGN
sink.tube_hot[6].liquidStream.HT[1].m.d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3841(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3841};
  data->localData[0]->realVars[2632] /* sink.tube_hot[6].liquidStream.HT[1].m.d variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 3842
type: SIMPLE_ASSIGN
sink.tube_hot[6].liquidStream.HT[1].m.c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3842(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3842};
  data->localData[0]->realVars[2532] /* sink.tube_hot[6].liquidStream.HT[1].m.c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 3843
type: SIMPLE_ASSIGN
sink.tube_hot[6].liquidStream.HT[1].m.lambda = 0.55
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3843(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3843};
  data->localData[0]->realVars[2832] /* sink.tube_hot[6].liquidStream.HT[1].m.lambda variable */ = 0.55;
  TRACE_POP
}

/*
equation index: 3844
type: SIMPLE_ASSIGN
sink.tube_hot[6].liquidStream.HT[1].m.mu = 0.0008899999999999999
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3844(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3844};
  data->localData[0]->realVars[2932] /* sink.tube_hot[6].liquidStream.HT[1].m.mu variable */ = 0.0008899999999999999;
  TRACE_POP
}

/*
equation index: 3845
type: SIMPLE_ASSIGN
sink.tube_hot[6].liquidStream.HT[2].m.d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3845(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3845};
  data->localData[0]->realVars[2633] /* sink.tube_hot[6].liquidStream.HT[2].m.d variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 3846
type: SIMPLE_ASSIGN
sink.tube_hot[6].liquidStream.HT[2].m.c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3846(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3846};
  data->localData[0]->realVars[2533] /* sink.tube_hot[6].liquidStream.HT[2].m.c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 3847
type: SIMPLE_ASSIGN
sink.tube_hot[6].liquidStream.HT[2].m.lambda = 0.55
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3847(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3847};
  data->localData[0]->realVars[2833] /* sink.tube_hot[6].liquidStream.HT[2].m.lambda variable */ = 0.55;
  TRACE_POP
}

/*
equation index: 3848
type: SIMPLE_ASSIGN
sink.tube_hot[6].liquidStream.HT[2].m.mu = 0.0008899999999999999
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3848(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3848};
  data->localData[0]->realVars[2933] /* sink.tube_hot[6].liquidStream.HT[2].m.mu variable */ = 0.0008899999999999999;
  TRACE_POP
}

/*
equation index: 3849
type: SIMPLE_ASSIGN
sink.tube_hot[6].liquidStream.HT[3].m.d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3849(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3849};
  data->localData[0]->realVars[2634] /* sink.tube_hot[6].liquidStream.HT[3].m.d variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 3850
type: SIMPLE_ASSIGN
sink.tube_hot[6].liquidStream.HT[3].m.c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3850(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3850};
  data->localData[0]->realVars[2534] /* sink.tube_hot[6].liquidStream.HT[3].m.c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 3851
type: SIMPLE_ASSIGN
sink.tube_hot[6].liquidStream.HT[3].m.lambda = 0.55
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3851(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3851};
  data->localData[0]->realVars[2834] /* sink.tube_hot[6].liquidStream.HT[3].m.lambda variable */ = 0.55;
  TRACE_POP
}

/*
equation index: 3852
type: SIMPLE_ASSIGN
sink.tube_hot[6].liquidStream.HT[3].m.mu = 0.0008899999999999999
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3852(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3852};
  data->localData[0]->realVars[2934] /* sink.tube_hot[6].liquidStream.HT[3].m.mu variable */ = 0.0008899999999999999;
  TRACE_POP
}

/*
equation index: 3853
type: SIMPLE_ASSIGN
sink.tube_hot[6].liquidStream.HT[4].m.d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3853(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3853};
  data->localData[0]->realVars[2635] /* sink.tube_hot[6].liquidStream.HT[4].m.d variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 3854
type: SIMPLE_ASSIGN
sink.tube_hot[6].liquidStream.HT[4].m.c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3854(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3854};
  data->localData[0]->realVars[2535] /* sink.tube_hot[6].liquidStream.HT[4].m.c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 3855
type: SIMPLE_ASSIGN
sink.tube_hot[6].liquidStream.HT[4].m.lambda = 0.55
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3855(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3855};
  data->localData[0]->realVars[2835] /* sink.tube_hot[6].liquidStream.HT[4].m.lambda variable */ = 0.55;
  TRACE_POP
}

/*
equation index: 3856
type: SIMPLE_ASSIGN
sink.tube_hot[6].liquidStream.HT[4].m.mu = 0.0008899999999999999
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3856(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3856};
  data->localData[0]->realVars[2935] /* sink.tube_hot[6].liquidStream.HT[4].m.mu variable */ = 0.0008899999999999999;
  TRACE_POP
}

/*
equation index: 3857
type: SIMPLE_ASSIGN
sink.tube_hot[6].liquidStream.HT[5].m.d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3857(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3857};
  data->localData[0]->realVars[2636] /* sink.tube_hot[6].liquidStream.HT[5].m.d variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 3858
type: SIMPLE_ASSIGN
sink.tube_hot[6].liquidStream.HT[5].m.c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3858(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3858};
  data->localData[0]->realVars[2536] /* sink.tube_hot[6].liquidStream.HT[5].m.c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 3859
type: SIMPLE_ASSIGN
sink.tube_hot[6].liquidStream.HT[5].m.lambda = 0.55
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3859(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3859};
  data->localData[0]->realVars[2836] /* sink.tube_hot[6].liquidStream.HT[5].m.lambda variable */ = 0.55;
  TRACE_POP
}

/*
equation index: 3860
type: SIMPLE_ASSIGN
sink.tube_hot[6].liquidStream.HT[5].m.mu = 0.0008899999999999999
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3860(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3860};
  data->localData[0]->realVars[2936] /* sink.tube_hot[6].liquidStream.HT[5].m.mu variable */ = 0.0008899999999999999;
  TRACE_POP
}

/*
equation index: 3861
type: SIMPLE_ASSIGN
sink.tube_hot[6].liquidStream.HT[6].m.d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3861(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3861};
  data->localData[0]->realVars[2637] /* sink.tube_hot[6].liquidStream.HT[6].m.d variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 3862
type: SIMPLE_ASSIGN
sink.tube_hot[6].liquidStream.HT[6].m.c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3862(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3862};
  data->localData[0]->realVars[2537] /* sink.tube_hot[6].liquidStream.HT[6].m.c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 3863
type: SIMPLE_ASSIGN
sink.tube_hot[6].liquidStream.HT[6].m.lambda = 0.55
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3863(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3863};
  data->localData[0]->realVars[2837] /* sink.tube_hot[6].liquidStream.HT[6].m.lambda variable */ = 0.55;
  TRACE_POP
}

/*
equation index: 3864
type: SIMPLE_ASSIGN
sink.tube_hot[6].liquidStream.HT[6].m.mu = 0.0008899999999999999
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3864(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3864};
  data->localData[0]->realVars[2937] /* sink.tube_hot[6].liquidStream.HT[6].m.mu variable */ = 0.0008899999999999999;
  TRACE_POP
}

/*
equation index: 3865
type: SIMPLE_ASSIGN
sink.tube_hot[6].liquidStream.HT[7].m.d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3865(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3865};
  data->localData[0]->realVars[2638] /* sink.tube_hot[6].liquidStream.HT[7].m.d variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 3866
type: SIMPLE_ASSIGN
sink.tube_hot[6].liquidStream.HT[7].m.c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3866(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3866};
  data->localData[0]->realVars[2538] /* sink.tube_hot[6].liquidStream.HT[7].m.c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 3867
type: SIMPLE_ASSIGN
sink.tube_hot[6].liquidStream.HT[7].m.lambda = 0.55
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3867(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3867};
  data->localData[0]->realVars[2838] /* sink.tube_hot[6].liquidStream.HT[7].m.lambda variable */ = 0.55;
  TRACE_POP
}

/*
equation index: 3868
type: SIMPLE_ASSIGN
sink.tube_hot[6].liquidStream.HT[7].m.mu = 0.0008899999999999999
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3868(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3868};
  data->localData[0]->realVars[2938] /* sink.tube_hot[6].liquidStream.HT[7].m.mu variable */ = 0.0008899999999999999;
  TRACE_POP
}

/*
equation index: 3869
type: SIMPLE_ASSIGN
sink.tube_hot[6].liquidStream.HT[8].m.d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3869(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3869};
  data->localData[0]->realVars[2639] /* sink.tube_hot[6].liquidStream.HT[8].m.d variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 3870
type: SIMPLE_ASSIGN
sink.tube_hot[6].liquidStream.HT[8].m.c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3870(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3870};
  data->localData[0]->realVars[2539] /* sink.tube_hot[6].liquidStream.HT[8].m.c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 3871
type: SIMPLE_ASSIGN
sink.tube_hot[6].liquidStream.HT[8].m.lambda = 0.55
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3871(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3871};
  data->localData[0]->realVars[2839] /* sink.tube_hot[6].liquidStream.HT[8].m.lambda variable */ = 0.55;
  TRACE_POP
}

/*
equation index: 3872
type: SIMPLE_ASSIGN
sink.tube_hot[6].liquidStream.HT[8].m.mu = 0.0008899999999999999
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3872(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3872};
  data->localData[0]->realVars[2939] /* sink.tube_hot[6].liquidStream.HT[8].m.mu variable */ = 0.0008899999999999999;
  TRACE_POP
}

/*
equation index: 3873
type: SIMPLE_ASSIGN
sink.tube_hot[6].liquidStream.HT[9].m.d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3873(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3873};
  data->localData[0]->realVars[2640] /* sink.tube_hot[6].liquidStream.HT[9].m.d variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 3874
type: SIMPLE_ASSIGN
sink.tube_hot[6].liquidStream.HT[9].m.c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3874(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3874};
  data->localData[0]->realVars[2540] /* sink.tube_hot[6].liquidStream.HT[9].m.c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 3875
type: SIMPLE_ASSIGN
sink.tube_hot[6].liquidStream.HT[9].m.lambda = 0.55
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3875(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3875};
  data->localData[0]->realVars[2840] /* sink.tube_hot[6].liquidStream.HT[9].m.lambda variable */ = 0.55;
  TRACE_POP
}

/*
equation index: 3876
type: SIMPLE_ASSIGN
sink.tube_hot[6].liquidStream.HT[9].m.mu = 0.0008899999999999999
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3876(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3876};
  data->localData[0]->realVars[2940] /* sink.tube_hot[6].liquidStream.HT[9].m.mu variable */ = 0.0008899999999999999;
  TRACE_POP
}

/*
equation index: 3877
type: SIMPLE_ASSIGN
sink.tube_hot[6].liquidStream.HT[10].m.d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3877(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3877};
  data->localData[0]->realVars[2641] /* sink.tube_hot[6].liquidStream.HT[10].m.d variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 3878
type: SIMPLE_ASSIGN
sink.tube_hot[6].liquidStream.HT[10].m.c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3878(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3878};
  data->localData[0]->realVars[2541] /* sink.tube_hot[6].liquidStream.HT[10].m.c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 3879
type: SIMPLE_ASSIGN
sink.tube_hot[6].liquidStream.HT[10].m.lambda = 0.55
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3879(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3879};
  data->localData[0]->realVars[2841] /* sink.tube_hot[6].liquidStream.HT[10].m.lambda variable */ = 0.55;
  TRACE_POP
}

/*
equation index: 3880
type: SIMPLE_ASSIGN
sink.tube_hot[6].liquidStream.HT[10].m.mu = 0.0008899999999999999
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3880(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3880};
  data->localData[0]->realVars[2941] /* sink.tube_hot[6].liquidStream.HT[10].m.mu variable */ = 0.0008899999999999999;
  TRACE_POP
}

/*
equation index: 3881
type: SIMPLE_ASSIGN
sink.tube_hot[7].liquidStream.m[1].d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3881(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3881};
  data->localData[0]->realVars[3542] /* sink.tube_hot[7].liquidStream.m[1].d variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 3882
type: SIMPLE_ASSIGN
sink.tube_hot[7].liquidStream.m[1].c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3882(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3882};
  data->localData[0]->realVars[3442] /* sink.tube_hot[7].liquidStream.m[1].c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 3883
type: SIMPLE_ASSIGN
sink.tube_hot[7].liquidStream.m[2].d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3883(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3883};
  data->localData[0]->realVars[3543] /* sink.tube_hot[7].liquidStream.m[2].d variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 3884
type: SIMPLE_ASSIGN
sink.tube_hot[7].liquidStream.m[2].c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3884(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3884};
  data->localData[0]->realVars[3443] /* sink.tube_hot[7].liquidStream.m[2].c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 3885
type: SIMPLE_ASSIGN
sink.tube_hot[7].liquidStream.m[3].d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3885(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3885};
  data->localData[0]->realVars[3544] /* sink.tube_hot[7].liquidStream.m[3].d variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 3886
type: SIMPLE_ASSIGN
sink.tube_hot[7].liquidStream.m[3].c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3886(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3886};
  data->localData[0]->realVars[3444] /* sink.tube_hot[7].liquidStream.m[3].c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 3887
type: SIMPLE_ASSIGN
sink.tube_hot[7].liquidStream.m[4].d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3887(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3887};
  data->localData[0]->realVars[3545] /* sink.tube_hot[7].liquidStream.m[4].d variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 3888
type: SIMPLE_ASSIGN
sink.tube_hot[7].liquidStream.m[4].c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3888(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3888};
  data->localData[0]->realVars[3445] /* sink.tube_hot[7].liquidStream.m[4].c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 3889
type: SIMPLE_ASSIGN
sink.tube_hot[7].liquidStream.m[5].d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3889(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3889};
  data->localData[0]->realVars[3546] /* sink.tube_hot[7].liquidStream.m[5].d variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 3890
type: SIMPLE_ASSIGN
sink.tube_hot[7].liquidStream.m[5].c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3890(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3890};
  data->localData[0]->realVars[3446] /* sink.tube_hot[7].liquidStream.m[5].c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 3891
type: SIMPLE_ASSIGN
sink.tube_hot[7].liquidStream.m[6].d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3891(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3891};
  data->localData[0]->realVars[3547] /* sink.tube_hot[7].liquidStream.m[6].d variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 3892
type: SIMPLE_ASSIGN
sink.tube_hot[7].liquidStream.m[6].c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3892(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3892};
  data->localData[0]->realVars[3447] /* sink.tube_hot[7].liquidStream.m[6].c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 3893
type: SIMPLE_ASSIGN
sink.tube_hot[7].liquidStream.m[7].d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3893(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3893};
  data->localData[0]->realVars[3548] /* sink.tube_hot[7].liquidStream.m[7].d variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 3894
type: SIMPLE_ASSIGN
sink.tube_hot[7].liquidStream.m[7].c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3894(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3894};
  data->localData[0]->realVars[3448] /* sink.tube_hot[7].liquidStream.m[7].c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 3895
type: SIMPLE_ASSIGN
sink.tube_hot[7].liquidStream.m[8].d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3895(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3895};
  data->localData[0]->realVars[3549] /* sink.tube_hot[7].liquidStream.m[8].d variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 3896
type: SIMPLE_ASSIGN
sink.tube_hot[7].liquidStream.m[8].c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3896(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3896};
  data->localData[0]->realVars[3449] /* sink.tube_hot[7].liquidStream.m[8].c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 3897
type: SIMPLE_ASSIGN
sink.tube_hot[7].liquidStream.m[9].d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3897(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3897};
  data->localData[0]->realVars[3550] /* sink.tube_hot[7].liquidStream.m[9].d variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 3898
type: SIMPLE_ASSIGN
sink.tube_hot[7].liquidStream.m[9].c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3898(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3898};
  data->localData[0]->realVars[3450] /* sink.tube_hot[7].liquidStream.m[9].c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 3899
type: SIMPLE_ASSIGN
sink.tube_hot[7].liquidStream.m[10].d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3899(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3899};
  data->localData[0]->realVars[3551] /* sink.tube_hot[7].liquidStream.m[10].d variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 3900
type: SIMPLE_ASSIGN
sink.tube_hot[7].liquidStream.m[10].c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3900(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3900};
  data->localData[0]->realVars[3451] /* sink.tube_hot[7].liquidStream.m[10].c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 3901
type: SIMPLE_ASSIGN
sink.tube_hot[7].liquidStream.HT[1].m.d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3901(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3901};
  data->localData[0]->realVars[2642] /* sink.tube_hot[7].liquidStream.HT[1].m.d variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 3902
type: SIMPLE_ASSIGN
sink.tube_hot[7].liquidStream.HT[1].m.c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3902(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3902};
  data->localData[0]->realVars[2542] /* sink.tube_hot[7].liquidStream.HT[1].m.c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 3903
type: SIMPLE_ASSIGN
sink.tube_hot[7].liquidStream.HT[1].m.lambda = 0.55
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3903(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3903};
  data->localData[0]->realVars[2842] /* sink.tube_hot[7].liquidStream.HT[1].m.lambda variable */ = 0.55;
  TRACE_POP
}

/*
equation index: 3904
type: SIMPLE_ASSIGN
sink.tube_hot[7].liquidStream.HT[1].m.mu = 0.0008899999999999999
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3904(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3904};
  data->localData[0]->realVars[2942] /* sink.tube_hot[7].liquidStream.HT[1].m.mu variable */ = 0.0008899999999999999;
  TRACE_POP
}

/*
equation index: 3905
type: SIMPLE_ASSIGN
sink.tube_hot[7].liquidStream.HT[2].m.d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3905(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3905};
  data->localData[0]->realVars[2643] /* sink.tube_hot[7].liquidStream.HT[2].m.d variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 3906
type: SIMPLE_ASSIGN
sink.tube_hot[7].liquidStream.HT[2].m.c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3906(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3906};
  data->localData[0]->realVars[2543] /* sink.tube_hot[7].liquidStream.HT[2].m.c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 3907
type: SIMPLE_ASSIGN
sink.tube_hot[7].liquidStream.HT[2].m.lambda = 0.55
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3907(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3907};
  data->localData[0]->realVars[2843] /* sink.tube_hot[7].liquidStream.HT[2].m.lambda variable */ = 0.55;
  TRACE_POP
}

/*
equation index: 3908
type: SIMPLE_ASSIGN
sink.tube_hot[7].liquidStream.HT[2].m.mu = 0.0008899999999999999
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3908(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3908};
  data->localData[0]->realVars[2943] /* sink.tube_hot[7].liquidStream.HT[2].m.mu variable */ = 0.0008899999999999999;
  TRACE_POP
}

/*
equation index: 3909
type: SIMPLE_ASSIGN
sink.tube_hot[7].liquidStream.HT[3].m.d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3909(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3909};
  data->localData[0]->realVars[2644] /* sink.tube_hot[7].liquidStream.HT[3].m.d variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 3910
type: SIMPLE_ASSIGN
sink.tube_hot[7].liquidStream.HT[3].m.c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3910(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3910};
  data->localData[0]->realVars[2544] /* sink.tube_hot[7].liquidStream.HT[3].m.c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 3911
type: SIMPLE_ASSIGN
sink.tube_hot[7].liquidStream.HT[3].m.lambda = 0.55
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3911(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3911};
  data->localData[0]->realVars[2844] /* sink.tube_hot[7].liquidStream.HT[3].m.lambda variable */ = 0.55;
  TRACE_POP
}

/*
equation index: 3912
type: SIMPLE_ASSIGN
sink.tube_hot[7].liquidStream.HT[3].m.mu = 0.0008899999999999999
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3912(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3912};
  data->localData[0]->realVars[2944] /* sink.tube_hot[7].liquidStream.HT[3].m.mu variable */ = 0.0008899999999999999;
  TRACE_POP
}

/*
equation index: 3913
type: SIMPLE_ASSIGN
sink.tube_hot[7].liquidStream.HT[4].m.d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3913(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3913};
  data->localData[0]->realVars[2645] /* sink.tube_hot[7].liquidStream.HT[4].m.d variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 3914
type: SIMPLE_ASSIGN
sink.tube_hot[7].liquidStream.HT[4].m.c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3914(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3914};
  data->localData[0]->realVars[2545] /* sink.tube_hot[7].liquidStream.HT[4].m.c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 3915
type: SIMPLE_ASSIGN
sink.tube_hot[7].liquidStream.HT[4].m.lambda = 0.55
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3915(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3915};
  data->localData[0]->realVars[2845] /* sink.tube_hot[7].liquidStream.HT[4].m.lambda variable */ = 0.55;
  TRACE_POP
}

/*
equation index: 3916
type: SIMPLE_ASSIGN
sink.tube_hot[7].liquidStream.HT[4].m.mu = 0.0008899999999999999
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3916(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3916};
  data->localData[0]->realVars[2945] /* sink.tube_hot[7].liquidStream.HT[4].m.mu variable */ = 0.0008899999999999999;
  TRACE_POP
}

/*
equation index: 3917
type: SIMPLE_ASSIGN
sink.tube_hot[7].liquidStream.HT[5].m.d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3917(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3917};
  data->localData[0]->realVars[2646] /* sink.tube_hot[7].liquidStream.HT[5].m.d variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 3918
type: SIMPLE_ASSIGN
sink.tube_hot[7].liquidStream.HT[5].m.c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3918(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3918};
  data->localData[0]->realVars[2546] /* sink.tube_hot[7].liquidStream.HT[5].m.c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 3919
type: SIMPLE_ASSIGN
sink.tube_hot[7].liquidStream.HT[5].m.lambda = 0.55
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3919(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3919};
  data->localData[0]->realVars[2846] /* sink.tube_hot[7].liquidStream.HT[5].m.lambda variable */ = 0.55;
  TRACE_POP
}

/*
equation index: 3920
type: SIMPLE_ASSIGN
sink.tube_hot[7].liquidStream.HT[5].m.mu = 0.0008899999999999999
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3920(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3920};
  data->localData[0]->realVars[2946] /* sink.tube_hot[7].liquidStream.HT[5].m.mu variable */ = 0.0008899999999999999;
  TRACE_POP
}

/*
equation index: 3921
type: SIMPLE_ASSIGN
sink.tube_hot[7].liquidStream.HT[6].m.d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3921(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3921};
  data->localData[0]->realVars[2647] /* sink.tube_hot[7].liquidStream.HT[6].m.d variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 3922
type: SIMPLE_ASSIGN
sink.tube_hot[7].liquidStream.HT[6].m.c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3922(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3922};
  data->localData[0]->realVars[2547] /* sink.tube_hot[7].liquidStream.HT[6].m.c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 3923
type: SIMPLE_ASSIGN
sink.tube_hot[7].liquidStream.HT[6].m.lambda = 0.55
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3923(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3923};
  data->localData[0]->realVars[2847] /* sink.tube_hot[7].liquidStream.HT[6].m.lambda variable */ = 0.55;
  TRACE_POP
}

/*
equation index: 3924
type: SIMPLE_ASSIGN
sink.tube_hot[7].liquidStream.HT[6].m.mu = 0.0008899999999999999
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3924(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3924};
  data->localData[0]->realVars[2947] /* sink.tube_hot[7].liquidStream.HT[6].m.mu variable */ = 0.0008899999999999999;
  TRACE_POP
}

/*
equation index: 3925
type: SIMPLE_ASSIGN
sink.tube_hot[7].liquidStream.HT[7].m.d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3925(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3925};
  data->localData[0]->realVars[2648] /* sink.tube_hot[7].liquidStream.HT[7].m.d variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 3926
type: SIMPLE_ASSIGN
sink.tube_hot[7].liquidStream.HT[7].m.c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3926(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3926};
  data->localData[0]->realVars[2548] /* sink.tube_hot[7].liquidStream.HT[7].m.c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 3927
type: SIMPLE_ASSIGN
sink.tube_hot[7].liquidStream.HT[7].m.lambda = 0.55
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3927(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3927};
  data->localData[0]->realVars[2848] /* sink.tube_hot[7].liquidStream.HT[7].m.lambda variable */ = 0.55;
  TRACE_POP
}

/*
equation index: 3928
type: SIMPLE_ASSIGN
sink.tube_hot[7].liquidStream.HT[7].m.mu = 0.0008899999999999999
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3928(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3928};
  data->localData[0]->realVars[2948] /* sink.tube_hot[7].liquidStream.HT[7].m.mu variable */ = 0.0008899999999999999;
  TRACE_POP
}

/*
equation index: 3929
type: SIMPLE_ASSIGN
sink.tube_hot[7].liquidStream.HT[8].m.d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3929(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3929};
  data->localData[0]->realVars[2649] /* sink.tube_hot[7].liquidStream.HT[8].m.d variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 3930
type: SIMPLE_ASSIGN
sink.tube_hot[7].liquidStream.HT[8].m.c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3930(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3930};
  data->localData[0]->realVars[2549] /* sink.tube_hot[7].liquidStream.HT[8].m.c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 3931
type: SIMPLE_ASSIGN
sink.tube_hot[7].liquidStream.HT[8].m.lambda = 0.55
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3931(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3931};
  data->localData[0]->realVars[2849] /* sink.tube_hot[7].liquidStream.HT[8].m.lambda variable */ = 0.55;
  TRACE_POP
}

/*
equation index: 3932
type: SIMPLE_ASSIGN
sink.tube_hot[7].liquidStream.HT[8].m.mu = 0.0008899999999999999
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3932(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3932};
  data->localData[0]->realVars[2949] /* sink.tube_hot[7].liquidStream.HT[8].m.mu variable */ = 0.0008899999999999999;
  TRACE_POP
}

/*
equation index: 3933
type: SIMPLE_ASSIGN
sink.tube_hot[7].liquidStream.HT[9].m.d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3933(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3933};
  data->localData[0]->realVars[2650] /* sink.tube_hot[7].liquidStream.HT[9].m.d variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 3934
type: SIMPLE_ASSIGN
sink.tube_hot[7].liquidStream.HT[9].m.c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3934(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3934};
  data->localData[0]->realVars[2550] /* sink.tube_hot[7].liquidStream.HT[9].m.c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 3935
type: SIMPLE_ASSIGN
sink.tube_hot[7].liquidStream.HT[9].m.lambda = 0.55
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3935(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3935};
  data->localData[0]->realVars[2850] /* sink.tube_hot[7].liquidStream.HT[9].m.lambda variable */ = 0.55;
  TRACE_POP
}

/*
equation index: 3936
type: SIMPLE_ASSIGN
sink.tube_hot[7].liquidStream.HT[9].m.mu = 0.0008899999999999999
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3936(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3936};
  data->localData[0]->realVars[2950] /* sink.tube_hot[7].liquidStream.HT[9].m.mu variable */ = 0.0008899999999999999;
  TRACE_POP
}

/*
equation index: 3937
type: SIMPLE_ASSIGN
sink.tube_hot[7].liquidStream.HT[10].m.d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3937(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3937};
  data->localData[0]->realVars[2651] /* sink.tube_hot[7].liquidStream.HT[10].m.d variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 3938
type: SIMPLE_ASSIGN
sink.tube_hot[7].liquidStream.HT[10].m.c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3938(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3938};
  data->localData[0]->realVars[2551] /* sink.tube_hot[7].liquidStream.HT[10].m.c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 3939
type: SIMPLE_ASSIGN
sink.tube_hot[7].liquidStream.HT[10].m.lambda = 0.55
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3939(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3939};
  data->localData[0]->realVars[2851] /* sink.tube_hot[7].liquidStream.HT[10].m.lambda variable */ = 0.55;
  TRACE_POP
}

/*
equation index: 3940
type: SIMPLE_ASSIGN
sink.tube_hot[7].liquidStream.HT[10].m.mu = 0.0008899999999999999
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3940(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3940};
  data->localData[0]->realVars[2951] /* sink.tube_hot[7].liquidStream.HT[10].m.mu variable */ = 0.0008899999999999999;
  TRACE_POP
}

/*
equation index: 3941
type: SIMPLE_ASSIGN
sink.tube_hot[8].liquidStream.m[1].d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3941(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3941};
  data->localData[0]->realVars[3552] /* sink.tube_hot[8].liquidStream.m[1].d variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 3942
type: SIMPLE_ASSIGN
sink.tube_hot[8].liquidStream.m[1].c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3942(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3942};
  data->localData[0]->realVars[3452] /* sink.tube_hot[8].liquidStream.m[1].c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 3943
type: SIMPLE_ASSIGN
sink.tube_hot[8].liquidStream.m[2].d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3943(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3943};
  data->localData[0]->realVars[3553] /* sink.tube_hot[8].liquidStream.m[2].d variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 3944
type: SIMPLE_ASSIGN
sink.tube_hot[8].liquidStream.m[2].c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3944(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3944};
  data->localData[0]->realVars[3453] /* sink.tube_hot[8].liquidStream.m[2].c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 3945
type: SIMPLE_ASSIGN
sink.tube_hot[8].liquidStream.m[3].d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3945(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3945};
  data->localData[0]->realVars[3554] /* sink.tube_hot[8].liquidStream.m[3].d variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 3946
type: SIMPLE_ASSIGN
sink.tube_hot[8].liquidStream.m[3].c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3946(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3946};
  data->localData[0]->realVars[3454] /* sink.tube_hot[8].liquidStream.m[3].c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 3947
type: SIMPLE_ASSIGN
sink.tube_hot[8].liquidStream.m[4].d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3947(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3947};
  data->localData[0]->realVars[3555] /* sink.tube_hot[8].liquidStream.m[4].d variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 3948
type: SIMPLE_ASSIGN
sink.tube_hot[8].liquidStream.m[4].c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3948(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3948};
  data->localData[0]->realVars[3455] /* sink.tube_hot[8].liquidStream.m[4].c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 3949
type: SIMPLE_ASSIGN
sink.tube_hot[8].liquidStream.m[5].d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3949(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3949};
  data->localData[0]->realVars[3556] /* sink.tube_hot[8].liquidStream.m[5].d variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 3950
type: SIMPLE_ASSIGN
sink.tube_hot[8].liquidStream.m[5].c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3950(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3950};
  data->localData[0]->realVars[3456] /* sink.tube_hot[8].liquidStream.m[5].c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 3951
type: SIMPLE_ASSIGN
sink.tube_hot[8].liquidStream.m[6].d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3951(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3951};
  data->localData[0]->realVars[3557] /* sink.tube_hot[8].liquidStream.m[6].d variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 3952
type: SIMPLE_ASSIGN
sink.tube_hot[8].liquidStream.m[6].c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3952(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3952};
  data->localData[0]->realVars[3457] /* sink.tube_hot[8].liquidStream.m[6].c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 3953
type: SIMPLE_ASSIGN
sink.tube_hot[8].liquidStream.m[7].d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3953(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3953};
  data->localData[0]->realVars[3558] /* sink.tube_hot[8].liquidStream.m[7].d variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 3954
type: SIMPLE_ASSIGN
sink.tube_hot[8].liquidStream.m[7].c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3954(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3954};
  data->localData[0]->realVars[3458] /* sink.tube_hot[8].liquidStream.m[7].c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 3955
type: SIMPLE_ASSIGN
sink.tube_hot[8].liquidStream.m[8].d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3955(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3955};
  data->localData[0]->realVars[3559] /* sink.tube_hot[8].liquidStream.m[8].d variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 3956
type: SIMPLE_ASSIGN
sink.tube_hot[8].liquidStream.m[8].c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3956(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3956};
  data->localData[0]->realVars[3459] /* sink.tube_hot[8].liquidStream.m[8].c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 3957
type: SIMPLE_ASSIGN
sink.tube_hot[8].liquidStream.m[9].d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3957(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3957};
  data->localData[0]->realVars[3560] /* sink.tube_hot[8].liquidStream.m[9].d variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 3958
type: SIMPLE_ASSIGN
sink.tube_hot[8].liquidStream.m[9].c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3958(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3958};
  data->localData[0]->realVars[3460] /* sink.tube_hot[8].liquidStream.m[9].c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 3959
type: SIMPLE_ASSIGN
sink.tube_hot[8].liquidStream.m[10].d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3959(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3959};
  data->localData[0]->realVars[3561] /* sink.tube_hot[8].liquidStream.m[10].d variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 3960
type: SIMPLE_ASSIGN
sink.tube_hot[8].liquidStream.m[10].c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3960(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3960};
  data->localData[0]->realVars[3461] /* sink.tube_hot[8].liquidStream.m[10].c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 3961
type: SIMPLE_ASSIGN
sink.tube_hot[8].liquidStream.HT[1].m.d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3961(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3961};
  data->localData[0]->realVars[2652] /* sink.tube_hot[8].liquidStream.HT[1].m.d variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 3962
type: SIMPLE_ASSIGN
sink.tube_hot[8].liquidStream.HT[1].m.c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3962(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3962};
  data->localData[0]->realVars[2552] /* sink.tube_hot[8].liquidStream.HT[1].m.c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 3963
type: SIMPLE_ASSIGN
sink.tube_hot[8].liquidStream.HT[1].m.lambda = 0.55
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3963(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3963};
  data->localData[0]->realVars[2852] /* sink.tube_hot[8].liquidStream.HT[1].m.lambda variable */ = 0.55;
  TRACE_POP
}

/*
equation index: 3964
type: SIMPLE_ASSIGN
sink.tube_hot[8].liquidStream.HT[1].m.mu = 0.0008899999999999999
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3964(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3964};
  data->localData[0]->realVars[2952] /* sink.tube_hot[8].liquidStream.HT[1].m.mu variable */ = 0.0008899999999999999;
  TRACE_POP
}

/*
equation index: 3965
type: SIMPLE_ASSIGN
sink.tube_hot[8].liquidStream.HT[2].m.d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3965(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3965};
  data->localData[0]->realVars[2653] /* sink.tube_hot[8].liquidStream.HT[2].m.d variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 3966
type: SIMPLE_ASSIGN
sink.tube_hot[8].liquidStream.HT[2].m.c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3966(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3966};
  data->localData[0]->realVars[2553] /* sink.tube_hot[8].liquidStream.HT[2].m.c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 3967
type: SIMPLE_ASSIGN
sink.tube_hot[8].liquidStream.HT[2].m.lambda = 0.55
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3967(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3967};
  data->localData[0]->realVars[2853] /* sink.tube_hot[8].liquidStream.HT[2].m.lambda variable */ = 0.55;
  TRACE_POP
}

/*
equation index: 3968
type: SIMPLE_ASSIGN
sink.tube_hot[8].liquidStream.HT[2].m.mu = 0.0008899999999999999
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3968(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3968};
  data->localData[0]->realVars[2953] /* sink.tube_hot[8].liquidStream.HT[2].m.mu variable */ = 0.0008899999999999999;
  TRACE_POP
}

/*
equation index: 3969
type: SIMPLE_ASSIGN
sink.tube_hot[8].liquidStream.HT[3].m.d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3969(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3969};
  data->localData[0]->realVars[2654] /* sink.tube_hot[8].liquidStream.HT[3].m.d variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 3970
type: SIMPLE_ASSIGN
sink.tube_hot[8].liquidStream.HT[3].m.c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3970(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3970};
  data->localData[0]->realVars[2554] /* sink.tube_hot[8].liquidStream.HT[3].m.c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 3971
type: SIMPLE_ASSIGN
sink.tube_hot[8].liquidStream.HT[3].m.lambda = 0.55
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3971(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3971};
  data->localData[0]->realVars[2854] /* sink.tube_hot[8].liquidStream.HT[3].m.lambda variable */ = 0.55;
  TRACE_POP
}

/*
equation index: 3972
type: SIMPLE_ASSIGN
sink.tube_hot[8].liquidStream.HT[3].m.mu = 0.0008899999999999999
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3972(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3972};
  data->localData[0]->realVars[2954] /* sink.tube_hot[8].liquidStream.HT[3].m.mu variable */ = 0.0008899999999999999;
  TRACE_POP
}

/*
equation index: 3973
type: SIMPLE_ASSIGN
sink.tube_hot[8].liquidStream.HT[4].m.d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3973(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3973};
  data->localData[0]->realVars[2655] /* sink.tube_hot[8].liquidStream.HT[4].m.d variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 3974
type: SIMPLE_ASSIGN
sink.tube_hot[8].liquidStream.HT[4].m.c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3974(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3974};
  data->localData[0]->realVars[2555] /* sink.tube_hot[8].liquidStream.HT[4].m.c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 3975
type: SIMPLE_ASSIGN
sink.tube_hot[8].liquidStream.HT[4].m.lambda = 0.55
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3975(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3975};
  data->localData[0]->realVars[2855] /* sink.tube_hot[8].liquidStream.HT[4].m.lambda variable */ = 0.55;
  TRACE_POP
}

/*
equation index: 3976
type: SIMPLE_ASSIGN
sink.tube_hot[8].liquidStream.HT[4].m.mu = 0.0008899999999999999
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3976(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3976};
  data->localData[0]->realVars[2955] /* sink.tube_hot[8].liquidStream.HT[4].m.mu variable */ = 0.0008899999999999999;
  TRACE_POP
}

/*
equation index: 3977
type: SIMPLE_ASSIGN
sink.tube_hot[8].liquidStream.HT[5].m.d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3977(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3977};
  data->localData[0]->realVars[2656] /* sink.tube_hot[8].liquidStream.HT[5].m.d variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 3978
type: SIMPLE_ASSIGN
sink.tube_hot[8].liquidStream.HT[5].m.c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3978(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3978};
  data->localData[0]->realVars[2556] /* sink.tube_hot[8].liquidStream.HT[5].m.c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 3979
type: SIMPLE_ASSIGN
sink.tube_hot[8].liquidStream.HT[5].m.lambda = 0.55
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3979(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3979};
  data->localData[0]->realVars[2856] /* sink.tube_hot[8].liquidStream.HT[5].m.lambda variable */ = 0.55;
  TRACE_POP
}

/*
equation index: 3980
type: SIMPLE_ASSIGN
sink.tube_hot[8].liquidStream.HT[5].m.mu = 0.0008899999999999999
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3980(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3980};
  data->localData[0]->realVars[2956] /* sink.tube_hot[8].liquidStream.HT[5].m.mu variable */ = 0.0008899999999999999;
  TRACE_POP
}

/*
equation index: 3981
type: SIMPLE_ASSIGN
sink.tube_hot[8].liquidStream.HT[6].m.d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3981(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3981};
  data->localData[0]->realVars[2657] /* sink.tube_hot[8].liquidStream.HT[6].m.d variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 3982
type: SIMPLE_ASSIGN
sink.tube_hot[8].liquidStream.HT[6].m.c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3982(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3982};
  data->localData[0]->realVars[2557] /* sink.tube_hot[8].liquidStream.HT[6].m.c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 3983
type: SIMPLE_ASSIGN
sink.tube_hot[8].liquidStream.HT[6].m.lambda = 0.55
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3983(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3983};
  data->localData[0]->realVars[2857] /* sink.tube_hot[8].liquidStream.HT[6].m.lambda variable */ = 0.55;
  TRACE_POP
}

/*
equation index: 3984
type: SIMPLE_ASSIGN
sink.tube_hot[8].liquidStream.HT[6].m.mu = 0.0008899999999999999
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3984(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3984};
  data->localData[0]->realVars[2957] /* sink.tube_hot[8].liquidStream.HT[6].m.mu variable */ = 0.0008899999999999999;
  TRACE_POP
}

/*
equation index: 3985
type: SIMPLE_ASSIGN
sink.tube_hot[8].liquidStream.HT[7].m.d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3985(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3985};
  data->localData[0]->realVars[2658] /* sink.tube_hot[8].liquidStream.HT[7].m.d variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 3986
type: SIMPLE_ASSIGN
sink.tube_hot[8].liquidStream.HT[7].m.c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3986(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3986};
  data->localData[0]->realVars[2558] /* sink.tube_hot[8].liquidStream.HT[7].m.c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 3987
type: SIMPLE_ASSIGN
sink.tube_hot[8].liquidStream.HT[7].m.lambda = 0.55
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3987(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3987};
  data->localData[0]->realVars[2858] /* sink.tube_hot[8].liquidStream.HT[7].m.lambda variable */ = 0.55;
  TRACE_POP
}

/*
equation index: 3988
type: SIMPLE_ASSIGN
sink.tube_hot[8].liquidStream.HT[7].m.mu = 0.0008899999999999999
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3988(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3988};
  data->localData[0]->realVars[2958] /* sink.tube_hot[8].liquidStream.HT[7].m.mu variable */ = 0.0008899999999999999;
  TRACE_POP
}

/*
equation index: 3989
type: SIMPLE_ASSIGN
sink.tube_hot[8].liquidStream.HT[8].m.d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3989(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3989};
  data->localData[0]->realVars[2659] /* sink.tube_hot[8].liquidStream.HT[8].m.d variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 3990
type: SIMPLE_ASSIGN
sink.tube_hot[8].liquidStream.HT[8].m.c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3990(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3990};
  data->localData[0]->realVars[2559] /* sink.tube_hot[8].liquidStream.HT[8].m.c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 3991
type: SIMPLE_ASSIGN
sink.tube_hot[8].liquidStream.HT[8].m.lambda = 0.55
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3991(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3991};
  data->localData[0]->realVars[2859] /* sink.tube_hot[8].liquidStream.HT[8].m.lambda variable */ = 0.55;
  TRACE_POP
}

/*
equation index: 3992
type: SIMPLE_ASSIGN
sink.tube_hot[8].liquidStream.HT[8].m.mu = 0.0008899999999999999
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3992(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3992};
  data->localData[0]->realVars[2959] /* sink.tube_hot[8].liquidStream.HT[8].m.mu variable */ = 0.0008899999999999999;
  TRACE_POP
}

/*
equation index: 3993
type: SIMPLE_ASSIGN
sink.tube_hot[8].liquidStream.HT[9].m.d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3993(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3993};
  data->localData[0]->realVars[2660] /* sink.tube_hot[8].liquidStream.HT[9].m.d variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 3994
type: SIMPLE_ASSIGN
sink.tube_hot[8].liquidStream.HT[9].m.c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3994(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3994};
  data->localData[0]->realVars[2560] /* sink.tube_hot[8].liquidStream.HT[9].m.c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 3995
type: SIMPLE_ASSIGN
sink.tube_hot[8].liquidStream.HT[9].m.lambda = 0.55
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3995(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3995};
  data->localData[0]->realVars[2860] /* sink.tube_hot[8].liquidStream.HT[9].m.lambda variable */ = 0.55;
  TRACE_POP
}

/*
equation index: 3996
type: SIMPLE_ASSIGN
sink.tube_hot[8].liquidStream.HT[9].m.mu = 0.0008899999999999999
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3996(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3996};
  data->localData[0]->realVars[2960] /* sink.tube_hot[8].liquidStream.HT[9].m.mu variable */ = 0.0008899999999999999;
  TRACE_POP
}

/*
equation index: 3997
type: SIMPLE_ASSIGN
sink.tube_hot[8].liquidStream.HT[10].m.d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3997(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3997};
  data->localData[0]->realVars[2661] /* sink.tube_hot[8].liquidStream.HT[10].m.d variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 3998
type: SIMPLE_ASSIGN
sink.tube_hot[8].liquidStream.HT[10].m.c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3998(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3998};
  data->localData[0]->realVars[2561] /* sink.tube_hot[8].liquidStream.HT[10].m.c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 3999
type: SIMPLE_ASSIGN
sink.tube_hot[8].liquidStream.HT[10].m.lambda = 0.55
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3999(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3999};
  data->localData[0]->realVars[2861] /* sink.tube_hot[8].liquidStream.HT[10].m.lambda variable */ = 0.55;
  TRACE_POP
}

/*
equation index: 4000
type: SIMPLE_ASSIGN
sink.tube_hot[8].liquidStream.HT[10].m.mu = 0.0008899999999999999
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4000(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4000};
  data->localData[0]->realVars[2961] /* sink.tube_hot[8].liquidStream.HT[10].m.mu variable */ = 0.0008899999999999999;
  TRACE_POP
}

/*
equation index: 4001
type: SIMPLE_ASSIGN
sink.tube_hot[9].liquidStream.m[1].d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4001(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4001};
  data->localData[0]->realVars[3562] /* sink.tube_hot[9].liquidStream.m[1].d variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 4002
type: SIMPLE_ASSIGN
sink.tube_hot[9].liquidStream.m[1].c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4002(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4002};
  data->localData[0]->realVars[3462] /* sink.tube_hot[9].liquidStream.m[1].c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 4003
type: SIMPLE_ASSIGN
sink.tube_hot[9].liquidStream.m[2].d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4003(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4003};
  data->localData[0]->realVars[3563] /* sink.tube_hot[9].liquidStream.m[2].d variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 4004
type: SIMPLE_ASSIGN
sink.tube_hot[9].liquidStream.m[2].c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4004(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4004};
  data->localData[0]->realVars[3463] /* sink.tube_hot[9].liquidStream.m[2].c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 4005
type: SIMPLE_ASSIGN
sink.tube_hot[9].liquidStream.m[3].d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4005(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4005};
  data->localData[0]->realVars[3564] /* sink.tube_hot[9].liquidStream.m[3].d variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 4006
type: SIMPLE_ASSIGN
sink.tube_hot[9].liquidStream.m[3].c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4006(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4006};
  data->localData[0]->realVars[3464] /* sink.tube_hot[9].liquidStream.m[3].c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 4007
type: SIMPLE_ASSIGN
sink.tube_hot[9].liquidStream.m[4].d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4007(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4007};
  data->localData[0]->realVars[3565] /* sink.tube_hot[9].liquidStream.m[4].d variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 4008
type: SIMPLE_ASSIGN
sink.tube_hot[9].liquidStream.m[4].c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4008(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4008};
  data->localData[0]->realVars[3465] /* sink.tube_hot[9].liquidStream.m[4].c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 4009
type: SIMPLE_ASSIGN
sink.tube_hot[9].liquidStream.m[5].d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4009(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4009};
  data->localData[0]->realVars[3566] /* sink.tube_hot[9].liquidStream.m[5].d variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 4010
type: SIMPLE_ASSIGN
sink.tube_hot[9].liquidStream.m[5].c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4010(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4010};
  data->localData[0]->realVars[3466] /* sink.tube_hot[9].liquidStream.m[5].c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 4011
type: SIMPLE_ASSIGN
sink.tube_hot[9].liquidStream.m[6].d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4011(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4011};
  data->localData[0]->realVars[3567] /* sink.tube_hot[9].liquidStream.m[6].d variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 4012
type: SIMPLE_ASSIGN
sink.tube_hot[9].liquidStream.m[6].c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4012(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4012};
  data->localData[0]->realVars[3467] /* sink.tube_hot[9].liquidStream.m[6].c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 4013
type: SIMPLE_ASSIGN
sink.tube_hot[9].liquidStream.m[7].d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4013(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4013};
  data->localData[0]->realVars[3568] /* sink.tube_hot[9].liquidStream.m[7].d variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 4014
type: SIMPLE_ASSIGN
sink.tube_hot[9].liquidStream.m[7].c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4014(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4014};
  data->localData[0]->realVars[3468] /* sink.tube_hot[9].liquidStream.m[7].c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 4015
type: SIMPLE_ASSIGN
sink.tube_hot[9].liquidStream.m[8].d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4015(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4015};
  data->localData[0]->realVars[3569] /* sink.tube_hot[9].liquidStream.m[8].d variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 4016
type: SIMPLE_ASSIGN
sink.tube_hot[9].liquidStream.m[8].c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4016(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4016};
  data->localData[0]->realVars[3469] /* sink.tube_hot[9].liquidStream.m[8].c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 4017
type: SIMPLE_ASSIGN
sink.tube_hot[9].liquidStream.m[9].d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4017(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4017};
  data->localData[0]->realVars[3570] /* sink.tube_hot[9].liquidStream.m[9].d variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 4018
type: SIMPLE_ASSIGN
sink.tube_hot[9].liquidStream.m[9].c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4018(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4018};
  data->localData[0]->realVars[3470] /* sink.tube_hot[9].liquidStream.m[9].c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 4019
type: SIMPLE_ASSIGN
sink.tube_hot[9].liquidStream.m[10].d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4019(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4019};
  data->localData[0]->realVars[3571] /* sink.tube_hot[9].liquidStream.m[10].d variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 4020
type: SIMPLE_ASSIGN
sink.tube_hot[9].liquidStream.m[10].c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4020(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4020};
  data->localData[0]->realVars[3471] /* sink.tube_hot[9].liquidStream.m[10].c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 4021
type: SIMPLE_ASSIGN
sink.tube_hot[9].liquidStream.HT[1].m.d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4021(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4021};
  data->localData[0]->realVars[2662] /* sink.tube_hot[9].liquidStream.HT[1].m.d variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 4022
type: SIMPLE_ASSIGN
sink.tube_hot[9].liquidStream.HT[1].m.c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4022(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4022};
  data->localData[0]->realVars[2562] /* sink.tube_hot[9].liquidStream.HT[1].m.c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 4023
type: SIMPLE_ASSIGN
sink.tube_hot[9].liquidStream.HT[1].m.lambda = 0.55
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4023(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4023};
  data->localData[0]->realVars[2862] /* sink.tube_hot[9].liquidStream.HT[1].m.lambda variable */ = 0.55;
  TRACE_POP
}

/*
equation index: 4024
type: SIMPLE_ASSIGN
sink.tube_hot[9].liquidStream.HT[1].m.mu = 0.0008899999999999999
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4024(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4024};
  data->localData[0]->realVars[2962] /* sink.tube_hot[9].liquidStream.HT[1].m.mu variable */ = 0.0008899999999999999;
  TRACE_POP
}

/*
equation index: 4025
type: SIMPLE_ASSIGN
sink.tube_hot[9].liquidStream.HT[2].m.d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4025(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4025};
  data->localData[0]->realVars[2663] /* sink.tube_hot[9].liquidStream.HT[2].m.d variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 4026
type: SIMPLE_ASSIGN
sink.tube_hot[9].liquidStream.HT[2].m.c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4026(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4026};
  data->localData[0]->realVars[2563] /* sink.tube_hot[9].liquidStream.HT[2].m.c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 4027
type: SIMPLE_ASSIGN
sink.tube_hot[9].liquidStream.HT[2].m.lambda = 0.55
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4027(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4027};
  data->localData[0]->realVars[2863] /* sink.tube_hot[9].liquidStream.HT[2].m.lambda variable */ = 0.55;
  TRACE_POP
}

/*
equation index: 4028
type: SIMPLE_ASSIGN
sink.tube_hot[9].liquidStream.HT[2].m.mu = 0.0008899999999999999
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4028(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4028};
  data->localData[0]->realVars[2963] /* sink.tube_hot[9].liquidStream.HT[2].m.mu variable */ = 0.0008899999999999999;
  TRACE_POP
}

/*
equation index: 4029
type: SIMPLE_ASSIGN
sink.tube_hot[9].liquidStream.HT[3].m.d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4029(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4029};
  data->localData[0]->realVars[2664] /* sink.tube_hot[9].liquidStream.HT[3].m.d variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 4030
type: SIMPLE_ASSIGN
sink.tube_hot[9].liquidStream.HT[3].m.c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4030(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4030};
  data->localData[0]->realVars[2564] /* sink.tube_hot[9].liquidStream.HT[3].m.c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 4031
type: SIMPLE_ASSIGN
sink.tube_hot[9].liquidStream.HT[3].m.lambda = 0.55
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4031(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4031};
  data->localData[0]->realVars[2864] /* sink.tube_hot[9].liquidStream.HT[3].m.lambda variable */ = 0.55;
  TRACE_POP
}

/*
equation index: 4032
type: SIMPLE_ASSIGN
sink.tube_hot[9].liquidStream.HT[3].m.mu = 0.0008899999999999999
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4032(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4032};
  data->localData[0]->realVars[2964] /* sink.tube_hot[9].liquidStream.HT[3].m.mu variable */ = 0.0008899999999999999;
  TRACE_POP
}

/*
equation index: 4033
type: SIMPLE_ASSIGN
sink.tube_hot[9].liquidStream.HT[4].m.d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4033(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4033};
  data->localData[0]->realVars[2665] /* sink.tube_hot[9].liquidStream.HT[4].m.d variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 4034
type: SIMPLE_ASSIGN
sink.tube_hot[9].liquidStream.HT[4].m.c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4034(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4034};
  data->localData[0]->realVars[2565] /* sink.tube_hot[9].liquidStream.HT[4].m.c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 4035
type: SIMPLE_ASSIGN
sink.tube_hot[9].liquidStream.HT[4].m.lambda = 0.55
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4035(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4035};
  data->localData[0]->realVars[2865] /* sink.tube_hot[9].liquidStream.HT[4].m.lambda variable */ = 0.55;
  TRACE_POP
}

/*
equation index: 4036
type: SIMPLE_ASSIGN
sink.tube_hot[9].liquidStream.HT[4].m.mu = 0.0008899999999999999
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4036(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4036};
  data->localData[0]->realVars[2965] /* sink.tube_hot[9].liquidStream.HT[4].m.mu variable */ = 0.0008899999999999999;
  TRACE_POP
}

/*
equation index: 4037
type: SIMPLE_ASSIGN
sink.tube_hot[9].liquidStream.HT[5].m.d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4037(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4037};
  data->localData[0]->realVars[2666] /* sink.tube_hot[9].liquidStream.HT[5].m.d variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 4038
type: SIMPLE_ASSIGN
sink.tube_hot[9].liquidStream.HT[5].m.c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4038(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4038};
  data->localData[0]->realVars[2566] /* sink.tube_hot[9].liquidStream.HT[5].m.c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 4039
type: SIMPLE_ASSIGN
sink.tube_hot[9].liquidStream.HT[5].m.lambda = 0.55
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4039(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4039};
  data->localData[0]->realVars[2866] /* sink.tube_hot[9].liquidStream.HT[5].m.lambda variable */ = 0.55;
  TRACE_POP
}

/*
equation index: 4040
type: SIMPLE_ASSIGN
sink.tube_hot[9].liquidStream.HT[5].m.mu = 0.0008899999999999999
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4040(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4040};
  data->localData[0]->realVars[2966] /* sink.tube_hot[9].liquidStream.HT[5].m.mu variable */ = 0.0008899999999999999;
  TRACE_POP
}

/*
equation index: 4041
type: SIMPLE_ASSIGN
sink.tube_hot[9].liquidStream.HT[6].m.d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4041(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4041};
  data->localData[0]->realVars[2667] /* sink.tube_hot[9].liquidStream.HT[6].m.d variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 4042
type: SIMPLE_ASSIGN
sink.tube_hot[9].liquidStream.HT[6].m.c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4042(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4042};
  data->localData[0]->realVars[2567] /* sink.tube_hot[9].liquidStream.HT[6].m.c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 4043
type: SIMPLE_ASSIGN
sink.tube_hot[9].liquidStream.HT[6].m.lambda = 0.55
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4043(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4043};
  data->localData[0]->realVars[2867] /* sink.tube_hot[9].liquidStream.HT[6].m.lambda variable */ = 0.55;
  TRACE_POP
}

/*
equation index: 4044
type: SIMPLE_ASSIGN
sink.tube_hot[9].liquidStream.HT[6].m.mu = 0.0008899999999999999
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4044(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4044};
  data->localData[0]->realVars[2967] /* sink.tube_hot[9].liquidStream.HT[6].m.mu variable */ = 0.0008899999999999999;
  TRACE_POP
}

/*
equation index: 4045
type: SIMPLE_ASSIGN
sink.tube_hot[9].liquidStream.HT[7].m.d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4045(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4045};
  data->localData[0]->realVars[2668] /* sink.tube_hot[9].liquidStream.HT[7].m.d variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 4046
type: SIMPLE_ASSIGN
sink.tube_hot[9].liquidStream.HT[7].m.c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4046(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4046};
  data->localData[0]->realVars[2568] /* sink.tube_hot[9].liquidStream.HT[7].m.c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 4047
type: SIMPLE_ASSIGN
sink.tube_hot[9].liquidStream.HT[7].m.lambda = 0.55
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4047(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4047};
  data->localData[0]->realVars[2868] /* sink.tube_hot[9].liquidStream.HT[7].m.lambda variable */ = 0.55;
  TRACE_POP
}

/*
equation index: 4048
type: SIMPLE_ASSIGN
sink.tube_hot[9].liquidStream.HT[7].m.mu = 0.0008899999999999999
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4048(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4048};
  data->localData[0]->realVars[2968] /* sink.tube_hot[9].liquidStream.HT[7].m.mu variable */ = 0.0008899999999999999;
  TRACE_POP
}

/*
equation index: 4049
type: SIMPLE_ASSIGN
sink.tube_hot[9].liquidStream.HT[8].m.d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4049(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4049};
  data->localData[0]->realVars[2669] /* sink.tube_hot[9].liquidStream.HT[8].m.d variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 4050
type: SIMPLE_ASSIGN
sink.tube_hot[9].liquidStream.HT[8].m.c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4050(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4050};
  data->localData[0]->realVars[2569] /* sink.tube_hot[9].liquidStream.HT[8].m.c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 4051
type: SIMPLE_ASSIGN
sink.tube_hot[9].liquidStream.HT[8].m.lambda = 0.55
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4051(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4051};
  data->localData[0]->realVars[2869] /* sink.tube_hot[9].liquidStream.HT[8].m.lambda variable */ = 0.55;
  TRACE_POP
}

/*
equation index: 4052
type: SIMPLE_ASSIGN
sink.tube_hot[9].liquidStream.HT[8].m.mu = 0.0008899999999999999
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4052(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4052};
  data->localData[0]->realVars[2969] /* sink.tube_hot[9].liquidStream.HT[8].m.mu variable */ = 0.0008899999999999999;
  TRACE_POP
}

/*
equation index: 4053
type: SIMPLE_ASSIGN
sink.tube_hot[9].liquidStream.HT[9].m.d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4053(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4053};
  data->localData[0]->realVars[2670] /* sink.tube_hot[9].liquidStream.HT[9].m.d variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 4054
type: SIMPLE_ASSIGN
sink.tube_hot[9].liquidStream.HT[9].m.c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4054(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4054};
  data->localData[0]->realVars[2570] /* sink.tube_hot[9].liquidStream.HT[9].m.c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 4055
type: SIMPLE_ASSIGN
sink.tube_hot[9].liquidStream.HT[9].m.lambda = 0.55
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4055(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4055};
  data->localData[0]->realVars[2870] /* sink.tube_hot[9].liquidStream.HT[9].m.lambda variable */ = 0.55;
  TRACE_POP
}

/*
equation index: 4056
type: SIMPLE_ASSIGN
sink.tube_hot[9].liquidStream.HT[9].m.mu = 0.0008899999999999999
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4056(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4056};
  data->localData[0]->realVars[2970] /* sink.tube_hot[9].liquidStream.HT[9].m.mu variable */ = 0.0008899999999999999;
  TRACE_POP
}

/*
equation index: 4057
type: SIMPLE_ASSIGN
sink.tube_hot[9].liquidStream.HT[10].m.d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4057(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4057};
  data->localData[0]->realVars[2671] /* sink.tube_hot[9].liquidStream.HT[10].m.d variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 4058
type: SIMPLE_ASSIGN
sink.tube_hot[9].liquidStream.HT[10].m.c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4058(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4058};
  data->localData[0]->realVars[2571] /* sink.tube_hot[9].liquidStream.HT[10].m.c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 4059
type: SIMPLE_ASSIGN
sink.tube_hot[9].liquidStream.HT[10].m.lambda = 0.55
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4059(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4059};
  data->localData[0]->realVars[2871] /* sink.tube_hot[9].liquidStream.HT[10].m.lambda variable */ = 0.55;
  TRACE_POP
}

/*
equation index: 4060
type: SIMPLE_ASSIGN
sink.tube_hot[9].liquidStream.HT[10].m.mu = 0.0008899999999999999
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4060(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4060};
  data->localData[0]->realVars[2971] /* sink.tube_hot[9].liquidStream.HT[10].m.mu variable */ = 0.0008899999999999999;
  TRACE_POP
}

/*
equation index: 4061
type: SIMPLE_ASSIGN
sink.tube_hot[10].liquidStream.m[1].d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4061(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4061};
  data->localData[0]->realVars[3572] /* sink.tube_hot[10].liquidStream.m[1].d variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 4062
type: SIMPLE_ASSIGN
sink.tube_hot[10].liquidStream.m[1].c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4062(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4062};
  data->localData[0]->realVars[3472] /* sink.tube_hot[10].liquidStream.m[1].c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 4063
type: SIMPLE_ASSIGN
sink.tube_hot[10].liquidStream.m[2].d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4063(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4063};
  data->localData[0]->realVars[3573] /* sink.tube_hot[10].liquidStream.m[2].d variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 4064
type: SIMPLE_ASSIGN
sink.tube_hot[10].liquidStream.m[2].c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4064(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4064};
  data->localData[0]->realVars[3473] /* sink.tube_hot[10].liquidStream.m[2].c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 4065
type: SIMPLE_ASSIGN
sink.tube_hot[10].liquidStream.m[3].d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4065(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4065};
  data->localData[0]->realVars[3574] /* sink.tube_hot[10].liquidStream.m[3].d variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 4066
type: SIMPLE_ASSIGN
sink.tube_hot[10].liquidStream.m[3].c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4066(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4066};
  data->localData[0]->realVars[3474] /* sink.tube_hot[10].liquidStream.m[3].c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 4067
type: SIMPLE_ASSIGN
sink.tube_hot[10].liquidStream.m[4].d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4067(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4067};
  data->localData[0]->realVars[3575] /* sink.tube_hot[10].liquidStream.m[4].d variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 4068
type: SIMPLE_ASSIGN
sink.tube_hot[10].liquidStream.m[4].c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4068(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4068};
  data->localData[0]->realVars[3475] /* sink.tube_hot[10].liquidStream.m[4].c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 4069
type: SIMPLE_ASSIGN
sink.tube_hot[10].liquidStream.m[5].d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4069(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4069};
  data->localData[0]->realVars[3576] /* sink.tube_hot[10].liquidStream.m[5].d variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 4070
type: SIMPLE_ASSIGN
sink.tube_hot[10].liquidStream.m[5].c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4070(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4070};
  data->localData[0]->realVars[3476] /* sink.tube_hot[10].liquidStream.m[5].c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 4071
type: SIMPLE_ASSIGN
sink.tube_hot[10].liquidStream.m[6].d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4071(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4071};
  data->localData[0]->realVars[3577] /* sink.tube_hot[10].liquidStream.m[6].d variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 4072
type: SIMPLE_ASSIGN
sink.tube_hot[10].liquidStream.m[6].c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4072(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4072};
  data->localData[0]->realVars[3477] /* sink.tube_hot[10].liquidStream.m[6].c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 4073
type: SIMPLE_ASSIGN
sink.tube_hot[10].liquidStream.m[7].d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4073(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4073};
  data->localData[0]->realVars[3578] /* sink.tube_hot[10].liquidStream.m[7].d variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 4074
type: SIMPLE_ASSIGN
sink.tube_hot[10].liquidStream.m[7].c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4074(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4074};
  data->localData[0]->realVars[3478] /* sink.tube_hot[10].liquidStream.m[7].c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 4075
type: SIMPLE_ASSIGN
sink.tube_hot[10].liquidStream.m[8].d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4075(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4075};
  data->localData[0]->realVars[3579] /* sink.tube_hot[10].liquidStream.m[8].d variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 4076
type: SIMPLE_ASSIGN
sink.tube_hot[10].liquidStream.m[8].c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4076(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4076};
  data->localData[0]->realVars[3479] /* sink.tube_hot[10].liquidStream.m[8].c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 4077
type: SIMPLE_ASSIGN
sink.tube_hot[10].liquidStream.m[9].d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4077(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4077};
  data->localData[0]->realVars[3580] /* sink.tube_hot[10].liquidStream.m[9].d variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 4078
type: SIMPLE_ASSIGN
sink.tube_hot[10].liquidStream.m[9].c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4078(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4078};
  data->localData[0]->realVars[3480] /* sink.tube_hot[10].liquidStream.m[9].c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 4079
type: SIMPLE_ASSIGN
sink.tube_hot[10].liquidStream.m[10].d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4079(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4079};
  data->localData[0]->realVars[3581] /* sink.tube_hot[10].liquidStream.m[10].d variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 4080
type: SIMPLE_ASSIGN
sink.tube_hot[10].liquidStream.m[10].c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4080(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4080};
  data->localData[0]->realVars[3481] /* sink.tube_hot[10].liquidStream.m[10].c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 4081
type: SIMPLE_ASSIGN
sink.tube_hot[10].liquidStream.HT[1].m.d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4081(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4081};
  data->localData[0]->realVars[2672] /* sink.tube_hot[10].liquidStream.HT[1].m.d variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 4082
type: SIMPLE_ASSIGN
sink.tube_hot[10].liquidStream.HT[1].m.c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4082(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4082};
  data->localData[0]->realVars[2572] /* sink.tube_hot[10].liquidStream.HT[1].m.c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 4083
type: SIMPLE_ASSIGN
sink.tube_hot[10].liquidStream.HT[1].m.lambda = 0.55
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4083(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4083};
  data->localData[0]->realVars[2872] /* sink.tube_hot[10].liquidStream.HT[1].m.lambda variable */ = 0.55;
  TRACE_POP
}

/*
equation index: 4084
type: SIMPLE_ASSIGN
sink.tube_hot[10].liquidStream.HT[1].m.mu = 0.0008899999999999999
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4084(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4084};
  data->localData[0]->realVars[2972] /* sink.tube_hot[10].liquidStream.HT[1].m.mu variable */ = 0.0008899999999999999;
  TRACE_POP
}

/*
equation index: 4085
type: SIMPLE_ASSIGN
sink.tube_hot[10].liquidStream.HT[2].m.d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4085(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4085};
  data->localData[0]->realVars[2673] /* sink.tube_hot[10].liquidStream.HT[2].m.d variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 4086
type: SIMPLE_ASSIGN
sink.tube_hot[10].liquidStream.HT[2].m.c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4086(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4086};
  data->localData[0]->realVars[2573] /* sink.tube_hot[10].liquidStream.HT[2].m.c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 4087
type: SIMPLE_ASSIGN
sink.tube_hot[10].liquidStream.HT[2].m.lambda = 0.55
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4087(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4087};
  data->localData[0]->realVars[2873] /* sink.tube_hot[10].liquidStream.HT[2].m.lambda variable */ = 0.55;
  TRACE_POP
}

/*
equation index: 4088
type: SIMPLE_ASSIGN
sink.tube_hot[10].liquidStream.HT[2].m.mu = 0.0008899999999999999
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4088(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4088};
  data->localData[0]->realVars[2973] /* sink.tube_hot[10].liquidStream.HT[2].m.mu variable */ = 0.0008899999999999999;
  TRACE_POP
}

/*
equation index: 4089
type: SIMPLE_ASSIGN
sink.tube_hot[10].liquidStream.HT[3].m.d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4089(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4089};
  data->localData[0]->realVars[2674] /* sink.tube_hot[10].liquidStream.HT[3].m.d variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 4090
type: SIMPLE_ASSIGN
sink.tube_hot[10].liquidStream.HT[3].m.c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4090(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4090};
  data->localData[0]->realVars[2574] /* sink.tube_hot[10].liquidStream.HT[3].m.c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 4091
type: SIMPLE_ASSIGN
sink.tube_hot[10].liquidStream.HT[3].m.lambda = 0.55
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4091(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4091};
  data->localData[0]->realVars[2874] /* sink.tube_hot[10].liquidStream.HT[3].m.lambda variable */ = 0.55;
  TRACE_POP
}

/*
equation index: 4092
type: SIMPLE_ASSIGN
sink.tube_hot[10].liquidStream.HT[3].m.mu = 0.0008899999999999999
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4092(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4092};
  data->localData[0]->realVars[2974] /* sink.tube_hot[10].liquidStream.HT[3].m.mu variable */ = 0.0008899999999999999;
  TRACE_POP
}

/*
equation index: 4093
type: SIMPLE_ASSIGN
sink.tube_hot[10].liquidStream.HT[4].m.d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4093(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4093};
  data->localData[0]->realVars[2675] /* sink.tube_hot[10].liquidStream.HT[4].m.d variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 4094
type: SIMPLE_ASSIGN
sink.tube_hot[10].liquidStream.HT[4].m.c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4094(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4094};
  data->localData[0]->realVars[2575] /* sink.tube_hot[10].liquidStream.HT[4].m.c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 4095
type: SIMPLE_ASSIGN
sink.tube_hot[10].liquidStream.HT[4].m.lambda = 0.55
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4095(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4095};
  data->localData[0]->realVars[2875] /* sink.tube_hot[10].liquidStream.HT[4].m.lambda variable */ = 0.55;
  TRACE_POP
}

/*
equation index: 4096
type: SIMPLE_ASSIGN
sink.tube_hot[10].liquidStream.HT[4].m.mu = 0.0008899999999999999
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4096(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4096};
  data->localData[0]->realVars[2975] /* sink.tube_hot[10].liquidStream.HT[4].m.mu variable */ = 0.0008899999999999999;
  TRACE_POP
}

/*
equation index: 4097
type: SIMPLE_ASSIGN
sink.tube_hot[10].liquidStream.HT[5].m.d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4097(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4097};
  data->localData[0]->realVars[2676] /* sink.tube_hot[10].liquidStream.HT[5].m.d variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 4098
type: SIMPLE_ASSIGN
sink.tube_hot[10].liquidStream.HT[5].m.c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4098(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4098};
  data->localData[0]->realVars[2576] /* sink.tube_hot[10].liquidStream.HT[5].m.c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 4099
type: SIMPLE_ASSIGN
sink.tube_hot[10].liquidStream.HT[5].m.lambda = 0.55
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4099(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4099};
  data->localData[0]->realVars[2876] /* sink.tube_hot[10].liquidStream.HT[5].m.lambda variable */ = 0.55;
  TRACE_POP
}

/*
equation index: 4100
type: SIMPLE_ASSIGN
sink.tube_hot[10].liquidStream.HT[5].m.mu = 0.0008899999999999999
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4100(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4100};
  data->localData[0]->realVars[2976] /* sink.tube_hot[10].liquidStream.HT[5].m.mu variable */ = 0.0008899999999999999;
  TRACE_POP
}

/*
equation index: 4101
type: SIMPLE_ASSIGN
sink.tube_hot[10].liquidStream.HT[6].m.d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4101(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4101};
  data->localData[0]->realVars[2677] /* sink.tube_hot[10].liquidStream.HT[6].m.d variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 4102
type: SIMPLE_ASSIGN
sink.tube_hot[10].liquidStream.HT[6].m.c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4102(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4102};
  data->localData[0]->realVars[2577] /* sink.tube_hot[10].liquidStream.HT[6].m.c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 4103
type: SIMPLE_ASSIGN
sink.tube_hot[10].liquidStream.HT[6].m.lambda = 0.55
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4103(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4103};
  data->localData[0]->realVars[2877] /* sink.tube_hot[10].liquidStream.HT[6].m.lambda variable */ = 0.55;
  TRACE_POP
}

/*
equation index: 4104
type: SIMPLE_ASSIGN
sink.tube_hot[10].liquidStream.HT[6].m.mu = 0.0008899999999999999
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4104(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4104};
  data->localData[0]->realVars[2977] /* sink.tube_hot[10].liquidStream.HT[6].m.mu variable */ = 0.0008899999999999999;
  TRACE_POP
}

/*
equation index: 4105
type: SIMPLE_ASSIGN
sink.tube_hot[10].liquidStream.HT[7].m.d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4105(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4105};
  data->localData[0]->realVars[2678] /* sink.tube_hot[10].liquidStream.HT[7].m.d variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 4106
type: SIMPLE_ASSIGN
sink.tube_hot[10].liquidStream.HT[7].m.c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4106(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4106};
  data->localData[0]->realVars[2578] /* sink.tube_hot[10].liquidStream.HT[7].m.c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 4107
type: SIMPLE_ASSIGN
sink.tube_hot[10].liquidStream.HT[7].m.lambda = 0.55
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4107(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4107};
  data->localData[0]->realVars[2878] /* sink.tube_hot[10].liquidStream.HT[7].m.lambda variable */ = 0.55;
  TRACE_POP
}

/*
equation index: 4108
type: SIMPLE_ASSIGN
sink.tube_hot[10].liquidStream.HT[7].m.mu = 0.0008899999999999999
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4108(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4108};
  data->localData[0]->realVars[2978] /* sink.tube_hot[10].liquidStream.HT[7].m.mu variable */ = 0.0008899999999999999;
  TRACE_POP
}

/*
equation index: 4109
type: SIMPLE_ASSIGN
sink.tube_hot[10].liquidStream.HT[8].m.d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4109(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4109};
  data->localData[0]->realVars[2679] /* sink.tube_hot[10].liquidStream.HT[8].m.d variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 4110
type: SIMPLE_ASSIGN
sink.tube_hot[10].liquidStream.HT[8].m.c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4110(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4110};
  data->localData[0]->realVars[2579] /* sink.tube_hot[10].liquidStream.HT[8].m.c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 4111
type: SIMPLE_ASSIGN
sink.tube_hot[10].liquidStream.HT[8].m.lambda = 0.55
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4111(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4111};
  data->localData[0]->realVars[2879] /* sink.tube_hot[10].liquidStream.HT[8].m.lambda variable */ = 0.55;
  TRACE_POP
}

/*
equation index: 4112
type: SIMPLE_ASSIGN
sink.tube_hot[10].liquidStream.HT[8].m.mu = 0.0008899999999999999
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4112(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4112};
  data->localData[0]->realVars[2979] /* sink.tube_hot[10].liquidStream.HT[8].m.mu variable */ = 0.0008899999999999999;
  TRACE_POP
}

/*
equation index: 4113
type: SIMPLE_ASSIGN
sink.tube_hot[10].liquidStream.HT[9].m.d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4113(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4113};
  data->localData[0]->realVars[2680] /* sink.tube_hot[10].liquidStream.HT[9].m.d variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 4114
type: SIMPLE_ASSIGN
sink.tube_hot[10].liquidStream.HT[9].m.c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4114(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4114};
  data->localData[0]->realVars[2580] /* sink.tube_hot[10].liquidStream.HT[9].m.c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 4115
type: SIMPLE_ASSIGN
sink.tube_hot[10].liquidStream.HT[9].m.lambda = 0.55
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4115(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4115};
  data->localData[0]->realVars[2880] /* sink.tube_hot[10].liquidStream.HT[9].m.lambda variable */ = 0.55;
  TRACE_POP
}

/*
equation index: 4116
type: SIMPLE_ASSIGN
sink.tube_hot[10].liquidStream.HT[9].m.mu = 0.0008899999999999999
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4116(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4116};
  data->localData[0]->realVars[2980] /* sink.tube_hot[10].liquidStream.HT[9].m.mu variable */ = 0.0008899999999999999;
  TRACE_POP
}

/*
equation index: 4117
type: SIMPLE_ASSIGN
sink.tube_hot[10].liquidStream.HT[10].m.d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4117(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4117};
  data->localData[0]->realVars[2681] /* sink.tube_hot[10].liquidStream.HT[10].m.d variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 4118
type: SIMPLE_ASSIGN
sink.tube_hot[10].liquidStream.HT[10].m.c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4118(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4118};
  data->localData[0]->realVars[2581] /* sink.tube_hot[10].liquidStream.HT[10].m.c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 4119
type: SIMPLE_ASSIGN
sink.tube_hot[10].liquidStream.HT[10].m.lambda = 0.55
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4119(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4119};
  data->localData[0]->realVars[2881] /* sink.tube_hot[10].liquidStream.HT[10].m.lambda variable */ = 0.55;
  TRACE_POP
}

/*
equation index: 4120
type: SIMPLE_ASSIGN
sink.tube_hot[10].liquidStream.HT[10].m.mu = 0.0008899999999999999
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4120(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4120};
  data->localData[0]->realVars[2981] /* sink.tube_hot[10].liquidStream.HT[10].m.mu variable */ = 0.0008899999999999999;
  TRACE_POP
}

/*
equation index: 4121
type: SIMPLE_ASSIGN
sink.tube_cold.liquidStream.m[1].d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4121(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4121};
  data->localData[0]->realVars[1850] /* sink.tube_cold.liquidStream.m[1].d variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 4122
type: SIMPLE_ASSIGN
sink.tube_cold.liquidStream.m[1].c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4122(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4122};
  data->localData[0]->realVars[1845] /* sink.tube_cold.liquidStream.m[1].c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 4123
type: SIMPLE_ASSIGN
sink.tube_cold.liquidStream.m[2].d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4123(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4123};
  data->localData[0]->realVars[1851] /* sink.tube_cold.liquidStream.m[2].d variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 4124
type: SIMPLE_ASSIGN
sink.tube_cold.liquidStream.m[2].c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4124(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4124};
  data->localData[0]->realVars[1846] /* sink.tube_cold.liquidStream.m[2].c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 4125
type: SIMPLE_ASSIGN
sink.tube_cold.liquidStream.m[3].d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4125(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4125};
  data->localData[0]->realVars[1852] /* sink.tube_cold.liquidStream.m[3].d variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 4126
type: SIMPLE_ASSIGN
sink.tube_cold.liquidStream.m[3].c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4126(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4126};
  data->localData[0]->realVars[1847] /* sink.tube_cold.liquidStream.m[3].c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 4127
type: SIMPLE_ASSIGN
sink.tube_cold.liquidStream.m[4].d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4127(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4127};
  data->localData[0]->realVars[1853] /* sink.tube_cold.liquidStream.m[4].d variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 4128
type: SIMPLE_ASSIGN
sink.tube_cold.liquidStream.m[4].c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4128(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4128};
  data->localData[0]->realVars[1848] /* sink.tube_cold.liquidStream.m[4].c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 4129
type: SIMPLE_ASSIGN
sink.tube_cold.liquidStream.m[5].d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4129(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4129};
  data->localData[0]->realVars[1854] /* sink.tube_cold.liquidStream.m[5].d variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 4130
type: SIMPLE_ASSIGN
sink.tube_cold.liquidStream.m[5].c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4130(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4130};
  data->localData[0]->realVars[1849] /* sink.tube_cold.liquidStream.m[5].c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 4131
type: SIMPLE_ASSIGN
sink.tube_cold.liquidStream.HT[1].m.d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4131(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4131};
  data->localData[0]->realVars[1805] /* sink.tube_cold.liquidStream.HT[1].m.d variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 4132
type: SIMPLE_ASSIGN
sink.tube_cold.liquidStream.HT[1].m.c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4132(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4132};
  data->localData[0]->realVars[1800] /* sink.tube_cold.liquidStream.HT[1].m.c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 4133
type: SIMPLE_ASSIGN
sink.tube_cold.liquidStream.HT[1].m.lambda = 0.55
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4133(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4133};
  data->localData[0]->realVars[1815] /* sink.tube_cold.liquidStream.HT[1].m.lambda variable */ = 0.55;
  TRACE_POP
}

/*
equation index: 4134
type: SIMPLE_ASSIGN
sink.tube_cold.liquidStream.HT[1].m.mu = 0.0008899999999999999
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4134(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4134};
  data->localData[0]->realVars[1820] /* sink.tube_cold.liquidStream.HT[1].m.mu variable */ = 0.0008899999999999999;
  TRACE_POP
}

/*
equation index: 4135
type: SIMPLE_ASSIGN
sink.tube_cold.liquidStream.HT[2].m.d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4135(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4135};
  data->localData[0]->realVars[1806] /* sink.tube_cold.liquidStream.HT[2].m.d variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 4136
type: SIMPLE_ASSIGN
sink.tube_cold.liquidStream.HT[2].m.c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4136(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4136};
  data->localData[0]->realVars[1801] /* sink.tube_cold.liquidStream.HT[2].m.c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 4137
type: SIMPLE_ASSIGN
sink.tube_cold.liquidStream.HT[2].m.lambda = 0.55
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4137(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4137};
  data->localData[0]->realVars[1816] /* sink.tube_cold.liquidStream.HT[2].m.lambda variable */ = 0.55;
  TRACE_POP
}

/*
equation index: 4138
type: SIMPLE_ASSIGN
sink.tube_cold.liquidStream.HT[2].m.mu = 0.0008899999999999999
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4138(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4138};
  data->localData[0]->realVars[1821] /* sink.tube_cold.liquidStream.HT[2].m.mu variable */ = 0.0008899999999999999;
  TRACE_POP
}

/*
equation index: 4139
type: SIMPLE_ASSIGN
sink.tube_cold.liquidStream.HT[3].m.d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4139(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4139};
  data->localData[0]->realVars[1807] /* sink.tube_cold.liquidStream.HT[3].m.d variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 4140
type: SIMPLE_ASSIGN
sink.tube_cold.liquidStream.HT[3].m.c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4140(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4140};
  data->localData[0]->realVars[1802] /* sink.tube_cold.liquidStream.HT[3].m.c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 4141
type: SIMPLE_ASSIGN
sink.tube_cold.liquidStream.HT[3].m.lambda = 0.55
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4141(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4141};
  data->localData[0]->realVars[1817] /* sink.tube_cold.liquidStream.HT[3].m.lambda variable */ = 0.55;
  TRACE_POP
}

/*
equation index: 4142
type: SIMPLE_ASSIGN
sink.tube_cold.liquidStream.HT[3].m.mu = 0.0008899999999999999
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4142(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4142};
  data->localData[0]->realVars[1822] /* sink.tube_cold.liquidStream.HT[3].m.mu variable */ = 0.0008899999999999999;
  TRACE_POP
}

/*
equation index: 4143
type: SIMPLE_ASSIGN
sink.tube_cold.liquidStream.HT[4].m.d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4143(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4143};
  data->localData[0]->realVars[1808] /* sink.tube_cold.liquidStream.HT[4].m.d variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 4144
type: SIMPLE_ASSIGN
sink.tube_cold.liquidStream.HT[4].m.c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4144(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4144};
  data->localData[0]->realVars[1803] /* sink.tube_cold.liquidStream.HT[4].m.c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 4145
type: SIMPLE_ASSIGN
sink.tube_cold.liquidStream.HT[4].m.lambda = 0.55
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4145(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4145};
  data->localData[0]->realVars[1818] /* sink.tube_cold.liquidStream.HT[4].m.lambda variable */ = 0.55;
  TRACE_POP
}

/*
equation index: 4146
type: SIMPLE_ASSIGN
sink.tube_cold.liquidStream.HT[4].m.mu = 0.0008899999999999999
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4146(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4146};
  data->localData[0]->realVars[1823] /* sink.tube_cold.liquidStream.HT[4].m.mu variable */ = 0.0008899999999999999;
  TRACE_POP
}

/*
equation index: 4147
type: SIMPLE_ASSIGN
sink.tube_cold.liquidStream.HT[5].m.d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4147(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4147};
  data->localData[0]->realVars[1809] /* sink.tube_cold.liquidStream.HT[5].m.d variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 4148
type: SIMPLE_ASSIGN
sink.tube_cold.liquidStream.HT[5].m.c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4148(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4148};
  data->localData[0]->realVars[1804] /* sink.tube_cold.liquidStream.HT[5].m.c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 4149
type: SIMPLE_ASSIGN
sink.tube_cold.liquidStream.HT[5].m.lambda = 0.55
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4149(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4149};
  data->localData[0]->realVars[1819] /* sink.tube_cold.liquidStream.HT[5].m.lambda variable */ = 0.55;
  TRACE_POP
}

/*
equation index: 4150
type: SIMPLE_ASSIGN
sink.tube_cold.liquidStream.HT[5].m.mu = 0.0008899999999999999
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4150(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4150};
  data->localData[0]->realVars[1824] /* sink.tube_cold.liquidStream.HT[5].m.mu variable */ = 0.0008899999999999999;
  TRACE_POP
}

/*
equation index: 4151
type: SIMPLE_ASSIGN
sink.tank.m.d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4151(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4151};
  data->localData[0]->realVars[1759] /* sink.tank.m.d DUMMY_STATE */ = 1000.0;
  TRACE_POP
}

/*
equation index: 4152
type: SIMPLE_ASSIGN
sink.tank.m.c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4152(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4152};
  data->localData[0]->realVars[1758] /* sink.tank.m.c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 4153
type: SIMPLE_ASSIGN
sink.tank.dp = 0.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4153(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4153};
  data->localData[0]->realVars[1756] /* sink.tank.dp variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 4154
type: SIMPLE_ASSIGN
sink.tank.hp.Q_flow[1] = 0.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4154(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4154};
  data->localData[0]->realVars[1757] /* sink.tank.hp.Q_flow[1] variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 4155
type: SIMPLE_ASSIGN
sink.pump.m.d = 1000.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4155(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4155};
  data->localData[0]->realVars[1749] /* sink.pump.m.d variable */ = 1000.0;
  TRACE_POP
}

/*
equation index: 4156
type: SIMPLE_ASSIGN
sink.pump.m.c = 4186.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4156(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4156};
  data->localData[0]->realVars[1748] /* sink.pump.m.c variable */ = 4186.0;
  TRACE_POP
}

/*
equation index: 4157
type: SIMPLE_ASSIGN
sink.temp.y = 293.15
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4157(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4157};
  data->localData[0]->realVars[1764] /* sink.temp.y variable */ = 293.15;
  TRACE_POP
}

/*
equation index: 4158
type: SIMPLE_ASSIGN
sink.cmd.y = 1.0
*/
void T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4158(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4158};
  data->localData[0]->realVars[1537] /* sink.cmd.y variable */ = 1.0;
  TRACE_POP
}
OMC_DISABLE_OPT
void T05_3DICE_Integration_T05_Interface3DICE_functionInitialEquations_1(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_5847(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_5848(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_5849(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2025(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2026(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2027(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2028(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_5833(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_5834(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_5835(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2032(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2033(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2034(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2035(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_5819(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_5820(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_5821(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2039(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2040(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2041(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2042(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_5805(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_5806(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_5807(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2046(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2047(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2048(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2049(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_5791(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_5792(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_5793(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2053(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2054(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2055(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2056(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2057(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6928(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6929(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2060(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2061(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2062(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2063(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6978(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6979(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6980(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2067(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2068(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2069(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2070(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6056(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6057(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6058(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2074(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2075(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2076(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2077(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6059(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6060(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6061(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2081(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2082(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2083(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2084(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6062(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6063(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6064(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2088(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2089(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2090(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2091(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6065(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6066(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6067(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2095(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2096(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2097(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2098(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6068(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6069(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6070(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2102(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2103(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2104(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2105(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6071(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6072(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6073(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2109(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2110(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2111(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2112(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6074(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6075(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6076(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2116(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2117(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2118(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2119(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6077(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6078(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6079(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2123(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2124(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2125(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2126(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2127(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6931(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6932(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2130(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2131(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2132(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2133(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6981(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6982(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6983(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2137(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2138(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2139(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2140(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6843(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6844(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6845(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2144(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2145(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2146(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2147(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6846(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6847(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6848(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2151(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2152(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2153(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2154(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6849(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6850(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6851(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2158(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2159(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2160(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2161(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6852(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6853(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6854(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2165(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2166(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2167(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2168(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6855(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6856(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6857(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2172(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2173(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2174(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2175(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6858(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6859(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6860(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2179(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2180(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2181(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2182(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6861(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6862(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6863(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2186(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2187(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2188(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2189(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6873(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6874(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6875(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2193(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2194(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2195(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2196(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2197(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6934(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6935(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2200(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2201(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2202(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2203(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6984(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6985(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6986(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2207(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2208(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2209(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2210(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6231(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6232(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6233(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2214(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2215(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2216(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2217(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6234(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6235(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6236(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2221(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2222(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2223(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2224(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6237(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6238(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6239(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2228(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2229(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2230(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2231(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6240(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6241(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6242(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2235(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2236(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2237(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2238(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6243(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6244(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6245(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2242(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2243(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2244(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2245(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6246(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6247(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6248(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2249(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2250(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2251(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2252(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6249(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6250(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6251(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2256(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2257(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2258(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2259(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6252(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6253(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6254(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2263(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2264(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2265(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2266(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2267(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6937(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6938(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2270(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2271(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2272(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2273(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6987(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6988(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6989(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2277(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2278(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2279(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2280(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6406(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6407(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6408(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2284(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2285(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2286(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2287(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6409(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6410(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6411(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2291(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2292(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2293(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2294(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6412(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6413(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6414(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2298(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2299(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2300(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2301(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6415(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6416(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6417(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2305(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2306(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2307(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2308(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6418(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6419(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6420(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2312(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2313(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2314(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2315(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6421(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6422(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6423(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2319(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2320(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2321(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2322(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6424(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6425(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6426(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2326(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2327(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2328(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2329(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6427(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6428(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6429(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2333(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2334(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2335(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2336(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2337(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6940(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6941(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2340(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2341(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2342(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2343(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6990(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6991(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6992(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2347(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2348(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2349(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2350(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6589(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6590(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6591(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2354(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2355(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2356(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2357(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6575(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6576(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6577(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2361(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2362(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2363(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2364(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6561(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6562(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6563(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2368(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2369(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2370(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2371(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6547(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6548(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6549(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2375(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2376(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2377(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2378(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6533(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6534(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6535(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2382(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2383(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2384(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2385(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6519(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6520(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6521(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2389(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2390(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2391(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2392(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6505(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6506(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6507(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2396(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2397(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2398(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2399(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6491(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6492(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6493(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2403(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2404(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2405(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2406(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2407(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6943(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6944(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2410(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2411(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_7417(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2413(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2414(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2415(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2416(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2417(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4784(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2423(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6614(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2425(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2426(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4785(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2432(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_5378(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2434(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2435(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4786(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2441(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_5553(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2443(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2444(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4787(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2450(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_5728(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2452(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2453(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4788(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2459(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_5903(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2461(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2462(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4789(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2468(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_5975(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2470(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2471(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4790(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2477(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6768(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2479(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2480(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4791(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2486(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6150(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2488(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2489(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4792(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2495(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6325(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2497(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2498(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4793(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2504(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6603(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2506(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2507(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4794(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4758(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2514(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6624(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2516(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2517(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4795(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4752(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2524(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_5367(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2526(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2527(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4796(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4746(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2534(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_5542(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2536(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2537(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4797(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4740(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2544(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_5717(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2546(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2547(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4798(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4734(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2554(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_5892(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2556(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2557(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4799(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4728(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2564(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_5985(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2566(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2567(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4800(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4722(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2574(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6778(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2576(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2577(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4801(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4716(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2584(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6160(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2586(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2587(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4802(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4710(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2594(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6335(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2596(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2597(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4803(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4704(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2604(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6592(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2606(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2607(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4804(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4698(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2614(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6634(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2616(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2617(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4805(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4692(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2624(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_5353(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2626(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2627(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4806(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4686(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2634(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_5528(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2636(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2637(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4807(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4680(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2644(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_5703(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2646(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2647(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4808(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4674(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2654(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_5878(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2656(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2657(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4809(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4668(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2664(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_5995(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2666(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2667(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4810(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4662(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2674(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6788(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2676(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2677(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4811(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4656(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2684(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6170(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2686(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2687(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4812(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4650(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2694(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6345(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2696(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2697(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4813(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4644(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2704(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6578(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2706(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2707(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4814(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4638(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2714(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6644(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2716(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2717(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4815(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4632(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2724(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_5339(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2726(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2727(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4816(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4626(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2734(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_5514(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2736(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2737(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4817(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4620(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2744(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_5689(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2746(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2747(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4818(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4614(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2754(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_5864(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2756(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2757(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4819(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4608(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2764(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6005(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2766(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2767(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4820(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4602(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2774(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6798(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2776(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2777(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4821(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4596(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2784(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6180(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2786(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2787(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4822(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4590(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2794(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6355(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2796(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2797(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4823(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4584(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2804(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6564(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2806(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2807(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4824(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4578(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2814(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6654(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2816(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2817(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4825(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4572(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2824(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_5325(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2826(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2827(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4826(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4566(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2834(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_5500(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2836(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2837(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4827(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4560(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2844(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_5675(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2846(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2847(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4828(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4554(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2854(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_5850(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2856(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2857(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4829(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4548(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2864(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6015(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2866(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2867(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4830(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4542(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2874(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6808(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2876(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2877(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4831(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4536(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2884(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6190(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2886(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2887(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4832(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4530(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2894(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6365(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2896(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2897(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4833(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4524(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2904(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6550(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2906(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2907(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4834(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4518(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2914(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6664(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2916(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2917(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4835(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4512(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2924(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_5311(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2926(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2927(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4836(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4506(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2934(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_5486(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2936(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2937(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4837(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4500(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2944(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_5661(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2946(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2947(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4838(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4494(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2954(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_5836(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2956(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2957(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4839(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4488(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2964(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6025(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2966(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2967(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4840(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4482(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2974(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6818(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2976(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2977(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4841(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4476(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2984(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6200(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2986(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2987(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4842(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4470(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2994(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6375(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2996(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_2997(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4843(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4464(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3004(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6536(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3006(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3007(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4844(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4458(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3014(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6674(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3016(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3017(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4845(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4452(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3024(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_5297(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3026(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3027(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4846(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4446(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3034(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_5472(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3036(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3037(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4847(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4440(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3044(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_5647(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3046(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3047(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4848(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4434(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3054(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_5822(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3056(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3057(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4849(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4428(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3064(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6035(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3066(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3067(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4850(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4422(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3074(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6828(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3076(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3077(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4851(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4416(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3084(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6210(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3086(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3087(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4852(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4410(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3094(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6385(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3096(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3097(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4853(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4404(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3104(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6522(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3106(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3107(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4854(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4398(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3114(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6684(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3116(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3117(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4855(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4392(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3124(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_5283(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3126(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3127(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4856(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4386(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3134(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_5458(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3136(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3137(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4857(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4380(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3144(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_5633(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3146(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3147(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4858(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4374(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3154(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_5808(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3156(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3157(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4859(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4368(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3164(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6045(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3166(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3167(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4860(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4362(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3174(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6838(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3176(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3177(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4861(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4356(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3184(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6220(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3186(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3187(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4862(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4350(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3194(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6395(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3196(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3197(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4863(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4344(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3204(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6508(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3206(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3207(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4864(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4338(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3214(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6694(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3216(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3217(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4865(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4332(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3224(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_5269(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3226(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3227(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4866(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4326(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3234(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_5444(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3236(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3237(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4867(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4320(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3244(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_5619(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3246(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3247(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4868(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4314(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3254(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_5794(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3256(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3257(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4869(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4308(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3264(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6055(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3266(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3267(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4870(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4302(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3274(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6876(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3276(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3277(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4871(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4296(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3284(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6230(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3286(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3287(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4872(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4290(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3294(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6405(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3296(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3297(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4873(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4284(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3304(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6494(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3306(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3307(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4874(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4278(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3314(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_5159(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3316(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3317(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4875(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4272(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4218(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3325(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_5255(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3327(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3328(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4876(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4266(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4212(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3336(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_5394(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3338(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3339(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4877(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4260(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4206(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3347(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_5569(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3349(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3350(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4878(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4254(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4200(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3358(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_5744(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3360(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3361(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4879(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4248(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4194(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3369(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_5920(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3371(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3372(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4880(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4242(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4188(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3380(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6894(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3382(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3383(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4881(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4236(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4182(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3391(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6095(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3393(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3394(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4882(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4230(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4176(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3402(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6270(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3404(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3405(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4883(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4170(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4224(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3413(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_6481(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4164(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3416(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3417(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3418(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3419(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3420(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3421(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3422(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3423(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3424(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3425(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3426(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3427(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3428(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3429(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3430(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3431(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3432(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3433(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3434(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3435(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3436(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3437(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3438(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3439(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3440(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3441(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3442(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3443(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3444(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3445(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3446(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3447(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3448(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3449(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3450(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3451(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3452(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3453(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3454(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3455(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3456(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3457(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3458(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3459(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3460(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3461(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3462(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3463(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3464(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3465(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3466(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3467(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3468(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3469(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3470(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3471(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3472(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3473(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3474(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3475(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3476(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3477(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3478(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3479(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3480(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3481(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3482(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3483(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3484(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3485(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3486(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3487(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3488(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3489(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3490(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3491(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3492(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3493(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3494(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3495(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3496(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3497(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3498(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3499(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3500(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3501(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3502(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3503(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3504(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3505(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3506(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3507(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3508(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3509(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3510(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3511(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3512(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3513(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3514(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3515(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3516(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3517(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3518(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3519(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3520(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3521(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3522(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3523(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3524(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3525(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3526(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3527(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3528(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3529(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3530(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3531(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3532(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3533(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3534(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3535(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3536(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3537(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3538(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3539(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3540(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3541(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3542(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3543(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3544(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3545(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3546(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3547(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3548(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3549(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3550(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3551(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3552(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3553(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3554(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3555(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3556(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3557(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3558(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3559(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3560(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3561(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3562(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3563(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3564(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3565(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3566(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3567(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3568(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3569(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3570(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3571(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3572(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3573(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3574(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3575(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3576(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3577(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3578(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3579(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3580(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3581(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3582(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3583(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3584(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3585(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3586(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3587(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3588(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3589(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3590(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3591(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3592(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3593(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3594(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3595(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3596(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3597(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3598(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3599(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3600(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3601(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3602(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3603(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3604(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3605(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3606(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3607(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3608(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3609(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3610(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3611(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3612(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3613(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3614(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3615(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3616(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3617(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3618(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3619(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3620(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3621(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3622(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3623(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3624(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3625(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3626(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3627(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3628(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3629(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3630(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3631(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3632(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3633(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3634(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3635(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3636(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3637(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3638(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3639(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3640(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3641(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3642(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3643(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3644(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3645(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3646(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3647(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3648(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3649(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3650(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3651(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3652(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3653(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3654(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3655(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3656(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3657(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3658(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3659(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3660(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3661(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3662(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3663(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3664(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3665(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3666(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3667(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3668(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3669(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3670(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3671(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3672(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3673(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3674(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3675(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3676(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3677(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3678(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3679(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3680(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3681(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3682(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3683(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3684(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3685(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3686(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3687(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3688(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3689(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3690(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3691(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3692(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3693(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3694(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3695(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3696(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3697(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3698(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3699(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3700(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3701(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3702(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3703(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3704(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3705(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3706(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3707(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3708(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3709(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3710(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3711(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3712(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3713(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3714(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3715(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3716(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3717(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3718(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3719(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3720(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3721(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3722(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3723(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3724(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3725(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3726(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3727(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3728(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3729(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3730(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3731(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3732(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3733(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3734(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3735(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3736(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3737(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3738(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3739(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3740(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3741(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3742(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3743(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3744(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3745(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3746(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3747(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3748(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3749(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3750(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3751(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3752(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3753(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3754(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3755(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3756(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3757(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3758(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3759(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3760(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3761(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3762(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3763(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3764(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3765(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3766(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3767(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3768(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3769(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3770(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3771(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3772(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3773(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3774(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3775(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3776(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3777(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3778(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3779(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3780(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3781(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3782(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3783(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3784(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3785(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3786(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3787(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3788(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3789(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3790(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3791(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3792(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3793(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3794(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3795(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3796(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3797(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3798(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3799(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3800(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3801(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3802(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3803(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3804(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3805(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3806(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3807(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3808(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3809(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3810(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3811(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3812(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3813(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3814(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3815(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3816(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3817(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3818(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3819(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3820(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3821(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3822(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3823(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3824(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3825(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3826(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3827(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3828(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3829(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3830(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3831(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3832(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3833(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3834(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3835(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3836(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3837(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3838(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3839(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3840(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3841(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3842(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3843(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3844(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3845(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3846(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3847(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3848(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3849(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3850(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3851(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3852(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3853(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3854(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3855(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3856(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3857(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3858(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3859(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3860(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3861(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3862(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3863(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3864(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3865(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3866(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3867(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3868(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3869(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3870(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3871(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3872(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3873(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3874(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3875(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3876(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3877(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3878(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3879(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3880(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3881(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3882(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3883(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3884(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3885(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3886(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3887(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3888(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3889(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3890(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3891(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3892(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3893(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3894(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3895(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3896(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3897(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3898(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3899(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3900(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3901(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3902(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3903(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3904(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3905(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3906(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3907(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3908(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3909(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3910(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3911(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3912(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3913(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3914(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3915(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3916(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3917(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3918(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3919(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3920(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3921(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3922(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3923(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3924(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3925(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3926(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3927(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3928(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3929(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3930(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3931(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3932(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3933(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3934(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3935(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3936(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3937(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3938(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3939(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3940(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3941(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3942(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3943(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3944(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3945(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3946(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3947(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3948(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3949(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3950(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3951(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3952(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3953(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3954(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3955(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3956(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3957(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3958(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3959(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3960(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3961(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3962(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3963(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3964(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3965(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3966(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3967(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3968(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3969(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3970(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3971(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3972(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3973(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3974(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3975(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3976(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3977(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3978(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3979(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3980(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3981(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3982(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3983(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3984(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3985(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3986(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3987(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3988(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3989(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3990(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3991(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3992(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3993(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3994(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3995(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3996(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3997(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3998(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_3999(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4000(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4001(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4002(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4003(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4004(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4005(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4006(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4007(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4008(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4009(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4010(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4011(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4012(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4013(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4014(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4015(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4016(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4017(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4018(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4019(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4020(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4021(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4022(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4023(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4024(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4025(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4026(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4027(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4028(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4029(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4030(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4031(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4032(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4033(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4034(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4035(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4036(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4037(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4038(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4039(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4040(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4041(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4042(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4043(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4044(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4045(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4046(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4047(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4048(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4049(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4050(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4051(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4052(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4053(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4054(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4055(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4056(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4057(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4058(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4059(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4060(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4061(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4062(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4063(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4064(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4065(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4066(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4067(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4068(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4069(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4070(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4071(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4072(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4073(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4074(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4075(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4076(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4077(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4078(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4079(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4080(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4081(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4082(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4083(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4084(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4085(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4086(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4087(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4088(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4089(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4090(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4091(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4092(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4093(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4094(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4095(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4096(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4097(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4098(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4099(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4100(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4101(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4102(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4103(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4104(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4105(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4106(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4107(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4108(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4109(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4110(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4111(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4112(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4113(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4114(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4115(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4116(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4117(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4118(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4119(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4120(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4121(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4122(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4123(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4124(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4125(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4126(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4127(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4128(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4129(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4130(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4131(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4132(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4133(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4134(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4135(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4136(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4137(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4138(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4139(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4140(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4141(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4142(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4143(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4144(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4145(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4146(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4147(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4148(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4149(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4150(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4151(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4152(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4153(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4154(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4155(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4156(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4157(data, threadData);
  T05_3DICE_Integration_T05_Interface3DICE_eqFunction_4158(data, threadData);
  TRACE_POP
}
#if defined(__cplusplus)
}
#endif