// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME NPReactionDict
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
#include "NPReaction.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_NPLcLcLReaction(void *p = nullptr);
   static void *newArray_NPLcLcLReaction(Long_t size, void *p);
   static void delete_NPLcLcLReaction(void *p);
   static void deleteArray_NPLcLcLReaction(void *p);
   static void destruct_NPLcLcLReaction(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::NPL::Reaction*)
   {
      ::NPL::Reaction *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::NPL::Reaction >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("NPL::Reaction", ::NPL::Reaction::Class_Version(), "NPReaction.h", 53,
                  typeid(::NPL::Reaction), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::NPL::Reaction::Dictionary, isa_proxy, 4,
                  sizeof(::NPL::Reaction) );
      instance.SetNew(&new_NPLcLcLReaction);
      instance.SetNewArray(&newArray_NPLcLcLReaction);
      instance.SetDelete(&delete_NPLcLcLReaction);
      instance.SetDeleteArray(&deleteArray_NPLcLcLReaction);
      instance.SetDestructor(&destruct_NPLcLcLReaction);

      instance.AdoptAlternate(::ROOT::AddClassAlternate("NPL::Reaction","Reaction"));
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::NPL::Reaction*)
   {
      return GenerateInitInstanceLocal(static_cast<::NPL::Reaction*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::NPL::Reaction*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace NPL {
//______________________________________________________________________________
atomic_TClass_ptr Reaction::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *Reaction::Class_Name()
{
   return "NPL::Reaction";
}

//______________________________________________________________________________
const char *Reaction::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::NPL::Reaction*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int Reaction::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::NPL::Reaction*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *Reaction::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::NPL::Reaction*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *Reaction::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::NPL::Reaction*)nullptr)->GetClass(); }
   return fgIsA;
}

} // namespace NPL
namespace NPL {
//______________________________________________________________________________
void Reaction::Streamer(TBuffer &R__b)
{
   // Stream an object of class NPL::Reaction.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(NPL::Reaction::Class(),this);
   } else {
      R__b.WriteClassBuffer(NPL::Reaction::Class(),this);
   }
}

} // namespace NPL
namespace ROOT {
   // Wrappers around operator new
   static void *new_NPLcLcLReaction(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::NPL::Reaction : new ::NPL::Reaction;
   }
   static void *newArray_NPLcLcLReaction(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::NPL::Reaction[nElements] : new ::NPL::Reaction[nElements];
   }
   // Wrapper around operator delete
   static void delete_NPLcLcLReaction(void *p) {
      delete (static_cast<::NPL::Reaction*>(p));
   }
   static void deleteArray_NPLcLcLReaction(void *p) {
      delete [] (static_cast<::NPL::Reaction*>(p));
   }
   static void destruct_NPLcLcLReaction(void *p) {
      typedef ::NPL::Reaction current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::NPL::Reaction

namespace {
  void TriggerDictionaryInitialization_NPReactionDict_Impl() {
    static const char* headers[] = {
"NPReaction.h",
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
#line 1 "NPReactionDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
namespace NPL{class __attribute__((annotate("$clingAutoload$NPReaction.h")))  Reaction;}
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "NPReactionDict dictionary payload"

#ifndef NPMULTITHREADING
  #define NPMULTITHREADING 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "NPReaction.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"NPL::Reaction", payloadCode, "@",
"Reaction", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("NPReactionDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_NPReactionDict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_NPReactionDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_NPReactionDict() {
  TriggerDictionaryInitialization_NPReactionDict_Impl();
}
