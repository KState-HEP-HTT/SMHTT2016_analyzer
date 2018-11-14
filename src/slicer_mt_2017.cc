#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <utility>
#include <stdio.h>

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

// User
#include "../include/ComputeWG1Unc.h"
#include "../include/myHelper.h"
#include "../include/lumiMap17.h"
#include "../include/SkimmedTree_mt.h"
#include "../include/tt_Tree.h"
#include "../include/ScaleFactor.h"
#include "../include/ZmmSF.h"
#include "../include/LumiReweightingStandAlone_mt.h"
#include "../include/btagSF_mt.h"
#include "../include/EmbedWeight.h"
#include "../include/scenario_info.h"

typedef std::vector<double> NumV;

using namespace std;

int main(int argc, char** argv) {

    std::string input = *(argv + 1);
    std::string output = *(argv + 2);
    std::string sample = *(argv + 3);
    std::string name = *(argv + 4);
    std::string shape = *(argv + 5);
    float tes=0;

    TFile *f_Double = new TFile(input.c_str());
    cout<<"XXXXXXXXXXXXX "<<input.c_str()<<" XXXXXXXXXXXX"<<endl;
    TTree *treePtr = (TTree*) f_Double->Get("mutau_tree");
    TH1F* nbevt = (TH1F*) f_Double->Get("nevents");
    float ngen = nbevt->GetBinContent(2);
    SkimmedTree_mt* tree = new SkimmedTree_mt (treePtr);
    std::cout.precision(11);
    TFile *fout = TFile::Open(output.c_str(), "RECREATE");
    TTree* namu = new TTree("mutau_tree", "mutau_tree");
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
    namu->Branch("is_qcd",              &is_qcd,              "is_qcd/I"             );

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

    TFile *f_Trk=new TFile("../weightROOTs/Tracking_EfficienciesAndSF_BCDEFGH.root");
    TGraph *h_Trk=(TGraph*) f_Trk->Get("ratio_eff_eta3_dr030e030_corr");

    reweight::LumiReWeighting* LumiWeights_12;
    //LumiWeights_12 = new reweight::LumiReWeighting("../weightROOTs/MC_Moriond17_PU25ns_V1.root", "../weightROOTs/Data_Pileup_2016_271036-284044_80bins.root", "pileup", "pileup");

    LumiWeights_12 = new reweight::LumiReWeighting("../weightROOTs/MC_nPU_081118.root", "../weightROOTs/Data_nPU_081118.root", "mc", "pileup");

    TFile *fZ=new TFile("../weightROOTs/zpt_weights_2016_BtoH.root");
    TH2F *histZ=(TH2F*) fZ->Get("zptmass_histo");

    TFile fw2("../weightROOTs/htt_scalefactors_sm_moriond_v1.root");
    RooWorkspace *w2 = (RooWorkspace*)fw2.Get("w");
    fw2.Close();

    TFile fem("../weightROOTs/htt_scalefactors_v16_9_embedded.root");
    RooWorkspace *wEmbed = (RooWorkspace*)fem.Get("w");
    fem.Close();

    // Lumi weight  
    float w_lumi = lumiWeight(sample, ngen);
    if (w_lumi==0) std::cout << std::endl << "!!!!!!!!!!!!!!!!!!!!!!!! ATTENTION - can't find lumi weight. Check the sample. !!!!!!!!!!!!!!!!!!!!!!!!" << std::endl << std::endl;
    float weight=w_lumi;
    std::cout << "============== map weight: " << w_lumi << std::endl;

    cout.setf(ios::fixed, ios::floatfield);
    cout.precision(10);

    scenario_info scenario(treePtr, shape);

    // Construct scenario
    //scenario_info scenario(arbre, unc);
    //KK: Editing for 2017
    ScaleFactor * myScaleFactor_trgMu24 = new ScaleFactor();
    //    myScaleFactor_trgMu24->init_ScaleFactor("LeptonEfficiencies/Muon/Run2016BtoH/Muon_IsoMu24_OR_TkIsoMu24_2016BtoH_eff.root"); 
    myScaleFactor_trgMu24->init_ScaleFactor("LeptonEfficiencies/Muon/Run2017/Muon_IsoMu24orIsoMu27.root"); //KK
    //    ScaleFactor * myScaleFactor_trgMu19Leg = new ScaleFactor();
    //    myScaleFactor_trgMu19Leg->init_ScaleFactor("LeptonEfficiencies/Muon/Run2016BtoH/Muon_Mu19leg_2016BtoH_eff.root");
    //    ScaleFactor * myScaleFactor_trgMu22 = new ScaleFactor();
    //    myScaleFactor_trgMu22->init_ScaleFactor("LeptonEfficiencies/Muon/Run2016BtoH/Muon_Mu22OR_eta2p1_eff.root");
    ScaleFactor * myScaleFactor_trgMu20Leg = new ScaleFactor();
    myScaleFactor_trgMu20Leg->init_ScaleFactor("LeptonEfficiencies/Muon/Run2017/Muon_MuTau_IsoMu20.root");
    //Here you will need to add SF for tau leg later on

    //These need to be update for 2017
    ScaleFactor * myScaleFactor_trgMu19LegAnti = new ScaleFactor();
    myScaleFactor_trgMu19LegAnti->init_ScaleFactor("LeptonEfficiencies/Muon/Run2016BtoH/Muon_Mu19leg_eta2p1_antiisolated_Iso0p15to0p3_eff_rb.root");
    ScaleFactor * myScaleFactor_trgMu22Anti = new ScaleFactor();
    myScaleFactor_trgMu22Anti->init_ScaleFactor("LeptonEfficiencies/Muon/Run2016BtoH/Muon_Mu22OR_eta2p1_antiisolated_Iso0p15to0p3_eff_rb.root");
    
    //    ScaleFactor * myScaleFactor_id = new ScaleFactor();
    //    myScaleFactor_id->init_ScaleFactor("LeptonEfficiencies/Muon/Run2016BtoH/Muon_IdIso_IsoLt0p15_2016BtoH_eff.root");
    ScaleFactor * myScaleFactor_id = new ScaleFactor();
    myScaleFactor_id->init_ScaleFactor("LeptonEfficiencies/Muon/Run2017/Muon_IdIso_IsoLt0.15_eff_RerecoFall17.root");
    //These need to be updated for 2017
    ScaleFactor * myScaleFactor_idAnti = new ScaleFactor();
    myScaleFactor_idAnti->init_ScaleFactor("LeptonEfficiencies/Muon/Run2016BtoH/Muon_IdIso_antiisolated_Iso0p15to0p3_eff_rb.root");

    TFile * f_NNLOPS = new TFile("../weightROOTs/NNLOPS_reweight.root");
    TGraph * g_NNLOPS_0jet = (TGraph*) f_NNLOPS-> Get("gr_NNLOPSratio_pt_powheg_0jet");
    TGraph * g_NNLOPS_1jet = (TGraph*) f_NNLOPS-> Get("gr_NNLOPSratio_pt_powheg_1jet");
    TGraph * g_NNLOPS_2jet = (TGraph*) f_NNLOPS-> Get("gr_NNLOPSratio_pt_powheg_2jet");
    TGraph * g_NNLOPS_3jet = (TGraph*) f_NNLOPS-> Get("gr_NNLOPSratio_pt_powheg_3jet");

    Int_t nentries_wtn = (Int_t) treePtr->GetEntries();
    int lastindex = 0;
    for (Int_t i = 0; i < nentries_wtn; i++) {      
      treePtr->GetEntry(i);
      if (TMath::IsNaN(tree->Q2V2) ) {
	std::cout << "WHOLE" << std::endl;
	std::cout << "run :" << tree->run << std::endl;
	continue;
      }

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


      /////////////////////////////////////
      //  For cross check with 2016 SVN  //
      /////////////////////////////////////
      //if (!tree->decayModeFinding_2) continue;
      if (!tree->byVLooseIsolationMVArun2v1DBnewDMwLT_2) continue;
      float signalRegion=(tree->byTightIsolationMVArun2v1DBnewDMwLT_2 && tree->iso_1<0.15);
      float qcdRegion=(tree->byMediumIsolationMVArun2v1DBnewDMwLT_2 && tree->iso_1<0.30);
      float wRegion=(tree->byMediumIsolationMVArun2v1DBnewDMwLT_2 && tree->iso_1<0.30);
      float wsfRegion=(tree->byTightIsolationMVArun2v1DBnewDMwLT_2 && tree->iso_1<0.15);
      float qcdCR=(tree->byTightIsolationMVArun2v1DBnewDMwLT_2 && tree->iso_1<0.30 && tree->iso_1>0.15);      
      /////////////////////////////////////
      //tree->byVLooseIsolationMVArun2v1DBnewDMwLT_2
      if (i % 10000 == 0) fprintf(stdout, "\r  Processed events: %8d of %8d ", i, nentries_wtn);
      fflush(stdout);

      // minimum lepton pT thresholds
      if (tree->pt_1<21) continue;
      if (tree->pt_2<32) continue;
      // trigger
      bool isCrossTrigger = (tree->mMatchesIsoMu20Tau27Path && tree->mMatchesIsoMu20Tau27Filter && tree->tMatchesIsoMu20Tau27Path && tree->tMatchesIsoMu20Tau27Filter && tree->Mu20Tau27Pass);
      bool isSingleLep24 = (tree->mMatchesIsoMu24Path && tree->mMatchesIsoMu24Filter && tree->IsoMu24Pass);
      bool isSingleLep27 = (tree->mMatchesIsoMu27Path && tree->mMatchesIsoMu27Filter && tree->IsoMu27Pass);
      // continue if fail to pass non of triggers
      if (!isSingleLep24 && !isCrossTrigger && sample!="data_obs") continue;
      if (!isSingleLep24 && !isSingleLep27 && !isCrossTrigger && sample=="data_obs") continue;
      // mu pT requirement depending on triggers
      bool passTrigAndPt=false;
      if (sample=="data_obs") {
	if (tree->pt_1>28 && isSingleLep27) passTrigAndPt=true;
	else if (tree->pt_1>25 && isSingleLep24) passTrigAndPt=true;
	else if (tree->pt_1>21 && isCrossTrigger) passTrigAndPt=true;
      }
      else {
	if (tree->pt_1>25 && isSingleLep24) passTrigAndPt=true;
	else if (tree->pt_1>21 && isCrossTrigger) passTrigAndPt=true;
      }
      if (!passTrigAndPt) continue;


      if (sample=="data_obs" && tree->run<278820 && !tree->id_m_medium2016_1) continue;
      if (sample=="data_obs" && tree->run>=278820 && !tree->id_m_medium_1) continue;
      //if (sample=="embedded" && tZTTGenDR>0.2) continue;


      if (fabs(tree->eta_1)>2.1) continue;

      if (!tree->againstElectronVLooseMVA6_2 or !tree->againstMuonTight3_2) continue;

      if (tree->extraelec_veto!=0) continue;
      if (tree->extramuon_veto!=0) continue;
      if (tree->dilepton_veto!=0) continue;
      
      float sf_trg=1.0;
      float sf_id=1.0;
      float sf_id_anti=1.0;
      float sf_trg_anti=1.0;
      float eff_tau=1.0;
      float eff_tau_anti=1.0;
      
      if (sample!="data_obs"){
	sf_id=myScaleFactor_id->get_ScaleFactor(tree->pt_1,tree->eta_1);
	sf_id_anti=myScaleFactor_idAnti->get_ScaleFactor(tree->pt_1,tree->eta_1);
      }

      float ratioanti=(sf_id_anti)/(sf_id);
      
      TLorentzVector mytau; 
      mytau.SetPtEtaPhiM(tree->pt_2,tree->eta_2,tree->phi_2,tree->m_2);
      TLorentzVector mymu;
      mymu.SetPtEtaPhiM(tree->pt_1,tree->eta_1,tree->phi_1,tree->m_1);
      TLorentzVector myjet1;
      myjet1.SetPtEtaPhiM(jpt_1,tree->jeta_1,tree->jphi_1,0);
      TLorentzVector myjet2;
      myjet2.SetPtEtaPhiM(jpt_2,tree->jeta_2,tree->jphi_2,0);

      //***************** Weights **************
      
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

      
      float correction=sf_id;
      if (sample!="embedded" && sample!="data_obs") correction=correction*LumiWeights_12->weight(tree->npu);
      if (sample=="embedded" && tree->genweight>1) continue;//genweight=0.10;
      float aweight = 1.0;
      aweight=tree->genweight*weight*correction;
	
      if (sample!="data_obs"){
	if (tree->gen_match_2==5) aweight=aweight*0.89;
	if (tree->gen_match_2==2 or tree->gen_match_2==4){//Anti-muon Tight
	  if (fabs(tree->eta_2)<0.4) aweight=aweight*1.17;
	  else if (fabs(tree->eta_2)<0.8) aweight=aweight*1.29;
	  else if (fabs(tree->eta_2)<1.2) aweight=aweight*0.14;
	  else if (fabs(tree->eta_2)<1.7) aweight=aweight*0.93;
	  else if (fabs(tree->eta_2)<2.3) aweight=aweight*1.61;
	  if (name=="ZL" && tree->l2_decayMode==0) aweight=aweight*0.74; //ZL corrections Laura //KK:To switch to 2017
	  else if (name=="ZL" && tree->l2_decayMode==1) aweight=aweight*1.0;
	}
	if (tree->gen_match_2==1 or tree->gen_match_2==3){//Anti-electrion VLoose
	  if (fabs(tree->eta_2)<1.460) aweight=aweight*1.09;
	  else if (fabs(tree->eta_2)>1.558) aweight=aweight*1.19;
	}
	//aweight=aweight*h_Trk->Eval(tree->eta_1);
      }
      /*
      if (name.find("ggH")<100 && name.find("NNLOPS")>100 && name.find("hww")>100){
	if (tree->Rivet_nJets30==0) aweight = aweight * g_NNLOPS_0jet->Eval(min(tree->Rivet_higgsPt,float(125.0))); 
	if (tree->Rivet_nJets30==1) aweight = aweight * g_NNLOPS_1jet->Eval(min(tree->Rivet_higgsPt,float(625.0))); 
	if (tree->Rivet_nJets30==2) aweight = aweight * g_NNLOPS_2jet->Eval(min(tree->Rivet_higgsPt,float(800.0))); 
	if (tree->Rivet_nJets30>=3) aweight = aweight * g_NNLOPS_3jet->Eval(min(tree->Rivet_higgsPt,float(925.0))); 
      }
      */

      NumV WG1unc = qcd_ggF_uncert_2017(tree->Rivet_nJets30, tree->Rivet_higgsPt, tree->Rivet_stage1_cat_pTjet30GeV);

      if (sample=="EWKZLL" or sample=="EWKZNuNu" or name=="ZTT" or name=="ZLL" or name=="ZL" or name=="ZJ"){
	float zpt_corr=histZ->GetBinContent(histZ->GetXaxis()->FindBin(tree->genM),histZ->GetYaxis()->FindBin(tree->genpT));
	if (fabs(tes)!=10) //nominal
	  aweight=aweight*zpt_corr;
	else if (tes==10) // up
	  aweight=aweight*(1+1.10*(zpt_corr-1));
	else if (tes==-10) // down
	  aweight=aweight*(1+0.90*(zpt_corr-1));
      }

      //************************ Jet to tau FR shape **************************
      if (tes==14 && (name=="TTJ" or name=="ZJ" or name=="W") && tree->gen_match_2==6){
	float jtotau=1-(0.2*mytau.Pt()/100);
	if (mytau.Pt()>200) jtotau=1-(0.2*200.0/100);
	aweight=aweight*jtotau;
      }
      if (tes==-14 && (name=="TTJ" or name=="ZJ" or name=="W") && tree->gen_match_2==6){
	float jtotau=1+(0.2*mytau.Pt()/100);
	if (mytau.Pt()>200) jtotau=1+(0.2*200.0/100);
	aweight=aweight*jtotau;
      }

      //*********************** Definition of fit variables *******************
      float var2=m_sv;
      float var1_1=pt_sv;
      float var1_0=mytau.Pt();
      
      // ###########################################################
      // ######## Separation between L, T and J ####################
      // ###########################################################
      
      if (name=="ZL" && tree->gen_match_2>4) continue;
      if ((name=="TTT" or name=="ZTT") && tree->gen_match_2!=5) continue;
      if ((name=="TTJ" or name=="ZLL") && tree->gen_match_2==5) continue;
      if (name=="ZJ" && tree->gen_match_2!=6) continue;
      
      // #############################################################
      // ################### Top pT reweighting ######################
      // #############################################################
      float pttop1=tree->pt_top1;
      if (pttop1>400) pttop1=400;
      float pttop2=tree->pt_top2;
      if (pttop2>400) pttop2=400;
      if ((name=="TTJ" or name=="TTT") && fabs(tes)!=11) aweight*=sqrt(exp(0.0615-0.0005*pttop1)*exp(0.0615-0.0005*pttop2)); 
      if ((name=="TTJ" or name=="TTT") && tes==11) aweight*=(1+2*(sqrt(exp(0.0615-0.0005*pttop1)*exp(0.0615-0.0005*pttop2))-1));
      
      if (sample=="data_obs") aweight=1.0;

      float weight_btag=1.0;
      if (sample!="data_obs"){
	int nbtagged=tree->nbtag;
	if (nbtagged>2) nbtagged=2;
	weight_btag=bTagEventWeight(nbtagged,tree->bpt_1,tree->bflavor_1,tree->bpt_2,tree->bflavor_2,1,0,0);
	if (nbtagged>2) weight_btag=0;
      }
      bool is_bveto=(sample!="data_obs" or tree->nbtag==0);
      
      TLorentzVector myrawmet;
      //myrawmet.SetPtEtaPhiM(tree->met,0,tree->metphi,0);
      myrawmet.SetPtEtaPhiM(met,0,metphi,0);
      TLorentzVector myrawtau=mytau;
      float ratioantiraw=ratioanti;
      float weight2=1.0;
      TLorentzVector mymet=myrawmet;
      mytau=myrawtau;
      var1_1=pt_sv;
      var2=m_sv;
      float var1_2=mjj;
      float dm_weight=1.0;
      if (njets==0) var2=(mymu+mytau).M();
      //if (mytau.Pt()<32) continue;
      //var1_0=mytau.Pt();
      //std::cout << "pass" << std::endl;
      var1_0=tree->l2_decayMode;//FIXME
      var1_1=(mymu+mytau+mymet).Pt();//FIXME
      
      float mt=TMass_F(mymu.Pt(),mymet.Pt(),mymu.Px(),mymet.Px(),mymu.Py(),mymet.Py());
	
      if (sample!="embedded" && sample!="data_obs"){
	if (mymu.Pt()<25){ 
	  w2->var("t_pt")->setVal(mytau.Pt());
	  w2->var("t_eta")->setVal(mytau.Eta());
	  w2->var("t_dm")->setVal(tree->l2_decayMode);
	  float eff_tau_ratio = w2->function("t_genuine_TightIso_mt_ratio")->getVal();
	  sf_trg=myScaleFactor_trgMu20Leg->get_ScaleFactor(tree->pt_1,tree->eta_1)*eff_tau_ratio;
	  sf_trg_anti=myScaleFactor_trgMu19LegAnti->get_ScaleFactor(tree->pt_1,tree->eta_1)*eff_tau_ratio;//KK: to switch to 2017
	}
	else{
	  sf_trg=myScaleFactor_trgMu24->get_ScaleFactor(tree->pt_1,tree->eta_1);
	  sf_trg_anti=myScaleFactor_trgMu22Anti->get_ScaleFactor(tree->pt_1,tree->eta_1);//KK: to switch to 2017
	}
      }
      if (sample=="data_obs") {aweight=1.0; weight2=1.0;}
      /*
	TLorentzVector myrawmet;
	myrawmet.SetPtEtaPhiM(tree->met,0,tree->metphi,0);
	TLorentzVector myrawtau=mytau;
	TLorentzVector mymet=myrawmet;
      */
      //////////////////////
      // Embedded weights //
      //////////////////////
      if (sample=="embedded") {
	aweight=1.0; weight2=1.0;
	float Stitching_Weight= 1.0;
	if ((tree->run >= 272007) && (tree->run < 275657))  Stitching_Weight=(1.0/0.899 * 1.02);
	if ((tree->run >= 275657) && (tree->run < 276315))  Stitching_Weight=(1.0/0.881 * 1.02);
	if ((tree->run >= 276315) && (tree->run < 276831))  Stitching_Weight=(1.0/0.877 * 1.02);
	if ((tree->run >= 276831) && (tree->run < 277772))  Stitching_Weight=(1.0/0.939 * 1.02);
	if ((tree->run >= 277772) && (tree->run < 278820))  Stitching_Weight=(1.0/0.936 * 1.02);
	if ((tree->run >= 278820) && (tree->run < 280919))  Stitching_Weight=(1.0/0.908 * 1.02);
	if ((tree->run >= 280919) && (tree->run < 284045))  Stitching_Weight=(1.0/0.962 * 1.02);
	
	vector<double> info=EmdWeight_Muon(wEmbed,mymu.Pt(),mymu.Eta(),tree->iso_1);	    
	double muon_id_scalefactor = info[2];
	double muon_iso_scalefactor = info[5];
	double muon_trg_efficiency = info[6];
	double EmbedWeight=muon_id_scalefactor*muon_iso_scalefactor*muon_trg_efficiency;
	float WEIGHT_sel_trg_ratio= m_sel_trg_ratio(wEmbed,mymu.Pt(),mymu.Eta(),mytau.Pt(),mytau.Eta());
	aweight=EmbedWeight * tree->genweight * Stitching_Weight * WEIGHT_sel_trg_ratio;
      }
      
      weight2=weight2*sf_trg*dm_weight;
      ratioanti=ratioantiraw*sf_trg_anti/(sf_trg+0.000000001);
      TLorentzVector Higgs;
      Higgs.SetPtEtaPhiM(var1_1,(mymet+mymu+mytau).Eta(),(mymet+mymu+mytau).Phi(),(mymet+mymu+mytau).M());
      
      fillTree_mt(namu, tree, i,
		  Higgs, mytau, mymu, myjet1, myjet2,
		  mjj, met, metphi, m_sv, pt_sv, njets,
		  Dbkg_VBF, Dbkg_ggH,
		  ME_sm_VBF, ME_sm_ggH, ME_sm_WH, ME_sm_ZH, ME_bkg, ME_bkg1, ME_bkg2,
		  Phi, Phi1, costheta1, costheta2, costhetastar, Q2V1, Q2V2,
		  signalRegion, qcdRegion,weight2*aweight, mt
		  );
      fillWeightTree(w_namu,
		     w_lumi,
		     w_wjet, w_DYjet,
		     LumiWeights_12->weight(tree->npu),
		     tree->genweight,
		     sf_id,sf_trg1,sf_trg2,
		     h_Trk->Eval(tree->eta_1),
		     weight2*aweight
		     );
      lastindex = i;
    } // end of loop over events
    std::cout << "DONE\t" << lastindex << "\t" << treePtr->GetEntries() << std::endl;    
    
    fout->cd();
    nbevt->Write();
    namu->Write();
    w_namu->Write();
    fout->Close();
} 


