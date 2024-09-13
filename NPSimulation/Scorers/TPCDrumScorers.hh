#ifndef TPCDRUMSCORERS_H
#define TPCDRUMSCORERS_H 1

#include "G4VPrimitiveScorer.hh"
#include "NPSHitsMap.hh"
#include "NPImage.h"
#include <map>

using namespace std;
using namespace CLHEP;

namespace TPCDrumScorers{

    class TPCDrum_Chamber: public G4VPrimitiveScorer{
        
        public:
        TPCDrum_Chamber(G4String name, G4int Level, G4int depth=0);
        ~TPCDrum_Chamber();

        protected:
        G4bool ProcessHits(G4Step*, G4TouchableHistory*);

        public:
        void Initialize(G4HCofThisEvent*);
        void EndOfEvent(G4HCofThisEvent*);
        void clear();
        
        private:
        G4int m_Level;

        G4int HCID;
        NPS::HitsMap<G4double*>*EvtMap;

        private:
        G4ThreeVector m_Position ;
        G4int m_Index;
    };
}
#endif