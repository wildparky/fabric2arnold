#ifndef __KL2EDK_AUTOGEN_Mat22__
#define __KL2EDK_AUTOGEN_Mat22__

#ifdef KL2EDK_INCLUDE_MESSAGES
  #pragma message ( "Including 'Mat22.h'" )
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
#include "Vec2.h"

namespace Fabric { namespace EDK { namespace KL {

// KL struct 'Mat22'
// Defined at Mat22.kl:19:1

struct Mat22
{
  typedef Mat22 &Result;
  typedef Mat22 const &INParam;
  typedef Mat22 &IOParam;
  
  Vec2 row0;
  Vec2 row1;
};

inline void Traits<Mat22>::ConstructEmpty( Mat22 &val )
{
  Traits< Vec2 >::ConstructEmpty( val.row0 );
  Traits< Vec2 >::ConstructEmpty( val.row1 );
}
inline void Traits<Mat22>::ConstructCopy( Mat22 &lhs, Mat22 const &rhs )
{
  Traits< Vec2 >::ConstructCopy( lhs.row0, rhs.row0 );
  Traits< Vec2 >::ConstructCopy( lhs.row1, rhs.row1 );
}
inline void Traits<Mat22>::AssignCopy( Mat22 &lhs, Mat22 const &rhs )
{
  Traits< Vec2 >::AssignCopy( lhs.row0, rhs.row0 );
  Traits< Vec2 >::AssignCopy( lhs.row1, rhs.row1 );
}
inline void Traits<Mat22>::Destruct( Mat22 &val )
{
  Traits< Vec2 >::Destruct( val.row1 );
  Traits< Vec2 >::Destruct( val.row0 );
}
}}}

#endif // __KL2EDK_AUTOGEN_Mat22__
