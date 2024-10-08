/*****************************************************************************
 * Copyright (C) 2009-2016   this file is part of the NPTool Project         *
 *                                                                           *
 * For the licensing terms see $NPTOOL/Licence/NPTool_Licence                *
 * For the list of contributors see $NPTOOL/Licence/Contributors             *
 *****************************************************************************/

/*****************************************************************************
 *                                                                           *
 * Original Author :  Adrien MATTA contact address: matta@lpccaen.in2p3.fr   *
 *                                                                           *
 * Creation Date   :   June 2009                                             *
 * Last update     :                                                         *
 *---------------------------------------------------------------------------*
 * Decription:  Class VDetector (virtual) for NPAnalysis                     *
 * All detector class used in NPAnalysis should derived from this virtual    *
 *  class. Those VDetector daughter will deal with geometry, calibration and *
 *  basic data treatment.                                                    *
 *                                                                           *
 *---------------------------------------------------------------------------*
 * Comment:                                                                  *
 *   See MUST2 array for exemple of VDetector derived class                  *
 *                                                                           *
 *****************************************************************************/
#include "NPVTreeReader.h"
//#include "NPOptionManager.h"

ClassImp(NPL::VTreeReader);

// Constructor
NPL::VTreeReader::VTreeReader(){
}

void NPL::VTreeReader::r_BuildPhysicalEvent(){

};
void NPL::VTreeReader::r_ClearEventPhysics(){

};
void NPL::VTreeReader::r_ClearEventData(){

};

// Destructor
NPL::VTreeReader::~VTreeReader(){
}
