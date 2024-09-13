// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME TAsciiFileDict
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
#include "TAsciiFile.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_TAsciiFile(void *p = nullptr);
   static void *newArray_TAsciiFile(Long_t size, void *p);
   static void delete_TAsciiFile(void *p);
   static void deleteArray_TAsciiFile(void *p);
   static void destruct_TAsciiFile(void *p);
   static void streamer_TAsciiFile(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TAsciiFile*)
   {
      ::TAsciiFile *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TAsciiFile >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TAsciiFile", ::TAsciiFile::Class_Version(), "TAsciiFile.h", 33,
                  typeid(::TAsciiFile), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TAsciiFile::Dictionary, isa_proxy, 16,
                  sizeof(::TAsciiFile) );
      instance.SetNew(&new_TAsciiFile);
      instance.SetNewArray(&newArray_TAsciiFile);
      instance.SetDelete(&delete_TAsciiFile);
      instance.SetDeleteArray(&deleteArray_TAsciiFile);
      instance.SetDestructor(&destruct_TAsciiFile);
      instance.SetStreamerFunc(&streamer_TAsciiFile);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TAsciiFile*)
   {
      return GenerateInitInstanceLocal(static_cast<::TAsciiFile*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TAsciiFile*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr TAsciiFile::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TAsciiFile::Class_Name()
{
   return "TAsciiFile";
}

//______________________________________________________________________________
const char *TAsciiFile::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TAsciiFile*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TAsciiFile::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TAsciiFile*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TAsciiFile::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TAsciiFile*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TAsciiFile::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TAsciiFile*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void TAsciiFile::Streamer(TBuffer &R__b)
{
   // Stream an object of class TAsciiFile.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TNamed::Streamer(R__b);
      {
         vector<string> &R__stl =  fLines;
         R__stl.clear();
         int R__i, R__n;
         R__b >> R__n;
         R__stl.reserve(R__n);
         for (R__i = 0; R__i < R__n; R__i++) {
            string R__t;
            {TString R__str;
             R__str.Streamer(R__b);
             R__t = R__str.Data();}
            R__stl.push_back(R__t);
         }
      }
      R__b.CheckByteCount(R__s, R__c, TAsciiFile::IsA());
   } else {
      R__c = R__b.WriteVersion(TAsciiFile::IsA(), kTRUE);
      TNamed::Streamer(R__b);
      {
         vector<string> &R__stl =  fLines;
         int R__n=int(R__stl.size());
         R__b << R__n;
         if(R__n) {
            vector<string>::iterator R__k;
            for (R__k = R__stl.begin(); R__k != R__stl.end(); ++R__k) {
            {TString R__str((*R__k).c_str());
             R__str.Streamer(R__b);};
            }
         }
      }
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TAsciiFile(void *p) {
      return  p ? new(p) ::TAsciiFile : new ::TAsciiFile;
   }
   static void *newArray_TAsciiFile(Long_t nElements, void *p) {
      return p ? new(p) ::TAsciiFile[nElements] : new ::TAsciiFile[nElements];
   }
   // Wrapper around operator delete
   static void delete_TAsciiFile(void *p) {
      delete (static_cast<::TAsciiFile*>(p));
   }
   static void deleteArray_TAsciiFile(void *p) {
      delete [] (static_cast<::TAsciiFile*>(p));
   }
   static void destruct_TAsciiFile(void *p) {
      typedef ::TAsciiFile current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TAsciiFile(TBuffer &buf, void *obj) {
      ((::TAsciiFile*)obj)->::TAsciiFile::Streamer(buf);
   }
} // end of namespace ROOT for class ::TAsciiFile

namespace ROOT {
   static TClass *vectorlEstringgR_Dictionary();
   static void vectorlEstringgR_TClassManip(TClass*);
   static void *new_vectorlEstringgR(void *p = nullptr);
   static void *newArray_vectorlEstringgR(Long_t size, void *p);
   static void delete_vectorlEstringgR(void *p);
   static void deleteArray_vectorlEstringgR(void *p);
   static void destruct_vectorlEstringgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<string>*)
   {
      vector<string> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<string>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<string>", -2, "vector", 389,
                  typeid(vector<string>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEstringgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<string>) );
      instance.SetNew(&new_vectorlEstringgR);
      instance.SetNewArray(&newArray_vectorlEstringgR);
      instance.SetDelete(&delete_vectorlEstringgR);
      instance.SetDeleteArray(&deleteArray_vectorlEstringgR);
      instance.SetDestructor(&destruct_vectorlEstringgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<string> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<string>","std::vector<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > > >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<string>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEstringgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<string>*>(nullptr))->GetClass();
      vectorlEstringgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEstringgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEstringgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<string> : new vector<string>;
   }
   static void *newArray_vectorlEstringgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<string>[nElements] : new vector<string>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEstringgR(void *p) {
      delete (static_cast<vector<string>*>(p));
   }
   static void deleteArray_vectorlEstringgR(void *p) {
      delete [] (static_cast<vector<string>*>(p));
   }
   static void destruct_vectorlEstringgR(void *p) {
      typedef vector<string> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<string>

namespace {
  void TriggerDictionaryInitialization_TAsciiFileDict_Impl() {
    static const char* headers[] = {
"TAsciiFile.h",
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
#line 1 "TAsciiFileDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class __attribute__((annotate("$clingAutoload$TAsciiFile.h")))  TAsciiFile;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "TAsciiFileDict dictionary payload"

#ifndef NPMULTITHREADING
  #define NPMULTITHREADING 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "TAsciiFile.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"TAsciiFile", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("TAsciiFileDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_TAsciiFileDict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_TAsciiFileDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_TAsciiFileDict() {
  TriggerDictionaryInitialization_TAsciiFileDict_Impl();
}
