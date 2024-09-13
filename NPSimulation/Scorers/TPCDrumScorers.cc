#include "TPCDrumScorers.hh"
#include "G4UnitsTable.hh"

using namespace TPCDrumScorers;

TPCDrum_Chamber::TPCDrum_Chamber(G4String name, G4int Level, G4int depth)
                :G4VPrimitiveScorer(name,depth),HCID(-1){
                    m_Level = Level;
                    m_Position = G4ThreeVector(-1000,-1000,-1000);
                    m_Index = -1;
                }
TPCDrum_Chamber::~TPCDrum_Chamber(){}

G4bool TPCDrum_Chamber::ProcessHits(G4Step* aStep, G4TouchableHistory*){

    m_Index = aStep->GetTrack()->GetCurrentStepNumber();
    G4double* DataArray = new G4double[8];
    //Tracknum
    DataArray[0] = aStep->GetTrack()->GetTrackID();
    //Energy
    DataArray[1] = aStep->GetPreStepPoint()->GetKineticEnergy();
    //Position
    m_Position = aStep->GetPreStepPoint()->GetPosition();
    DataArray[2] = m_Position.x();
    DataArray[3] = m_Position.y();
    DataArray[4] = m_Position.z();
    DataArray[5] = aStep->GetTotalEnergyDeposit();
    DataArray[6] = aStep->GetStepLength();
    DataArray[7] = aStep->GetPreStepPoint()->GetMass();
    
    map<G4int, G4double**>::iterator it = EvtMap->GetMap()->find(m_Index);
    EvtMap->set(m_Index,DataArray);
    return true;

}

void TPCDrum_Chamber::Initialize(G4HCofThisEvent* HCE){
    EvtMap = new NPS::HitsMap<G4double*>(GetMultiFunctionalDetector()->GetName(),GetName());
    if (HCID < 0 ) HCID=GetCollectionID(0);
    HCE->AddHitsCollection(HCID,(G4VHitsCollection*)EvtMap);
}
void TPCDrum_Chamber::EndOfEvent(G4HCofThisEvent*){}

void TPCDrum_Chamber::clear(){
    std::map<G4int,G4double**>::iterator MapIterator;
    for(MapIterator=EvtMap->GetMap()->begin() ; MapIterator != EvtMap->GetMap()->end() ; MapIterator++){
        delete *(MapIterator->second);
    }
    EvtMap->clear();
}