#ifndef __KL2EDK_AUTOGEN_Euler__
#define __KL2EDK_AUTOGEN_Euler__

#ifdef KL2EDK_INCLUDE_MESSAGES
  #pragma message ( "Including 'Euler.h'" )
#endif

////////////////////////////////////////////////////////////////
// THIS FILE IS AUTOMATICALLY GENERATED -- DO NOT MODIFY!!
////////////////////////////////////////////////////////////////
// Generated by kl2edk version 1.15.3
////////////////////////////////////////////////////////////////

#include <FabricEDK.h>
#if FABRIC_EDK_VERSION_MAJ != 1 || FABRIC_EDK_VERSION_MIN != 15
# error "This file needs to be rebuilt for the current EDK version!"
#endif

#include "global.h"
#include "RotationOrder.h"

namespace Fabric { namespace EDK { namespace KL {

// KL struct 'Euler'
// Defined at Euler.kl:20:1

struct Euler
{
  typedef Euler &Result;
  typedef Euler const &INParam;
  typedef Euler &IOParam;
  
  Float32 x;
  Float32 y;
  Float32 z;
  RotationOrder ro;
};

inline void Traits<Euler>::ConstructEmpty( Euler &val )
{
  Traits< Float32 >::ConstructEmpty( val.x );
  Traits< Float32 >::ConstructEmpty( val.y );
  Traits< Float32 >::ConstructEmpty( val.z );
  Traits< RotationOrder >::ConstructEmpty( val.ro );
}
inline void Traits<Euler>::ConstructCopy( Euler &lhs, Euler const &rhs )
{
  Traits< Float32 >::ConstructCopy( lhs.x, rhs.x );
  Traits< Float32 >::ConstructCopy( lhs.y, rhs.y );
  Traits< Float32 >::ConstructCopy( lhs.z, rhs.z );
  Traits< RotationOrder >::ConstructCopy( lhs.ro, rhs.ro );
}
inline void Traits<Euler>::AssignCopy( Euler &lhs, Euler const &rhs )
{
  Traits< Float32 >::AssignCopy( lhs.x, rhs.x );
  Traits< Float32 >::AssignCopy( lhs.y, rhs.y );
  Traits< Float32 >::AssignCopy( lhs.z, rhs.z );
  Traits< RotationOrder >::AssignCopy( lhs.ro, rhs.ro );
}
inline void Traits<Euler>::Destruct( Euler &val )
{
  Traits< RotationOrder >::Destruct( val.ro );
  Traits< Float32 >::Destruct( val.z );
  Traits< Float32 >::Destruct( val.y );
  Traits< Float32 >::Destruct( val.x );
}
}}}

#endif // __KL2EDK_AUTOGEN_Euler__
