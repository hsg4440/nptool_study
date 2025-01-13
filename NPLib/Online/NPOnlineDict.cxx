// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME NPOnlineDict
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
#include "NPOnlineGUI.h"

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
            instance("NPL", 0 /*version*/, "NPSpectraClient.h", 33,
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
   static TClass *NPLcLcLCanvasList_Dictionary();
   static void NPLcLcLCanvasList_TClassManip(TClass*);
   static void delete_NPLcLcLCanvasList(void *p);
   static void deleteArray_NPLcLcLCanvasList(void *p);
   static void destruct_NPLcLcLCanvasList(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::NPL::CanvasList*)
   {
      ::NPL::CanvasList *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::NPL::CanvasList));
      static ::ROOT::TGenericClassInfo 
         instance("NPL::CanvasList", "NPOnlineGUI.h", 48,
                  typeid(::NPL::CanvasList), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &NPLcLcLCanvasList_Dictionary, isa_proxy, 4,
                  sizeof(::NPL::CanvasList) );
      instance.SetDelete(&delete_NPLcLcLCanvasList);
      instance.SetDeleteArray(&deleteArray_NPLcLcLCanvasList);
      instance.SetDestructor(&destruct_NPLcLcLCanvasList);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::NPL::CanvasList*)
   {
      return GenerateInitInstanceLocal(static_cast<::NPL::CanvasList*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::NPL::CanvasList*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *NPLcLcLCanvasList_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::NPL::CanvasList*>(nullptr))->GetClass();
      NPLcLcLCanvasList_TClassManip(theClass);
   return theClass;
   }

   static void NPLcLcLCanvasList_TClassManip(TClass* theClass){
      theClass->CreateAttributeMap();
      TDictAttributeMap* attrMap( theClass->GetAttributeMap() );
      attrMap->AddProperty("file_name","NPOnlineGUI.h");
   }

} // end of namespace ROOT

namespace ROOT {
   static void delete_NPLcLcLOnlineGUI(void *p);
   static void deleteArray_NPLcLcLOnlineGUI(void *p);
   static void destruct_NPLcLcLOnlineGUI(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::NPL::OnlineGUI*)
   {
      ::NPL::OnlineGUI *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::NPL::OnlineGUI >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("NPL::OnlineGUI", ::NPL::OnlineGUI::Class_Version(), "NPOnlineGUI.h", 87,
                  typeid(::NPL::OnlineGUI), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::NPL::OnlineGUI::Dictionary, isa_proxy, 4,
                  sizeof(::NPL::OnlineGUI) );
      instance.SetDelete(&delete_NPLcLcLOnlineGUI);
      instance.SetDeleteArray(&deleteArray_NPLcLcLOnlineGUI);
      instance.SetDestructor(&destruct_NPLcLcLOnlineGUI);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::NPL::OnlineGUI*)
   {
      return GenerateInitInstanceLocal(static_cast<::NPL::OnlineGUI*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::NPL::OnlineGUI*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace NPL {
//______________________________________________________________________________
atomic_TClass_ptr OnlineGUI::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *OnlineGUI::Class_Name()
{
   return "NPL::OnlineGUI";
}

//______________________________________________________________________________
const char *OnlineGUI::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::NPL::OnlineGUI*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int OnlineGUI::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::NPL::OnlineGUI*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *OnlineGUI::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::NPL::OnlineGUI*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *OnlineGUI::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::NPL::OnlineGUI*)nullptr)->GetClass(); }
   return fgIsA;
}

} // namespace NPL
namespace ROOT {
   // Wrapper around operator delete
   static void delete_NPLcLcLCanvasList(void *p) {
      delete (static_cast<::NPL::CanvasList*>(p));
   }
   static void deleteArray_NPLcLcLCanvasList(void *p) {
      delete [] (static_cast<::NPL::CanvasList*>(p));
   }
   static void destruct_NPLcLcLCanvasList(void *p) {
      typedef ::NPL::CanvasList current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::NPL::CanvasList

namespace NPL {
//______________________________________________________________________________
void OnlineGUI::Streamer(TBuffer &R__b)
{
   // Stream an object of class NPL::OnlineGUI.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(NPL::OnlineGUI::Class(),this);
   } else {
      R__b.WriteClassBuffer(NPL::OnlineGUI::Class(),this);
   }
}

} // namespace NPL
namespace ROOT {
   // Wrapper around operator delete
   static void delete_NPLcLcLOnlineGUI(void *p) {
      delete (static_cast<::NPL::OnlineGUI*>(p));
   }
   static void deleteArray_NPLcLcLOnlineGUI(void *p) {
      delete [] (static_cast<::NPL::OnlineGUI*>(p));
   }
   static void destruct_NPLcLcLOnlineGUI(void *p) {
      typedef ::NPL::OnlineGUI current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::NPL::OnlineGUI

namespace ROOT {
   static TClass *vectorlETGStatusBarmUgR_Dictionary();
   static void vectorlETGStatusBarmUgR_TClassManip(TClass*);
   static void *new_vectorlETGStatusBarmUgR(void *p = nullptr);
   static void *newArray_vectorlETGStatusBarmUgR(Long_t size, void *p);
   static void delete_vectorlETGStatusBarmUgR(void *p);
   static void deleteArray_vectorlETGStatusBarmUgR(void *p);
   static void destruct_vectorlETGStatusBarmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<TGStatusBar*>*)
   {
      vector<TGStatusBar*> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<TGStatusBar*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<TGStatusBar*>", -2, "vector", 389,
                  typeid(vector<TGStatusBar*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlETGStatusBarmUgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<TGStatusBar*>) );
      instance.SetNew(&new_vectorlETGStatusBarmUgR);
      instance.SetNewArray(&newArray_vectorlETGStatusBarmUgR);
      instance.SetDelete(&delete_vectorlETGStatusBarmUgR);
      instance.SetDeleteArray(&deleteArray_vectorlETGStatusBarmUgR);
      instance.SetDestructor(&destruct_vectorlETGStatusBarmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<TGStatusBar*> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<TGStatusBar*>","std::vector<TGStatusBar*, std::allocator<TGStatusBar*> >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<TGStatusBar*>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlETGStatusBarmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<TGStatusBar*>*>(nullptr))->GetClass();
      vectorlETGStatusBarmUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlETGStatusBarmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlETGStatusBarmUgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<TGStatusBar*> : new vector<TGStatusBar*>;
   }
   static void *newArray_vectorlETGStatusBarmUgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<TGStatusBar*>[nElements] : new vector<TGStatusBar*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlETGStatusBarmUgR(void *p) {
      delete (static_cast<vector<TGStatusBar*>*>(p));
   }
   static void deleteArray_vectorlETGStatusBarmUgR(void *p) {
      delete [] (static_cast<vector<TGStatusBar*>*>(p));
   }
   static void destruct_vectorlETGStatusBarmUgR(void *p) {
      typedef vector<TGStatusBar*> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<TGStatusBar*>

namespace ROOT {
   static TClass *maplEstringcOTGTextEntrymUgR_Dictionary();
   static void maplEstringcOTGTextEntrymUgR_TClassManip(TClass*);
   static void *new_maplEstringcOTGTextEntrymUgR(void *p = nullptr);
   static void *newArray_maplEstringcOTGTextEntrymUgR(Long_t size, void *p);
   static void delete_maplEstringcOTGTextEntrymUgR(void *p);
   static void deleteArray_maplEstringcOTGTextEntrymUgR(void *p);
   static void destruct_maplEstringcOTGTextEntrymUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<string,TGTextEntry*>*)
   {
      map<string,TGTextEntry*> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<string,TGTextEntry*>));
      static ::ROOT::TGenericClassInfo 
         instance("map<string,TGTextEntry*>", -2, "map", 100,
                  typeid(map<string,TGTextEntry*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEstringcOTGTextEntrymUgR_Dictionary, isa_proxy, 0,
                  sizeof(map<string,TGTextEntry*>) );
      instance.SetNew(&new_maplEstringcOTGTextEntrymUgR);
      instance.SetNewArray(&newArray_maplEstringcOTGTextEntrymUgR);
      instance.SetDelete(&delete_maplEstringcOTGTextEntrymUgR);
      instance.SetDeleteArray(&deleteArray_maplEstringcOTGTextEntrymUgR);
      instance.SetDestructor(&destruct_maplEstringcOTGTextEntrymUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<string,TGTextEntry*> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("map<string,TGTextEntry*>","std::map<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, TGTextEntry*, std::less<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >, std::allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const, TGTextEntry*> > >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const map<string,TGTextEntry*>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEstringcOTGTextEntrymUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const map<string,TGTextEntry*>*>(nullptr))->GetClass();
      maplEstringcOTGTextEntrymUgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEstringcOTGTextEntrymUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEstringcOTGTextEntrymUgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<string,TGTextEntry*> : new map<string,TGTextEntry*>;
   }
   static void *newArray_maplEstringcOTGTextEntrymUgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<string,TGTextEntry*>[nElements] : new map<string,TGTextEntry*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEstringcOTGTextEntrymUgR(void *p) {
      delete (static_cast<map<string,TGTextEntry*>*>(p));
   }
   static void deleteArray_maplEstringcOTGTextEntrymUgR(void *p) {
      delete [] (static_cast<map<string,TGTextEntry*>*>(p));
   }
   static void destruct_maplEstringcOTGTextEntrymUgR(void *p) {
      typedef map<string,TGTextEntry*> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class map<string,TGTextEntry*>

namespace ROOT {
   static TClass *maplEstringcOTCanvasmUgR_Dictionary();
   static void maplEstringcOTCanvasmUgR_TClassManip(TClass*);
   static void *new_maplEstringcOTCanvasmUgR(void *p = nullptr);
   static void *newArray_maplEstringcOTCanvasmUgR(Long_t size, void *p);
   static void delete_maplEstringcOTCanvasmUgR(void *p);
   static void deleteArray_maplEstringcOTCanvasmUgR(void *p);
   static void destruct_maplEstringcOTCanvasmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<string,TCanvas*>*)
   {
      map<string,TCanvas*> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<string,TCanvas*>));
      static ::ROOT::TGenericClassInfo 
         instance("map<string,TCanvas*>", -2, "map", 100,
                  typeid(map<string,TCanvas*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEstringcOTCanvasmUgR_Dictionary, isa_proxy, 0,
                  sizeof(map<string,TCanvas*>) );
      instance.SetNew(&new_maplEstringcOTCanvasmUgR);
      instance.SetNewArray(&newArray_maplEstringcOTCanvasmUgR);
      instance.SetDelete(&delete_maplEstringcOTCanvasmUgR);
      instance.SetDeleteArray(&deleteArray_maplEstringcOTCanvasmUgR);
      instance.SetDestructor(&destruct_maplEstringcOTCanvasmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<string,TCanvas*> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("map<string,TCanvas*>","std::map<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, TCanvas*, std::less<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >, std::allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const, TCanvas*> > >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const map<string,TCanvas*>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEstringcOTCanvasmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const map<string,TCanvas*>*>(nullptr))->GetClass();
      maplEstringcOTCanvasmUgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEstringcOTCanvasmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEstringcOTCanvasmUgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<string,TCanvas*> : new map<string,TCanvas*>;
   }
   static void *newArray_maplEstringcOTCanvasmUgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<string,TCanvas*>[nElements] : new map<string,TCanvas*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEstringcOTCanvasmUgR(void *p) {
      delete (static_cast<map<string,TCanvas*>*>(p));
   }
   static void deleteArray_maplEstringcOTCanvasmUgR(void *p) {
      delete [] (static_cast<map<string,TCanvas*>*>(p));
   }
   static void destruct_maplEstringcOTCanvasmUgR(void *p) {
      typedef map<string,TCanvas*> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class map<string,TCanvas*>

namespace {
  void TriggerDictionaryInitialization_NPOnlineDict_Impl() {
    static const char* headers[] = {
"NPOnlineGUI.h",
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
"/home/sghwang/workspace/nptool/NPLib/Online/",
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "NPOnlineDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
namespace NPL{class __attribute__((annotate("$clingAutoload$NPOnlineGUI.h")))  CanvasList;}
namespace NPL{class __attribute__((annotate("$clingAutoload$NPOnlineGUI.h")))  OnlineGUI;}
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "NPOnlineDict dictionary payload"

#ifndef NPMULTITHREADING
  #define NPMULTITHREADING 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "NPOnlineGUI.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"", payloadCode, "@",
"NPL::CanvasList", payloadCode, "@",
"NPL::ExecuteMacro", payloadCode, "@",
"NPL::OnlineGUI", payloadCode, "@",
"NPL::OnlineGUI::fgIsA", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("NPOnlineDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_NPOnlineDict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_NPOnlineDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_NPOnlineDict() {
  TriggerDictionaryInitialization_NPOnlineDict_Impl();
}
