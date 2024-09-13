// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME NPLinearRansac3DDict
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
#include "NPLinearRansac3D.h"

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
            instance("NPL", 0 /*version*/, "NPTrackingUtility.h", 20,
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
   static TClass *NPLcLcLLinearCluster3D_Dictionary();
   static void NPLcLcLLinearCluster3D_TClassManip(TClass*);
   static void *new_NPLcLcLLinearCluster3D(void *p = nullptr);
   static void *newArray_NPLcLcLLinearCluster3D(Long_t size, void *p);
   static void delete_NPLcLcLLinearCluster3D(void *p);
   static void deleteArray_NPLcLcLLinearCluster3D(void *p);
   static void destruct_NPLcLcLLinearCluster3D(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::NPL::LinearCluster3D*)
   {
      ::NPL::LinearCluster3D *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::NPL::LinearCluster3D));
      static ::ROOT::TGenericClassInfo 
         instance("NPL::LinearCluster3D", "NPLinearRansac3D.h", 31,
                  typeid(::NPL::LinearCluster3D), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &NPLcLcLLinearCluster3D_Dictionary, isa_proxy, 4,
                  sizeof(::NPL::LinearCluster3D) );
      instance.SetNew(&new_NPLcLcLLinearCluster3D);
      instance.SetNewArray(&newArray_NPLcLcLLinearCluster3D);
      instance.SetDelete(&delete_NPLcLcLLinearCluster3D);
      instance.SetDeleteArray(&deleteArray_NPLcLcLLinearCluster3D);
      instance.SetDestructor(&destruct_NPLcLcLLinearCluster3D);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::NPL::LinearCluster3D*)
   {
      return GenerateInitInstanceLocal(static_cast<::NPL::LinearCluster3D*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::NPL::LinearCluster3D*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *NPLcLcLLinearCluster3D_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::NPL::LinearCluster3D*>(nullptr))->GetClass();
      NPLcLcLLinearCluster3D_TClassManip(theClass);
   return theClass;
   }

   static void NPLcLcLLinearCluster3D_TClassManip(TClass* theClass){
      theClass->CreateAttributeMap();
      TDictAttributeMap* attrMap( theClass->GetAttributeMap() );
      attrMap->AddProperty("file_name","./NPLinearRansac3D.h");
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *NPLcLcLLinearRansac3D_Dictionary();
   static void NPLcLcLLinearRansac3D_TClassManip(TClass*);
   static void *new_NPLcLcLLinearRansac3D(void *p = nullptr);
   static void *newArray_NPLcLcLLinearRansac3D(Long_t size, void *p);
   static void delete_NPLcLcLLinearRansac3D(void *p);
   static void deleteArray_NPLcLcLLinearRansac3D(void *p);
   static void destruct_NPLcLcLLinearRansac3D(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::NPL::LinearRansac3D*)
   {
      ::NPL::LinearRansac3D *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::NPL::LinearRansac3D));
      static ::ROOT::TGenericClassInfo 
         instance("NPL::LinearRansac3D", "NPLinearRansac3D.h", 74,
                  typeid(::NPL::LinearRansac3D), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &NPLcLcLLinearRansac3D_Dictionary, isa_proxy, 4,
                  sizeof(::NPL::LinearRansac3D) );
      instance.SetNew(&new_NPLcLcLLinearRansac3D);
      instance.SetNewArray(&newArray_NPLcLcLLinearRansac3D);
      instance.SetDelete(&delete_NPLcLcLLinearRansac3D);
      instance.SetDeleteArray(&deleteArray_NPLcLcLLinearRansac3D);
      instance.SetDestructor(&destruct_NPLcLcLLinearRansac3D);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::NPL::LinearRansac3D*)
   {
      return GenerateInitInstanceLocal(static_cast<::NPL::LinearRansac3D*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::NPL::LinearRansac3D*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *NPLcLcLLinearRansac3D_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::NPL::LinearRansac3D*>(nullptr))->GetClass();
      NPLcLcLLinearRansac3D_TClassManip(theClass);
   return theClass;
   }

   static void NPLcLcLLinearRansac3D_TClassManip(TClass* theClass){
      theClass->CreateAttributeMap();
      TDictAttributeMap* attrMap( theClass->GetAttributeMap() );
      attrMap->AddProperty("file_name","./NPLinearRansac3D.h");
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_NPLcLcLLinearCluster3D(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::NPL::LinearCluster3D : new ::NPL::LinearCluster3D;
   }
   static void *newArray_NPLcLcLLinearCluster3D(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::NPL::LinearCluster3D[nElements] : new ::NPL::LinearCluster3D[nElements];
   }
   // Wrapper around operator delete
   static void delete_NPLcLcLLinearCluster3D(void *p) {
      delete (static_cast<::NPL::LinearCluster3D*>(p));
   }
   static void deleteArray_NPLcLcLLinearCluster3D(void *p) {
      delete [] (static_cast<::NPL::LinearCluster3D*>(p));
   }
   static void destruct_NPLcLcLLinearCluster3D(void *p) {
      typedef ::NPL::LinearCluster3D current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::NPL::LinearCluster3D

namespace ROOT {
   // Wrappers around operator new
   static void *new_NPLcLcLLinearRansac3D(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::NPL::LinearRansac3D : new ::NPL::LinearRansac3D;
   }
   static void *newArray_NPLcLcLLinearRansac3D(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::NPL::LinearRansac3D[nElements] : new ::NPL::LinearRansac3D[nElements];
   }
   // Wrapper around operator delete
   static void delete_NPLcLcLLinearRansac3D(void *p) {
      delete (static_cast<::NPL::LinearRansac3D*>(p));
   }
   static void deleteArray_NPLcLcLLinearRansac3D(void *p) {
      delete [] (static_cast<::NPL::LinearRansac3D*>(p));
   }
   static void destruct_NPLcLcLLinearRansac3D(void *p) {
      typedef ::NPL::LinearRansac3D current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::NPL::LinearRansac3D

namespace ROOT {
   static TClass *vectorlEintgR_Dictionary();
   static void vectorlEintgR_TClassManip(TClass*);
   static void *new_vectorlEintgR(void *p = nullptr);
   static void *newArray_vectorlEintgR(Long_t size, void *p);
   static void delete_vectorlEintgR(void *p);
   static void deleteArray_vectorlEintgR(void *p);
   static void destruct_vectorlEintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<int>*)
   {
      vector<int> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<int>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<int>", -2, "vector", 389,
                  typeid(vector<int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEintgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<int>) );
      instance.SetNew(&new_vectorlEintgR);
      instance.SetNewArray(&newArray_vectorlEintgR);
      instance.SetDelete(&delete_vectorlEintgR);
      instance.SetDeleteArray(&deleteArray_vectorlEintgR);
      instance.SetDestructor(&destruct_vectorlEintgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<int> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<int>","std::vector<int, std::allocator<int> >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<int>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<int>*>(nullptr))->GetClass();
      vectorlEintgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEintgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<int> : new vector<int>;
   }
   static void *newArray_vectorlEintgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<int>[nElements] : new vector<int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEintgR(void *p) {
      delete (static_cast<vector<int>*>(p));
   }
   static void deleteArray_vectorlEintgR(void *p) {
      delete [] (static_cast<vector<int>*>(p));
   }
   static void destruct_vectorlEintgR(void *p) {
      typedef vector<int> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<int>

namespace ROOT {
   static TClass *vectorlENPLcLcLLinearCluster3DgR_Dictionary();
   static void vectorlENPLcLcLLinearCluster3DgR_TClassManip(TClass*);
   static void *new_vectorlENPLcLcLLinearCluster3DgR(void *p = nullptr);
   static void *newArray_vectorlENPLcLcLLinearCluster3DgR(Long_t size, void *p);
   static void delete_vectorlENPLcLcLLinearCluster3DgR(void *p);
   static void deleteArray_vectorlENPLcLcLLinearCluster3DgR(void *p);
   static void destruct_vectorlENPLcLcLLinearCluster3DgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<NPL::LinearCluster3D>*)
   {
      vector<NPL::LinearCluster3D> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<NPL::LinearCluster3D>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<NPL::LinearCluster3D>", -2, "vector", 389,
                  typeid(vector<NPL::LinearCluster3D>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlENPLcLcLLinearCluster3DgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<NPL::LinearCluster3D>) );
      instance.SetNew(&new_vectorlENPLcLcLLinearCluster3DgR);
      instance.SetNewArray(&newArray_vectorlENPLcLcLLinearCluster3DgR);
      instance.SetDelete(&delete_vectorlENPLcLcLLinearCluster3DgR);
      instance.SetDeleteArray(&deleteArray_vectorlENPLcLcLLinearCluster3DgR);
      instance.SetDestructor(&destruct_vectorlENPLcLcLLinearCluster3DgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<NPL::LinearCluster3D> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<NPL::LinearCluster3D>","std::vector<NPL::LinearCluster3D, std::allocator<NPL::LinearCluster3D> >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<NPL::LinearCluster3D>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlENPLcLcLLinearCluster3DgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<NPL::LinearCluster3D>*>(nullptr))->GetClass();
      vectorlENPLcLcLLinearCluster3DgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlENPLcLcLLinearCluster3DgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlENPLcLcLLinearCluster3DgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<NPL::LinearCluster3D> : new vector<NPL::LinearCluster3D>;
   }
   static void *newArray_vectorlENPLcLcLLinearCluster3DgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<NPL::LinearCluster3D>[nElements] : new vector<NPL::LinearCluster3D>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlENPLcLcLLinearCluster3DgR(void *p) {
      delete (static_cast<vector<NPL::LinearCluster3D>*>(p));
   }
   static void deleteArray_vectorlENPLcLcLLinearCluster3DgR(void *p) {
      delete [] (static_cast<vector<NPL::LinearCluster3D>*>(p));
   }
   static void destruct_vectorlENPLcLcLLinearCluster3DgR(void *p) {
      typedef vector<NPL::LinearCluster3D> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<NPL::LinearCluster3D>

namespace ROOT {
   static TClass *setlEintgR_Dictionary();
   static void setlEintgR_TClassManip(TClass*);
   static void *new_setlEintgR(void *p = nullptr);
   static void *newArray_setlEintgR(Long_t size, void *p);
   static void delete_setlEintgR(void *p);
   static void deleteArray_setlEintgR(void *p);
   static void destruct_setlEintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const set<int>*)
   {
      set<int> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(set<int>));
      static ::ROOT::TGenericClassInfo 
         instance("set<int>", -2, "set", 94,
                  typeid(set<int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &setlEintgR_Dictionary, isa_proxy, 0,
                  sizeof(set<int>) );
      instance.SetNew(&new_setlEintgR);
      instance.SetNewArray(&newArray_setlEintgR);
      instance.SetDelete(&delete_setlEintgR);
      instance.SetDeleteArray(&deleteArray_setlEintgR);
      instance.SetDestructor(&destruct_setlEintgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Insert< set<int> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("set<int>","std::set<int, std::less<int>, std::allocator<int> >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const set<int>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *setlEintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const set<int>*>(nullptr))->GetClass();
      setlEintgR_TClassManip(theClass);
   return theClass;
   }

   static void setlEintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_setlEintgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) set<int> : new set<int>;
   }
   static void *newArray_setlEintgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) set<int>[nElements] : new set<int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_setlEintgR(void *p) {
      delete (static_cast<set<int>*>(p));
   }
   static void deleteArray_setlEintgR(void *p) {
      delete [] (static_cast<set<int>*>(p));
   }
   static void destruct_setlEintgR(void *p) {
      typedef set<int> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class set<int>

namespace ROOT {
   static TClass *multisetlENPLcLcLLinearCluster3DgR_Dictionary();
   static void multisetlENPLcLcLLinearCluster3DgR_TClassManip(TClass*);
   static void *new_multisetlENPLcLcLLinearCluster3DgR(void *p = nullptr);
   static void *newArray_multisetlENPLcLcLLinearCluster3DgR(Long_t size, void *p);
   static void delete_multisetlENPLcLcLLinearCluster3DgR(void *p);
   static void deleteArray_multisetlENPLcLcLLinearCluster3DgR(void *p);
   static void destruct_multisetlENPLcLcLLinearCluster3DgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const multiset<NPL::LinearCluster3D>*)
   {
      multiset<NPL::LinearCluster3D> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(multiset<NPL::LinearCluster3D>));
      static ::ROOT::TGenericClassInfo 
         instance("multiset<NPL::LinearCluster3D>", -2, "set", 96,
                  typeid(multiset<NPL::LinearCluster3D>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &multisetlENPLcLcLLinearCluster3DgR_Dictionary, isa_proxy, 0,
                  sizeof(multiset<NPL::LinearCluster3D>) );
      instance.SetNew(&new_multisetlENPLcLcLLinearCluster3DgR);
      instance.SetNewArray(&newArray_multisetlENPLcLcLLinearCluster3DgR);
      instance.SetDelete(&delete_multisetlENPLcLcLLinearCluster3DgR);
      instance.SetDeleteArray(&deleteArray_multisetlENPLcLcLLinearCluster3DgR);
      instance.SetDestructor(&destruct_multisetlENPLcLcLLinearCluster3DgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Insert< multiset<NPL::LinearCluster3D> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("multiset<NPL::LinearCluster3D>","std::multiset<NPL::LinearCluster3D, std::less<NPL::LinearCluster3D>, std::allocator<NPL::LinearCluster3D> >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const multiset<NPL::LinearCluster3D>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *multisetlENPLcLcLLinearCluster3DgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const multiset<NPL::LinearCluster3D>*>(nullptr))->GetClass();
      multisetlENPLcLcLLinearCluster3DgR_TClassManip(theClass);
   return theClass;
   }

   static void multisetlENPLcLcLLinearCluster3DgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_multisetlENPLcLcLLinearCluster3DgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) multiset<NPL::LinearCluster3D> : new multiset<NPL::LinearCluster3D>;
   }
   static void *newArray_multisetlENPLcLcLLinearCluster3DgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) multiset<NPL::LinearCluster3D>[nElements] : new multiset<NPL::LinearCluster3D>[nElements];
   }
   // Wrapper around operator delete
   static void delete_multisetlENPLcLcLLinearCluster3DgR(void *p) {
      delete (static_cast<multiset<NPL::LinearCluster3D>*>(p));
   }
   static void deleteArray_multisetlENPLcLcLLinearCluster3DgR(void *p) {
      delete [] (static_cast<multiset<NPL::LinearCluster3D>*>(p));
   }
   static void destruct_multisetlENPLcLcLLinearCluster3DgR(void *p) {
      typedef multiset<NPL::LinearCluster3D> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class multiset<NPL::LinearCluster3D>

namespace {
  void TriggerDictionaryInitialization_NPLinearRansac3DDict_Impl() {
    static const char* headers[] = {
"NPLinearRansac3D.h",
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
#line 1 "NPLinearRansac3DDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
namespace NPL{class __attribute__((annotate("$clingAutoload$NPLinearRansac3D.h")))  LinearCluster3D;}
namespace NPL{class __attribute__((annotate("$clingAutoload$NPLinearRansac3D.h")))  LinearRansac3D;}
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "NPLinearRansac3DDict dictionary payload"

#ifndef NPMULTITHREADING
  #define NPMULTITHREADING 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "NPLinearRansac3D.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"", payloadCode, "@",
"NPL::LinearCluster3D", payloadCode, "@",
"NPL::LinearRansac3D", payloadCode, "@",
"NPL::operator<", payloadCode, "@",
"NPL::operator>", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("NPLinearRansac3DDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_NPLinearRansac3DDict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_NPLinearRansac3DDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_NPLinearRansac3DDict() {
  TriggerDictionaryInitialization_NPLinearRansac3DDict_Impl();
}
