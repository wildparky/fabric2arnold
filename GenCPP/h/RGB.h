#ifndef __KL2EDK_AUTOGEN_RGB__
#define __KL2EDK_AUTOGEN_RGB__

#ifdef KL2EDK_INCLUDE_MESSAGES
  #pragma message ( "Including 'RGB.h'" )
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

namespace Fabric { namespace EDK { namespace KL {

// KL struct 'RGB'
// Defined at RGB.kl:15:1

struct RGB
{
  typedef RGB &Result;
  typedef RGB const &INParam;
  typedef RGB &IOParam;
  
  UInt8 r;
  UInt8 g;
  UInt8 b;
};

inline void Traits<RGB>::ConstructEmpty( RGB &val )
{
  Traits< UInt8 >::ConstructEmpty( val.r );
  Traits< UInt8 >::ConstructEmpty( val.g );
  Traits< UInt8 >::ConstructEmpty( val.b );
}
inline void Traits<RGB>::ConstructCopy( RGB &lhs, RGB const &rhs )
{
  Traits< UInt8 >::ConstructCopy( lhs.r, rhs.r );
  Traits< UInt8 >::ConstructCopy( lhs.g, rhs.g );
  Traits< UInt8 >::ConstructCopy( lhs.b, rhs.b );
}
inline void Traits<RGB>::AssignCopy( RGB &lhs, RGB const &rhs )
{
  Traits< UInt8 >::AssignCopy( lhs.r, rhs.r );
  Traits< UInt8 >::AssignCopy( lhs.g, rhs.g );
  Traits< UInt8 >::AssignCopy( lhs.b, rhs.b );
}
inline void Traits<RGB>::Destruct( RGB &val )
{
  Traits< UInt8 >::Destruct( val.b );
  Traits< UInt8 >::Destruct( val.g );
  Traits< UInt8 >::Destruct( val.r );
}
}}}

#endif // __KL2EDK_AUTOGEN_RGB__
