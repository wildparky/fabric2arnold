#ifndef __KL2EDK_AUTOGEN_AtScrSample__
#define __KL2EDK_AUTOGEN_AtScrSample__

#ifdef KL2EDK_INCLUDE_MESSAGES
  #pragma message ( "Including 'AtScrSample.h'" )
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

// KL struct 'AtScrSample'
// Defined at R:\src\HordeSoftware\Fabric2Arnold\GenKL/\_opaque_types.kl:63:1

struct AtScrSample
{
  typedef AtScrSample &Result;
  typedef AtScrSample const &INParam;
  typedef AtScrSample &IOParam;
  
  Data _handle;
};

inline void Traits<AtScrSample>::ConstructEmpty( AtScrSample &val )
{
  Traits< Data >::ConstructEmpty( val._handle );
}
inline void Traits<AtScrSample>::ConstructCopy( AtScrSample &lhs, AtScrSample const &rhs )
{
  Traits< Data >::ConstructCopy( lhs._handle, rhs._handle );
}
inline void Traits<AtScrSample>::AssignCopy( AtScrSample &lhs, AtScrSample const &rhs )
{
  Traits< Data >::AssignCopy( lhs._handle, rhs._handle );
}
inline void Traits<AtScrSample>::Destruct( AtScrSample &val )
{
  Traits< Data >::Destruct( val._handle );
}
}}}

#endif // __KL2EDK_AUTOGEN_AtScrSample__
