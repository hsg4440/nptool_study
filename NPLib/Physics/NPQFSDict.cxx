// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME NPQFSDict
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
#include "NPQFS.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_NPLcLcLQFS(void *p = nullptr);
   static void *newArray_NPLcLcLQFS(Long_t size, void *p);
   static void delete_NPLcLcLQFS(void *p);
   static void deleteArray_NPLcLcLQFS(void *p);
   static void destruct_NPLcLcLQFS(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::NPL::QFS*)
   {
      ::NPL::QFS *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::NPL::QFS >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("NPL::QFS", ::NPL::QFS::Class_Version(), "NPQFS.h", 62,
                  typeid(::NPL::QFS), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::NPL::QFS::Dictionary, isa_proxy, 4,
                  sizeof(::NPL::QFS) );
      instance.SetNew(&new_NPLcLcLQFS);
      instance.SetNewArray(&newArray_NPLcLcLQFS);
      instance.SetDelete(&delete_NPLcLcLQFS);
      instance.SetDeleteArray(&deleteArray_NPLcLcLQFS);
      instance.SetDestructor(&destruct_NPLcLcLQFS);

      instance.AdoptAlternate(::ROOT::AddClassAlternate("NPL::QFS","QFS"));
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::NPL::QFS*)
   {
      return GenerateInitInstanceLocal(static_cast<::NPL::QFS*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::NPL::QFS*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace NPL {
//______________________________________________________________________________
atomic_TClass_ptr QFS::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *QFS::Class_Name()
{
   return "NPL::QFS";
}

//______________________________________________________________________________
const char *QFS::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::NPL::QFS*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int QFS::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::NPL::QFS*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *QFS::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::NPL::QFS*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *QFS::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::NPL::QFS*)nullptr)->GetClass(); }
   return fgIsA;
}

} // namespace NPL
namespace NPL {
//______________________________________________________________________________
void QFS::Streamer(TBuffer &R__b)
{
   // Stream an object of class NPL::QFS.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(NPL::QFS::Class(),this);
   } else {
      R__b.WriteClassBuffer(NPL::QFS::Class(),this);
   }
}

} // namespace NPL
namespace ROOT {
   // Wrappers around operator new
   static void *new_NPLcLcLQFS(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::NPL::QFS : new ::NPL::QFS;
   }
   static void *newArray_NPLcLcLQFS(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::NPL::QFS[nElements] : new ::NPL::QFS[nElements];
   }
   // Wrapper around operator delete
   static void delete_NPLcLcLQFS(void *p) {
      delete (static_cast<::NPL::QFS*>(p));
   }
   static void deleteArray_NPLcLcLQFS(void *p) {
      delete [] (static_cast<::NPL::QFS*>(p));
   }
   static void destruct_NPLcLcLQFS(void *p) {
      typedef ::NPL::QFS current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::NPL::QFS

namespace {
  void TriggerDictionaryInitialization_NPQFSDict_Impl() {
    static const char* headers[] = {
"NPQFS.h",
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
#line 1 "NPQFSDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
namespace NPL{class __attribute__((annotate("$clingAutoload$NPQFS.h")))  QFS;}
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "NPQFSDict dictionary payload"

#ifndef NPMULTITHREADING
  #define NPMULTITHREADING 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "NPQFS.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"NPL::QFS", payloadCode, "@",
"QFS", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("NPQFSDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_NPQFSDict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_NPQFSDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_NPQFSDict() {
  TriggerDictionaryInitialization_NPQFSDict_Impl();
}
