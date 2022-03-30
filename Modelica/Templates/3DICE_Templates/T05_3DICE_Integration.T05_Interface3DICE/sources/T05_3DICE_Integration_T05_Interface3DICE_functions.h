#ifndef T05_3DICE_Integration_T05_Interface3DICE__H
#define T05_3DICE_Integration_T05_Interface3DICE__H
#include "meta/meta_modelica.h"
#include "util/modelica.h"
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#include "simulation/simulation_runtime.h"
#ifdef __cplusplus
extern "C" {
#endif


DLLExport
modelica_real omc_ComputerCooling_Functions_Clamp(threadData_t *threadData, modelica_real _x, modelica_real _minValue, modelica_real _maxValue);
DLLExport
modelica_metatype boxptr_ComputerCooling_Functions_Clamp(threadData_t *threadData, modelica_metatype _x, modelica_metatype _minValue, modelica_metatype _maxValue);
static const MMC_DEFSTRUCTLIT(boxvar_lit_ComputerCooling_Functions_Clamp,2,0) {(void*) boxptr_ComputerCooling_Functions_Clamp,0}};
#define boxvar_ComputerCooling_Functions_Clamp MMC_REFSTRUCTLIT(boxvar_lit_ComputerCooling_Functions_Clamp)


DLLExport
modelica_real omc_ComputerCooling_Functions_sqrtReg(threadData_t *threadData, modelica_real _x, modelica_real _delta);
DLLExport
modelica_metatype boxptr_ComputerCooling_Functions_sqrtReg(threadData_t *threadData, modelica_metatype _x, modelica_metatype _delta);
static const MMC_DEFSTRUCTLIT(boxvar_lit_ComputerCooling_Functions_sqrtReg,2,0) {(void*) boxptr_ComputerCooling_Functions_sqrtReg,0}};
#define boxvar_ComputerCooling_Functions_sqrtReg MMC_REFSTRUCTLIT(boxvar_lit_ComputerCooling_Functions_sqrtReg)


DLLExport
modelica_real omc_ComputerCooling_Functions_sqrtReg__der(threadData_t *threadData, modelica_real _x, modelica_real _delta, modelica_real _dx);
DLLExport
modelica_metatype boxptr_ComputerCooling_Functions_sqrtReg__der(threadData_t *threadData, modelica_metatype _x, modelica_metatype _delta, modelica_metatype _dx);
static const MMC_DEFSTRUCTLIT(boxvar_lit_ComputerCooling_Functions_sqrtReg__der,2,0) {(void*) boxptr_ComputerCooling_Functions_sqrtReg__der,0}};
#define boxvar_ComputerCooling_Functions_sqrtReg__der MMC_REFSTRUCTLIT(boxvar_lit_ComputerCooling_Functions_sqrtReg__der)


DLLExport
void omc_Modelica_Utilities_Streams_error(threadData_t *threadData, modelica_string _string);
#define boxptr_Modelica_Utilities_Streams_error omc_Modelica_Utilities_Streams_error
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Utilities_Streams_error,2,0) {(void*) boxptr_Modelica_Utilities_Streams_error,0}};
#define boxvar_Modelica_Utilities_Streams_error MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Utilities_Streams_error)

extern void ModelicaError(const char* /*_string*/);

DLLExport
void omc_Modelica_Utilities_Streams_print(threadData_t *threadData, modelica_string _string, modelica_string _fileName);
#define boxptr_Modelica_Utilities_Streams_print omc_Modelica_Utilities_Streams_print
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Utilities_Streams_print,2,0) {(void*) boxptr_Modelica_Utilities_Streams_print,0}};
#define boxvar_Modelica_Utilities_Streams_print MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Utilities_Streams_print)

extern void ModelicaInternal_print(const char* /*_string*/, const char* /*_fileName*/);

DLLExport
modelica_integer omc_Modelica_Utilities_Strings_compare(threadData_t *threadData, modelica_string _string1, modelica_string _string2, modelica_boolean _caseSensitive);
DLLExport
modelica_metatype boxptr_Modelica_Utilities_Strings_compare(threadData_t *threadData, modelica_metatype _string1, modelica_metatype _string2, modelica_metatype _caseSensitive);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Utilities_Strings_compare,2,0) {(void*) boxptr_Modelica_Utilities_Strings_compare,0}};
#define boxvar_Modelica_Utilities_Strings_compare MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Utilities_Strings_compare)

extern int ModelicaStrings_compare(const char* /*_string1*/, const char* /*_string2*/, int /*_caseSensitive*/);

DLLExport
modelica_integer omc_Modelica_Utilities_Strings_find(threadData_t *threadData, modelica_string _string, modelica_string _searchString, modelica_integer _startIndex, modelica_boolean _caseSensitive);
DLLExport
modelica_metatype boxptr_Modelica_Utilities_Strings_find(threadData_t *threadData, modelica_metatype _string, modelica_metatype _searchString, modelica_metatype _startIndex, modelica_metatype _caseSensitive);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Utilities_Strings_find,2,0) {(void*) boxptr_Modelica_Utilities_Strings_find,0}};
#define boxvar_Modelica_Utilities_Strings_find MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Utilities_Strings_find)


DLLExport
modelica_boolean omc_Modelica_Utilities_Strings_isEqual(threadData_t *threadData, modelica_string _string1, modelica_string _string2, modelica_boolean _caseSensitive);
DLLExport
modelica_metatype boxptr_Modelica_Utilities_Strings_isEqual(threadData_t *threadData, modelica_metatype _string1, modelica_metatype _string2, modelica_metatype _caseSensitive);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Utilities_Strings_isEqual,2,0) {(void*) boxptr_Modelica_Utilities_Strings_isEqual,0}};
#define boxvar_Modelica_Utilities_Strings_isEqual MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Utilities_Strings_isEqual)


DLLExport
modelica_integer omc_Modelica_Utilities_Strings_length(threadData_t *threadData, modelica_string _string);
DLLExport
modelica_metatype boxptr_Modelica_Utilities_Strings_length(threadData_t *threadData, modelica_metatype _string);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Utilities_Strings_length,2,0) {(void*) boxptr_Modelica_Utilities_Strings_length,0}};
#define boxvar_Modelica_Utilities_Strings_length MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Utilities_Strings_length)

extern int ModelicaStrings_length(const char* /*_string*/);

DLLExport
modelica_string omc_Modelica_Utilities_Strings_repeat(threadData_t *threadData, modelica_integer _n, modelica_string _string);
DLLExport
modelica_metatype boxptr_Modelica_Utilities_Strings_repeat(threadData_t *threadData, modelica_metatype _n, modelica_metatype _string);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Utilities_Strings_repeat,2,0) {(void*) boxptr_Modelica_Utilities_Strings_repeat,0}};
#define boxvar_Modelica_Utilities_Strings_repeat MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Utilities_Strings_repeat)


DLLExport
modelica_real omc_Modelica_Utilities_Strings_scanReal(threadData_t *threadData, modelica_string _string, modelica_integer _startIndex, modelica_boolean _unsigned, modelica_string _message, modelica_integer *out_nextIndex);
DLLExport
modelica_metatype boxptr_Modelica_Utilities_Strings_scanReal(threadData_t *threadData, modelica_metatype _string, modelica_metatype _startIndex, modelica_metatype _unsigned, modelica_metatype _message, modelica_metatype *out_nextIndex);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Utilities_Strings_scanReal,2,0) {(void*) boxptr_Modelica_Utilities_Strings_scanReal,0}};
#define boxvar_Modelica_Utilities_Strings_scanReal MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Utilities_Strings_scanReal)


DLLExport
modelica_string omc_Modelica_Utilities_Strings_substring(threadData_t *threadData, modelica_string _string, modelica_integer _startIndex, modelica_integer _endIndex);
DLLExport
modelica_metatype boxptr_Modelica_Utilities_Strings_substring(threadData_t *threadData, modelica_metatype _string, modelica_metatype _startIndex, modelica_metatype _endIndex);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Utilities_Strings_substring,2,0) {(void*) boxptr_Modelica_Utilities_Strings_substring,0}};
#define boxvar_Modelica_Utilities_Strings_substring MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Utilities_Strings_substring)

extern const char* ModelicaStrings_substring(const char* /*_string*/, int /*_startIndex*/, int /*_endIndex*/);

DLLExport
void omc_Modelica_Utilities_Strings_syntaxError(threadData_t *threadData, modelica_string _string, modelica_integer _index, modelica_string _message);
DLLExport
void boxptr_Modelica_Utilities_Strings_syntaxError(threadData_t *threadData, modelica_metatype _string, modelica_metatype _index, modelica_metatype _message);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Utilities_Strings_syntaxError,2,0) {(void*) boxptr_Modelica_Utilities_Strings_syntaxError,0}};
#define boxvar_Modelica_Utilities_Strings_syntaxError MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Utilities_Strings_syntaxError)


DLLExport
modelica_integer omc_Modelica_Utilities_Strings_Advanced_scanReal(threadData_t *threadData, modelica_string _string, modelica_integer _startIndex, modelica_boolean _unsigned, modelica_real *out_number);
DLLExport
modelica_metatype boxptr_Modelica_Utilities_Strings_Advanced_scanReal(threadData_t *threadData, modelica_metatype _string, modelica_metatype _startIndex, modelica_metatype _unsigned, modelica_metatype *out_number);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Utilities_Strings_Advanced_scanReal,2,0) {(void*) boxptr_Modelica_Utilities_Strings_Advanced_scanReal,0}};
#define boxvar_Modelica_Utilities_Strings_Advanced_scanReal MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Utilities_Strings_Advanced_scanReal)

extern void ModelicaStrings_scanReal(const char* /*_string*/, int /*_startIndex*/, int /*_unsigned*/, int* /*_nextIndex*/, double* /*_number*/);

DLLExport
modelica_integer omc_Modelica_Utilities_Strings_Advanced_skipWhiteSpace(threadData_t *threadData, modelica_string _string, modelica_integer _startIndex);
DLLExport
modelica_metatype boxptr_Modelica_Utilities_Strings_Advanced_skipWhiteSpace(threadData_t *threadData, modelica_metatype _string, modelica_metatype _startIndex);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Utilities_Strings_Advanced_skipWhiteSpace,2,0) {(void*) boxptr_Modelica_Utilities_Strings_Advanced_skipWhiteSpace,0}};
#define boxvar_Modelica_Utilities_Strings_Advanced_skipWhiteSpace MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Utilities_Strings_Advanced_skipWhiteSpace)

extern int ModelicaStrings_skipWhiteSpace(const char* /*_string*/, int /*_startIndex*/);

DLLExport
modelica_real omc_T05__3DICE__Integration_T05__Interface3DICE_Parse(threadData_t *threadData, modelica_string _args, modelica_real *out_y0);
DLLExport
modelica_metatype boxptr_T05__3DICE__Integration_T05__Interface3DICE_Parse(threadData_t *threadData, modelica_metatype _args, modelica_metatype *out_y0);
static const MMC_DEFSTRUCTLIT(boxvar_lit_T05__3DICE__Integration_T05__Interface3DICE_Parse,2,0) {(void*) boxptr_T05__3DICE__Integration_T05__Interface3DICE_Parse,0}};
#define boxvar_T05__3DICE__Integration_T05__Interface3DICE_Parse MMC_REFSTRUCTLIT(boxvar_lit_T05__3DICE__Integration_T05__Interface3DICE_Parse)
#include "T05_3DICE_Integration_T05_Interface3DICE_model.h"


#ifdef __cplusplus
}
#endif
#endif

