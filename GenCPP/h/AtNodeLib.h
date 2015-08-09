#ifndef __KL2EDK_AUTOGEN_AtNodeLib__
#define __KL2EDK_AUTOGEN_AtNodeLib__

#ifdef KL2EDK_INCLUDE_MESSAGES
  #pragma message ( "Including 'AtNodeLib.h'" )
#endif

////////////////////////////////////////////////////////////////
// THIS FILE IS AUTOMATICALLY GENERATED -- DO NOT MODIFY!!
////////////////////////////////////////////////////////////////
// Generated by kl2edk version 2.1.0-alpha2
////////////////////////////////////////////////////////////////

#include <FabricEDK.h>
#if FABRIC_EDK_VERSION_MAJ != 2 || FABRIC_EDK_VERSION_MIN != 1
# error "This file needs to be rebuilt for the current EDK version!"
#endif

#include "global.h"

namespace Fabric { namespace EDK { namespace KL {

// KL struct 'AtNodeLib'
// Defined at E:\dev\HordeSoftware\DemoArnoldApp\fabric2arnold\GenKL/\ai_plugins.kl:10:1

struct AtNodeLib
{
  typedef AtNodeLib &Result;
  typedef AtNodeLib const &INParam;
  typedef AtNodeLib &IOParam;
  typedef AtNodeLib &OUTParam;
  
  SInt32 node_type;
  UInt8 output_type;
  String name;
  Data methods;
  String version;
};

inline void Traits<AtNodeLib>::ConstructEmpty( AtNodeLib &val )
{
  Traits< SInt32 >::ConstructEmpty( val.node_type );
  Traits< UInt8 >::ConstructEmpty( val.output_type );
  Traits< String >::ConstructEmpty( val.name );
  Traits< Data >::ConstructEmpty( val.methods );
  Traits< String >::ConstructEmpty( val.version );
}
inline void Traits<AtNodeLib>::ConstructCopy( AtNodeLib &lhs, AtNodeLib const &rhs )
{
  Traits< SInt32 >::ConstructCopy( lhs.node_type, rhs.node_type );
  Traits< UInt8 >::ConstructCopy( lhs.output_type, rhs.output_type );
  Traits< String >::ConstructCopy( lhs.name, rhs.name );
  Traits< Data >::ConstructCopy( lhs.methods, rhs.methods );
  Traits< String >::ConstructCopy( lhs.version, rhs.version );
}
inline void Traits<AtNodeLib>::AssignCopy( AtNodeLib &lhs, AtNodeLib const &rhs )
{
  Traits< SInt32 >::AssignCopy( lhs.node_type, rhs.node_type );
  Traits< UInt8 >::AssignCopy( lhs.output_type, rhs.output_type );
  Traits< String >::AssignCopy( lhs.name, rhs.name );
  Traits< Data >::AssignCopy( lhs.methods, rhs.methods );
  Traits< String >::AssignCopy( lhs.version, rhs.version );
}
inline void Traits<AtNodeLib>::Destruct( AtNodeLib &val )
{
  Traits< String >::Destruct( val.version );
  Traits< Data >::Destruct( val.methods );
  Traits< String >::Destruct( val.name );
  Traits< UInt8 >::Destruct( val.output_type );
  Traits< SInt32 >::Destruct( val.node_type );
}
}}}

#endif // __KL2EDK_AUTOGEN_AtNodeLib__
