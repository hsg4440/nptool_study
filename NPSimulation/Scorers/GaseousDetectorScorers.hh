#ifndef GaseousDetectorScorers_h
#define GaseousDetectorScorers_h 1
/*****************************************************************************
 * Copyright (C) 2009-2016   this file is part of the NPTool Project         *
 *                                                                           *
 * For the licensing terms see $NPTOOL/Licence/NPTool_Licence                *
 * For the list of contributors see $NPTOOL/Licence/Contributors             *
 *****************************************************************************/

/*****************************************************************************
 * Original Author: Adrien MATTA  contact address: matta@lpccaen.in2p3.fr    *
 *                                                                           *
 * Creation Date  : February 2013                                            *
 * Last update    :                                                          *
 *---------------------------------------------------------------------------*
 * Decription:                                                               *
 *                                                                           *
 *---------------------------------------------------------------------------*
 * Comment: *** BASED ON CalorimeterScorers ***                              *
 *****************************************************************************/
#include "G4VPrimitiveScorer.hh"
#include "NPSHitsMap.hh"
//#include "NPSecondaries.hh"

#include <map>
using namespace std;
using namespace CLHEP;

namespace GaseousDetectorScorers {
  // Hold One hit info
  class GaseousDetectorData{
      public:
        GaseousDetectorData(const double& Energy,
                            const double& Time,
                            const vector<unsigned int>& Nesting,
                            //const vector<int>& Slice, 
                            const vector<double>& posZ, 
                            const vector<double>& DE){
          m_Index=CalculateIndex(Nesting);
          m_Level=Nesting;
          m_Energy=Energy;
          m_Time=Time;
          //m_SliceNbr=Slice;
          m_SlicePosZ=posZ;
          m_EnergyLossPerSlice=DE;
          };
        ~GaseousDetectorData(){};

      private:
        unsigned int m_Index;
        vector<unsigned int> m_Level;
        double m_Energy;
        double m_Time;
        //vector<int> m_SliceNbr;
        vector<double> m_SlicePosZ;
        vector<double> m_EnergyLossPerSlice;

      public:
        static unsigned int CalculateIndex(const vector<unsigned int>& Nesting);

      public:
        inline unsigned int GetIndex() const {return m_Index;}
        inline vector<unsigned int> GetLevel() const {return m_Level;} 
        inline double GetEnergy() const {return m_Energy;}
        inline double GetTime() const {return m_Time;}
        //inline vector<int> GetSliceNbr() const {return m_SliceNbr;}
        inline vector<double> GetSlicePosZ() const {return m_SlicePosZ;}
        inline vector<double> GetEnergyLossPerSlice() const {return m_EnergyLossPerSlice;}


      public:
        void Add(const double& Energy) {m_Energy+=Energy;};
        //inline void SetSliceNbr(const int& SliceNbr){m_SliceNbr.push_back(SliceNbr);}
        inline void SetSlicePosZ(const double& z){m_SlicePosZ.push_back(z);}
        inline void SetEnergyLossPerSlice(const double& DE){m_EnergyLossPerSlice.push_back(DE);}
      };

  // Manage a vector of DSSD hit
  class GaseousDetectorDataVector{
    public:
      GaseousDetectorDataVector(){};
      ~GaseousDetectorDataVector(){};

    private:
      vector<GaseousDetectorData> m_Data;

    public:
      vector<GaseousDetectorData>::iterator find(const unsigned int& index) ;
      inline void clear(){m_Data.clear();} ;
      inline vector<GaseousDetectorData>::iterator end() {return m_Data.end();};
      inline vector<GaseousDetectorData>::iterator begin() {return m_Data.begin();};
      inline unsigned int size() {return m_Data.size();};
      inline void Add(const unsigned int& index,const double& Energy) {find(index)->Add(Energy);};
      inline void Set(const double& Energy, 
                      const double& Time, 
                      const vector<unsigned int>& Nesting, 
                      //const vector<int>& Slice, 
                      const vector<double>& z, 
                      const vector<double>& DE) {
        //m_Data.push_back(GaseousDetectorData(Energy,Time,Nesting,Slice,z,DE));
        m_Data.push_back(GaseousDetectorData(Energy,Time,Nesting,z,DE));
      };
      const GaseousDetectorData* operator[](const unsigned int& i) const {return &m_Data[i];};
  };


    //....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......
    class PS_GaseousDetector : public G4VPrimitiveScorer{
        
    public: // with description
        PS_GaseousDetector(G4String name, vector<G4int> NestingLevel,G4int depth=0);
        ~PS_GaseousDetector();

        
    protected: // with description
        G4bool ProcessHits(G4Step*, G4TouchableHistory*);
        
    public:
        void Initialize(G4HCofThisEvent*);
        void EndOfEvent(G4HCofThisEvent*);
        void clear();
        void DrawAll();
        void PrintAll();
        
    private: // How much level of volume nesting should be considered
        // Give the list of the nesting level at which the copy number should be return.
        // 0 is the lowest level possible (the actual volume copy number in which the interaction happen)
        vector<G4int> m_NestingLevel;
        
    private: 
        GaseousDetectorDataVector m_Data;
        double t_Energy;
        double t_Time;
        vector<unsigned int> t_Level;
        //vector<int> t_SliceNbr;
        vector<double> t_SlicePosZ;
        vector<double> t_EnergyLossPerSlice;
    public:
      inline unsigned int  GetMult() {return m_Data.size();};
      inline double GetEnergy(const unsigned int& i) {return m_Data[i]->GetEnergy();};
      inline double GetTime(const unsigned int& i) {return m_Data[i]->GetTime();};
      inline vector<double> GetSlicePosZ(const unsigned int& i) const {return m_Data[i]->GetSlicePosZ();}
      inline vector<double> GetEnergyLossPerSlice(const unsigned int& i) const {return m_Data[i]->GetEnergyLossPerSlice();}
      inline vector<unsigned int> GetLevel(const unsigned int& i) {return m_Data[i]->GetLevel();};
    };
}


#endif
