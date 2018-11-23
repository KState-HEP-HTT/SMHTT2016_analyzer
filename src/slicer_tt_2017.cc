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
    TH1F *h_cutflow = new TH1F("","",15,0,15);
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
    w_namu->Branch("weightLumi",        &weightLumi,          "weightLumi/F"         );
    w_namu->Branch("correctionMC",      &correctionMC,        "correctionMC/F"       );
    w_namu->Branch("genweight",         &genweight,           "genweight/F"          );
    w_namu->Branch("PUweight",          &PUweight,            "PUweight/F"           );
    w_namu->Branch("evtwt",             &evtwt,               "evtwt/F"              );
    w_namu->Branch("zptmassweight",     &zptmassweight,       "zptmassweight/F"      );
    w_namu->Branch("diTauLeg1SF",       &diTauLeg1SF,         "diTauLeg1SF/F"        );
    w_namu->Branch("diTauLeg2SF",       &diTauLeg2SF,         "diTauLeg2SF/F"        );
    w_namu->Branch("weightEmbded",      &weightEmbded,        "weightEmbded/F"       );
    /*
    w_namu->Branch("",        &,          "/F"         );
    w_namu->Branch("",        &,          "/F"         );
    */

    reweight::LumiReWeighting* LumiWeights_12;
    if (sample!="data_obs" && sample!="embedded") {
      TNamed* dbsName = (TNamed*)f_Double->Get("MiniAOD_name");
      std::string datasetName = dbsName->GetTitle();
      if (datasetName.find("Not Found") != std::string::npos) {
	f_Double->Close();
	return 2;
      }
      std::replace(datasetName.begin(), datasetName.end(), '/', '#');
      LumiWeights_12 = new reweight::LumiReWeighting("../weightROOTs/pudistributions_mc_2017.root", "../weightROOTs/pudistributions_data_2017.root",  datasetName.c_str(), "pileup");
      std::cout << datasetName << std::endl;
    }

    TFile *fZ=new TFile("../weightROOTs/zpt_weights_2016_BtoH.root");
    TH2F *histZ=(TH2F*) fZ->Get("zptmass_histo");
    
    TFile fem("../weightROOTs/htt_scalefactors_v17_5.root");
    RooWorkspace *wEmbed = (RooWorkspace*)fem.Get("w");
    fem.Close();

    TFile* fhtt2017sf = new TFile("../weightROOTs/htt_scalefactors_2017_v2.root");
    RooWorkspace* htt_sf = (RooWorkspace*)fhtt2017sf->Get("w");
    fhtt2017sf->Close();

    TFile bTag_eff_file("../weightROOTs/tagging_efficiencies_march2018_btageff-all_samp-inc-DeepCSV_medium.root", "READ");
    TH2F* btag_eff_b = (TH2F*)bTag_eff_file.Get("btag_eff_b")->Clone();
    TH2F* btag_eff_c = (TH2F*)bTag_eff_file.Get("btag_eff_c")->Clone();
    TH2F* btag_eff_oth = (TH2F*)bTag_eff_file.Get("btag_eff_oth")->Clone();

    float weightLumi = 1.0;
    // Lumi weight  
    float w_lumi = lumiWeight(sample, ngen);
    if (w_lumi==0) std::cout << std::endl << "!!!!!!!!!!!!!!!!!!!!!!!! ATTENTION - can't find lumi weight. Check the sample. !!!!!!!!!!!!!!!!!!!!!!!!" << std::endl << std::endl;
    weightLumi = w_lumi;
    std::cout << "============== map weight: " << w_lumi << std::endl;

    ////////////////////////////////////////////////////////
    // Stitching Weights for W and DY - Don't use for now //
    ////////////////////////////////////////////////////////
    if (sample.find("WJets") !=string::npos){ 
      w_wjet=62.038;
      if (tree->numGenJets==1) w_wjet=6.969;
      else if (tree->numGenJets==2) w_wjet=16.393;
      else if (tree->numGenJets==3) w_wjet=2.537;
      else if (tree->numGenJets==4) w_wjet=2.425;
      //weightLumi=w_wjet;
    }
    else w_wjet=1.00;
    
    if (sample.find("DY") != string::npos) { 
      w_DYjet=2.873;
      if (tree->numGenJets==1) w_DYjet=0.495;
      else if (tree->numGenJets==2) w_DYjet=1.042;
      else if (tree->numGenJets==3) w_DYjet=0.753;
      else if (tree->numGenJets==4) w_DYjet=0.452;
      //weightLumi=w_DYjet;
    }      
    else w_DYjet=1.00;
    

    std::cout.setf(std::ios::fixed, std::ios::floatfield);
    std::cout.precision(10);
    scenario_info scenario(treePtr, shape);

    TauTriggerSFs2017* tauSFs = new TauTriggerSFs2017("${CMSSW_BASE}/src/TauTriggerSFs2017/TauTriggerSFs2017/data/tauTriggerEfficiencies2017_New.root", "${CMSSW_BASE}/src/TauTriggerSFs2017/TauTriggerSFs2017/data/tauTriggerEfficiencies2017.root", "tight", "MVA");
    TString postfix = postfixMaps(shape);
    std::cout << postfix << std::endl;

    // Loop over all events
    Int_t nentries_wtn = (Int_t) treePtr->GetEntries();
    for (Int_t i = 0; i < nentries_wtn; i++) {
      treePtr->GetEntry(i);
      if (i % 1000 == 0) fprintf(stdout, "\r  Processed events: %8d of %8d ", i, nentries_wtn);
      fflush(stdout);
      ///////////////
      // shortcuts //
      ///////////////
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

      //////////////////
      // Taus sorting //
      //////////////////
      float charge1=tree->q_1;
      float charge2=tree->q_2;
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

      ////////////////
      // Selections //
      ////////////////
      // Regions
      h_cutflow->Fill(0.0,1.0); 
      float aiRegion = ((tree->t1RerunMVArun2v2DBoldDMwLTMedium && !tree->t2RerunMVArun2v2DBoldDMwLTTight && tree->t2RerunMVArun2v2DBoldDMwLTLoose) || (tree->t2RerunMVArun2v2DBoldDMwLTMedium && !tree->t1RerunMVArun2v2DBoldDMwLTTight && tree->t1RerunMVArun2v2DBoldDMwLTLoose));
      float signalRegion = tree->t1RerunMVArun2v2DBoldDMwLTTight && tree->t2RerunMVArun2v2DBoldDMwLTTight;
      if (!tree->t1RerunMVArun2v2DBoldDMwLTVLoose && tree->t2RerunMVArun2v2DBoldDMwLTVLoose) continue;
      h_cutflow->Fill(1.0,1.0);
      // Taus quality
      if (fabs(tree->eta_1)>2.1 || fabs(tree->eta_2)>2.1) continue;
      if (tree->pt_1<40 || tree->pt_2<40) continue;
      h_cutflow->Fill(2.0,1.0);
      // DoubleTau trigger
      bool tight35 = tree->DoubleTightTau35Pass && tree->t1MatchesDoubleTightTau35Path && tree->t2MatchesDoubleTightTau35Path && tree->t1MatchesDoubleTightTau35Filter && tree->t2MatchesDoubleTightTau35Filter;
      bool medium40 = tree->DoubleMediumTau40Pass && tree->t1MatchesDoubleMediumTau40Path && tree->t2MatchesDoubleMediumTau40Path && tree->t1MatchesDoubleMediumTau40Filter && tree->t2MatchesDoubleMediumTau40Filter;
      bool tight40 = tree->DoubleTightTau40Pass && tree->t1MatchesDoubleTightTau40Path && tree->t2MatchesDoubleTightTau40Path && tree->t1MatchesDoubleTightTau40Filter && tree->t2MatchesDoubleTightTau40Filter;
      bool passTrigAndPt=false;
      if (tree->pt_1>45 && tree->pt_2>45 && medium40) passTrigAndPt = true;
      if (tree->pt_1>45 && tree->pt_2>45 && tight40) passTrigAndPt = true;
      if (tree->pt_1>40 && tree->pt_2>40 && tight35) passTrigAndPt=true;
      if (!passTrigAndPt) continue;
      h_cutflow->Fill(3.0,1.0);
      if (TMath::IsNaN(tree->Q2V2)) continue;      
      h_cutflow->Fill(4.0,1.0);
      if (mytau1.DeltaR(mytau2) < 0.5) continue;
      h_cutflow->Fill(5.0,1.0);
      if (tree->againstElectronVLooseMVA6_1 < 0.5) continue; // L773
      if (tree->againstElectronVLooseMVA6_2 < 0.5) continue;
      if (tree->againstMuonLoose3_1 < 0.5) continue; //774
      if (tree->againstMuonLoose3_2 < 0.5) continue;
      if (tree->extramuon_veto) continue;
      if (tree->extraelec_veto) continue;
      h_cutflow->Fill(6.0,1.0);
      // MET and muon filters 
      /*
      if (tree->Flag_goodVertices!=0) continue;
      if (tree->Flag_globalSuperTightHalo2016Filter!=0) continue;
      if (tree->Flag_HBHENoiseFilter!=0) continue;
      if (tree->Flag_HBHENoiseIsoFilter!=0) continue;
      if (tree->Flag_EcalDeadCellTriggerPrimitiveFilter!=0) continue;
      if (tree->Flag_BadPFMuonFilter!=0) continue;
      if (tree->Flag_BadChargedCandidateFilter!=0) continue;
      if (tree->Flag_ecalBadCalibFilter!=0) continue;
      if (tree->Flag_eeBadScFilter!=0 && sample=="data_obs") continue;
      */
      h_cutflow->Fill(7.0,1.0);
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
      if (!(tree->gen_match_1==5 && tree->gen_match_2==5) && (name=="VVT"|| name=="TTT")) continue;
      if ((tree->gen_match_1==5 && tree->gen_match_2==5) && (name=="VVJ" || name=="TTJ")) continue;
      h_cutflow->Fill(8.0,1.0);
      float correctionMC = 1.0;
      float PUweight, diTauLeg1SF, diTauLeg2SF;
      ////////////////////////
      // Correctoion for MC //
      ////////////////////////
      if (sample!="data_obs" && sample!="embedded"){
	PUweight = LumiWeights_12->weight(tree->npu);
	correctionMC*=PUweight;
	correctionMC*=tree->genweight;
	// Tau ID eff
	if (tree->gen_match_1==5) correctionMC*=0.89;
	if (tree->gen_match_2==5) correctionMC*=0.89;
	//e->tau fakes VLoose eff
	if (tree->gen_match_1==1 or tree->gen_match_1==3){
	  if (std::abs(mytau1.Eta())<1.460) correctionMC*=1.09;
	  else if (std::abs(mytau1.Eta())>1.558) correctionMC*=1.19;
	}
	if (tree->gen_match_2==1 or tree->gen_match_2==3){
	  if (std::abs(mytau2.Eta())<1.460) correctionMC*=1.09;
	  else if (std::abs(mytau2.Eta())>1.558) correctionMC*=1.19;
	}
	// mu->tau fakes Loose ES : (gen_match_2=2 or 4): no correction, only uncertainty
	// mu->tau fakes Loose eff
	else if (tree->gen_match_1==2 or tree->gen_match_1==4){
	  if (std::abs(mytau1.Eta())<0.4) correctionMC*=1.06;
	  else if (std::abs(mytau1.Eta())<0.8) correctionMC*=1.02;
	  else if (std::abs(mytau1.Eta())<1.2) correctionMC*=1.10;
	  else if (std::abs(mytau1.Eta())<1.7) correctionMC*=1.03;
	  else correctionMC*=1.94;
	}
	else if (tree->gen_match_2==2 or tree->gen_match_2==4){
	  if (std::abs(mytau2.Eta())<0.4) correctionMC*=1.06;
	  else if (std::abs(mytau2.Eta())<0.8) correctionMC*=1.02;
	  else if (std::abs(mytau2.Eta())<1.2) correctionMC*=1.10;
	  else if (std::abs(mytau2.Eta())<1.7) correctionMC*=1.03;
	  else correctionMC*=1.94;
	}

	//////////////////////////////////////////////////
	// Correction factors available in RooWorkspace //
	//////////////////////////////////////////////////
	// Z(pt,mass) reweighting for DY events 
	if (sample.find("DY")!= string::npos || sample.find("EWKZ")!= string::npos) {
	  htt_sf->var("z_gen_mass")->setVal(tree->genM);
	  htt_sf->var("z_gen_pt")->setVal(tree->genpT);
	  correctionMC *= htt_sf->function("zptmass_weight_nom")->getVal();
	} 
	/*
	if (sample.find("DY")!= string::npos || sample.find("EWKZ")!= string::npos) {
	  float zpt_corr=histZ->GetBinContent(histZ->GetXaxis()->FindBin(tree->genM),histZ->GetYaxis()->FindBin(tree->genpT));
	  if (shape=="dyShape_Up") // up
	    correctionMC*=(1+1.10*(zpt_corr-1));
	  else if (shape=="dyShape_Down") // down
	    correctionMC*=(1+0.90*(zpt_corr-1));
	  else 
	    correctionMC*=zpt_corr; // nominal
	}
	*/
	// Tau Trigger SFs
	diTauLeg1SF = tauSFs->getDiTauScaleFactor(mytau1.Pt(), mytau1.Eta(), mytau1.Phi());
	diTauLeg2SF = tauSFs->getDiTauScaleFactor(mytau2.Pt(), mytau2.Eta(), mytau2.Phi());
	correctionMC*=diTauLeg1SF*diTauLeg2SF;
	
	//  Top pT reweighting for ttbar events
	float pttop1=tree->pt_top1;
	if (pttop1>400) pttop1=400;
	float pttop2=tree->pt_top2;
	if (pttop2>400) pttop2=400;
	if ((sample.find("TT")!= string::npos) && (shape!="ttbarShape_Up" && shape!="ttbarShape_Down")) correctionMC*=sqrt(exp(0.0615-0.0005*pttop1)*exp(0.0615-0.0005*pttop2));
	if ((sample.find("TT")!= string::npos) && shape=="ttbarShape_Up") correctionMC*=(1+2*(sqrt(exp(0.0615-0.0005*pttop1)*exp(0.0615-0.0005*pttop2))-1));
	
	// b-tagging corrections // FIXME - NEED TO ADD
	
      }
      
      ////////////////////////////
      // Construct Jets and MET //
      ////////////////////////////
      // njets count only jets with pT > 30
      if (jpt_1<30) {jpt_1=-9999.0; tree->jeta_1=-9999.0; tree->jphi_1=-9999.0;}
      if (jpt_2<30) {jpt_2=-9999.0; tree->jeta_2=-9999.0; tree->jphi_2=-9999.0;}
      TLorentzVector myjet1, myjet2, myrawmet;
      myjet1.SetPtEtaPhiM(jpt_1,tree->jeta_1,tree->jphi_1,0);
      myjet2.SetPtEtaPhiM(jpt_2,tree->jeta_2,tree->jphi_2,0);
      myrawmet.SetPtEtaPhiM(met,0,metphi,0);
      TLorentzVector jets=myjet2+myjet1;
      TLorentzVector mymet=myrawmet; // for ES
      TLorentzVector Higgs = mytau1+mytau2+mymet;	

      // Z mumu SF -- Need to be changed for new category!! FIXME
      /*
      if (is_boosted && (sample=="DY" || sample=="ZTT" || sample=="ZLL" || sample=="ZL" || sample=="ZJ" || sample=="EWKZLL" || sample=="EWKZNuNu")) 
	aweight*=zmumuSF_boosted(pt_sv,shape);
      if (is_VBF && (sample=="DY" || sample=="ZTT" || sample=="ZLL" || sample=="ZL" || sample=="ZJ" || sample=="EWKZLL" || sample=="EWKZNuNu")) 
	aweight*=zmumuSF_vbf(mjj,shape);
      */

      //////////////////////
      // Embedded weights //    >> Everyting coming from 2016 but for Tau ID eff <<
      //////////////////////
      float weightEmbded=1.0;
      if (sample=="embedded") {
	if( tree->genweight > 1) continue;
	h_cutflow->Fill(9.0,1.0);
	// Tau ID eff
	if (tree->gen_match_1==5) weightEmbded*=0.89;
	if (tree->gen_match_2==5) weightEmbded*=0.89;	  
	
	// set workspace variables : will be included in RooWorkspace in next iteration
	wEmbed->var("gt1_pt")->setVal(mytau1.Pt()); //FIXME to gen tau pt
	wEmbed->var("gt1_eta")->setVal(mytau1.Eta()); //FIXME to gen tau eta
	wEmbed->var("gt2_pt")->setVal(mytau2.Pt()); //FIXME to gen tau pt
	wEmbed->var("gt2_eta")->setVal(mytau2.Eta()); //FIXME to gen tau eta
	weightEmbded*=wEmbed->function("m_sel_trg_ratio")->getVal();
	wEmbed->var("gt_pt")->setVal(mytau1.Pt()); //FIXME to gen tau pt
	wEmbed->var("gt_eta")->setVal(mytau1.Eta()); //FIXME to gen tau eta
	weightEmbded*=wEmbed->function("m_sel_idEmb_ratio")->getVal();
	wEmbed->var("gt_pt")->setVal(mytau2.Pt()); //FIXME to gen tau pt
	wEmbed->var("gt_eta")->setVal(mytau2.Eta()); //FIXME to gen tau eta
	weightEmbded*=wEmbed->function("m_sel_idEmb_ratio")->getVal();
	float SF_Tau1 = 1.00;
	float SF_Tau2 = 1.00;
	if (mytau1.Pt()>=30 && mytau1.Pt()<35) SF_Tau1 = 0.18321;
	else if (mytau1.Pt()<40) SF_Tau1 = 0.53906;
	else if (mytau1.Pt()<45) SF_Tau1 = 0.63658;
	else if (mytau1.Pt()<50) SF_Tau1 = 0.73152;
	else if (mytau1.Pt()<60) SF_Tau1 = 0.79002;
	else if (mytau1.Pt()<80) SF_Tau1 = 0.84666;
	else if (mytau1.Pt()<100) SF_Tau1 = 0.84919;
	else if (mytau1.Pt()<150) SF_Tau1 = 0.86819;
	else if (mytau1.Pt()<200) SF_Tau1 = 0.88206;
	if (mytau2.Pt()>=30 && mytau2.Pt()<35) SF_Tau2 = 0.18321;
	else if (mytau2.Pt()<40) SF_Tau2 = 0.53906;
	else if (mytau2.Pt()<45) SF_Tau2 = 0.63658;
	else if (mytau2.Pt()<50) SF_Tau2 = 0.73152;
	else if (mytau2.Pt()<60) SF_Tau2 = 0.79002;
	else if (mytau2.Pt()<80) SF_Tau2 = 0.84666;
	else if (mytau2.Pt()<100) SF_Tau2 = 0.84919;
	else if (mytau2.Pt()<150) SF_Tau2 = 0.86819;
	else if (mytau2.Pt()<200) SF_Tau2 = 0.88206;

	
	//float WEIGHT_sel_trg_ratio= m_sel_trg_ratio(wEmbed,mytau1.Pt(),mytau1.Eta(),mytau2.Pt(),mytau2.Eta());
	weightEmbded *= tree->genweight * SF_Tau1 * SF_Tau1;
      }

      // Construct evtwt
      float evtwt = weightLumi*correctionMC*weightEmbded;
      // Clean weight on data for just in case 
      if (sample=="data_obs") evtwt=1.0;  
      // Additional selections
      bool selection =true;

      if (selection){
	// Anything related to systematics should be included i.e. picked by scenario
	fillTree(namu, tree, i,
		 Higgs, mytau1, mytau2, myjet1, myjet2,
		 mjj, met, metphi, m_sv, pt_sv, njets,
		 Dbkg_VBF, Dbkg_ggH,
		 ME_sm_VBF, ME_sm_ggH, ME_sm_WH, ME_sm_ZH, ME_bkg, ME_bkg1, ME_bkg2,
		 Phi, Phi1, costheta1, costheta2, costhetastar, Q2V1, Q2V2,
		 signalRegion, aiRegion, evtwt
		 );
	fillweight(w_namu,
		   weightLumi, correctionMC, genweight, PUweight,
		   htt_sf->function("zptmass_weight_nom")->getVal(),
		   diTauLeg1SF, diTauLeg2SF,
		   weightEmbded,evtwt
		   );
      }
      
    } // end of loop over events
    
    TFile *fout = TFile::Open(output.c_str(), "RECREATE");
    fout->cd();
    h_cutflow->SetName("CutFlow");
    h_cutflow->Write();
    namu->Write();
    nbevt->Write();
    w_namu->Write();
    fout->Close();
    Py_Finalize();
} 


