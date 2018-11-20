#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <utility>
#include <stdio.h>
#include "Python.h"
#include <typeinfo>
// ROOT
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>
#include <TGraph.h>
#include <TGraphAsymmErrors.h>
#include "TMultiGraph.h"
#include <TF1.h>
#include <TDirectoryFile.h>
#include <TRandom3.h>
#include "TLorentzVector.h"
#include "TString.h"
#include "TLegend.h"
#include "TH1F.h"
#include "TKey.h"
#include "THashList.h"
#include "THStack.h"
#include "TPaveLabel.h"
#include "TFile.h"
#include "RooWorkspace.h"
#include "RooRealVar.h"
#include "RooFunctor.h"
#include "TMath.h"
// my includes
#include "../include/myHelper.h"
#include "../include/tt_Tree.h"
#include "../include/SkimmedTree_tt.h"
#include "../include/ScaleFactor.h"
#include "../include/LumiReweightingStandAlone_mt.h"
#include "../include/lumiMap17.h"
#include "../include/btagSF.h"
#include "../include/scenario_info.h"
#include "../include/zmumuSF.h"
#include "../include/EmbedWeight.h"
#include "TauTriggerSFs2017/TauTriggerSFs2017/interface/TauTriggerSFs2017.h"

int main(int argc, char** argv) {
    
    std::string input = *(argv + 1);
    std::string output = *(argv + 2);
    std::string sample = *(argv + 3);
    std::string name = *(argv + 4);
    std::string shape = *(argv + 5);

    TFile *f_Double = new TFile(input.c_str());
    std::cout<<"XXXXXXXXXXXXX "<<input.c_str()<<" XXXXXXXXXXXX"<<std::endl;
    TTree* treePtr = (TTree*) f_Double->Get("tt_tree");
    TH1F* nbevt = (TH1F*) f_Double->Get("nevents");
    float ngen = nbevt->GetBinContent(2);
    SkimmedTree_tt* tree = new SkimmedTree_tt (treePtr);
    std::cout.precision(11);

    TTree* namu = new TTree("tautau_tree", "tautau_tree");
    namu->SetDirectory(0);

    namu->Branch("evtwt",               &evtwt,               "evtwt/F"              );

    namu->Branch("el_pt",               &el_pt,               "el_pt/F"              );
    namu->Branch("el_eta",              &el_eta,              "el_eta/F"             );
    namu->Branch("el_phi",              &el_phi,              "el_phi/F"             );
    namu->Branch("el_mass",             &el_mass,             "el_mass/F"            );
    namu->Branch("el_charge",           &el_charge,           "el_charge/F"          );
    namu->Branch("el_iso",              &el_iso,              "el_iso/F"             );
    namu->Branch("mu_pt",               &mu_pt,               "mu_pt/F"              );
    namu->Branch("mu_eta",              &mu_eta,              "mu_eta/F"             );
    namu->Branch("mu_phi",              &mu_phi,              "mu_phi/F"             );
    namu->Branch("mu_mass",             &mu_mass,             "mu_mass/F"            );
    namu->Branch("mu_charge",           &mu_charge,           "mu_charge/F"          );
    namu->Branch("mu_iso",              &mu_iso,              "mu_iso/F"             );
    namu->Branch("t1_pt",               &t1_pt,               "t1_pt/F"              );
    namu->Branch("t1_eta",              &t1_eta,              "t1_eta/F"             );
    namu->Branch("t1_phi",              &t1_phi,              "t1_phi/F"             );
    namu->Branch("t1_mass",             &t1_mass,             "t1_mass/F"            );
    namu->Branch("t1_charge",           &t1_charge,           "t1_charge/F"          );
    namu->Branch("t1_decayMode",        &t1_decayMode,        "t1_decayMode/F"       );
    namu->Branch("t1_dmf",              &t1_dmf,              "t1_dmf/F"             );
    namu->Branch("t1_dmf_new",          &t1_dmf_new,          "t1_dmf_new/F"         );
    namu->Branch("t1_iso_VL",           &t1_iso_VL,           "t1_iso_VL/F"          );
    namu->Branch("t1_iso_L",            &t1_iso_L,            "t1_iso_L/F"           );
    namu->Branch("t1_iso_M",            &t1_iso_M,            "t1_iso_M/F"           );
    namu->Branch("t1_iso_T",            &t1_iso_T,            "t1_iso_T/F"           );
    namu->Branch("t1_iso_VT",           &t1_iso_VT,           "t1_iso_VT/F"          );
    namu->Branch("t1_iso",              &t1_iso,              "t1_iso/F"             );
    namu->Branch("t1_newiso_VL",        &t1_newiso_VL,        "t1_newiso_VL/F"       );
    namu->Branch("t1_newiso_L",         &t1_newiso_L,         "t1_newiso_L/F"        );
    namu->Branch("t1_newiso_M",         &t1_newiso_M,         "t1_newiso_M/F"        );
    namu->Branch("t1_newiso_T",         &t1_newiso_T,         "t1_newiso_T/F"        );
    namu->Branch("t1_newiso_VT",        &t1_newiso_VT,        "t1_newiso_VT/F"       );
    namu->Branch("t1_newiso",           &t1_newiso,           "t1_newiso/F"          );

    namu->Branch("t2_dmf",              &t2_dmf,              "t2_dmf/F"             );
    namu->Branch("t2_dmf_new",          &t2_dmf_new,          "t2_dmf_new/F"         );
    namu->Branch("t2_pt",               &t2_pt,               "t2_pt/F"              );
    namu->Branch("t2_eta",              &t2_eta,              "t2_eta/F"             );
    namu->Branch("t2_phi",              &t2_phi,              "t2_phi/F"             );
    namu->Branch("t2_mass",             &t2_mass,             "t2_mass/F"            );
    namu->Branch("t2_charge",           &t2_charge,           "t2_charge/F"          );
    namu->Branch("t2_decayMode",        &t2_decayMode,        "t2_decayMode/F"       );
    namu->Branch("t2_iso_VL",           &t2_iso_VL,           "t2_iso_VL/F"          );
    namu->Branch("t2_iso_L",            &t2_iso_L,            "t2_iso_L/F"           );
    namu->Branch("t2_iso_M",            &t2_iso_M,            "t2_iso_M/F"           );
    namu->Branch("t2_iso_T",            &t2_iso_T,            "t2_iso_T/F"           );
    namu->Branch("t2_iso_VT",           &t2_iso_VT,           "t2_iso_VT/F"          );
    namu->Branch("t2_iso",              &t2_iso,              "t2_iso/F"             );
    namu->Branch("t2_newiso_VL",        &t2_newiso_VL,        "t2_newiso_VL/F"       );
    namu->Branch("t2_newiso_L",         &t2_newiso_L,         "t2_newiso_L/F"        );
    namu->Branch("t2_newiso_M",         &t2_newiso_M,         "t2_newiso_M/F"        );
    namu->Branch("t2_newiso_T",         &t2_newiso_T,         "t2_newiso_T/F"        );
    namu->Branch("t2_newiso_VT",        &t2_newiso_VT,        "t2_newiso_VT/F"       );
    namu->Branch("t2_newiso",           &t2_newiso,           "t2_newiso/F"          );

    namu->Branch("njets",               &njets,               "njets"                );
    namu->Branch("nbjets",              &nbjets,              "nbjets"               ); 
    namu->Branch("j1_pt",               &j1_pt,               "j1_pt/F"              );
    namu->Branch("j1_eta",              &j1_eta,              "j1_eta/F"             );
    namu->Branch("j1_phi",              &j1_phi,              "j1_phi/F"             );
    namu->Branch("j2_pt",               &j2_pt,               "j2_pt/F"              );
    namu->Branch("j2_eta",              &j2_eta,              "j2_eta/F"             );
    namu->Branch("j2_phi",              &j2_phi,              "j2_phi/F"             );
    namu->Branch("b1_pt",               &b1_pt,               "b1_pt/F"              );
    namu->Branch("b1_eta",              &b1_eta,              "b1_eta/F"             );
    namu->Branch("b1_phi",              &b1_phi,              "b1_phi/F"             );
    namu->Branch("b2_pt",               &b2_pt,               "b2_pt/F"              );
    namu->Branch("b2_eta",              &b2_eta,              "b2_eta/F"             );
    namu->Branch("b2_phi",              &b2_phi,              "b2_phi/F"             );

    namu->Branch("met",                 &met,                 "met/F"                );
    namu->Branch("metphi",              &metphi,              "metphi/F"             );
    namu->Branch("mjj",                 &mjj,                 "mjj/F"                );
    namu->Branch("mt",                  &mt,                  "mt/F"                 );

    namu->Branch("numGenJets",          &numGenJets,          "numGenJets/F"         );

    namu->Branch("pt_sv",               &pt_sv,               "pt_sv/F"              );
    namu->Branch("m_sv",                &m_sv,                "m_sv/F"               );
    namu->Branch("Dbkg_VBF",            &Dbkg_VBF,            "Dbkg_VBF/F"           );
    namu->Branch("Dbkg_ggH",            &Dbkg_ggH,            "Dbkg_ggH/F"           );

    namu->Branch("Phi"         ,        &Phi         ,        "Phi/F"                );
    namu->Branch("Phi1"        ,        &Phi1        ,        "Phi1/F"               );
    namu->Branch("costheta1"   ,        &costheta1   ,        "costheta1/F"          );
    namu->Branch("costheta2"   ,        &costheta2   ,        "costheta2/F"          );
    namu->Branch("costhetastar",        &costhetastar,        "costhetastar/F"       );
    namu->Branch("Q2V1"        ,        &Q2V1        ,        "Q2V1/F"               );
    namu->Branch("Q2V2"        ,        &Q2V2        ,        "Q2V2/F"               );
    namu->Branch("ME_sm_VBF"   ,        &ME_sm_VBF   ,        "ME_sm_/F"             );
    namu->Branch("ME_sm_ggH"   ,        &ME_sm_ggH   ,        "ME_sm_/F"             );
    namu->Branch("ME_sm_WH"    ,        &ME_sm_WH    ,        "ME_sm_WH/F"           );
    namu->Branch("ME_sm_ZH"    ,        &ME_sm_ZH    ,        "ME_sm_ZH/F"           );
    namu->Branch("ME_bkg"      ,        &ME_bkg      ,        "MEbkg_/F"             );
    namu->Branch("ME_bkg1"     ,        &ME_bkg1     ,        "MEbkg1_/F"            );
    namu->Branch("ME_bkg2"     ,        &ME_bkg2     ,        "MEbkg2_/F"            );


    namu->Branch("higgs_pT",            &higgs_pT,            "higgs_pT/F"           );
    namu->Branch("higgs_m",             &higgs_m,             "higgs_m/F"            );
    namu->Branch("hjj_pT",              &hjj_pT,              "hjj_pT/F"             );
    namu->Branch("hjj_m",               &hjj_m,               "hjj_m/F"              );
    namu->Branch("vis_mass",            &vis_mass,            "vis_mass/F"           );
    namu->Branch("dEtajj",              &dEtajj,              "dEtajj/F"             );
    namu->Branch("dPhijj",              &dPhijj,              "dPhijj/F"             );
    namu->Branch("cat_0jet",            &cat_0jet,            "cat_0jet/I"           );
    namu->Branch("cat_boosted",         &cat_boosted,         "cat_boosted/I"        );
    namu->Branch("cat_vbf",             &cat_vbf,             "cat_vbf/I"            );
    namu->Branch("cat_inclusive",       &cat_inclusive,       "cat_inclusive/I"      );
    namu->Branch("cat_antiiso",         &cat_antiiso,         "cat_antiiso/I"        );
    namu->Branch("cat_antiiso_0jet",    &cat_antiiso_0jet,    "cat_antiiso_0jet/I"   );
    namu->Branch("cat_antiiso_boosted", &cat_antiiso_boosted, "cat_antiiso_boosted/I");
    namu->Branch("cat_antiiso_vbf",     &cat_antiiso_vbf,     "cat_antiiso_vbf/I"    );
    namu->Branch("cat_qcd",             &cat_qcd,             "cat_qcd/I"            );
    namu->Branch("cat_qcd_0jet",        &cat_qcd_0jet,        "cat_qcd_0jet/I"       );
    namu->Branch("cat_qcd_boosted",     &cat_qcd_boosted,     "cat_qcd_boosted/I"    );
    namu->Branch("cat_qcd_vbf",         &cat_qcd_vbf,         "cat_qcd_vbf/I"        );

    namu->Branch("is_signal",           &is_signal,           "is_signal/I"          );
    namu->Branch("is_ai",               &is_ai,               "is_ai/I"              );


    TTree* w_namu = new TTree("w_tree", "w_tree");
    w_namu->SetDirectory(0);
    w_namu->Branch("w_lumi",               &w_lumi,               "w_lumi/F"             );
    w_namu->Branch("w_wjet",               &w_wjet,               "w_wjet/F"             );
    w_namu->Branch("w_DYjet",              &w_DYjet,              "w_DYjet/F"            );
    w_namu->Branch("w_pu",                 &w_pu,                 "w_pu/F"               );
    w_namu->Branch("genweight",            &genweight,            "genweight/F"          );
    w_namu->Branch("sf_id",                &sf_id,                "sf_id/F"              );
    w_namu->Branch("sf_trg1",              &sf_trg1,              "sf_trg1/F"            );
    w_namu->Branch("sf_trg2",              &sf_trg2,              "sf_trg2/F"            );
    w_namu->Branch("evtwt",                &evtwt,                "evtwt/F"              );


    //////////////////////////////////////////////////////////////////
    //                                                              //          
    //  Weights and Scale Factors                                   //
    //  1. PU reweighting : # of PV                                 //
    //  2. Tau ID eff SF : below                                    //
    //  3. Anti-lepton discriminator tau ID SF : below with 2.      //
    //  4. Trigger efficiencies ??                                  //
    //  5. Reweighting of LO Madgraph DY samples                    //
    //  6. Top pT reweighting                                       //
    //  7. Recoil correction                                        //
    //  8. Generator event weights                                  //
    //                                                              //
    /////////////////////////////////////////////////////////////////

    reweight::LumiReWeighting* LumiWeights_12;
    LumiWeights_12 = new reweight::LumiReWeighting("../weightROOTs/MC_nPU_081118.root", "../weightROOTs/Data_nPU_081118.root", "mc", "pileup");
    //LumiWeights_12 = new reweight::LumiReWeighting("../weightROOTs/MC_Moriond17_PU25ns_V1.root", "../weightROOTs/Data_Pileup_2016_271036-284044_80bins.root", "pileup", "pileup");
    
    TFile *fZ=new TFile("../weightROOTs/zpt_weights_2016_BtoH.root");
    TH2F *histZ=(TH2F*) fZ->Get("zptmass_histo");
    
    TFile fw("../weightROOTs/htt_scalefactors_v16_3.root");
    RooWorkspace *w = (RooWorkspace*)fw.Get("w");
    fw.Close();
    
    TFile fw2("../weightROOTs/htt_scalefactors_sm_moriond_v1.root");
    RooWorkspace *w2 = (RooWorkspace*)fw2.Get("w");
    fw2.Close();

    TFile fem("../weightROOTs/htt_scalefactors_v16_9_embedded.root");
    RooWorkspace *wEmbed = (RooWorkspace*)fem.Get("w");
    fem.Close();

    /*
    // D.Kim
    const char *scriptDirectoryName = "./../python/";
    Py_Initialize();
    PyObject *sysPath = PySys_GetObject((char *)"path");
    PyObject *path = PyString_FromString(scriptDirectoryName);
    PyList_Insert(sysPath, 0, path);
    PyObject* fitFunctions =  PyImport_ImportModule((char *)"FitFunctions");
    // The line below breaks the code
    PyObject* compute_sf = PyObject_GetAttrString(fitFunctions,"compute_SF");
    if (sample=="embedded") compute_sf = PyObject_GetAttrString(fitFunctions,"compute_Trg_Eff_Data");
    */
    float weight = 1.0;
    // Lumi weight  
    float w_lumi = lumiWeight(sample, ngen);
    if (w_lumi==0) std::cout << std::endl << "!!!!!!!!!!!!!!!!!!!!!!!! ATTENTION - can't find lumi weight. Check the sample. !!!!!!!!!!!!!!!!!!!!!!!!" << std::endl << std::endl;
    weight = w_lumi;
    std::cout << "============== map weight: " << w_lumi << std::endl;

    std::cout.setf(std::ios::fixed, std::ios::floatfield);
    std::cout.precision(10);
    scenario_info scenario(treePtr, shape);

    TauTriggerSFs2017* tauSFs = new TauTriggerSFs2017("${CMSSW_BASE}/src/TauTriggerSFs2017/TauTriggerSFs2017/data/tauTriggerEfficiencies2017_New.root", "${CMSSW_BASE}/src/TauTriggerSFs2017/TauTriggerSFs2017/data/tauTriggerEfficiencies2017.root", "tight", "MVA");
    TString postfix = postfixMaps(shape);
    std::cout << postfix << std::endl;
    //For shape systematics
    int nbhist=1;

    // Loop over all events
    Int_t nentries_wtn = (Int_t) treePtr->GetEntries();
    for (Int_t i = 0; i < nentries_wtn; i++) {
      treePtr->GetEntry(i);
      if (i % 1000 == 0) fprintf(stdout, "\r  Processed events: %8d of %8d ", i, nentries_wtn);
      fflush(stdout);


      //////////////////////////////////
      // Added for yield cross check  //
      //////////////////////////////////
      /*
      if (!tree->byVLooseIsolationMVArun2v1DBoldDMwLT_1 || !tree->byVLooseIsolationMVArun2v1DBoldDMwLT_2) continue; 
      // Regions
      float signalRegion = tree->byTightIsolationMVArun2v1DBoldDMwLT_1 && tree->byTightIsolationMVArun2v1DBoldDMwLT_2;
      float aiRegion = ((tree->byMediumIsolationMVArun2v1DBoldDMwLT_1 && !tree->byTightIsolationMVArun2v1DBoldDMwLT_2 && tree->byLooseIsolationMVArun2v1DBoldDMwLT_2) || (tree->byMediumIsolationMVArun2v1DBoldDMwLT_2 && !tree->byTightIsolationMVArun2v1DBoldDMwLT_1 && tree->byLooseIsolationMVArun2v1DBoldDMwLT_1));
      if (!tree->byLooseIsolationMVArun2v1DBoldDMwLT_1 && !tree->byLooseIsolationMVArun2v1DBoldDMwLT_2) continue; // Fig 43(a)
      */
      //////////////////////////////////

      // Regions
      float signalRegion = tree->byTightIsolationMVArun2v1DBnewDMwLT_1 && tree->byTightIsolationMVArun2v1DBnewDMwLT_2;
      float aiRegion = ((tree->byMediumIsolationMVArun2v1DBnewDMwLT_1 && !tree->byTightIsolationMVArun2v1DBnewDMwLT_2 && tree->byLooseIsolationMVArun2v1DBnewDMwLT_2) || (tree->byMediumIsolationMVArun2v1DBnewDMwLT_2 && !tree->byTightIsolationMVArun2v1DBnewDMwLT_1 && tree->byLooseIsolationMVArun2v1DBnewDMwLT_1));
      if (!tree->byVLooseIsolationMVArun2v1DBnewDMwLT_1 || !tree->byVLooseIsolationMVArun2v1DBnewDMwLT_2) continue; 

      // Taus quality
      if (fabs(tree->eta_1)>2.1 || fabs(tree->eta_2)>2.1) continue;
      if (tree->pt_1<40 || tree->pt_2<40) continue;
      // DoubleTau trigger
      bool tight35 = tree->DoubleTightTau35Pass && tree->t1MatchesDoubleTightTau35Path && tree->t2MatchesDoubleTightTau35Path && tree->t1MatchesDoubleTightTau35Filter && tree->t2MatchesDoubleTightTau35Filter;
      bool medium40 = tree->DoubleMediumTau40Pass && tree->t1MatchesDoubleMediumTau40Path && tree->t2MatchesDoubleMediumTau40Path && tree->t1MatchesDoubleMediumTau40Filter && tree->t2MatchesDoubleMediumTau40Filter;
      bool tight40 = tree->DoubleTightTau40Pass && tree->t1MatchesDoubleTightTau40Path && tree->t2MatchesDoubleTightTau40Path && tree->t1MatchesDoubleTightTau40Filter && tree->t2MatchesDoubleTightTau40Filter;
      bool passTrigAndPt=false;
      if (tree->pt_1>45 && tree->pt_2>45 && medium40) passTrigAndPt = true;
      if (tree->pt_1>45 && tree->pt_2>45 && tight40) passTrigAndPt = true;
      if (tree->pt_1>40 && tree->pt_2>40 && tight35) passTrigAndPt=true;
      if (!passTrigAndPt) continue;

      if (TMath::IsNaN(tree->Q2V2)) continue;

      float jpt_1 = scenario.get_jpt_1();
      float jpt_2 = scenario.get_jpt_2();
      float njets = scenario.get_njets();
      float met = scenario.get_met();
      float metphi = scenario.get_metphi();
      float m_sv = scenario.get_m_sv();
      float pt_sv = scenario.get_pt_sv();
      float mjj = scenario.get_mjj();
      float ME_sm_ggH = scenario.get_ME_sm_ggH();
      float ME_sm_VBF = scenario.get_ME_sm_VBF();
      float ME_sm_WH = scenario.get_ME_sm_WH();
      float ME_sm_ZH = scenario.get_ME_sm_ZH();
      float ME_bkg = scenario.get_ME_bkg();
      float ME_bkg1 = scenario.get_ME_bkg1();
      float ME_bkg2 = scenario.get_ME_bkg2();
      float Dbkg_VBF = scenario.get_Dbkg_VBF();
      float Dbkg_ggH = scenario.get_Dbkg_ggH();
      float Phi = scenario.get_Phi();
      float Phi1 = scenario.get_Phi1();
      float costheta1 = scenario.get_costheta1();
      float costheta2 = scenario.get_costheta2();
      float costhetastar = scenario.get_costhetastar();
      float Q2V1 = scenario.get_Q2V1();
      float Q2V2 = scenario.get_Q2V2();

      // mytau1 is the highest pT tau
      float charge1=tree->q_1;
      float charge2=tree->q_2;
      bool OS = false;
      bool SS = false;
      if (charge1*charge2>0.0) SS = true;
      else if (charge1*charge2<0.0) OS = true;

      TLorentzVector mytau1;
      mytau1.SetPtEtaPhiM(tree->pt_1,tree->eta_1,tree->phi_1,tree->m_1);
      TLorentzVector mytau2;
      mytau2.SetPtEtaPhiM(tree->pt_2,tree->eta_2,tree->phi_2,tree->m_2);
      if (tree->pt_1<tree->pt_2){
	charge2=tree->q_1;
	charge1=tree->q_2;
	mytau2.SetPtEtaPhiM(tree->pt_1,tree->eta_1,tree->phi_1,tree->m_1);
	mytau1.SetPtEtaPhiM(tree->pt_2,tree->eta_2,tree->phi_2,tree->m_2);
      }
      
      if (mytau1.DeltaR(mytau2) < 0.5) continue;
      if (tree->againstElectronVLooseMVA6_1 < 0.5) continue; // L773
      if (tree->againstElectronVLooseMVA6_2 < 0.5) continue;
      if (tree->againstMuonLoose3_1 < 0.5) continue; //774
      if (tree->againstMuonLoose3_2 < 0.5) continue;
      // if (!tree->byLooseIsolationMVArun2v1DBnewDMwLT_1 && !tree->byLooseIsolationMVArun2v1DBnewDMwLT_2) continue; // Fig 43(a)
      if (tree->extramuon_veto) continue;
      if (tree->extraelec_veto) continue;
      //float sf_trg=1.0;
      float sf_id=1.00;//0.89*0.89;
      //float eff_tau=1.0;


      // Weights depending in the generated jet multiplicity
      if (sample.find("WJets")!= string::npos){ 
	w_wjet=61.98299933;
	if (tree->numGenJets==1) w_wjet=6.963370836;
	else if (tree->numGenJets==2) w_wjet=16.37649708;
	else if (tree->numGenJets==3) w_wjet=2.532755448;
	else if (tree->numGenJets==4) w_wjet=2.418989568;
	//weight=w_wjet;
      }
      else w_wjet=1.00;
      
      if (sample.find("DY")!= string::npos) { 
	w_DYjet=2.873324952;
	if (tree->numGenJets==1) w_DYjet=0.502938039;
	else if (tree->numGenJets==2) w_DYjet=1.042256272;
	else if (tree->numGenJets==3) w_DYjet=0.656337234;
	else if (tree->numGenJets==4) w_DYjet=0.458531131;
	//weight=w_DYjet;
      }      
      else w_DYjet=1.00;

      // Multiply some weights and scale factors together
      // ID and iso corrections
      float correction=sf_id;
      if (sample!="data_obs") correction=correction*LumiWeights_12->weight(tree->npu);
      float aweight=tree->genweight*weight*correction;
      if (sample!="data_obs"){
	//Tau ID SF (Tight WP)
	if (tree->gen_match_1==5) aweight=aweight*0.89;
	if (tree->gen_match_2==5) aweight=aweight*0.89;
	//e->tau fakes VLoose
	if (tree->gen_match_1==1 or tree->gen_match_1==3){
	  if (std::abs(mytau1.Eta())<1.460) aweight=aweight*1.09;
	  else if (std::abs(mytau1.Eta())>1.558) aweight=aweight*1.19;
	}
	if (tree->gen_match_2==1 or tree->gen_match_2==3){
	  if (std::abs(mytau2.Eta())<1.460) aweight=aweight*1.09;
	  else if (std::abs(mytau2.Eta())>1.558) aweight=aweight*1.19;
	}
	// mu->tau fakes Loose
	else if (tree->gen_match_1==2 or tree->gen_match_1==4){
	  if (std::abs(mytau1.Eta())<0.4) aweight=aweight*1.06;
	  else if (std::abs(mytau1.Eta())<0.8) aweight=aweight*1.02;
	  else if (std::abs(mytau1.Eta())<1.2) aweight=aweight*1.10;
	  else if (std::abs(mytau1.Eta())<1.7) aweight=aweight*1.03;
	  else aweight=aweight*1.94;
	}
	else if (tree->gen_match_2==2 or tree->gen_match_2==4){
	  if (std::abs(mytau2.Eta())<0.4) aweight=aweight*1.06;
	  else if (std::abs(mytau2.Eta())<0.8) aweight=aweight*1.02;
	  else if (std::abs(mytau2.Eta())<1.2) aweight=aweight*1.10;
	  else if (std::abs(mytau2.Eta())<1.7) aweight=aweight*1.03;
	  else aweight=aweight*1.94;
	}
	//aweight=aweight*h_Trk->Eval(eta_1);
      }

      // Z pt reweighting for DY events
      if (sample.find("DY")!= string::npos || sample.find("EWKZ")!= string::npos) {
	float zpt_corr=histZ->GetBinContent(histZ->GetXaxis()->FindBin(tree->genM),histZ->GetYaxis()->FindBin(tree->genpT));
	if (shape=="dyShape_Up") // up
	  aweight=aweight*(1+1.10*(zpt_corr-1));
	else if (shape=="dyShape_Down") // down
	  aweight=aweight*(1+0.90*(zpt_corr-1));
	else 
	  aweight=aweight*zpt_corr; // nominal
      }

      //  Top pT reweighting for ttbar events
      float pttop1=tree->pt_top1;
      if (pttop1>400) pttop1=400;
      float pttop2=tree->pt_top2;
      if (pttop2>400) pttop2=400;
      if ((sample.find("TT")!= string::npos) && (shape!="ttbarShape_Up" && shape!="ttbarShape_Down")) aweight*=sqrt(exp(0.0615-0.0005*pttop1)*exp(0.0615-0.0005*pttop2));
      //aweight*=sqrt(exp(0.156-0.00137*pttop1)*exp(0.156-0.00137*pttop2));
      if ((sample.find("TT")!= string::npos) && shape=="ttbarShape_Up") aweight*=(1+2*(sqrt(exp(0.0615-0.0005*pttop1)*exp(0.0615-0.0005*pttop2))-1));

      // Tau Trigger SFs
      float diTauLeg1SF = tauSFs->getDiTauScaleFactor(mytau1.Pt(), mytau1.Eta(), mytau1.Phi());
      float diTauLeg2SF = tauSFs->getDiTauScaleFactor(mytau2.Pt(), mytau2.Eta(), mytau2.Phi());
      float w_tauTrgSF = diTauLeg1SF*diTauLeg2SF;
      aweight*=w_tauTrgSF;

      if (sample=="data_obs") aweight=1.0;
      
      // D.Kim : https://github.com/cecilecaillol/SMHTT2016/blob/master/mt/Analyze/FinalSelection2D_relaxed.cc#L744-L754
      //************************ Jet to tau FR shape **************************
      if (shape=="jetToTauFake_Up" && (name=="TTJ" or name=="ZJ" or name=="W")) {
	  float jtotau1=1.0;
	  if (tree->gen_match_1==6) {
	    jtotau1=1-(0.2*mytau1.Pt()/100);
	    if (mytau1.Pt()>200) jtotau1=1-(0.2*200.0/100);
	  }
	  float jtotau2=1.0;
	  if (tree->gen_match_2==6) {
	    jtotau2=1-(0.2*mytau2.Pt()/100);
	    if (mytau2.Pt()>200) jtotau2=1-(0.2*200.0/100);
	  }
	  aweight=aweight*jtotau1*jtotau2;
      }

	if (shape=="jetToTauFake_Down" && (name=="TTJ" or name=="ZJ" or name=="W")) {
	  float jtotau1=1.0;
	  if (tree->gen_match_1==6) {
	    jtotau1=1+(0.2*mytau1.Pt()/100);
	    if (mytau1.Pt()>200) jtotau1=1+(0.2*200.0/100);
	  }
	  float jtotau2=1.0;
	  if (tree->gen_match_2==6) {
	    jtotau2=1+(0.2*mytau2.Pt()/100);
	    if (mytau2.Pt()>200) jtotau2=1+(0.2*200.0/100);
	  }
	  aweight=aweight*jtotau1*jtotau2;
      }


      // D.Kim : Separation between L, T and J (for DY, TT, and VV)
      // https://github.com/truggles/Z_to_TauTau_13TeV/blob/SM-HTT-2016/analysis1BaselineCuts.py#L444-L457
      bool isZTT=false;
      bool isZL=false;
      bool isZJ=false;
      if (tree->gen_match_1==5 && tree->gen_match_2==5) isZTT=true;
      if (tree->gen_match_1<6 && tree->gen_match_2<6&&!(tree->gen_match_1==5 && tree->gen_match_2==5)) isZL=true;
      if (tree->gen_match_2==6 || tree->gen_match_1==6) isZJ=true;
      if ((name=="ZTT") && !isZTT) continue;
      if ((name=="ZL") && !isZL) continue;
      if ((name=="ZJ") && !isZJ) continue;

      // TT & VV : line 895~897
      if (!(tree->gen_match_1==5 && tree->gen_match_2==5) && (name=="VVT"|| name=="TTT")) continue;
      if ((tree->gen_match_1==5 && tree->gen_match_2==5) && (name=="VVJ" || name=="TTJ")) continue;

      for (int k=0; k<nbhist; ++k){
	// njets count only jets with pT > 30
        if (jpt_1<30) {jpt_1=-9999.0; tree->jeta_1=-9999.0; tree->jphi_1=-9999.0;}
        if (jpt_2<30) {jpt_2=-9999.0; tree->jeta_2=-9999.0; tree->jphi_2=-9999.0;}
	TLorentzVector myjet1;
	myjet1.SetPtEtaPhiM(jpt_1,tree->jeta_1,tree->jphi_1,0);
	TLorentzVector myjet2;
	myjet2.SetPtEtaPhiM(jpt_2,tree->jeta_2,tree->jphi_2,0);
	TLorentzVector jets=myjet2+myjet1;
	//mjj = jets.M();

	TLorentzVector myrawmet;
	myrawmet.SetPtEtaPhiM(met,0,metphi,0);
	TLorentzVector mymet=myrawmet;
	TLorentzVector Higgs = mytau1+mytau2+mymet;	

	// TES 
	if (tree->gen_match_2==5 && tree->gen_match_1==5) {
	  if (shape=="DM0_DOWN" && tree->t1_decayMode==0) {mytau1*=0.988; mymet=mymet+(0.012/0.988)*mytau1;}
	  if (shape=="DM1_DOWN" && tree->t1_decayMode==1) {mytau1*=0.988; mymet=mymet+(0.012/0.988)*mytau1;}
	  if (shape=="DM10_DOWN" && tree->t1_decayMode==10) {mytau1*=0.988; mymet=mymet+(0.012/0.988)*mytau1;}
	  if (shape=="DM0_DOWN" && tree->t2_decayMode==0) {mytau2*=0.988; mymet=mymet+(0.012/0.988)*mytau2;}
	  if (shape=="DM1_DOWN" && tree->t2_decayMode==1) {mytau2*=0.988; mymet=mymet+(0.012/0.988)*mytau2;}
	  if (shape=="DM10_DOWN" && tree->t2_decayMode==10) {mytau2*=0.988; mymet=mymet+(0.012/0.988)*mytau2;}

	  if (shape=="DM0_UP" && tree->t1_decayMode==0) {mytau1*=1.012; mymet=mymet-(0.012/1.012)*mytau1;}
	  if (shape=="DM1_UP" && tree->t1_decayMode==1) {mytau1*=1.012; mymet=mymet-(0.012/1.012)*mytau1;}
	  if (shape=="DM10_UP" && tree->t1_decayMode==10) {mytau1*=1.012; mymet=mymet-(0.012/1.012)*mytau1;}
	  if (shape=="DM0_UP" && tree->t2_decayMode==0) {mytau2*=1.012; mymet=mymet-(0.012/1.012)*mytau2;}
	  if (shape=="DM1_UP" && tree->t2_decayMode==1) {mytau2*=1.012; mymet=mymet-(0.012/1.012)*mytau2;}
	  if (shape=="DM10_UP" && tree->t2_decayMode==10) {mytau2*=1.012; mymet=mymet-(0.012/1.012)*mytau2;}
	}

	//if (mytau1.Pt() < 41 || mytau2.Pt() < 41 ) continue;
	//if (mytau1.Pt() < 50) continue;	
	//if ((fabs(mytau1.Eta()))>2.1 || (fabs(mytau2.Eta())>2.1)) continue; // L770

	float weight2=1.0;	  

	// D.Kim
	//weight2=weight2*sf_trg1*sf_trg2;

       	// Additional selections
	bool selection =true;

	// Z mumu SF -- Need to be changed for new category!! FIXME
	/*
	if (is_boosted && (sample=="DY" || sample=="ZTT" || sample=="ZLL" || sample=="ZL" || sample=="ZJ" || sample=="EWKZLL" || sample=="EWKZNuNu")) 
	  aweight*=zmumuSF_boosted(pt_sv,shape);
	if (is_VBF && (sample=="DY" || sample=="ZTT" || sample=="ZLL" || sample=="ZL" || sample=="ZJ" || sample=="EWKZLL" || sample=="EWKZNuNu")) 
	  aweight*=zmumuSF_vbf(mjj,shape);
	*/
	if (sample=="data_obs") {aweight=1.0; weight2=1.0;}       

	//////////////////////
	// Embedded weights //
	//////////////////////
	if (sample=="embedded") {
	  if( tree->genweight > 1) continue;
	  aweight=1.0; weight2=1.0;
	  //float Stitching_Weight= 1.0/0.899;
          float Stitching_Weight= 1.0;
          float Total_Embed_Weight=0;
	  if((tree->run >= 272007) && (tree->run < 275657)) Stitching_Weight=(1.0/0.897 * 1.02* 1.02);
	  if((tree->run >= 275657) && (tree->run < 276315))  Stitching_Weight=(1.0/0.908* 1.02* 1.02);
	  if((tree->run >= 276315) && (tree->run < 276831))  Stitching_Weight=(1.0/0.950* 1.02* 1.02);
	  if((tree->run >= 276831) && (tree->run < 277772))  Stitching_Weight=(1.0/0.861* 1.02* 1.02);
	  if((tree->run >= 277772) && (tree->run < 278820))  Stitching_Weight=(1.0/0.941* 1.02* 1.02);
	  if((tree->run >= 278820) && (tree->run < 280919))  Stitching_Weight=(1.0/0.908* 1.02* 1.02);
	  if((tree->run >= 280919) && (tree->run < 284045))  Stitching_Weight=(1.0/0.949* 1.02* 1.02);
          double EmbedWeight=  sf_trg1*sf_trg2 ;
          float WEIGHT_sel_trg_ratio= m_sel_trg_ratio(wEmbed,mytau1.Pt(),mytau1.Eta(),mytau2.Pt(),mytau2.Eta());
	  aweight=EmbedWeight * tree->genweight * Stitching_Weight * WEIGHT_sel_trg_ratio;
	  //std::cout << "embedded weight : " << aweight << std::endl;
	  //std::cout << "embedded weight : " << aweight << "\t" << tree->genweight << std::endl;
	  //std::cout << tree->evt << "\t" << mytau1.Pt() << "\t" << mytau2.Pt() << std::endl;
	}
	//std::cout << aweight << "\t" << weight2 << "\t" << weight2*aweight << std::endl;

	if (selection){
	  // Anything related to systematics should be included i.e. picked by scenario
	  fillTree(namu, tree, i,
		   Higgs, mytau1, mytau2, myjet1, myjet2,
		   mjj, met, metphi, m_sv, pt_sv, njets,
		   Dbkg_VBF, Dbkg_ggH,
		   ME_sm_VBF, ME_sm_ggH, ME_sm_WH, ME_sm_ZH, ME_bkg, ME_bkg1, ME_bkg2,
		   Phi, Phi1, costheta1, costheta2, costhetastar, Q2V1, Q2V2,
		   signalRegion, aiRegion, weight2*aweight
		   );
	  fillWeightTree(w_namu,
			 w_lumi,
			 w_wjet, w_DYjet,
			 LumiWeights_12->weight(tree->npu),
			 tree->genweight,
			 sf_id,sf_trg1,sf_trg2,
			 0,//w_trk
			 weight2*aweight
			 );
			 
	}
      }
    } // end of loop over events
    
    TFile *fout = TFile::Open(output.c_str(), "RECREATE");
    fout->cd();
    namu->Write();
    w_namu->Write();
    nbevt->Write();

    fout->Close();
    Py_Finalize();
} 


