#ifndef __KL2EDK_AUTOGEN_AtBucket__
#define __KL2EDK_AUTOGEN_AtBucket__

#ifdef KL2EDK_INCLUDE_MESSAGES
  #pragma message ( "Including 'AtBucket.h'" )
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

// KL struct 'AtBucket'
// Defined at R:\src\HordeSoftware\Fabric2Arnold\GenKL/\_opaque_types.kl:13:1

struct AtBucket
{
  typedef AtBucket &Result;
  typedef AtBucket const &INParam;
  typedef AtBucket &IOParam;
  
  Data _handle;
};

inline void Traits<AtBucket>::ConstructEmpty( AtBucket &val )
{
  Traits< Data >::ConstructEmpty( val._handle );
}
inline void Traits<AtBucket>::ConstructCopy( AtBucket &lhs, AtBucket const &rhs )
{
  Traits< Data >::ConstructCopy( lhs._handle, rhs._handle );
}
inline void Traits<AtBucket>::AssignCopy( AtBucket &lhs, AtBucket const &rhs )
{
  Traits< Data >::AssignCopy( lhs._handle, rhs._handle );
}
inline void Traits<AtBucket>::Destruct( AtBucket &val )
{
  Traits< Data >::Destruct( val._handle );
}
}}}

#endif // __KL2EDK_AUTOGEN_AtBucket__
