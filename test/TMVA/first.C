#include <cstdlib>
#include <iostream>
#include <map>
#include <string>

#include "TChain.h"
#include "TFile.h"
#include "TTree.h"
#include "TString.h"
#include "TObjString.h"
#include "TSystem.h"
#include "TROOT.h"

#include "TMVA/Factory.h"
#include "TMVA/DataLoader.h"
#include "TMVA/Tools.h"
#include "TMVA/TMVAGui.h"

// example following http://nbviewer.jupyter.org/github/iml-wg/tmvatutorials/blob/master/TMVA_RMVA.ipynb
void first() {

  // declare factory
  TMVA::Tools::Instance();
  auto inSignal = TFile::Open("../FREEZE_TREE/Oct26_tt_relaxedIso_fixMELA/VBF125.root");
  auto inBackgr = TFile::Open("../FREEZE_TREE/Oct26_tt_relaxedIso_fixMELA/data_obs.root");
  auto outputFile = TFile::Open("TMVAOutput.root", "RECREATE");

  TMVA::Factory* factory = new TMVA::Factory(
       "TMVAClassification", outputFile,
       "!V:!Silent:Color:DrawProgressBar:Transformations=I;D;P;G,D:AnalysisType=Classification" );
  
  // declare data loader
  TMVA::DataLoader* loader = new TMVA::DataLoader("NN_QCD_woHpT");

  loader->AddVariable("Phi");
  loader->AddVariable("Phi1");
  loader->AddVariable("costheta1");
  loader->AddVariable("costheta2");
  loader->AddVariable("costhetastar");
  loader->AddVariable("Q2V1");
  loader->AddVariable("Q2V2");
  //loader->AddVariable("hjj_pT");
  
  //loader->AddVariable("m_sv");
  
  
  /*
  loader->AddVariable("dEtajj");
  loader->AddVariable("dPhijj");
  loader->AddVariable("pt_sv");
  loader->AddVariable("mjj");
  loader->AddVariable("met");
  loader->AddVariable("el_pt");
  loader->AddVariable("t1_pt");
  loader->AddVariable("m_sv");
  */

  //loader->AddVariable("Dbkg_VBF");
  //loader->AddVariable("m_sv");
  
  // setting up dataset
  TTree* tsignal;
  TTree* tbackground;

  inSignal->GetObject("tautau_tree", tsignal);
  inBackgr->GetObject("tautau_tree", tbackground);

  loader->AddSignalTree    (tsignal,     1.0);
  loader->AddBackgroundTree(tbackground, 1.0);

  loader->SetSignalWeightExpression("evtwt");
  loader->SetBackgroundWeightExpression("evtwt");

  TCut sigSelection = "mjj>300 && njets>1 && t1_charge*t2_charge<0 && !(t1_decayMode == 5 || t1_decayMode ==  6 || t2_decayMode == 5 || t2_decayMode == 6) && is_signal";
  TCut bkgSelection = "mjj>300 && njets>1 && (t1_decayMode == 5 || t1_decayMode ==  6 || t2_decayMode == 5 || t2_decayMode ==6) && is_ai";

  
  
  loader->PrepareTrainingAndTestTree(sigSelection, bkgSelection,
				     //"nTrain_Signal=3000:nTrain_Background=12000:SplitMode=Random:NormMode=NumEvents:!V");
				     "SplitMode=Random:!V");

  //factory->BookMethod( loader, TMVA::Types::kMLP, "MLPBFGS", "H:!V:NeuronType=tanh:VarTransform=N:NCycles=1000:HiddenLayers=N:TestRate=5:TrainingMethod=BFGS:!UseRegulator" );
  //factory->BookMethod( loader, TMVA::Types::kMLP, "MLP", "H:!V:NeuronType=tanh:VarTransform=N:NCycles=2000:HiddenLayers=N:TestRate=5:!UseRegulator" );

  factory->BookMethod( loader, TMVA::Types::kTMlpANN, "TMlpANN", "H:V:NCycles=5000:HiddenLayers=N:LearningMethod=BFGS:ValidationFraction=0.3");
  

  factory->TrainAllMethods();
  factory->TestAllMethods();
  factory->EvaluateAllMethods();

  outputFile->Close();
  delete factory;
  delete loader;
  
  TMVA::TMVAGui("TMVAOutput.root");
 
}
