////////////////////////////////////////////////////////////////
// THIS FILE IS AUTOMATICALLY GENERATED -- DO NOT MODIFY!!
// USE COPY & PASTE TO MAKE USE OF THE FUNCTION IMPLEMENTATIONS!!
////////////////////////////////////////////////////////////////
// Generated by kl2edk version 2.0.0
////////////////////////////////////////////////////////////////

#include "AtParamValue_functions.h"

#include "_IncludeAll.h"

using namespace Fabric::EDK;


FABRIC_EXT_EXPORT Fabric::EDK::KL::UInt8 _fe_AtParamValueAsUInt8(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AtParamValue >::INParam this_
)
{
  F2A_TRY_STATEMENT("_fe_AtParamValueAsUInt8")

  AtParamValue* f2aThis_ = NULL;
  if(!KlParamValue_to_AtParamValue(this_, f2aThis_)){
    setError("Error in _fe_AtParamValueAsUInt8. unable to convert: this_");
    return 0;
  }
  AtByte f2a_result = f2aThis_->BYTE;
  KL::UInt8 _result;
  AtByte_to_UInt8(f2a_result, _result);
  return _result;

  F2A_CATCH_STATEMENT_RETURN("_fe_AtParamValueAsUInt8", )
}

FABRIC_EXT_EXPORT Fabric::EDK::KL::UInt32 _fe_AtParamValueAsUInt32(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AtParamValue >::INParam this_
)
{
  F2A_TRY_STATEMENT("_fe_AtParamValueAsUInt32")

  AtParamValue* f2aThis_ = NULL;
  if(!KlParamValue_to_AtParamValue(this_, f2aThis_)){
    setError("Error in _fe_AtParamValueAsUInt32. unable to convert: this_");
    return 0;
  }
  AtUInt32 f2a_result = f2aThis_->UINT;
  KL::UInt32 _result;
  unsigned_int_to_UInt32(f2a_result, _result);
  return _result;

  F2A_CATCH_STATEMENT_RETURN("_fe_AtParamValueAsUInt32", )
}

FABRIC_EXT_EXPORT Fabric::EDK::KL::SInt32 _fe_AtParamValueAsSInt32(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AtParamValue >::INParam this_
)
{
  F2A_TRY_STATEMENT("_fe_AtParamValueAsSInt32")

  AtParamValue* f2aThis_ = NULL;
  if(!KlParamValue_to_AtParamValue(this_, f2aThis_)){
    setError("Error in _fe_AtParamValueAsSInt32. unable to convert: this_");
    return 0;
  }
  int f2a_result = f2aThis_->INT;
  KL::SInt32 _result;
  int_to_SInt32(f2a_result, _result);
  return _result;

  F2A_CATCH_STATEMENT_RETURN("_fe_AtParamValueAsSInt32", )
}

FABRIC_EXT_EXPORT Fabric::EDK::KL::Float32 _fe_AtParamValueAsFloat32(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AtParamValue >::INParam this_
)
{
  F2A_TRY_STATEMENT("_fe_AtParamValueAsFloat32")

  AtParamValue* f2aThis_ = NULL;
  if(!KlParamValue_to_AtParamValue(this_, f2aThis_)){
    setError("Error in _fe_AtParamValueAsFloat32. unable to convert: this_");
    return 0;
  }
  float f2a_result = f2aThis_->FLT;
  KL::Float32 _result;
  float_to_Float32(f2a_result, _result);
  return _result;

  F2A_CATCH_STATEMENT_RETURN("_fe_AtParamValueAsFloat32", )
}

FABRIC_EXT_EXPORT void _fe_AtParamValueAsVec3(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::Vec3 >::Result _result,
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AtParamValue >::INParam this_
)
{
  F2A_TRY_STATEMENT("_fe_AtParamValueAsVec3")

  AtParamValue* f2aThis_ = NULL;
  if(!KlParamValue_to_AtParamValue(this_, f2aThis_)){
    setError("Error in _fe_AtParamValueAsVec3. unable to convert: this_");
    return;
  }
  AtVector f2a_result = f2aThis_->VEC;
  AtPoint_to_Vec3(f2a_result, _result);

  F2A_CATCH_STATEMENT("_fe_AtParamValueAsVec3")
}

FABRIC_EXT_EXPORT void _fe_AtParamValueAsMat44(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::Mat44 >::Result _result,
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AtParamValue >::INParam this_
)
{
  F2A_TRY_STATEMENT("_fe_AtParamValueAsMat44")

  AtParamValue* f2aThis_ = NULL;
  if(!KlParamValue_to_AtParamValue(this_, f2aThis_)){
    setError("Error in _fe_AtParamValueAsMat44. unable to convert: this_");
    return;
  }
  AtMatrix_to_Mat44(*f2aThis_->pMTX, _result);

  F2A_CATCH_STATEMENT("_fe_AtParamValueAsMat44")
}

FABRIC_EXT_EXPORT void _fe_AtParamValueAsString(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::String >::Result _result,
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AtParamValue >::INParam this_
)
{
  F2A_TRY_STATEMENT("_fe_AtParamValueAsString")

  AtParamValue* f2aThis_ = NULL;
  if(!KlParamValue_to_AtParamValue(this_, f2aThis_)){
    setError("Error in _fe_AtParamValueAsString. unable to convert: this_");
    return;
  }
  const char* f2a_result = f2aThis_->STR;
  char_to_String(f2a_result, _result);

  F2A_CATCH_STATEMENT("_fe_AtParamValueAsString")
}

FABRIC_EXT_EXPORT void _fe_AtParamValueAsAtArray(
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AtArray >::Result _result,
  Fabric::EDK::KL::Traits< Fabric::EDK::KL::AtParamValue >::INParam this_
)
{
  F2A_TRY_STATEMENT("_fe_AtParamValueAsAtArray")

  AtParamValue* f2aThis_ = NULL;
  if(!KlParamValue_to_AtParamValue(this_, f2aThis_)){
    setError("Error in _fe_AtParamValueAsAtArray. unable to convert: this_");
    return;
  }
  const AtArray* parr = f2aThis_->ARRAY;
 AtArray_to_KLArray(parr, _result);

  F2A_CATCH_STATEMENT("_fe_AtParamValueAsAtArray")
}
