#include "omc_simulation_settings.h"
#include "T05_3DICE_Integration_T05_Interface3DICE_functions.h"
#ifdef __cplusplus
extern "C" {
#endif

#include "T05_3DICE_Integration_T05_Interface3DICE_includes.h"


DLLExport
modelica_real omc_ComputerCooling_Functions_Clamp(threadData_t *threadData, modelica_real _x, modelica_real _minValue, modelica_real _maxValue)
{
  modelica_real _y;
  _tailrecursive: OMC_LABEL_UNUSED
  // _y has no default value.
  _y = fmax(_minValue,fmin(_x,_maxValue));
  _return: OMC_LABEL_UNUSED
  return _y;
}
modelica_metatype boxptr_ComputerCooling_Functions_Clamp(threadData_t *threadData, modelica_metatype _x, modelica_metatype _minValue, modelica_metatype _maxValue)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real _y;
  modelica_metatype out_y;
  tmp1 = mmc_unbox_real(_x);
  tmp2 = mmc_unbox_real(_minValue);
  tmp3 = mmc_unbox_real(_maxValue);
  _y = omc_ComputerCooling_Functions_Clamp(threadData, tmp1, tmp2, tmp3);
  out_y = mmc_mk_rcon(_y);
  return out_y;
}

DLLExport
modelica_real omc_ComputerCooling_Functions_sqrtReg(threadData_t *threadData, modelica_real _x, modelica_real _delta)
{
  modelica_real _y;
  modelica_real tmp1;
  modelica_real tmp2;
  _tailrecursive: OMC_LABEL_UNUSED
  // _y has no default value.
  tmp1 = sqrt((_x) * (_x) + (_delta) * (_delta));
  if(!(tmp1 >= 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert(threadData, info, "Model error: Argument of sqrt(sqrt(x * x + delta * delta)) was %g should be >= 0", tmp1);
  }tmp2 = sqrt(tmp1);
  if (tmp2 == 0) {throwStreamPrint(threadData, "Division by zero %s", "x / sqrt(sqrt(x * x + delta * delta))");}
  _y = (_x) / tmp2;
  _return: OMC_LABEL_UNUSED
  return _y;
}
modelica_metatype boxptr_ComputerCooling_Functions_sqrtReg(threadData_t *threadData, modelica_metatype _x, modelica_metatype _delta)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real _y;
  modelica_metatype out_y;
  tmp1 = mmc_unbox_real(_x);
  tmp2 = mmc_unbox_real(_delta);
  _y = omc_ComputerCooling_Functions_sqrtReg(threadData, tmp1, tmp2);
  out_y = mmc_mk_rcon(_y);
  return out_y;
}

DLLExport
modelica_real omc_ComputerCooling_Functions_sqrtReg__der(threadData_t *threadData, modelica_real _x, modelica_real _delta, modelica_real _dx)
{
  modelica_real _dy;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_real tmp7;
  modelica_real tmp8;
  _tailrecursive: OMC_LABEL_UNUSED
  // _dy has no default value.
  tmp1 = (_x) * (_x) + (_delta) * (_delta);
  tmp2 = 1.25;
  if(tmp1 < 0.0 && tmp2 != 0.0)
  {
    tmp4 = modf(tmp2, &tmp5);
    
    if(tmp4 > 0.5)
    {
      tmp4 -= 1.0;
      tmp5 += 1.0;
    }
    else if(tmp4 < -0.5)
    {
      tmp4 += 1.0;
      tmp5 -= 1.0;
    }
    
    if(fabs(tmp4) < 1e-10)
      tmp3 = pow(tmp1, tmp5);
    else
    {
      tmp7 = modf(1.0/tmp2, &tmp6);
      if(tmp7 > 0.5)
      {
        tmp7 -= 1.0;
        tmp6 += 1.0;
      }
      else if(tmp7 < -0.5)
      {
        tmp7 += 1.0;
        tmp6 -= 1.0;
      }
      if(fabs(tmp7) < 1e-10 && ((unsigned long)tmp6 & 1))
      {
        tmp3 = -pow(-tmp1, tmp4)*pow(tmp1, tmp5);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1, tmp2);
      }
    }
  }
  else
  {
    tmp3 = pow(tmp1, tmp2);
  }
  if(isnan(tmp3) || isinf(tmp3))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1, tmp2);
  }tmp8 = tmp3;
  if (tmp8 == 0) {throwStreamPrint(threadData, "Division by zero %s", "dx * 0.5 * (x * x + 2.0 * delta * delta) / (x * x + delta * delta) ^ 1.25");}
  _dy = (((_dx) * (0.5)) * ((_x) * (_x) + ((2.0) * (_delta)) * (_delta))) / tmp8;
  _return: OMC_LABEL_UNUSED
  return _dy;
}
modelica_metatype boxptr_ComputerCooling_Functions_sqrtReg__der(threadData_t *threadData, modelica_metatype _x, modelica_metatype _delta, modelica_metatype _dx)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real _dy;
  modelica_metatype out_dy;
  tmp1 = mmc_unbox_real(_x);
  tmp2 = mmc_unbox_real(_delta);
  tmp3 = mmc_unbox_real(_dx);
  _dy = omc_ComputerCooling_Functions_sqrtReg__der(threadData, tmp1, tmp2, tmp3);
  out_dy = mmc_mk_rcon(_dy);
  return out_dy;
}

void omc_Modelica_Utilities_Streams_error(threadData_t *threadData, modelica_string _string)
{
  ModelicaError(MMC_STRINGDATA(_string));
  return;
}

void omc_Modelica_Utilities_Streams_print(threadData_t *threadData, modelica_string _string, modelica_string _fileName)
{
  ModelicaInternal_print(MMC_STRINGDATA(_string), MMC_STRINGDATA(_fileName));
  return;
}

modelica_integer omc_Modelica_Utilities_Strings_compare(threadData_t *threadData, modelica_string _string1, modelica_string _string2, modelica_boolean _caseSensitive)
{
  int _caseSensitive_ext;
  int _result_ext;
  modelica_integer _result;
  // _result has no default value.
  _caseSensitive_ext = (int)_caseSensitive;
  _result_ext = ModelicaStrings_compare(MMC_STRINGDATA(_string1), MMC_STRINGDATA(_string2), _caseSensitive_ext);
  _result = (modelica_integer)_result_ext;
  return _result;
}
modelica_metatype boxptr_Modelica_Utilities_Strings_compare(threadData_t *threadData, modelica_metatype _string1, modelica_metatype _string2, modelica_metatype _caseSensitive)
{
  modelica_integer tmp1;
  modelica_integer _result;
  modelica_metatype out_result;
  tmp1 = mmc_unbox_integer(_caseSensitive);
  _result = omc_Modelica_Utilities_Strings_compare(threadData, _string1, _string2, tmp1);
  out_result = mmc_mk_icon(_result);
  return out_result;
}

DLLExport
modelica_integer omc_Modelica_Utilities_Strings_find(threadData_t *threadData, modelica_string _string, modelica_string _searchString, modelica_integer _startIndex, modelica_boolean _caseSensitive)
{
  modelica_integer _index;
  modelica_integer _lengthSearchString;
  modelica_integer _i;
  modelica_integer _len;
  modelica_integer _i_max;
  _tailrecursive: OMC_LABEL_UNUSED
  // _index has no default value.
  _lengthSearchString = omc_Modelica_Utilities_Strings_length(threadData, _searchString);
  _i = _startIndex;
  _len = _lengthSearchString - ((modelica_integer) 1);
  _i_max = omc_Modelica_Utilities_Strings_length(threadData, _string) - _lengthSearchString + ((modelica_integer) 1);
  _index = ((modelica_integer) 0);

  while(1)
  {
    if(!(_i <= _i_max)) break;
    if(omc_Modelica_Utilities_Strings_isEqual(threadData, omc_Modelica_Utilities_Strings_substring(threadData, _string, _i, _i + _len), _searchString, _caseSensitive))
    {
      _index = _i;

      _i = _i_max + ((modelica_integer) 1);
    }
    else
    {
      _i = _i + ((modelica_integer) 1);
    }
  }
  _return: OMC_LABEL_UNUSED
  return _index;
}
modelica_metatype boxptr_Modelica_Utilities_Strings_find(threadData_t *threadData, modelica_metatype _string, modelica_metatype _searchString, modelica_metatype _startIndex, modelica_metatype _caseSensitive)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer _index;
  modelica_metatype out_index;
  tmp1 = mmc_unbox_integer(_startIndex);
  tmp2 = mmc_unbox_integer(_caseSensitive);
  _index = omc_Modelica_Utilities_Strings_find(threadData, _string, _searchString, tmp1, tmp2);
  out_index = mmc_mk_icon(_index);
  return out_index;
}

DLLExport
modelica_boolean omc_Modelica_Utilities_Strings_isEqual(threadData_t *threadData, modelica_string _string1, modelica_string _string2, modelica_boolean _caseSensitive)
{
  modelica_boolean _identical;
  _tailrecursive: OMC_LABEL_UNUSED
  // _identical has no default value.
  _identical = (omc_Modelica_Utilities_Strings_compare(threadData, _string1, _string2, _caseSensitive) == 2);
  _return: OMC_LABEL_UNUSED
  return _identical;
}
modelica_metatype boxptr_Modelica_Utilities_Strings_isEqual(threadData_t *threadData, modelica_metatype _string1, modelica_metatype _string2, modelica_metatype _caseSensitive)
{
  modelica_integer tmp1;
  modelica_boolean _identical;
  modelica_metatype out_identical;
  tmp1 = mmc_unbox_integer(_caseSensitive);
  _identical = omc_Modelica_Utilities_Strings_isEqual(threadData, _string1, _string2, tmp1);
  out_identical = mmc_mk_icon(_identical);
  return out_identical;
}

modelica_integer omc_Modelica_Utilities_Strings_length(threadData_t *threadData, modelica_string _string)
{
  int _result_ext;
  modelica_integer _result;
  // _result has no default value.
  _result_ext = ModelicaStrings_length(MMC_STRINGDATA(_string));
  _result = (modelica_integer)_result_ext;
  return _result;
}
modelica_metatype boxptr_Modelica_Utilities_Strings_length(threadData_t *threadData, modelica_metatype _string)
{
  modelica_integer _result;
  modelica_metatype out_result;
  _result = omc_Modelica_Utilities_Strings_length(threadData, _string);
  out_result = mmc_mk_icon(_result);
  return out_result;
}

DLLExport
modelica_string omc_Modelica_Utilities_Strings_repeat(threadData_t *threadData, modelica_integer _n, modelica_string _string)
{
  modelica_string _repeatedString = NULL;
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer tmp3;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  _tailrecursive: OMC_LABEL_UNUSED
  // _repeatedString has no default value.
  _repeatedString = _OMC_LIT0;

  tmp1 = ((modelica_integer) 1); tmp2 = 1; tmp3 = _n;
  if(!(((tmp2 > 0) && (tmp1 > tmp3)) || ((tmp2 < 0) && (tmp1 < tmp3))))
  {
    modelica_integer _i;
    for(_i = ((modelica_integer) 1); in_range_integer(_i, tmp1, tmp3); _i += tmp2)
    {
      tmpMeta[0] = stringAppend(_repeatedString,_string);
      _repeatedString = tmpMeta[0];
    }
  }
  _return: OMC_LABEL_UNUSED
  return _repeatedString;
}
modelica_metatype boxptr_Modelica_Utilities_Strings_repeat(threadData_t *threadData, modelica_metatype _n, modelica_metatype _string)
{
  modelica_integer tmp1;
  modelica_string _repeatedString = NULL;
  tmp1 = mmc_unbox_integer(_n);
  _repeatedString = omc_Modelica_Utilities_Strings_repeat(threadData, tmp1, _string);
  /* skip box _repeatedString; String */
  return _repeatedString;
}

DLLExport
modelica_real omc_Modelica_Utilities_Strings_scanReal(threadData_t *threadData, modelica_string _string, modelica_integer _startIndex, modelica_boolean _unsigned, modelica_string _message, modelica_integer *out_nextIndex)
{
  modelica_real _number;
  modelica_integer _nextIndex;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  _tailrecursive: OMC_LABEL_UNUSED
  // _number has no default value.
  // _nextIndex has no default value.
  _nextIndex = omc_Modelica_Utilities_Strings_Advanced_scanReal(threadData, _string, _startIndex, _unsigned ,&_number);

  if((_nextIndex == _startIndex))
  {
    _nextIndex = omc_Modelica_Utilities_Strings_Advanced_skipWhiteSpace(threadData, _string, _startIndex);

    if(_unsigned)
    {
      tmpMeta[0] = stringAppend(_OMC_LIT3,_message);
      omc_Modelica_Utilities_Strings_syntaxError(threadData, _string, _nextIndex, tmpMeta[0]);
    }
    else
    {
      tmpMeta[0] = stringAppend(_OMC_LIT2,_message);
      omc_Modelica_Utilities_Strings_syntaxError(threadData, _string, _nextIndex, tmpMeta[0]);
    }
  }
  _return: OMC_LABEL_UNUSED
  if (out_nextIndex) { *out_nextIndex = _nextIndex; }
  return _number;
}
modelica_metatype boxptr_Modelica_Utilities_Strings_scanReal(threadData_t *threadData, modelica_metatype _string, modelica_metatype _startIndex, modelica_metatype _unsigned, modelica_metatype _message, modelica_metatype *out_nextIndex)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer _nextIndex;
  modelica_real _number;
  modelica_metatype out_number;
  tmp1 = mmc_unbox_integer(_startIndex);
  tmp2 = mmc_unbox_integer(_unsigned);
  _number = omc_Modelica_Utilities_Strings_scanReal(threadData, _string, tmp1, tmp2, _message, &_nextIndex);
  out_number = mmc_mk_rcon(_number);
  if (out_nextIndex) { *out_nextIndex = mmc_mk_icon(_nextIndex); }
  return out_number;
}

modelica_string omc_Modelica_Utilities_Strings_substring(threadData_t *threadData, modelica_string _string, modelica_integer _startIndex, modelica_integer _endIndex)
{
  int _startIndex_ext;
  int _endIndex_ext;
  const char* _result_ext;
  modelica_string _result = NULL;
  // _result has no default value.
  _startIndex_ext = (int)_startIndex;

  _endIndex_ext = (int)_endIndex;
  _result_ext = ModelicaStrings_substring(MMC_STRINGDATA(_string), _startIndex_ext, _endIndex_ext);
  _result = (modelica_string)mmc_mk_scon(_result_ext);
  return _result;
}
modelica_metatype boxptr_Modelica_Utilities_Strings_substring(threadData_t *threadData, modelica_metatype _string, modelica_metatype _startIndex, modelica_metatype _endIndex)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_string _result = NULL;
  tmp1 = mmc_unbox_integer(_startIndex);
  tmp2 = mmc_unbox_integer(_endIndex);
  _result = omc_Modelica_Utilities_Strings_substring(threadData, _string, tmp1, tmp2);
  /* skip box _result; String */
  return _result;
}

DLLExport
void omc_Modelica_Utilities_Strings_syntaxError(threadData_t *threadData, modelica_string _string, modelica_integer _index, modelica_string _message)
{
  modelica_integer _maxIndex;
  modelica_integer _maxLenString;
  modelica_integer _lenString;
  modelica_string _errString = NULL;
  modelica_integer _index2;
  modelica_string tmp1;
  modelica_metatype tmpMeta[8] __attribute__((unused)) = {0};
  _tailrecursive: OMC_LABEL_UNUSED
  _maxIndex = ((modelica_integer) 40);
  _maxLenString = ((modelica_integer) 60);
  _lenString = omc_Modelica_Utilities_Strings_length(threadData, _string);
  // _errString has no default value.
  _index2 = ((_index < ((modelica_integer) 1))?((modelica_integer) 1):((_index > _lenString)?_lenString:_index));
  if((_index2 <= _maxIndex))
  {
    _errString = _string;
  }
  else
  {
    tmpMeta[0] = stringAppend(_OMC_LIT4,omc_Modelica_Utilities_Strings_substring(threadData, _string, _index2 - _maxIndex, _lenString));
    _errString = tmpMeta[0];

    _index2 = _maxIndex + ((modelica_integer) 5);
  }

  if((omc_Modelica_Utilities_Strings_length(threadData, _errString) > _maxLenString))
  {
    tmpMeta[0] = stringAppend(omc_Modelica_Utilities_Strings_substring(threadData, _errString, ((modelica_integer) 1), _maxLenString),_OMC_LIT5);
    _errString = tmpMeta[0];
  }

  tmp1 = modelica_integer_to_modelica_string(_index, ((modelica_integer) 0), 1);
  tmpMeta[0] = stringAppend(_OMC_LIT6,tmp1);
  tmpMeta[1] = stringAppend(tmpMeta[0],_OMC_LIT7);
  tmpMeta[2] = stringAppend(tmpMeta[1],_errString);
  tmpMeta[3] = stringAppend(tmpMeta[2],_OMC_LIT8);
  tmpMeta[4] = stringAppend(tmpMeta[3],omc_Modelica_Utilities_Strings_repeat(threadData, _index2 - ((modelica_integer) 1), _OMC_LIT1));
  tmpMeta[5] = stringAppend(tmpMeta[4],_OMC_LIT9);
  tmpMeta[6] = stringAppend(tmpMeta[5],_OMC_LIT8);
  tmpMeta[7] = stringAppend(tmpMeta[6],_message);
  omc_Modelica_Utilities_Streams_error(threadData, tmpMeta[7]);
  _return: OMC_LABEL_UNUSED
  return;
}
void boxptr_Modelica_Utilities_Strings_syntaxError(threadData_t *threadData, modelica_metatype _string, modelica_metatype _index, modelica_metatype _message)
{
  modelica_integer tmp1;
  tmp1 = mmc_unbox_integer(_index);
  omc_Modelica_Utilities_Strings_syntaxError(threadData, _string, tmp1, _message);
  return;
}

modelica_integer omc_Modelica_Utilities_Strings_Advanced_scanReal(threadData_t *threadData, modelica_string _string, modelica_integer _startIndex, modelica_boolean _unsigned, modelica_real *out_number)
{
  int _startIndex_ext;
  int _unsigned_ext;
  int _nextIndex_ext;
  double _number_ext;
  modelica_integer _nextIndex;
  modelica_real _number;
  // _nextIndex has no default value.
  // _number has no default value.
  _startIndex_ext = (int)_startIndex;

  _unsigned_ext = (int)_unsigned;
  ModelicaStrings_scanReal(MMC_STRINGDATA(_string), _startIndex_ext, _unsigned_ext, &_nextIndex_ext, &_number_ext);
  _nextIndex = (modelica_integer)_nextIndex_ext;
  _number = (modelica_real)_number_ext;
  if (out_number) { *out_number = _number; }
  return _nextIndex;
}
modelica_metatype boxptr_Modelica_Utilities_Strings_Advanced_scanReal(threadData_t *threadData, modelica_metatype _string, modelica_metatype _startIndex, modelica_metatype _unsigned, modelica_metatype *out_number)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_real _number;
  modelica_integer _nextIndex;
  modelica_metatype out_nextIndex;
  tmp1 = mmc_unbox_integer(_startIndex);
  tmp2 = mmc_unbox_integer(_unsigned);
  _nextIndex = omc_Modelica_Utilities_Strings_Advanced_scanReal(threadData, _string, tmp1, tmp2, &_number);
  out_nextIndex = mmc_mk_icon(_nextIndex);
  if (out_number) { *out_number = mmc_mk_rcon(_number); }
  return out_nextIndex;
}

modelica_integer omc_Modelica_Utilities_Strings_Advanced_skipWhiteSpace(threadData_t *threadData, modelica_string _string, modelica_integer _startIndex)
{
  int _startIndex_ext;
  int _nextIndex_ext;
  modelica_integer _nextIndex;
  // _nextIndex has no default value.
  _startIndex_ext = (int)_startIndex;
  _nextIndex_ext = ModelicaStrings_skipWhiteSpace(MMC_STRINGDATA(_string), _startIndex_ext);
  _nextIndex = (modelica_integer)_nextIndex_ext;
  return _nextIndex;
}
modelica_metatype boxptr_Modelica_Utilities_Strings_Advanced_skipWhiteSpace(threadData_t *threadData, modelica_metatype _string, modelica_metatype _startIndex)
{
  modelica_integer tmp1;
  modelica_integer _nextIndex;
  modelica_metatype out_nextIndex;
  tmp1 = mmc_unbox_integer(_startIndex);
  _nextIndex = omc_Modelica_Utilities_Strings_Advanced_skipWhiteSpace(threadData, _string, tmp1);
  out_nextIndex = mmc_mk_icon(_nextIndex);
  return out_nextIndex;
}

DLLExport
modelica_real omc_T05__3DICE__Integration_T05__Interface3DICE_Parse(threadData_t *threadData, modelica_string _args, modelica_real *out_y0)
{
  modelica_real _x0;
  modelica_real _y0;
  modelica_integer _nextIndex;
  _tailrecursive: OMC_LABEL_UNUSED
  // _x0 has no default value.
  // _y0 has no default value.
  // _nextIndex has no default value.
  _nextIndex = omc_Modelica_Utilities_Strings_find(threadData, _args, _OMC_LIT1, ((modelica_integer) 1), 1);

  _x0 = omc_Modelica_Utilities_Strings_scanReal(threadData, _args, _nextIndex, 0, _OMC_LIT0 ,&_nextIndex);

  _y0 = omc_Modelica_Utilities_Strings_scanReal(threadData, _args, _nextIndex, 0, _OMC_LIT0 ,&_nextIndex);
  _return: OMC_LABEL_UNUSED
  if (out_y0) { *out_y0 = _y0; }
  return _x0;
}
modelica_metatype boxptr_T05__3DICE__Integration_T05__Interface3DICE_Parse(threadData_t *threadData, modelica_metatype _args, modelica_metatype *out_y0)
{
  modelica_real _y0;
  modelica_real _x0;
  modelica_metatype out_x0;
  _x0 = omc_T05__3DICE__Integration_T05__Interface3DICE_Parse(threadData, _args, &_y0);
  out_x0 = mmc_mk_rcon(_x0);
  if (out_y0) { *out_y0 = mmc_mk_rcon(_y0); }
  return out_x0;
}

#ifdef __cplusplus
}
#endif
