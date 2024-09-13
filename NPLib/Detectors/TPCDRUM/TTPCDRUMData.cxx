/*****************************************************************************
 * Copyright (C) 2009-2024   this file is part of the NPTool Project       *
 *                                                                           *
 * For the licensing terms see $NPTOOL/Licence/NPTool_Licence                *
 * For the list of contributors see $NPTOOL/Licence/Contributors             *
 *****************************************************************************/

/*****************************************************************************
 * Original Author: seonggeun Hwang  contact address: sghwang4440@gmail.com                        *
 *                                                                           *
 * Creation Date  : August 2024                                           *
 * Last update    :                                                          *
 *---------------------------------------------------------------------------*
 * Decription:                                                               *
 *  This class hold TPCDRUM Raw data                                    *
 *                                                                           *
 *---------------------------------------------------------------------------*
 * Comment:                                                                  *
 *                                                                           *   
 *                                                                           *
 *****************************************************************************/
#include "TTPCDRUMData.h"

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
using namespace std; 

ClassImp(TTPCDRUMData)


//////////////////////////////////////////////////////////////////////
TTPCDRUMData::TTPCDRUMData() {
}



//////////////////////////////////////////////////////////////////////
TTPCDRUMData::~TTPCDRUMData() {
}



//////////////////////////////////////////////////////////////////////
void TTPCDRUMData::Clear() {
  // Energy
  fTPCDRUM_E_DetectorNbr.clear();
  fTPCDRUM_Energy.clear();
  // Time
  fTPCDRUM_T_DetectorNbr.clear();
  fTPCDRUM_Time.clear();

  fTPCDrumData_Type.clear();
  fTPCDrumData_Index.clear();
  fTPCDrumData_Energy.clear();
  fTPCDrumData_Position_X.clear();
  fTPCDrumData_Position_Y.clear();
  fTPCDrumData_Position_Z.clear();
  fTPCDrumData_EnergyDeposit.clear();
  fTPCDrumData_StepLength.clear();
  fTPCDrumData_Material.clear();

}



//////////////////////////////////////////////////////////////////////
void TTPCDRUMData::Dump() const {
}
