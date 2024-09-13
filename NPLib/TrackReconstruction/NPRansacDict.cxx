// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME NPRansacDict
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
#include "NPRansac.h"

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
            instance("NPL", 0 /*version*/, "NPTrack.h", 30,
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
   static void *new_NPLcLcLRansac(void *p = nullptr);
   static void *newArray_NPLcLcLRansac(Long_t size, void *p);
   static void delete_NPLcLcLRansac(void *p);
   static void deleteArray_NPLcLcLRansac(void *p);
   static void destruct_NPLcLcLRansac(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::NPL::Ransac*)
   {
      ::NPL::Ransac *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::NPL::Ransac >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("NPL::Ransac", ::NPL::Ransac::Class_Version(), "NPRansac.h", 57,
                  typeid(::NPL::Ransac), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::NPL::Ransac::Dictionary, isa_proxy, 4,
                  sizeof(::NPL::Ransac) );
      instance.SetNew(&new_NPLcLcLRansac);
      instance.SetNewArray(&newArray_NPLcLcLRansac);
      instance.SetDelete(&delete_NPLcLcLRansac);
      instance.SetDeleteArray(&deleteArray_NPLcLcLRansac);
      instance.SetDestructor(&destruct_NPLcLcLRansac);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::NPL::Ransac*)
   {
      return GenerateInitInstanceLocal(static_cast<::NPL::Ransac*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::NPL::Ransac*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace NPL {
//______________________________________________________________________________
atomic_TClass_ptr Ransac::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *Ransac::Class_Name()
{
   return "NPL::Ransac";
}

//______________________________________________________________________________
const char *Ransac::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::NPL::Ransac*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int Ransac::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::NPL::Ransac*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *Ransac::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::NPL::Ransac*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *Ransac::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::NPL::Ransac*)nullptr)->GetClass(); }
   return fgIsA;
}

} // namespace NPL
namespace NPL {
//______________________________________________________________________________
void Ransac::Streamer(TBuffer &R__b)
{
   // Stream an object of class NPL::Ransac.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(NPL::Ransac::Class(),this);
   } else {
      R__b.WriteClassBuffer(NPL::Ransac::Class(),this);
   }
}

} // namespace NPL
namespace ROOT {
   // Wrappers around operator new
   static void *new_NPLcLcLRansac(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::NPL::Ransac : new ::NPL::Ransac;
   }
   static void *newArray_NPLcLcLRansac(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::NPL::Ransac[nElements] : new ::NPL::Ransac[nElements];
   }
   // Wrapper around operator delete
   static void delete_NPLcLcLRansac(void *p) {
      delete (static_cast<::NPL::Ransac*>(p));
   }
   static void deleteArray_NPLcLcLRansac(void *p) {
      delete [] (static_cast<::NPL::Ransac*>(p));
   }
   static void destruct_NPLcLcLRansac(void *p) {
      typedef ::NPL::Ransac current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::NPL::Ransac

namespace {
  void TriggerDictionaryInitialization_NPRansacDict_Impl() {
    static const char* headers[] = {
"NPRansac.h",
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
"/home/sghwang/workspace/nptool/NPLib/TrackReconstruction/",
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "NPRansacDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
namespace NPL{class __attribute__((annotate("$clingAutoload$NPRansac.h")))  Ransac;}
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "NPRansacDict dictionary payload"

#ifndef NPMULTITHREADING
  #define NPMULTITHREADING 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "NPRansac.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"", payloadCode, "@",
"NPL::Ransac", payloadCode, "@",
"NPL::Ransac::fgIsA", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("NPRansacDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_NPRansacDict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_NPRansacDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_NPRansacDict() {
  TriggerDictionaryInitialization_NPRansacDict_Impl();
}
