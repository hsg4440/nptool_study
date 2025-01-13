// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME NPDeltaSpectraDict
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
#include "NPDeltaSpectra.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_NPLcLcLDeltaSpectra(void *p = nullptr);
   static void *newArray_NPLcLcLDeltaSpectra(Long_t size, void *p);
   static void delete_NPLcLcLDeltaSpectra(void *p);
   static void deleteArray_NPLcLcLDeltaSpectra(void *p);
   static void destruct_NPLcLcLDeltaSpectra(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::NPL::DeltaSpectra*)
   {
      ::NPL::DeltaSpectra *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::NPL::DeltaSpectra >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("NPL::DeltaSpectra", ::NPL::DeltaSpectra::Class_Version(), "NPDeltaSpectra.h", 36,
                  typeid(::NPL::DeltaSpectra), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::NPL::DeltaSpectra::Dictionary, isa_proxy, 4,
                  sizeof(::NPL::DeltaSpectra) );
      instance.SetNew(&new_NPLcLcLDeltaSpectra);
      instance.SetNewArray(&newArray_NPLcLcLDeltaSpectra);
      instance.SetDelete(&delete_NPLcLcLDeltaSpectra);
      instance.SetDeleteArray(&deleteArray_NPLcLcLDeltaSpectra);
      instance.SetDestructor(&destruct_NPLcLcLDeltaSpectra);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::NPL::DeltaSpectra*)
   {
      return GenerateInitInstanceLocal(static_cast<::NPL::DeltaSpectra*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::NPL::DeltaSpectra*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace NPL {
//______________________________________________________________________________
atomic_TClass_ptr DeltaSpectra::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *DeltaSpectra::Class_Name()
{
   return "NPL::DeltaSpectra";
}

//______________________________________________________________________________
const char *DeltaSpectra::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::NPL::DeltaSpectra*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int DeltaSpectra::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::NPL::DeltaSpectra*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *DeltaSpectra::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::NPL::DeltaSpectra*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *DeltaSpectra::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::NPL::DeltaSpectra*)nullptr)->GetClass(); }
   return fgIsA;
}

} // namespace NPL
namespace NPL {
//______________________________________________________________________________
void DeltaSpectra::Streamer(TBuffer &R__b)
{
   // Stream an object of class NPL::DeltaSpectra.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(NPL::DeltaSpectra::Class(),this);
   } else {
      R__b.WriteClassBuffer(NPL::DeltaSpectra::Class(),this);
   }
}

} // namespace NPL
namespace ROOT {
   // Wrappers around operator new
   static void *new_NPLcLcLDeltaSpectra(void *p) {
      return  p ? new(p) ::NPL::DeltaSpectra : new ::NPL::DeltaSpectra;
   }
   static void *newArray_NPLcLcLDeltaSpectra(Long_t nElements, void *p) {
      return p ? new(p) ::NPL::DeltaSpectra[nElements] : new ::NPL::DeltaSpectra[nElements];
   }
   // Wrapper around operator delete
   static void delete_NPLcLcLDeltaSpectra(void *p) {
      delete (static_cast<::NPL::DeltaSpectra*>(p));
   }
   static void deleteArray_NPLcLcLDeltaSpectra(void *p) {
      delete [] (static_cast<::NPL::DeltaSpectra*>(p));
   }
   static void destruct_NPLcLcLDeltaSpectra(void *p) {
      typedef ::NPL::DeltaSpectra current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::NPL::DeltaSpectra

namespace ROOT {
   static TClass *maplEstringcOpairlEvectorlEdoublegRcOvectorlEdoublegRsPgRsPgR_Dictionary();
   static void maplEstringcOpairlEvectorlEdoublegRcOvectorlEdoublegRsPgRsPgR_TClassManip(TClass*);
   static void *new_maplEstringcOpairlEvectorlEdoublegRcOvectorlEdoublegRsPgRsPgR(void *p = nullptr);
   static void *newArray_maplEstringcOpairlEvectorlEdoublegRcOvectorlEdoublegRsPgRsPgR(Long_t size, void *p);
   static void delete_maplEstringcOpairlEvectorlEdoublegRcOvectorlEdoublegRsPgRsPgR(void *p);
   static void deleteArray_maplEstringcOpairlEvectorlEdoublegRcOvectorlEdoublegRsPgRsPgR(void *p);
   static void destruct_maplEstringcOpairlEvectorlEdoublegRcOvectorlEdoublegRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<string,pair<vector<double>,vector<double> > >*)
   {
      map<string,pair<vector<double>,vector<double> > > *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<string,pair<vector<double>,vector<double> > >));
      static ::ROOT::TGenericClassInfo 
         instance("map<string,pair<vector<double>,vector<double> > >", -2, "map", 100,
                  typeid(map<string,pair<vector<double>,vector<double> > >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEstringcOpairlEvectorlEdoublegRcOvectorlEdoublegRsPgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(map<string,pair<vector<double>,vector<double> > >) );
      instance.SetNew(&new_maplEstringcOpairlEvectorlEdoublegRcOvectorlEdoublegRsPgRsPgR);
      instance.SetNewArray(&newArray_maplEstringcOpairlEvectorlEdoublegRcOvectorlEdoublegRsPgRsPgR);
      instance.SetDelete(&delete_maplEstringcOpairlEvectorlEdoublegRcOvectorlEdoublegRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_maplEstringcOpairlEvectorlEdoublegRcOvectorlEdoublegRsPgRsPgR);
      instance.SetDestructor(&destruct_maplEstringcOpairlEvectorlEdoublegRcOvectorlEdoublegRsPgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<string,pair<vector<double>,vector<double> > > >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("map<string,pair<vector<double>,vector<double> > >","std::map<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::pair<std::vector<double, std::allocator<double> >, std::vector<double, std::allocator<double> > >, std::less<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >, std::allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const, std::pair<std::vector<double, std::allocator<double> >, std::vector<double, std::allocator<double> > > > > >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const map<string,pair<vector<double>,vector<double> > >*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEstringcOpairlEvectorlEdoublegRcOvectorlEdoublegRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const map<string,pair<vector<double>,vector<double> > >*>(nullptr))->GetClass();
      maplEstringcOpairlEvectorlEdoublegRcOvectorlEdoublegRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEstringcOpairlEvectorlEdoublegRcOvectorlEdoublegRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEstringcOpairlEvectorlEdoublegRcOvectorlEdoublegRsPgRsPgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<string,pair<vector<double>,vector<double> > > : new map<string,pair<vector<double>,vector<double> > >;
   }
   static void *newArray_maplEstringcOpairlEvectorlEdoublegRcOvectorlEdoublegRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<string,pair<vector<double>,vector<double> > >[nElements] : new map<string,pair<vector<double>,vector<double> > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEstringcOpairlEvectorlEdoublegRcOvectorlEdoublegRsPgRsPgR(void *p) {
      delete (static_cast<map<string,pair<vector<double>,vector<double> > >*>(p));
   }
   static void deleteArray_maplEstringcOpairlEvectorlEdoublegRcOvectorlEdoublegRsPgRsPgR(void *p) {
      delete [] (static_cast<map<string,pair<vector<double>,vector<double> > >*>(p));
   }
   static void destruct_maplEstringcOpairlEvectorlEdoublegRcOvectorlEdoublegRsPgRsPgR(void *p) {
      typedef map<string,pair<vector<double>,vector<double> > > current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class map<string,pair<vector<double>,vector<double> > >

namespace {
  void TriggerDictionaryInitialization_NPDeltaSpectraDict_Impl() {
    static const char* headers[] = {
"NPDeltaSpectra.h",
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
#line 1 "NPDeltaSpectraDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
namespace NPL{class __attribute__((annotate("$clingAutoload$NPDeltaSpectra.h")))  DeltaSpectra;}
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "NPDeltaSpectraDict dictionary payload"

#ifndef NPMULTITHREADING
  #define NPMULTITHREADING 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "NPDeltaSpectra.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"NPL::DeltaSpectra", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("NPDeltaSpectraDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_NPDeltaSpectraDict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_NPDeltaSpectraDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_NPDeltaSpectraDict() {
  TriggerDictionaryInitialization_NPDeltaSpectraDict_Impl();
}
