// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME NPSiliconCalibratorDict
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
#include "NPSiliconCalibrator.h"

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
            instance("NPL", 0 /*version*/, "NPEnergyLoss.h", 50,
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
   static TClass *NPLcLcLSiliconCalibrator_Dictionary();
   static void NPLcLcLSiliconCalibrator_TClassManip(TClass*);
   static void *new_NPLcLcLSiliconCalibrator(void *p = nullptr);
   static void *newArray_NPLcLcLSiliconCalibrator(Long_t size, void *p);
   static void delete_NPLcLcLSiliconCalibrator(void *p);
   static void deleteArray_NPLcLcLSiliconCalibrator(void *p);
   static void destruct_NPLcLcLSiliconCalibrator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::NPL::SiliconCalibrator*)
   {
      ::NPL::SiliconCalibrator *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::NPL::SiliconCalibrator));
      static ::ROOT::TGenericClassInfo 
         instance("NPL::SiliconCalibrator", "NPSiliconCalibrator.h", 14,
                  typeid(::NPL::SiliconCalibrator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &NPLcLcLSiliconCalibrator_Dictionary, isa_proxy, 4,
                  sizeof(::NPL::SiliconCalibrator) );
      instance.SetNew(&new_NPLcLcLSiliconCalibrator);
      instance.SetNewArray(&newArray_NPLcLcLSiliconCalibrator);
      instance.SetDelete(&delete_NPLcLcLSiliconCalibrator);
      instance.SetDeleteArray(&deleteArray_NPLcLcLSiliconCalibrator);
      instance.SetDestructor(&destruct_NPLcLcLSiliconCalibrator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::NPL::SiliconCalibrator*)
   {
      return GenerateInitInstanceLocal(static_cast<::NPL::SiliconCalibrator*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::NPL::SiliconCalibrator*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *NPLcLcLSiliconCalibrator_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::NPL::SiliconCalibrator*>(nullptr))->GetClass();
      NPLcLcLSiliconCalibrator_TClassManip(theClass);
   return theClass;
   }

   static void NPLcLcLSiliconCalibrator_TClassManip(TClass* theClass){
      theClass->CreateAttributeMap();
      TDictAttributeMap* attrMap( theClass->GetAttributeMap() );
      attrMap->AddProperty("file_name","NPSiliconCalibrator.h");
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_NPLcLcLSiliconCalibrator(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::NPL::SiliconCalibrator : new ::NPL::SiliconCalibrator;
   }
   static void *newArray_NPLcLcLSiliconCalibrator(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::NPL::SiliconCalibrator[nElements] : new ::NPL::SiliconCalibrator[nElements];
   }
   // Wrapper around operator delete
   static void delete_NPLcLcLSiliconCalibrator(void *p) {
      delete (static_cast<::NPL::SiliconCalibrator*>(p));
   }
   static void deleteArray_NPLcLcLSiliconCalibrator(void *p) {
      delete [] (static_cast<::NPL::SiliconCalibrator*>(p));
   }
   static void destruct_NPLcLcLSiliconCalibrator(void *p) {
      typedef ::NPL::SiliconCalibrator current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::NPL::SiliconCalibrator

namespace {
  void TriggerDictionaryInitialization_NPSiliconCalibratorDict_Impl() {
    static const char* headers[] = {
"NPSiliconCalibrator.h",
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
"/home/sghwang/workspace/nptool/NPLib/Calibration/",
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "NPSiliconCalibratorDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
namespace NPL{class __attribute__((annotate("$clingAutoload$NPSiliconCalibrator.h")))  SiliconCalibrator;}
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "NPSiliconCalibratorDict dictionary payload"

#ifndef NPMULTITHREADING
  #define NPMULTITHREADING 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "NPSiliconCalibrator.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"", payloadCode, "@",
"NPL::SiliconCalibrator", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("NPSiliconCalibratorDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_NPSiliconCalibratorDict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_NPSiliconCalibratorDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_NPSiliconCalibratorDict() {
  TriggerDictionaryInitialization_NPSiliconCalibratorDict_Impl();
}
