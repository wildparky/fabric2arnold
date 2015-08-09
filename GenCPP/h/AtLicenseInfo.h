#ifndef __KL2EDK_AUTOGEN_AtLicenseInfo__
#define __KL2EDK_AUTOGEN_AtLicenseInfo__

#ifdef KL2EDK_INCLUDE_MESSAGES
  #pragma message ( "Including 'AtLicenseInfo.h'" )
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

// KL struct 'AtLicenseInfo'
// Defined at E:\dev\HordeSoftware\fabric2arnold\GenKL/\ai_license.kl:10:1

struct AtLicenseInfo
{
  typedef AtLicenseInfo &Result;
  typedef AtLicenseInfo const &INParam;
  typedef AtLicenseInfo &IOParam;
  typedef AtLicenseInfo &OUTParam;
  
  Boolean used;
  String name;
  String ver;
  String exp;
  String options;
  SInt32 count;
  SInt32 current_inuse;
  SInt32 current_resuse;
  SInt32 hbased;
  SInt32 hold;
  SInt32 max_roam;
  SInt32 max_share;
  SInt32 min_remove;
  SInt32 min_checkout;
  SInt32 min_timeout;
  SInt32 nres;
  SInt32 num_roam_allowed;
  SInt32 roaming;
  SInt32 share;
  SInt32 soft_limit;
  SInt32 thisroam;
  SInt32 timeout;
  SInt32 tz;
  SInt32 tokens;
  SInt32 type;
  SInt32 ubased;
};

inline void Traits<AtLicenseInfo>::ConstructEmpty( AtLicenseInfo &val )
{
  Traits< Boolean >::ConstructEmpty( val.used );
  Traits< String >::ConstructEmpty( val.name );
  Traits< String >::ConstructEmpty( val.ver );
  Traits< String >::ConstructEmpty( val.exp );
  Traits< String >::ConstructEmpty( val.options );
  Traits< SInt32 >::ConstructEmpty( val.count );
  Traits< SInt32 >::ConstructEmpty( val.current_inuse );
  Traits< SInt32 >::ConstructEmpty( val.current_resuse );
  Traits< SInt32 >::ConstructEmpty( val.hbased );
  Traits< SInt32 >::ConstructEmpty( val.hold );
  Traits< SInt32 >::ConstructEmpty( val.max_roam );
  Traits< SInt32 >::ConstructEmpty( val.max_share );
  Traits< SInt32 >::ConstructEmpty( val.min_remove );
  Traits< SInt32 >::ConstructEmpty( val.min_checkout );
  Traits< SInt32 >::ConstructEmpty( val.min_timeout );
  Traits< SInt32 >::ConstructEmpty( val.nres );
  Traits< SInt32 >::ConstructEmpty( val.num_roam_allowed );
  Traits< SInt32 >::ConstructEmpty( val.roaming );
  Traits< SInt32 >::ConstructEmpty( val.share );
  Traits< SInt32 >::ConstructEmpty( val.soft_limit );
  Traits< SInt32 >::ConstructEmpty( val.thisroam );
  Traits< SInt32 >::ConstructEmpty( val.timeout );
  Traits< SInt32 >::ConstructEmpty( val.tz );
  Traits< SInt32 >::ConstructEmpty( val.tokens );
  Traits< SInt32 >::ConstructEmpty( val.type );
  Traits< SInt32 >::ConstructEmpty( val.ubased );
}
inline void Traits<AtLicenseInfo>::ConstructCopy( AtLicenseInfo &lhs, AtLicenseInfo const &rhs )
{
  Traits< Boolean >::ConstructCopy( lhs.used, rhs.used );
  Traits< String >::ConstructCopy( lhs.name, rhs.name );
  Traits< String >::ConstructCopy( lhs.ver, rhs.ver );
  Traits< String >::ConstructCopy( lhs.exp, rhs.exp );
  Traits< String >::ConstructCopy( lhs.options, rhs.options );
  Traits< SInt32 >::ConstructCopy( lhs.count, rhs.count );
  Traits< SInt32 >::ConstructCopy( lhs.current_inuse, rhs.current_inuse );
  Traits< SInt32 >::ConstructCopy( lhs.current_resuse, rhs.current_resuse );
  Traits< SInt32 >::ConstructCopy( lhs.hbased, rhs.hbased );
  Traits< SInt32 >::ConstructCopy( lhs.hold, rhs.hold );
  Traits< SInt32 >::ConstructCopy( lhs.max_roam, rhs.max_roam );
  Traits< SInt32 >::ConstructCopy( lhs.max_share, rhs.max_share );
  Traits< SInt32 >::ConstructCopy( lhs.min_remove, rhs.min_remove );
  Traits< SInt32 >::ConstructCopy( lhs.min_checkout, rhs.min_checkout );
  Traits< SInt32 >::ConstructCopy( lhs.min_timeout, rhs.min_timeout );
  Traits< SInt32 >::ConstructCopy( lhs.nres, rhs.nres );
  Traits< SInt32 >::ConstructCopy( lhs.num_roam_allowed, rhs.num_roam_allowed );
  Traits< SInt32 >::ConstructCopy( lhs.roaming, rhs.roaming );
  Traits< SInt32 >::ConstructCopy( lhs.share, rhs.share );
  Traits< SInt32 >::ConstructCopy( lhs.soft_limit, rhs.soft_limit );
  Traits< SInt32 >::ConstructCopy( lhs.thisroam, rhs.thisroam );
  Traits< SInt32 >::ConstructCopy( lhs.timeout, rhs.timeout );
  Traits< SInt32 >::ConstructCopy( lhs.tz, rhs.tz );
  Traits< SInt32 >::ConstructCopy( lhs.tokens, rhs.tokens );
  Traits< SInt32 >::ConstructCopy( lhs.type, rhs.type );
  Traits< SInt32 >::ConstructCopy( lhs.ubased, rhs.ubased );
}
inline void Traits<AtLicenseInfo>::AssignCopy( AtLicenseInfo &lhs, AtLicenseInfo const &rhs )
{
  Traits< Boolean >::AssignCopy( lhs.used, rhs.used );
  Traits< String >::AssignCopy( lhs.name, rhs.name );
  Traits< String >::AssignCopy( lhs.ver, rhs.ver );
  Traits< String >::AssignCopy( lhs.exp, rhs.exp );
  Traits< String >::AssignCopy( lhs.options, rhs.options );
  Traits< SInt32 >::AssignCopy( lhs.count, rhs.count );
  Traits< SInt32 >::AssignCopy( lhs.current_inuse, rhs.current_inuse );
  Traits< SInt32 >::AssignCopy( lhs.current_resuse, rhs.current_resuse );
  Traits< SInt32 >::AssignCopy( lhs.hbased, rhs.hbased );
  Traits< SInt32 >::AssignCopy( lhs.hold, rhs.hold );
  Traits< SInt32 >::AssignCopy( lhs.max_roam, rhs.max_roam );
  Traits< SInt32 >::AssignCopy( lhs.max_share, rhs.max_share );
  Traits< SInt32 >::AssignCopy( lhs.min_remove, rhs.min_remove );
  Traits< SInt32 >::AssignCopy( lhs.min_checkout, rhs.min_checkout );
  Traits< SInt32 >::AssignCopy( lhs.min_timeout, rhs.min_timeout );
  Traits< SInt32 >::AssignCopy( lhs.nres, rhs.nres );
  Traits< SInt32 >::AssignCopy( lhs.num_roam_allowed, rhs.num_roam_allowed );
  Traits< SInt32 >::AssignCopy( lhs.roaming, rhs.roaming );
  Traits< SInt32 >::AssignCopy( lhs.share, rhs.share );
  Traits< SInt32 >::AssignCopy( lhs.soft_limit, rhs.soft_limit );
  Traits< SInt32 >::AssignCopy( lhs.thisroam, rhs.thisroam );
  Traits< SInt32 >::AssignCopy( lhs.timeout, rhs.timeout );
  Traits< SInt32 >::AssignCopy( lhs.tz, rhs.tz );
  Traits< SInt32 >::AssignCopy( lhs.tokens, rhs.tokens );
  Traits< SInt32 >::AssignCopy( lhs.type, rhs.type );
  Traits< SInt32 >::AssignCopy( lhs.ubased, rhs.ubased );
}
inline void Traits<AtLicenseInfo>::Destruct( AtLicenseInfo &val )
{
  Traits< SInt32 >::Destruct( val.ubased );
  Traits< SInt32 >::Destruct( val.type );
  Traits< SInt32 >::Destruct( val.tokens );
  Traits< SInt32 >::Destruct( val.tz );
  Traits< SInt32 >::Destruct( val.timeout );
  Traits< SInt32 >::Destruct( val.thisroam );
  Traits< SInt32 >::Destruct( val.soft_limit );
  Traits< SInt32 >::Destruct( val.share );
  Traits< SInt32 >::Destruct( val.roaming );
  Traits< SInt32 >::Destruct( val.num_roam_allowed );
  Traits< SInt32 >::Destruct( val.nres );
  Traits< SInt32 >::Destruct( val.min_timeout );
  Traits< SInt32 >::Destruct( val.min_checkout );
  Traits< SInt32 >::Destruct( val.min_remove );
  Traits< SInt32 >::Destruct( val.max_share );
  Traits< SInt32 >::Destruct( val.max_roam );
  Traits< SInt32 >::Destruct( val.hold );
  Traits< SInt32 >::Destruct( val.hbased );
  Traits< SInt32 >::Destruct( val.current_resuse );
  Traits< SInt32 >::Destruct( val.current_inuse );
  Traits< SInt32 >::Destruct( val.count );
  Traits< String >::Destruct( val.options );
  Traits< String >::Destruct( val.exp );
  Traits< String >::Destruct( val.ver );
  Traits< String >::Destruct( val.name );
  Traits< Boolean >::Destruct( val.used );
}
}}}

#endif // __KL2EDK_AUTOGEN_AtLicenseInfo__
