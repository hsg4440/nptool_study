#ifndef NPDETECTORFACTORY
#define NPDETECTORFACTORY
/*****************************************************************************
 * Copyright (C) 2009-2016   this file is part of the NPTool Project         *
 *                                                                           *
 * For the licensing terms see $NPTOOL/Licence/NPTool_Licence                *
 * For the list of contributors see $NPTOOL/Licence/Contributors             *
 *****************************************************************************/

/*****************************************************************************
 * Original Author: Adrien Matta   contact address: matta@lpccaen.in2p3.fr   *
 *                                                                           *
 * Creation Date  :                                                          *
 * Last update    :                                                          *
 *---------------------------------------------------------------------------*
 * Decription:                                                               *
 *                                                                           *
 *                                                                           *
 *---------------------------------------------------------------------------*
 * Comment:                                                                  *
 *                                                                           *
 *                                                                           *
 *****************************************************************************/


#include"NPVDetector.h"
#include"NPVTreeReader.h"
#include<map>
#include<string>

typedef NPL::VDetector* (*ClassDetectorFactoryFn)();
typedef NPL::VTreeReader* (*ClassDetectorReaderFactoryFn)();

namespace NPL{
class DetectorFactory{
  private:
      DetectorFactory();
      ~DetectorFactory();

  public:
      static DetectorFactory* getInstance();
      NPL::VDetector* Construct(std::string Token);
      NPL::VTreeReader* ConstructReader(std::string Token);
      void ReadClassList(std::string FileList);
      void AddToken(std::string Token, std::string LibName);
      void AddDetector(std::string Token, ClassDetectorFactoryFn fn);
      void AddDetectorReader(std::string Token, ClassDetectorReaderFactoryFn fn);
      void CreateClassList(std::string FileName);
  private:
      static DetectorFactory* m_Instance;
      // Map that Match the Token with Constructor, once the lib is loaded
      std::map<std::string,ClassDetectorFactoryFn> m_Construct;
      std::map<std::string,ClassDetectorReaderFactoryFn> m_ConstructReader;
      // Map that Match the Token with the Lib to be loaded
      std::map<std::string,std::string> m_TokenLib;
      std::string m_SharedLibExtension;
};
}
#endif
