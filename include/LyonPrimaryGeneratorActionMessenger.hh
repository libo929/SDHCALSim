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
//
// $Id: LyonPrimaryGeneratorActionMessenger.hh,v 1.10 2007/07/02 13:22:08 vnivanch Exp $
// GEANT4 tag $Name: geant4-09-02 $
//
// 

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......
//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

#ifndef LyonPrimaryGeneratorActionMessenger_h
#define LyonPrimaryGeneratorActionMessenger_h 1

#include "globals.hh"
#include "G4UImessenger.hh"


class LyonPrimaryGeneratorAction;
class G4UIdirectory;
//class G4UIcmdWithADouble;
//class G4UIcmdWithAString;
class G4UIcmdWithAnInteger;
class G4UIcmdWithADouble;
//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

class LyonPrimaryGeneratorActionMessenger: public G4UImessenger
{
public:
  LyonPrimaryGeneratorActionMessenger(LyonPrimaryGeneratorAction*);
  virtual ~LyonPrimaryGeneratorActionMessenger();
    
  void SetNewValue(G4UIcommand*, G4String);


private:
  LyonPrimaryGeneratorAction*     primaryGenerator;
  G4UIdirectory*        runDir;
  G4UIcmdWithAnInteger*    SetGammaNumbercmd;
  G4UIcmdWithAnInteger*    SetMuonNumbercmd;
  G4UIcmdWithADouble* SetTimeScalecmd;
  /* G4UIcmdWithAString* gunOptionPositionCmd;
  G4UIcmdWithAString* gunOptionMomentumCmd;
  G4UIcmdWithADouble* randPosMaxCmd; 
  G4UIcmdWithADouble* solidAngleX0Cmd; 
  G4UIcmdWithADouble* solidAngleRadCmd;
  G4UIcmdWithADouble* gaussianMeanCmd;
  G4UIcmdWithADouble* gaussianSigmaCmd;
  G4UIcmdWithADouble* uniformParameterCmd; */
};

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

#endif
