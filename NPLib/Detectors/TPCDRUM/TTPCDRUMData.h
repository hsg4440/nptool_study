#ifndef __TPCDRUMDATA__
#define __TPCDRUMDATA__
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

// STL
#include <vector>
#include <string>
#include "TVector3.h"
using namespace std;

// ROOT
#include "TObject.h"

class TTPCDRUMData : public TObject {
  //////////////////////////////////////////////////////////////
  // data members are hold into vectors in order 
  // to allow multiplicity treatment
  private: 
    // Energy
    vector<UShort_t>   fTPCDRUM_E_DetectorNbr;
    vector<Double_t>   fTPCDRUM_Energy;

    // Time
    vector<UShort_t>   fTPCDRUM_T_DetectorNbr;
    vector<Double_t>   fTPCDRUM_Time;

    
    vector<Int_t>    fTPCDrumData_Type;
    vector<Int_t>    fTPCDrumData_Index;
    vector<Double_t> fTPCDrumData_EnergyDeposit;
    vector<Double_t> fTPCDrumData_StepLength;
    vector<Double_t> fTPCDrumData_Energy;
    vector<Double_t> fTPCDrumData_Position_X;
    vector<Double_t> fTPCDrumData_Position_Y;
    vector<Double_t> fTPCDrumData_Position_Z;
    vector<Double_t> fTPCDrumData_Material;


  //////////////////////////////////////////////////////////////
  // Constructor and destructor
  public: 
    TTPCDRUMData();
    ~TTPCDRUMData();
    

  //////////////////////////////////////////////////////////////
  // Inherited from TObject and overriden to avoid warnings
  public:
    void Clear();
    void Clear(const Option_t*) { Clear();};
    void Dump() const;


  //////////////////////////////////////////////////////////////
  // Getters and Setters
  // Prefer inline declaration to avoid unnecessary called of 
  // frequently used methods
  // add //! to avoid ROOT creating dictionnary for the methods
  public:
    //////////////////////    SETTERS    ////////////////////////
    // Energy
    inline void SetEnergy(const UShort_t& DetNbr,const Double_t& Energy){
      fTPCDRUM_E_DetectorNbr.push_back(DetNbr);
      fTPCDRUM_Energy.push_back(Energy);
    };//!

    // Time
    inline void SetTime(const UShort_t& DetNbr,const Double_t& Time)	{
      fTPCDRUM_T_DetectorNbr.push_back(DetNbr);     
      fTPCDRUM_Time.push_back(Time);
    };//!


    inline void SetData(const Int_t Type,
                        const Int_t Index,
                        const Double_t Energy,
                        const Double_t Position_X,
                        const Double_t Position_Y,
                        const Double_t Position_Z,
                        const Double_t EnergyDeposit,
                        const Double_t StepLength,
                        const Double_t Material
                        ){
      fTPCDrumData_Type.push_back(Type);
      fTPCDrumData_Index.push_back(Index);
      fTPCDrumData_Energy.push_back(Energy); 
      fTPCDrumData_Position_X.push_back(Position_X);  
      fTPCDrumData_Position_Y.push_back(Position_Y);  
      fTPCDrumData_Position_Z.push_back(Position_Z);  
      fTPCDrumData_EnergyDeposit.push_back(EnergyDeposit);
      fTPCDrumData_StepLength.push_back(StepLength);
      fTPCDrumData_Material.push_back(Material);


    }
  
    inline Int_t GetDataMult() const {return fTPCDrumData_Energy.size();}
    inline Int_t GetDataIndex(Int_t i) const {return fTPCDrumData_Index[i] ;}
    inline double_t GetDataEnergy(Int_t i)const {return fTPCDrumData_Energy[i];}
    inline double_t GetDataPositionX(Int_t i)const {return fTPCDrumData_Position_X[i];}
    inline double_t GetDataPositionY(Int_t i)const {return fTPCDrumData_Position_Y[i];}
    inline double_t GetDataPositionZ(Int_t i)const {return fTPCDrumData_Position_Z[i];}
    inline double_t GetDataEnergyDeposit(Int_t i) const{return fTPCDrumData_EnergyDeposit[i];}
    inline double_t GetDataStepLength(Int_t i) const{return fTPCDrumData_StepLength[i];}
    inline double_t GetDataMaterial(Int_t i) const{return fTPCDrumData_Material[i];}
    //////////////////////    GETTERS    ////////////////////////
    // Energy
    inline UShort_t GetMultEnergy() const
      {return fTPCDRUM_E_DetectorNbr.size();}
    inline UShort_t GetE_DetectorNbr(const unsigned int &i) const 
      {return fTPCDRUM_E_DetectorNbr[i];}//!
    inline Double_t Get_Energy(const unsigned int &i) const 
      {return fTPCDRUM_Energy[i];}//!

    // Time
    inline UShort_t GetMultTime() const
      {return fTPCDRUM_T_DetectorNbr.size();}
    inline UShort_t GetT_DetectorNbr(const unsigned int &i) const 
      {return fTPCDRUM_T_DetectorNbr[i];}//!
    inline Double_t Get_Time(const unsigned int &i) const 
      {return fTPCDRUM_Time[i];}//!


  //////////////////////////////////////////////////////////////
  // Required for ROOT dictionnary
  ClassDef(TTPCDRUMData,1)  // TPCDRUMData structure
};

#endif
