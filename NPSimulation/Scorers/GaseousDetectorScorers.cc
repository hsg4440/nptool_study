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
 *  File old the scorer specific to the Sharc Detector                       *
 *                                                                           *
 *---------------------------------------------------------------------------*
 * Comment:                                                                  *
 * This new type of scorer is aim to become the standard for DSSD,SSSD and   *
 * PAD detector (any Silicon Detector)                                       *
 *****************************************************************************/
#include "GaseousDetectorScorers.hh"
#include "G4UnitsTable.hh"
using namespace GaseousDetectorScorers;

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......
//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......
//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......
//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......
unsigned int
GaseousDetectorData::CalculateIndex(const vector<unsigned int>& level) {

  cout << "Enter in GaseousDetectorData::CalculateIndex " << endl;
  unsigned int size       = level.size();
  cout << "      size = " << size << endl;
  unsigned int result     = 0;
  unsigned int multiplier = 1;
  for (unsigned int i = 0; i < size; i++) {
    cout << "level[" << i << "] = " << level[i] << endl;
    result += level[i] * multiplier;
    multiplier *= 1000;
  }
  return result;
}

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......
//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......
//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......
//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......
vector<GaseousDetectorData>::iterator
GaseousDetectorDataVector::find(const unsigned int& index) {
  for (vector<GaseousDetectorData>::iterator it = m_Data.begin();
       it != m_Data.end(); it++) {
    if ((*it).GetIndex() == index)
      return it;
  }
  return m_Data.end();
}

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......
//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......
//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......
//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......
PS_GaseousDetector::PS_GaseousDetector(G4String name, vector<G4int> NestingLevel,
                               G4int depth)
    : G4VPrimitiveScorer(name, depth) {
  m_NestingLevel = NestingLevel;
}

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......
PS_GaseousDetector::~PS_GaseousDetector() {}

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......
G4bool PS_GaseousDetector::ProcessHits(G4Step* aStep, G4TouchableHistory*) {
  cout << endl << " ===== Enter in PS_GaseousDetector::ProcessHits =====" << endl;
  G4String particlename = aStep->GetTrack()->GetParticleDefinition()->GetParticleName();
  cout << particlename << endl;

  // Contain Energy, Time + as many copy number as nested volume
  unsigned int mysize = m_NestingLevel.size();
  t_Energy = aStep->GetTotalEnergyDeposit();
  t_Time   = aStep->GetPreStepPoint()->GetGlobalTime();
  t_EnergyLossPerSlice.push_back(t_Energy);
  double step_posZ = aStep->GetPreStepPoint()->GetPosition().z(); 
  t_SlicePosZ.push_back(step_posZ);
  cout << "mysize = " << mysize << endl;
  cout << "t_Energy = " << t_Energy << endl;
  cout << "step_posZ = " << step_posZ << endl; // it seems that step_size is not uniform
  cout << "t_EnergyLossPerSlice.size() = " << t_EnergyLossPerSlice.size() << endl;
  t_Level.clear();
  for (unsigned int i = 0; i < mysize; i++) {
    cout << "t_Level = " <<  aStep->GetPreStepPoint()->GetTouchableHandle()->GetCopyNumber(m_NestingLevel[i]) << endl;
    t_Level.push_back(
        aStep->GetPreStepPoint()->GetTouchableHandle()->GetCopyNumber(
            m_NestingLevel[i]));
  }
  // Check if the particle has interact before, if yes, add up the energies.
  vector<GaseousDetectorData>::iterator it;
  it = m_Data.find(GaseousDetectorData::CalculateIndex(t_Level));
  if (it != m_Data.end()) {
    it->Add(t_Energy);
    it->SetEnergyLossPerSlice(t_Energy);
    it->SetSlicePosZ(step_posZ);
  } else {
    //m_Data.Set(t_Energy, t_Time, t_Level, t_SliceNbr, t_SlicePosZ, t_EnergyLossPerSlice);
    m_Data.Set(t_Energy, t_Time, t_Level, t_SlicePosZ, t_EnergyLossPerSlice);
  }
  return TRUE;
}

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......
void PS_GaseousDetector::Initialize(G4HCofThisEvent*) { clear(); }

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......
void PS_GaseousDetector::EndOfEvent(G4HCofThisEvent*) {}

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......
void PS_GaseousDetector::clear() {
  m_Data.clear();
  t_Level.clear();
  //t_SliceNbr.clear();
  t_SlicePosZ.clear();
  t_EnergyLossPerSlice.clear();
}

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......
void PS_GaseousDetector::DrawAll() {}

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......
void PS_GaseousDetector::PrintAll() {}
//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......
