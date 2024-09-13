// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME NPVDetectorDict
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
#include "NPVDetector.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_NPLcLcLVTreeReader(void *p = nullptr);
   static void *newArray_NPLcLcLVTreeReader(Long_t size, void *p);
   static void delete_NPLcLcLVTreeReader(void *p);
   static void deleteArray_NPLcLcLVTreeReader(void *p);
   static void destruct_NPLcLcLVTreeReader(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::NPL::VTreeReader*)
   {
      ::NPL::VTreeReader *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::NPL::VTreeReader >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("NPL::VTreeReader", ::NPL::VTreeReader::Class_Version(), "NPVTreeReader.h", 44,
                  typeid(::NPL::VTreeReader), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::NPL::VTreeReader::Dictionary, isa_proxy, 4,
                  sizeof(::NPL::VTreeReader) );
      instance.SetNew(&new_NPLcLcLVTreeReader);
      instance.SetNewArray(&newArray_NPLcLcLVTreeReader);
      instance.SetDelete(&delete_NPLcLcLVTreeReader);
      instance.SetDeleteArray(&deleteArray_NPLcLcLVTreeReader);
      instance.SetDestructor(&destruct_NPLcLcLVTreeReader);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::NPL::VTreeReader*)
   {
      return GenerateInitInstanceLocal(static_cast<::NPL::VTreeReader*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::NPL::VTreeReader*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_NPLcLcLVDetector(void *p = nullptr);
   static void *newArray_NPLcLcLVDetector(Long_t size, void *p);
   static void delete_NPLcLcLVDetector(void *p);
   static void deleteArray_NPLcLcLVDetector(void *p);
   static void destruct_NPLcLcLVDetector(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::NPL::VDetector*)
   {
      ::NPL::VDetector *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::NPL::VDetector >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("NPL::VDetector", ::NPL::VDetector::Class_Version(), "NPVDetector.h", 45,
                  typeid(::NPL::VDetector), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::NPL::VDetector::Dictionary, isa_proxy, 4,
                  sizeof(::NPL::VDetector) );
      instance.SetNew(&new_NPLcLcLVDetector);
      instance.SetNewArray(&newArray_NPLcLcLVDetector);
      instance.SetDelete(&delete_NPLcLcLVDetector);
      instance.SetDeleteArray(&deleteArray_NPLcLcLVDetector);
      instance.SetDestructor(&destruct_NPLcLcLVDetector);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::NPL::VDetector*)
   {
      return GenerateInitInstanceLocal(static_cast<::NPL::VDetector*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::NPL::VDetector*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace NPL {
//______________________________________________________________________________
atomic_TClass_ptr VTreeReader::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *VTreeReader::Class_Name()
{
   return "NPL::VTreeReader";
}

//______________________________________________________________________________
const char *VTreeReader::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::NPL::VTreeReader*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int VTreeReader::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::NPL::VTreeReader*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *VTreeReader::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::NPL::VTreeReader*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *VTreeReader::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::NPL::VTreeReader*)nullptr)->GetClass(); }
   return fgIsA;
}

} // namespace NPL
namespace NPL {
//______________________________________________________________________________
atomic_TClass_ptr VDetector::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *VDetector::Class_Name()
{
   return "NPL::VDetector";
}

//______________________________________________________________________________
const char *VDetector::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::NPL::VDetector*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int VDetector::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::NPL::VDetector*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *VDetector::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::NPL::VDetector*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *VDetector::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::NPL::VDetector*)nullptr)->GetClass(); }
   return fgIsA;
}

} // namespace NPL
namespace NPL {
//______________________________________________________________________________
void VTreeReader::Streamer(TBuffer &R__b)
{
   // Stream an object of class NPL::VTreeReader.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(NPL::VTreeReader::Class(),this);
   } else {
      R__b.WriteClassBuffer(NPL::VTreeReader::Class(),this);
   }
}

} // namespace NPL
namespace ROOT {
   // Wrappers around operator new
   static void *new_NPLcLcLVTreeReader(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::NPL::VTreeReader : new ::NPL::VTreeReader;
   }
   static void *newArray_NPLcLcLVTreeReader(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::NPL::VTreeReader[nElements] : new ::NPL::VTreeReader[nElements];
   }
   // Wrapper around operator delete
   static void delete_NPLcLcLVTreeReader(void *p) {
      delete (static_cast<::NPL::VTreeReader*>(p));
   }
   static void deleteArray_NPLcLcLVTreeReader(void *p) {
      delete [] (static_cast<::NPL::VTreeReader*>(p));
   }
   static void destruct_NPLcLcLVTreeReader(void *p) {
      typedef ::NPL::VTreeReader current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::NPL::VTreeReader

namespace NPL {
//______________________________________________________________________________
void VDetector::Streamer(TBuffer &R__b)
{
   // Stream an object of class NPL::VDetector.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(NPL::VDetector::Class(),this);
   } else {
      R__b.WriteClassBuffer(NPL::VDetector::Class(),this);
   }
}

} // namespace NPL
namespace ROOT {
   // Wrappers around operator new
   static void *new_NPLcLcLVDetector(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::NPL::VDetector : new ::NPL::VDetector;
   }
   static void *newArray_NPLcLcLVDetector(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::NPL::VDetector[nElements] : new ::NPL::VDetector[nElements];
   }
   // Wrapper around operator delete
   static void delete_NPLcLcLVDetector(void *p) {
      delete (static_cast<::NPL::VDetector*>(p));
   }
   static void deleteArray_NPLcLcLVDetector(void *p) {
      delete [] (static_cast<::NPL::VDetector*>(p));
   }
   static void destruct_NPLcLcLVDetector(void *p) {
      typedef ::NPL::VDetector current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::NPL::VDetector

namespace {
  void TriggerDictionaryInitialization_NPVDetectorDict_Impl() {
    static const char* headers[] = {
"NPVDetector.h",
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
"/home/sghwang/workspace/nptool/NPLib/Core/",
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "NPVDetectorDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
namespace NPL{class __attribute__((annotate("$clingAutoload$NPVTreeReader.h")))  __attribute__((annotate("$clingAutoload$NPVDetector.h")))  VTreeReader;}
namespace NPL{class __attribute__((annotate("$clingAutoload$NPVDetector.h")))  VDetector;}
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "NPVDetectorDict dictionary payload"

#ifndef NPMULTITHREADING
  #define NPMULTITHREADING 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "NPVDetector.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"NPL::VDetector", payloadCode, "@",
"NPL::VTreeReader", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("NPVDetectorDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_NPVDetectorDict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_NPVDetectorDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_NPVDetectorDict() {
  TriggerDictionaryInitialization_NPVDetectorDict_Impl();
}
