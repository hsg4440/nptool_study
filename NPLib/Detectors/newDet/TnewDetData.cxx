/*****************************************************************************
 * Copyright (C) 2009-2025   this file is part of the NPTool Project       *
 *                                                                           *
 * For the licensing terms see $NPTOOL/Licence/NPTool_Licence                *
 * For the list of contributors see $NPTOOL/Licence/Contributors             *
 *****************************************************************************/

/*****************************************************************************
 * Original Author: nono  contact address: nono                        *
 *                                                                           *
 * Creation Date  : January 2025                                           *
 * Last update    :                                                          *
 *---------------------------------------------------------------------------*
 * Decription:                                                               *
 *  This class hold newDet Raw data                                    *
 *                                                                           *
 *---------------------------------------------------------------------------*
 * Comment:                                                                  *
 *                                                                           *   
 *                                                                           *
 *****************************************************************************/
#include "TnewDetData.h"

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
using namespace std; 

ClassImp(TnewDetData)


//////////////////////////////////////////////////////////////////////
TnewDetData::TnewDetData() {
}



//////////////////////////////////////////////////////////////////////
TnewDetData::~TnewDetData() {
}



//////////////////////////////////////////////////////////////////////
void TnewDetData::Clear() {
  // Energy
  fnewDet_E_DetectorNbr.clear();
  fnewDet_Energy.clear();
  // Time
  fnewDet_T_DetectorNbr.clear();
  fnewDet_Time.clear();
}



//////////////////////////////////////////////////////////////////////
void TnewDetData::Dump() const {
  // This method is very useful for debuging and worth the dev.
  cout << "XXXXXXXXXXXXXXXXXXXXXXXX New Event [TnewDetData::Dump()] XXXXXXXXXXXXXXXXX" << endl;

  // Energy
  size_t mysize = fnewDet_E_DetectorNbr.size();
  cout << "newDet_E_Mult: " << mysize << endl;
 
  for (size_t i = 0 ; i < mysize ; i++){
    cout << "DetNbr: " << fnewDet_E_DetectorNbr[i]
         << " Energy: " << fnewDet_Energy[i];
  }
  
  // Time
  mysize = fnewDet_T_DetectorNbr.size();
  cout << "newDet_T_Mult: " << mysize << endl;
 
  for (size_t i = 0 ; i < mysize ; i++){
    cout << "DetNbr: " << fnewDet_T_DetectorNbr[i]
         << " Time: " << fnewDet_Time[i];
  }
}
