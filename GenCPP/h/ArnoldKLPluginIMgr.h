#ifndef __KL2EDK_AUTOGEN_ArnoldKLPluginIMgr__
#define __KL2EDK_AUTOGEN_ArnoldKLPluginIMgr__

#ifdef KL2EDK_INCLUDE_MESSAGES
  #pragma message ( "Including 'ArnoldKLPluginIMgr.h'" )
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
#include "a2fPluginShaderInterface.h"

namespace Fabric { namespace EDK { namespace KL {

// KL interface 'ArnoldKLPluginIMgr'

class ArnoldKLPluginIMgr
{
public:
  
  struct VTable
  {
    void (*RegisterKLPlugin_90A2D737E448DE49F8A0B7116473A700)(
      ObjectCore * const *objectCorePtr,
      Traits< Type >::INParam kltype,
      Traits< SInt32 >::INParam type,
      Traits< UInt8 >::INParam output_type,
      Traits< String >::INParam name,
      Traits< String >::INParam filename
      );
    void (*CreateInstance_F8E7C74E9EA833C62A6FEB78807A4EFD)(
      Traits< a2fPluginShaderInterface >::Result _result,
      ObjectCore const * const *objectCorePtr,
      Traits< String >::INParam name
      );
  };
  
  struct Bits
  {
    ObjectCore *objectCorePtr;
    SwapPtr<VTable const> const *vTableSwapPtrPtr;
  } *m_bits;
  
protected:
  
  friend struct Traits< ArnoldKLPluginIMgr >;
  
  static void ConstructEmpty( ArnoldKLPluginIMgr *self )
  {
    self->m_bits = 0;
  }
  
  static void ConstructCopy( ArnoldKLPluginIMgr *self, ArnoldKLPluginIMgr const *other )
  {
    if ( (self->m_bits = other->m_bits) )
      AtomicUInt32Increment( &self->m_bits->objectCorePtr->refCount );
  }
  
  static void AssignCopy( ArnoldKLPluginIMgr *self, ArnoldKLPluginIMgr const *other )
  {
    if ( self->m_bits != other->m_bits )
    {
      Destruct( self );
      ConstructCopy( self, other );
    }
  }
  
  static void Destruct( ArnoldKLPluginIMgr *self )
  {
    if ( self->m_bits
      && AtomicUInt32DecrementAndGetValue( &self->m_bits->objectCorePtr->refCount ) == 0 )
    {
      self->m_bits->objectCorePtr->lTableSwapPtrPtr->get()->lifecycleDestroy(
        &self->m_bits->objectCorePtr
        );
    }
  }
  
public: 
  
  typedef ArnoldKLPluginIMgr &Result;
  typedef ArnoldKLPluginIMgr const &INParam;
  typedef ArnoldKLPluginIMgr &IOParam;
  
  ArnoldKLPluginIMgr()
  {
    ConstructEmpty( this );
  }
  
  ArnoldKLPluginIMgr( ArnoldKLPluginIMgr const &that )
  {
    ConstructCopy( this, &that );
  }
  
  ArnoldKLPluginIMgr &operator =( ArnoldKLPluginIMgr const &that )
  {
    AssignCopy( this, &that );
    return *this;
  }
  
  ~ArnoldKLPluginIMgr()
  {
    Destruct( this );
  }
  
  void appendDesc( String::IOParam string ) const
  {
    if ( m_bits )
      m_bits->objectCorePtr->lTableSwapPtrPtr->get()->appendDesc( &m_bits->objectCorePtr, string );
    else string.append( "null", 4 );
  }
  
  bool isValid() const
  {
    return !!m_bits;
  }
  
  operator bool() const
  {
    return isValid();
  }
  
  bool operator !() const
  {
    return !isValid();
  }
  
  bool operator ==( INParam that )
  {
    return m_bits == that.m_bits;
  }
  
  bool operator !=( INParam that )
  {
    return m_bits != that.m_bits;
  }
  
  
  void RegisterKLPlugin(
    Traits< Type >::INParam kltype,
    Traits< SInt32 >::INParam type,
    Traits< UInt8 >::INParam output_type,
    Traits< String >::INParam name,
    Traits< String >::INParam filename
    )
  {
    m_bits->vTableSwapPtrPtr->get()->RegisterKLPlugin_90A2D737E448DE49F8A0B7116473A700(
      &m_bits->objectCorePtr,
      kltype,
      type,
      output_type,
      name,
      filename
      );
  }
  
  a2fPluginShaderInterface CreateInstance(
    Traits< String >::INParam name
    ) const
  {
    a2fPluginShaderInterface _result;
    m_bits->vTableSwapPtrPtr->get()->CreateInstance_F8E7C74E9EA833C62A6FEB78807A4EFD(
      _result,
      &m_bits->objectCorePtr,
      name
      );
    return _result;
  }
};

inline void Traits<ArnoldKLPluginIMgr>::ConstructEmpty( ArnoldKLPluginIMgr &val )
{
  ArnoldKLPluginIMgr::ConstructEmpty( &val );
}
inline void Traits<ArnoldKLPluginIMgr>::ConstructCopy( ArnoldKLPluginIMgr &lhs, ArnoldKLPluginIMgr const &rhs )
{
  ArnoldKLPluginIMgr::ConstructCopy( &lhs, &rhs );
}
inline void Traits<ArnoldKLPluginIMgr>::AssignCopy( ArnoldKLPluginIMgr &lhs, ArnoldKLPluginIMgr const &rhs )
{
  ArnoldKLPluginIMgr::AssignCopy( &lhs, &rhs );
}
inline void Traits<ArnoldKLPluginIMgr>::Destruct( ArnoldKLPluginIMgr &val )
{
  ArnoldKLPluginIMgr::Destruct( &val );
}

}}}

#endif // __KL2EDK_AUTOGEN_ArnoldKLPluginIMgr__
