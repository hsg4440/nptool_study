// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME NPParticleDict
#define R__NO_DEPRECATION

/*******************************************************************/
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#define G__DICTIONARY
#include "ROOT/RConfig.hxx"
#include "TClass.h"
#include "TDictAttributeMap.h"
#include "TInterpreter.h"
#include "TROOT.h"
#include "TBuffer.h"
#include "TMemberInspector.h"
#include "TInterpreter.h"
#include "TVirtualMutex.h"
#include "TError.h"

#ifndef G__ROOT
#define G__ROOT
#endif

#include "RtypesImp.h"
#include "TIsAProxy.h"
#include "TFileMergeInfo.h"
#include <algorithm>
#include "TCollectionProxyInfo.h"
/*******************************************************************/

#include "TDataMember.h"

// Header files passed as explicit arguments
#include "NPParticle.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace NPL {
   namespace ROOTDict {
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance();
      static TClass *NPL_Dictionary();

      // Function generating the singleton type initializer
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance()
      {
         static ::ROOT::TGenericClassInfo 
            instance("NPL", 0 /*version*/, "NPParticle.h", 46,
                     ::ROOT::Internal::DefineBehavior((void*)nullptr,(void*)nullptr),
                     &NPL_Dictionary, 0);
         return &instance;
      }
      // Insure that the inline function is _not_ optimized away by the compiler
      ::ROOT::TGenericClassInfo *(*_R__UNIQUE_DICT_(InitFunctionKeeper))() = &GenerateInitInstance;  
      // Static variable to force the class initialization
      static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstance(); R__UseDummy(_R__UNIQUE_DICT_(Init));

      // Dictionary for non-ClassDef classes
      static TClass *NPL_Dictionary() {
         return GenerateInitInstance()->GetClass();
      }

   }
}

namespace ROOT {
   static void *new_NPLcLcLParticle(void *p = nullptr);
   static void *newArray_NPLcLcLParticle(Long_t size, void *p);
   static void delete_NPLcLcLParticle(void *p);
   static void deleteArray_NPLcLcLParticle(void *p);
   static void destruct_NPLcLcLParticle(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::NPL::Particle*)
   {
      ::NPL::Particle *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::NPL::Particle >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("NPL::Particle", ::NPL::Particle::Class_Version(), "NPParticle.h", 47,
                  typeid(::NPL::Particle), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::NPL::Particle::Dictionary, isa_proxy, 4,
                  sizeof(::NPL::Particle) );
      instance.SetNew(&new_NPLcLcLParticle);
      instance.SetNewArray(&newArray_NPLcLcLParticle);
      instance.SetDelete(&delete_NPLcLcLParticle);
      instance.SetDeleteArray(&deleteArray_NPLcLcLParticle);
      instance.SetDestructor(&destruct_NPLcLcLParticle);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::NPL::Particle*)
   {
      return GenerateInitInstanceLocal(static_cast<::NPL::Particle*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::NPL::Particle*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace NPL {
//______________________________________________________________________________
atomic_TClass_ptr Particle::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *Particle::Class_Name()
{
   return "NPL::Particle";
}

//______________________________________________________________________________
const char *Particle::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::NPL::Particle*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int Particle::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::NPL::Particle*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *Particle::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::NPL::Particle*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *Particle::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::NPL::Particle*)nullptr)->GetClass(); }
   return fgIsA;
}

} // namespace NPL
namespace NPL {
//______________________________________________________________________________
void Particle::Streamer(TBuffer &R__b)
{
   // Stream an object of class NPL::Particle.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(NPL::Particle::Class(),this);
   } else {
      R__b.WriteClassBuffer(NPL::Particle::Class(),this);
   }
}

} // namespace NPL
namespace ROOT {
   // Wrappers around operator new
   static void *new_NPLcLcLParticle(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::NPL::Particle : new ::NPL::Particle;
   }
   static void *newArray_NPLcLcLParticle(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::NPL::Particle[nElements] : new ::NPL::Particle[nElements];
   }
   // Wrapper around operator delete
   static void delete_NPLcLcLParticle(void *p) {
      delete (static_cast<::NPL::Particle*>(p));
   }
   static void deleteArray_NPLcLcLParticle(void *p) {
      delete [] (static_cast<::NPL::Particle*>(p));
   }
   static void destruct_NPLcLcLParticle(void *p) {
      typedef ::NPL::Particle current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::NPL::Particle

namespace {
  void TriggerDictionaryInitialization_NPParticleDict_Impl() {
    static const char* headers[] = {
"NPParticle.h",
nullptr
    };
    static const char* includePaths[] = {
"../Core",
"../Physics",
"../../Core",
"../../Physics",
"../TrackReconstruction",
"../../TrackReconstruction",
"/home/sghwang/library/root_install/include/",
"/home/sghwang/workspace/nptool/NPLib/Physics/",
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "NPParticleDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
namespace NPL{class __attribute__((annotate("$clingAutoload$NPParticle.h")))  Particle;}
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "NPParticleDict dictionary payload"

#ifndef NPMULTITHREADING
  #define NPMULTITHREADING 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "NPParticle.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"", payloadCode, "@",
"NPL::Particle", payloadCode, "@",
"NPL::Particle::fgIsA", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("NPParticleDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_NPParticleDict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_NPParticleDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_NPParticleDict() {
  TriggerDictionaryInitialization_NPParticleDict_Impl();
}
