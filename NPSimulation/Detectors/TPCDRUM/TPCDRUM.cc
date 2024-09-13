/*****************************************************************************
 * Copyright (C) 2009-2024   this file is part of the NPTool Project       *
 *                                                                           *
 * For the licensing terms see $NPTOOL/Licence/NPTool_Licence                *
 * For the list of contributors see $NPTOOL/Licence/Contributors             *
 *****************************************************************************/

/*****************************************************************************
 * Original Author: SeonggeunHwang  contact address: sghwang4440@gmail.com                        *
 *                                                                           *
 * Creation Date  : July 2024                                           *
 * Last update    :                                                          *
 *---------------------------------------------------------------------------*
 * Decription:                                                               *
 *  This class describe  TPCDRUM simulation                             *
 *                                                                           *
 *---------------------------------------------------------------------------*
 * Comment:                                                                  *
 *                                                                           *
 *****************************************************************************/

// C++ headers
#include <sstream>
#include <cmath>
#include <limits>
//G4 Geometry object
#include "G4Tubs.hh"
#include "G4Box.hh"

//G4 sensitive
#include "G4SDManager.hh"
#include "G4MultiFunctionalDetector.hh"

//G4 various object
#include "G4Material.hh"
#include "G4Element.hh"
#include "G4Transform3D.hh"
#include "G4PVPlacement.hh"
#include "G4VisAttributes.hh"
#include "G4Colour.hh"
#include "G4UserLimits.hh"
#include "G4ProductionCuts.hh"
#include "G4FastSimulationManager.hh"

// NPTool header
#include "TPCDRUM.hh"
#include "TPCDrumScorers.hh"
#include "RootOutput.h"
#include "MaterialManager.hh"
#include "NPSDetectorFactory.hh"
#include "NPOptionManager.h"


// CLHEP header
#include "CLHEP/Random/RandGauss.h"

using namespace std;
using namespace CLHEP;


//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......
namespace TPCDRUM_NS{
  // Energy and time Resolution
  const double EnergyThreshold = 1000*MeV;
  // const double ResoTime = 4.5*ns ;
  // const double ResoEnergy = 1.0*MeV ;

  const double Radius = 500*mm ; 
  const double Width = 100*mm ;
  const double Thickness = 1500*mm ;
}
//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......
//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......
//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......
// TPCDRUM Specific Method
TPCDRUM::TPCDRUM(){
  m_Event = new TTPCDRUMData() ;
  m_TPCDRUMScorer = 0;
  HCID = -1;
  m_SquareDetector = 0;
  m_CylindricalDetector = 0;

  // RGB Color + Transparency
  m_VisSquare = new G4VisAttributes(G4Colour(0, 1, 0, 0.5));   
  m_VisCylinder = new G4VisAttributes(G4Colour(0, 0, 1, 0.5));   
  m_ReactionRegion = NULL;
}

TPCDRUM::~TPCDRUM(){
}
//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......
void TPCDRUM::AddDetector(G4ThreeVector POS, string  Shape){
  // Convert the POS value to R theta Phi as Spherical coordinate is easier in G4 
  m_R.push_back(POS.mag());
  m_Theta.push_back(POS.theta());
  m_Phi.push_back(POS.phi());
  m_Shape.push_back(Shape);
}


//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......
void TPCDRUM::AddDetector(double  R, double  Theta, double  Phi, string  Shape){
  m_R.push_back(R);
  m_Theta.push_back(Theta);
  m_Phi.push_back(Phi);
  m_Shape.push_back(Shape);
}

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......
G4LogicalVolume* TPCDRUM::BuildSquareDetector(){}
//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......
G4LogicalVolume* TPCDRUM::BuildCylindricalDetector(){
  if(!m_CylindricalDetector){
    
    
    G4Tubs* tub = new G4Tubs("TPCDRUM_Cyl",0,TPCDRUM_NS::Radius,TPCDRUM_NS::Thickness*0.5,0,360*deg);
    /*
    MaterialManager::getInstance()->GetGasFromLibrary("He", 1*atmosphere,273.15*kelvin);
    MaterialManager::getInstance()->GetGasFromLibrary("CO2", 1*atmosphere,273.15*kelvin);

    // G4Material* DetectorMaterial = MaterialManager::getInstance()->GetMaterialFromLibrary(TPCDRUM_NS::Material);
    
    G4Element* elHe = new G4Element("Hellium", "He", 2., 4.00*g/mole);
    G4Element* elC = new G4Element("Carbon", "C", 6., 12.01*g/mole);
    G4Element* elO = new G4Element("Oxygen", "O", 8., 16.00*g/mole);
    G4Material* matCO2 = new G4Material("CarbonDioxide", 1.977*mg/cm3, 2, kStateGas, 273.15*kelvin, 1*atmosphere);
    matCO2->AddElement(elC, 1);
    matCO2->AddElement(elO, 2);
    
    G4Material* DetectorMaterial = new G4Material("He10",(1.977*0.1+0.167*0.9)*mg/cm3,2,kStateGas,273.15*kelvin,1*atmosphere);
    DetectorMaterial->AddElement(elHe,90*perCent);
    DetectorMaterial->AddMaterial(matCO2,10*perCent);

    */

    unsigned const int NumberOfGasMix = m_GasMaterial.size();
    double density = 0;
    double density_sum = 0;
    vector<G4Material*>GasComponent;
    vector<double> FractionMass;

    for(unsigned int i = 0 ; i<NumberOfGasMix; i++){
    
      G4cout << MaterialManager::getInstance()->GetGasFromLibrary(m_GasMaterial[i],m_GasPressure,293.15) << G4endl;
      GasComponent.push_back(MaterialManager::getInstance()->GetGasFromLibrary(m_GasMaterial[i],m_GasPressure,293.15));
    }
    for(unsigned int i = 0 ; i<NumberOfGasMix; i++){
      density += ((double)m_GasFraction[i]/ 100.) * GasComponent[i]->GetDensity();
      density_sum += GasComponent[i]->GetDensity();
    }
    for(unsigned int i = 0 ; i<NumberOfGasMix;i++){
      FractionMass.push_back(GasComponent[i]->GetDensity() /density_sum);
    }
    G4Material* DetectorMaterial = new G4Material("DetectorMaterial",density,NumberOfGasMix,kStateGas,273.15,m_GasPressure);
    for(unsigned int i =0; i<NumberOfGasMix; i++){
      DetectorMaterial ->AddMaterial(GasComponent[i],FractionMass[i]);
      
    }
    G4cout << DetectorMaterial << G4endl;
    m_CylindricalDetector = new G4LogicalVolume(tub,DetectorMaterial,"logic_TPCDRUM_tub",0,0,0);
    m_CylindricalDetector->SetVisAttributes(m_VisSquare);
    m_CylindricalDetector->SetSensitiveDetector(m_TPCDRUMScorer);

    
  }
  return m_CylindricalDetector;
}

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......
//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......
//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......
// Virtual Method of NPS::VDetector class

// Read stream at Configfile to pick-up parameters of detector (Position,...)
// Called in DetecorConstruction::ReadDetextorConfiguration Method
void TPCDRUM::ReadConfiguration(NPL::InputParser parser){
  vector<NPL::InputBlock*> blocks = parser.GetAllBlocksWithToken("TPCDRUM");
  if(NPOptionManager::getInstance()->GetVerboseLevel())
    cout << "//// " << blocks.size() << " detectors found " << endl; 

  vector<string> cart = {"POS","Shape"};
  vector<string> sphe = {"R","Theta","Phi","Shape","GasMaterial","GasFraction","GasPressure"};

  for(unsigned int i = 0 ; i < blocks.size() ; i++){
    if(blocks[i]->HasTokenList(cart)){
      if(NPOptionManager::getInstance()->GetVerboseLevel())
        cout << endl << "////  TPCDRUM " << i+1 <<  endl;
    
      G4ThreeVector Pos = NPS::ConvertVector(blocks[i]->GetTVector3("POS","mm"));
      string Shape = blocks[i]->GetString("Shape");
      AddDetector(Pos,Shape);
    }
    else if(blocks[i]->HasTokenList(sphe)){
      if(NPOptionManager::getInstance()->GetVerboseLevel())
        cout << endl << "////  TPCDRUM " << i+1 <<  endl;
      double R = blocks[i]->GetDouble("R","mm");
      double Theta = blocks[i]->GetDouble("Theta","deg");
      double Phi = blocks[i]->GetDouble("Phi","deg");
      string Shape = blocks[i]->GetString("Shape");
      vector<string> GasName = blocks[i]->GetVectorString("GasMaterial");
      vector<int> GasFraction = blocks[i]->GetVectorInt("GasFraction");

      for(unsigned int j = 0 ; j< GasName.size();j++){
        m_GasMaterial.push_back(GasName[j]);
        m_GasFraction.push_back(GasFraction[j]);
      }

      m_GasPressure = (double)blocks[i]->GetInt("GasPressure")/760.*atmosphere;
      AddDetector(R,Theta,Phi,Shape);
    }
    else{
      cout << "ERROR: check your input file formatting " << endl;
      exit(1);
    }
  }
}


//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

// Construct detector and inialise sensitive part.
// Called After DetecorConstruction::AddDetector Method
void TPCDRUM::ConstructDetector(G4LogicalVolume* world){
  for (unsigned short i = 0 ; i < m_R.size() ; i++) {

    G4double wX =  sin(m_Theta[i] ) * cos(m_Phi[i] ) ;
    G4double wY =  sin(m_Theta[i] ) * sin(m_Phi[i] ) ;
    G4double wZ =  cos(m_Theta[i] ) ;
    G4ThreeVector Det_pos = G4ThreeVector(wX, wY, wZ) ;
    G4double ii = cos(m_Theta[i]) * cos(m_Phi[i]);
    G4double jj = cos(m_Theta[i]) * sin(m_Phi[i]);
    G4double kk = -sin(m_Theta[i]);
    G4ThreeVector Y(ii,jj,kk);
    G4ThreeVector w = Det_pos.unit();
    G4ThreeVector u = w.cross(Y);
    G4ThreeVector v = w.cross(u);
    // double w = 0.*deg;
    v = v.unit();
    u = u.unit();
    // u = G4ThreeVector(0,0,1);
    // G4RotationMatrix* Rot = new G4RotationMatrix(u,v,w);
    G4RotationMatrix* Rot = new G4RotationMatrix(u,v,w);
    

    if(m_Shape[i] == "Cylindrical"){  
      new G4PVPlacement(G4Transform3D(*Rot,Det_pos),
          BuildCylindricalDetector(),
          "TPCDRUM",world,false,i+1);
    }

    else if(m_Shape[i] == "Square"){
      new G4PVPlacement(G4Transform3D(*Rot,Det_pos),
          BuildSquareDetector(),
          "TPCDRUM",world,false,i+1);
    }
  }
  if(!m_ReactionRegion){
    G4ProductionCuts* ecut = new G4ProductionCuts();
    ecut->SetProductionCut(TPCDRUM_NS::EnergyThreshold,"e-");
    m_ReactionRegion = new G4Region("NPSimulationProcess");
    m_ReactionRegion->SetProductionCuts(ecut);
    m_ReactionRegion->AddRootLogicalVolume(m_CylindricalDetector);
    m_ReactionRegion->SetUserLimits(new G4UserLimits(1 * mm));
    
    }
  G4FastSimulationManager* mng = m_ReactionRegion->GetFastSimulationManager();
  unsigned int size = m_ReactionModel.size();
  for (unsigned int i = 0; i < size; i++) {
    mng->RemoveFastSimulationModel(m_ReactionModel[i]);
  }
  m_ReactionModel.clear();
  G4VFastSimulationModel* fsm;
  fsm = new NPS::BeamReaction("BeamReaction", m_ReactionRegion);
  m_ReactionModel.push_back(fsm);
  fsm = new NPS::Decay("Decay", m_ReactionRegion);
  m_ReactionModel.push_back(fsm);
}
//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......
// Add Detector branch to the EventTree.
// Called After DetecorConstruction::AddDetector Method
void TPCDRUM::InitializeRootOutput(){
  RootOutput *pAnalysis = RootOutput::getInstance();
  TTree *pTree = pAnalysis->GetTree();
  if(!pTree->FindBranch("TPCDRUM")){
    pTree->Branch("TPCDRUM", "TTPCDRUMData", &m_Event) ;
  }
  pTree->SetBranchAddress("TPCDRUM", &m_Event) ;
}

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......
// Read sensitive part and fill the Root tree.
// Called at in the EventAction::EndOfEventAvtion
void TPCDRUM::ReadSensitive(const G4Event* event){
  
  m_Event->Clear();
  auto HCE = event->GetHCofThisEvent();
  if(!HCE)return;
  
  if(HCID == -1)HCID = G4SDManager::GetSDMpointer()->GetCollectionID("TPCDRUM");
  auto evtMap = static_cast<NPS::HitsMap<G4double*>*>(HCE->GetHC(HCID));
  map<G4int,G4double**>::iterator it;
  for(it = evtMap->GetMap()->begin(); it != evtMap->GetMap()->end();it++){
    m_Event->SetData(0,
                 (*(it->second))[0],
                 (*(it->second))[1],
                 (*(it->second))[2],
                 (*(it->second))[3],
                 (*(it->second))[4],
                 (*(it->second))[5],
                 (*(it->second))[6],
                 (*(it->second))[7]);
  }
  // trackID, Energy, //time// , Position_x, Position_y, Position_z, PositionVector // 
}

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......
////////////////////////////////////////////////////////////////   
void TPCDRUM::InitializeScorers() { 
  // This check is necessary in case the geometry is reloaded
  bool already_exist = false; 
  m_TPCDRUMScorer = CheckScorer("TPCDRUM",already_exist) ;

  if(!already_exist){
    G4VPrimitiveScorer *TPCDRUM_SCORER =  new TPCDrumScorers::TPCDrum_Chamber("TPCDRUM",0,0);
    m_TPCDRUMScorer->RegisterPrimitive(TPCDRUM_SCORER);
  }
  G4SDManager::GetSDMpointer()->AddNewDetector(m_TPCDRUMScorer) ;
}

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......
//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......
//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......
////////////////////////////////////////////////////////////////////////////////
//            Construct Method to be pass to the DetectorFactory              //
////////////////////////////////////////////////////////////////////////////////
NPS::VDetector* TPCDRUM::Construct(){
  return  (NPS::VDetector*) new TPCDRUM();
}

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......
////////////////////////////////////////////////////////////////////////////////
//            Registering the construct method to the factory                 //
////////////////////////////////////////////////////////////////////////////////
extern"C" {
  class proxy_nps_TPCDRUM{
    public:
      proxy_nps_TPCDRUM(){
        NPS::DetectorFactory::getInstance()->AddToken("TPCDRUM","TPCDRUM");
        NPS::DetectorFactory::getInstance()->AddDetector("TPCDRUM",TPCDRUM::Construct);
      }
  };

  proxy_nps_TPCDRUM p_nps_TPCDRUM;
}
