// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME NPPhaseSpaceDict
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
#include "NPPhaseSpace.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_NPLcLcLPhaseSpace(void *p = nullptr);
   static void *newArray_NPLcLcLPhaseSpace(Long_t size, void *p);
   static void delete_NPLcLcLPhaseSpace(void *p);
   static void deleteArray_NPLcLcLPhaseSpace(void *p);
   static void destruct_NPLcLcLPhaseSpace(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::NPL::PhaseSpace*)
   {
      ::NPL::PhaseSpace *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::NPL::PhaseSpace >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("NPL::PhaseSpace", ::NPL::PhaseSpace::Class_Version(), "NPPhaseSpace.h", 44,
                  typeid(::NPL::PhaseSpace), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::NPL::PhaseSpace::Dictionary, isa_proxy, 4,
                  sizeof(::NPL::PhaseSpace) );
      instance.SetNew(&new_NPLcLcLPhaseSpace);
      instance.SetNewArray(&newArray_NPLcLcLPhaseSpace);
      instance.SetDelete(&delete_NPLcLcLPhaseSpace);
      instance.SetDeleteArray(&deleteArray_NPLcLcLPhaseSpace);
      instance.SetDestructor(&destruct_NPLcLcLPhaseSpace);

      instance.AdoptAlternate(::ROOT::AddClassAlternate("NPL::PhaseSpace","PhaseSpace"));
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::NPL::PhaseSpace*)
   {
      return GenerateInitInstanceLocal(static_cast<::NPL::PhaseSpace*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::NPL::PhaseSpace*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace NPL {
//______________________________________________________________________________
atomic_TClass_ptr PhaseSpace::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *PhaseSpace::Class_Name()
{
   return "NPL::PhaseSpace";
}

//______________________________________________________________________________
const char *PhaseSpace::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::NPL::PhaseSpace*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int PhaseSpace::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::NPL::PhaseSpace*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *PhaseSpace::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::NPL::PhaseSpace*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *PhaseSpace::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::NPL::PhaseSpace*)nullptr)->GetClass(); }
   return fgIsA;
}

} // namespace NPL
namespace NPL {
//______________________________________________________________________________
void PhaseSpace::Streamer(TBuffer &R__b)
{
   // Stream an object of class NPL::PhaseSpace.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(NPL::PhaseSpace::Class(),this);
   } else {
      R__b.WriteClassBuffer(NPL::PhaseSpace::Class(),this);
   }
}

} // namespace NPL
namespace ROOT {
   // Wrappers around operator new
   static void *new_NPLcLcLPhaseSpace(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::NPL::PhaseSpace : new ::NPL::PhaseSpace;
   }
   static void *newArray_NPLcLcLPhaseSpace(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::NPL::PhaseSpace[nElements] : new ::NPL::PhaseSpace[nElements];
   }
   // Wrapper around operator delete
   static void delete_NPLcLcLPhaseSpace(void *p) {
      delete (static_cast<::NPL::PhaseSpace*>(p));
   }
   static void deleteArray_NPLcLcLPhaseSpace(void *p) {
      delete [] (static_cast<::NPL::PhaseSpace*>(p));
   }
   static void destruct_NPLcLcLPhaseSpace(void *p) {
      typedef ::NPL::PhaseSpace current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::NPL::PhaseSpace

namespace {
  void TriggerDictionaryInitialization_NPPhaseSpaceDict_Impl() {
    static const char* headers[] = {
"NPPhaseSpace.h",
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
#line 1 "NPPhaseSpaceDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
namespace NPL{class __attribute__((annotate("$clingAutoload$NPPhaseSpace.h")))  PhaseSpace;}
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "NPPhaseSpaceDict dictionary payload"

#ifndef NPMULTITHREADING
  #define NPMULTITHREADING 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "NPPhaseSpace.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"NPL::PhaseSpace", payloadCode, "@",
"PhaseSpace", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("NPPhaseSpaceDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_NPPhaseSpaceDict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_NPPhaseSpaceDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_NPPhaseSpaceDict() {
  TriggerDictionaryInitialization_NPPhaseSpaceDict_Impl();
}
