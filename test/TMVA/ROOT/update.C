#include "TMVA/NN_QCD_woHpT/weights/TMVAClassification_TMlpANN.cxx"
#include "TMVA/NN_QCD_woHpT/weights/TMVAClassification_TMlpANN.h"
#include "TMVA/Factory.h"
#include "TMVA/DataLoader.h"
#include "TMVA/Tools.h"
#include "TMVA/TMVAGui.h"

//void upd(TString name) {
void upd(TString name) {
  TFile *f = new TFile(name,"update");
  TTree *T = (TTree*)f->Get("tautau_tree");

  float Phi, Phi1, costheta1, costheta2, costhetastar, Q2V1, Q2V2;
  float njets;
  
  float nn;
  TBranch *bnn = T->Branch("NN_disc_QCD",&nn,"NN_disc_QCD/F");
  T->SetBranchAddress("njets", &njets);
  T->SetBranchAddress("Phi",  &Phi);
  T->SetBranchAddress("Phi1", &Phi1);
  T->SetBranchAddress("costheta1", &costheta1);
  T->SetBranchAddress("costheta2", &costheta2);
  T->SetBranchAddress("costhetastar", &costhetastar);
  T->SetBranchAddress("Q2V1", &Q2V1);
  T->SetBranchAddress("Q2V2", &Q2V2);

  // book the NN                                                                                                        
  TMVAClassification_TMlpANN* t = new TMVAClassification_TMlpANN();
  
  Long64_t nentries = T->GetEntries();
  for (Long64_t i=0;i<nentries;++i) {
    T->GetEntry(i);
    if ( njets < 2 ) nn = -10;
    else {
      nn = t->Value(0, Phi, Phi1,
		    costheta1, costheta2, costhetastar,
		    Q2V1, Q2V2);
    }
    bnn->Fill();
  }
  T->Write();
  delete f;
}

void update() {
  TString names[15] = {
    "data_obs.root",
    "VBF125.root",
    "WH125.root",
    "ZH125.root",
    "ggH125.root",
    "EWKZ.root",
    "TTJ.root",
    "TTT.root",
    "VVJ.root",
    "VVT.root",
    "W.root",
    "ZJ.root",
    "ZL.root",
    "ZTT.root",
    "embedded.root"};

  for(int i = 0; i != 15; ++i) {
    std::cout << "processing " << names[i] << std::endl; 
    upd("FREEZE_TREE/allCombine_trainTT/"+names[i]);
  }
  
}
