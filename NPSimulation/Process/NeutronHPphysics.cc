//
// ********************************************************************
// * License and Disclaimer                                           *
// *                                                                  *
// * The  Geant4 software  is  copyright of the Copyright Holders  of *
// * the Geant4 Collaboration.  It is provided  under  the terms  and *
// * conditions of the Geant4 Software License,  included in the file *
// * LICENSE and available at  http://cern.ch/geant4/license .  These *
// * include a list of copyright holders.                             *
// *                                                                  *
// * Neither the authors of this software system, nor their employing *
// * institutes,nor the agencies providing financial support for this *
// * work  make  any representation or  warranty, express or implied, *
// * regarding  this  software system or assume any liability for its *
// * use.  Please see the license in the file  LICENSE  and URL above *
// * for the full disclaimer and the limitation of liability.         *
// *                                                                  *
// * This  code  implementation is the result of  the  scientific and *
// * technical work of the GEANT4 collaboration.                      *
// * By using,  copying,  modifying or  distributing the software (or *
// * any work based  on the software)  you  agree  to acknowledge its *
// * use  in  resulting  scientific  publications,  and indicate your *
// * acceptance of all terms of the Geant4 Software license.          *
// ********************************************************************
//
/// \file NeutronHPphysics.cc
/// \brief Implementation of the NeutronHPphysics class
//
//

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

#include "NeutronHPphysics.hh"

#include "NeutronHPMessenger.hh"

#include "G4ParticleDefinition.hh"
#include "G4ProcessManager.hh"
#include "G4ProcessTable.hh"

// Processes

#include "G4HadronElasticProcess.hh"
#include "G4ParticleHPElastic.hh"
#include "G4ParticleHPElasticData.hh"
#include "G4ParticleHPThermalScattering.hh"
#include "G4ParticleHPThermalScatteringData.hh"

#ifdef GEANT4_11
#include "G4HadronInelasticProcess.hh"
#include "G4NeutronCaptureProcess.hh"
#include "G4NeutronFissionProcess.hh"
#endif
#ifndef GEANT4_11
#include "G4NeutronInelasticProcess.hh"
#include "G4HadronCaptureProcess.hh"
#include "G4HadronFissionProcess.hh"
#endif

#include "G4ParticleHPInelastic.hh"
#include "G4ParticleHPInelasticData.hh"

#include "G4ParticleHPCapture.hh"
#include "G4ParticleHPCaptureData.hh"

#include "G4ParticleHPFission.hh"
#include "G4ParticleHPFissionData.hh"

#include "G4SystemOfUnits.hh"

#include "G4DynamicParticle.hh"
#include "G4Element.hh"
#include "G4HadronicProcessStore.hh"
#include "G4Isotope.hh"
#include "G4Material.hh"
#include "G4NistManager.hh"

using namespace std;
//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

NeutronHPphysics::NeutronHPphysics(const G4String& name)
    : G4VPhysicsConstructor(name), fThermal(true), fNeutronMessenger(0) {
  fNeutronMessenger = new NeutronHPMessenger(this);
}

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

NeutronHPphysics::~NeutronHPphysics() { delete fNeutronMessenger; }

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

void NeutronHPphysics::ConstructProcess() {
  G4ParticleDefinition* neutron = G4Neutron::Neutron();
  G4ProcessManager* pManager = neutron->GetProcessManager();

  // delete all neutron processes if already registered
  //
  G4VProcess* process = 0;
  process = pManager->GetProcess("hadElastic");
  if (process)
    pManager->RemoveProcess(process);
  //
  process = pManager->GetProcess("neutronInelastic");
  if (process)
    pManager->RemoveProcess(process);
  //
  process = pManager->GetProcess("nCapture");
  if (process)
    pManager->RemoveProcess(process);
  //
  process = pManager->GetProcess("nFission");
  if (process)
    pManager->RemoveProcess(process);

  // (re) create process: elastic
  //
  G4HadronElasticProcess* process1 = new G4HadronElasticProcess();
  pManager->AddDiscreteProcess(process1);
  //
  // model1a
  G4ParticleHPElastic* model1a = new G4ParticleHPElastic();
  process1->RegisterMe(model1a);
  process1->AddDataSet(new G4ParticleHPElasticData());

  //--- test ---//
  /* G4ParticleHPElasticData* dataSet1 = new G4ParticleHPElasticData();
   dataSet1->BuildPhysicsTable(*G4Neutron::Neutron());
   dataSet1->DumpPhysicsTable(*G4Neutron::Neutron());

   G4ParticleDefinition* particle;
   particle = G4Neutron::Neutron();
   G4Element* element = new G4Element("C","C",1);
   G4Isotope* isotope = new G4Isotope("C",6,12);
   element->AddIsotope(isotope,1);
   G4Material* mat = new G4Material("C",2.26*g/cm3,1);
   mat->AddElement(element,1);

   for(int i=0; i<20; i++){
     double energy = (1+i)*MeV;
     G4DynamicParticle *dn = new G4DynamicParticle(particle,G4ThreeVector(0,0,1), energy);
     cout << "--- " << energy <<  " is ok? ---" << endl;
     cout << dn->GetKineticEnergy() << endl;
     cout << dn->GetMomentum() << endl;
     cout << dataSet1->IsIsoApplicable(dn, 6, 12, element, mat) << endl;

     //cout << dataSet1->GetCrossSection(dn,element,273) << endl;
   }
 */

  //
  // model1b
  if (fThermal) {
    model1a->SetMinEnergy(4 * eV);
    G4ParticleHPThermalScattering* model1b = new G4ParticleHPThermalScattering();
    process1->RegisterMe(model1b);
    process1->AddDataSet(new G4ParticleHPThermalScatteringData());
  }

  // (re) create process: inelastic
  //
#ifdef GEANT4_11
  G4HadronInelasticProcess* process2 = new G4HadronInelasticProcess("neutronInelastic", G4Neutron::Definition() );
#endif
#ifndef GEANT4_11
  G4NeutronInelasticProcess* process2 = new G4NeutronInelasticProcess("neutronInelastic");
#endif
 
  pManager->AddDiscreteProcess(process2);
  //
  // cross section data set
  G4ParticleHPInelasticData* dataSet2 = new G4ParticleHPInelasticData();
  process2->AddDataSet(dataSet2);
  //
  // models
  G4ParticleHPInelastic* model2 = new G4ParticleHPInelastic();
  process2->RegisterMe(model2);

  // (re) create process: nCapture
  //
#ifdef GEANT4_11
  G4NeutronCaptureProcess* process3 = new G4NeutronCaptureProcess();
#endif
#ifndef GEANT4_11
  G4HadronCaptureProcess* process3 = new G4HadronCaptureProcess();
#endif
 
  pManager->AddDiscreteProcess(process3);
  //
  // cross section data set
  G4ParticleHPCaptureData* dataSet3 = new G4ParticleHPCaptureData();
  process3->AddDataSet(dataSet3);
  // dataSet3->BuildPhysicsTable(*G4Neutron::Neutron());
  // dataSet3->DumpPhysicsTable(*G4Neutron::Neutron());
  //
  //  models
  G4ParticleHPCapture* model3 = new G4ParticleHPCapture();
  process3->RegisterMe(model3);

  //--- test ---//
  /*G4ParticleDefinition* particle;
  particle = G4Neutron::Neutron();
  for(int i=0; i<100; i++){
    double energy = (1+i)*1e-3*eV;
    G4DynamicParticle *dn = new G4DynamicParticle(particle,G4ThreeVector(0,0,1), energy);
    G4Element* element = new G4Element("C","C",1);
    G4Isotope* isotope = new G4Isotope("C",6,12);
    element->AddIsotope(isotope,1);
    G4Material* mat = new G4Material("C",2.26*g/cm3,1);
    mat->AddElement(element,1);
    cout << "--- " << energy <<  " is ok? ---" << endl;
    cout << dataSet3->IsIsoApplicable(dn, 6, 12, element, mat) << endl;
    //cout << dataSet3->GetCrossSection(dn,element,12) << endl;
  }*/

  // (re) create process: nFission
  //
#ifdef GEANT4_11
  G4NeutronFissionProcess* process4 = new G4NeutronFissionProcess();
#endif
#ifndef GEANT4_11
  G4HadronFissionProcess* process4 = new G4HadronFissionProcess();
#endif


  pManager->AddDiscreteProcess(process4);
  //
  // cross section data set
  G4ParticleHPFissionData* dataSet4 = new G4ParticleHPFissionData();
  process4->AddDataSet(dataSet4);
  //
  // models
  G4ParticleHPFission* model4 = new G4ParticleHPFission();
  process4->RegisterMe(model4);
}

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......
