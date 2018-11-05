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
#include "../include/LumiReweightingStandAlone.h"
#include "../include/lumiMap.h"
#include "../include/btagSF.h"
#include "../include/scenario_info.h"
#include "../include/zmumuSF.h"
#include "../include/EmbedWeight.h"

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
    namu->Branch("t1_tightIso",         &t1_tightIso,         "t1_tightIso/F"        );//
    namu->Branch("t1_mediumIso",        &t1_mediumIso,        "t1_mediumIso/F"       );//
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
    LumiWeights_12 = new reweight::LumiReWeighting("../weightROOTs/MC_Moriond17_PU25ns_V1.root", "../weightROOTs/Data_Pileup_2016_271036-284044_80bins.root", "pileup", "pileup");
    
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
    float weight = 1.0;
    // Lumi weight  
    float w_lumi = lumiWeight(sample, ngen);
    if (w_lumi==0) std::cout << std::endl << "!!!!!!!!!!!!!!!!!!!!!!!! ATTENTION - can't find lumi weight. Check the sample. !!!!!!!!!!!!!!!!!!!!!!!!" << std::endl << std::endl;
    weight = w_lumi;

    std::cout.setf(std::ios::fixed, std::ios::floatfield);
    std::cout.precision(10);

    scenario_info scenario(treePtr, shape);

    // D.Kim : AN line 791~795
    //Binning for 0jet cat. 1D: Msv. In AN it was 10GeV binning / official data card combined 0~50 as one bin
    float bins0[] = {0,50,60,70,80,90,100,110,120,130,140,150,160,170,180,190,200,210,220,230,240,250,260,270,280,290,300};
    float bins1[] = {0,50,60,70,80,90,100,110,120,130,140,150,160,170,180,190,200,210,220,230,240,250,260,270,280,290,300};
    //Binning for 1jet cat, x-axis: HpT
    float bins1X[] = {0,100,170,300,10000};
    //Binning for 1jet cat, y-axis: Msv
    float bins1Y[] = {0,40,60,70,80,90,100,110,120,130,150,200,250};
    //Binning for 2jet cat, x-axis: Mjj
    float bins2X[] = {0,300,500,800,10000};
    //Binning for 2jet cat, y-axis: Msv
    float bins2Y[] = {0,40,60,70,80,90,100,110,120,130,150,200,250};

    int  binnum0 = sizeof(bins0)/sizeof(Float_t) - 1;
    int  binnum1 = sizeof(bins1)/sizeof(Float_t) - 1;
    int  binnum1X = sizeof(bins1X)/sizeof(Float_t) - 1;
    int  binnum1Y = sizeof(bins1Y)/sizeof(Float_t) - 1;
    int  binnum2X = sizeof(bins2X)/sizeof(Float_t) - 1;
    int  binnum2Y = sizeof(bins2Y)/sizeof(Float_t) - 1;

    // Categories
    TH1F* h_0jet = new TH1F ("h_0jet", "h_0jet", binnum0, bins0); h_0jet->Sumw2();
    TH1F* hx_boosted = new TH1F ("hx_boosted", "hx_boosted", binnum1X, bins1X); hx_boosted->Sumw2();
    TH1F* hy_boosted = new TH1F ("hy_boosted", "hy_boosted", binnum1Y, bins1Y); hy_boosted->Sumw2();
    TH1F* hx_vbf = new TH1F ("hx_vbf", "hx_vbf", binnum2X, bins2X); hx_vbf->Sumw2();
    TH1F* hy_vbf = new TH1F ("hy_vbf", "hy_vbf", binnum2Y, bins2Y); hy_vbf->Sumw2();

    // h0_ : 0jet, h1_ : boosted, h2_ : vbf, h3_ : vh, h2M*_ : vbf with MELA, h4M_ : 2jets with MEAL  h_ : inclusive
    std::vector<TH1F*> h0_OS;
    std::vector<TH1F*> h0_SS;
    std::vector<TH1F*> h0_AIOS;
    std::vector<TH1F*> h0_AISS;
    std::vector<TH2F*> h1_OS;
    std::vector<TH2F*> h1_SS;
    std::vector<TH2F*> h1_AIOS;
    std::vector<TH2F*> h1_AISS;
    std::vector<TH2F*> h2_OS;
    std::vector<TH2F*> h2_SS;
    std::vector<TH2F*> h2_AIOS;
    std::vector<TH2F*> h2_AISS;
    std::vector<TH2F*> h3_OS;
    std::vector<TH2F*> h3_SS;
    std::vector<TH2F*> h3_AIOS;
    std::vector<TH2F*> h3_AISS;
    std::vector<TH1F*> h_OS;
    std::vector<TH1F*> h_SS;
    std::vector<TH1F*> h_AIOS;
    std::vector<TH1F*> h_AISS;
    // D.Kim : trg SF histo
    std::vector<TH1F*> h_trgSF1;
    std::vector<TH1F*> h_trgSF2;
    std::vector<TH1F*> h_trgSF_RR;
    std::vector<TH1F*> h_trgSF_FR;
    std::vector<TH1F*> h_trgSF_RF;
    std::vector<TH1F*> h_trgSF_FF;

    TString postfix = postfixMaps(shape);
    std::cout << postfix << std::endl;
    //For shape systematics
    int nbhist=1;
    for (int k=0; k<nbhist; ++k){
      std::ostringstream HNS0OS; HNS0OS << "h0_OS" << k;
      std::ostringstream HNS1OS; HNS1OS << "h1_OS" << k;
      std::ostringstream HNS2OS; HNS2OS << "h2_OS" << k;
      std::ostringstream HNS2M1OS; HNS2M1OS << "h2M1_OS" << k;
      std::ostringstream HNS2M2OS; HNS2M2OS << "h2M2_OS" << k;
      std::ostringstream HNS2M3OS; HNS2M3OS << "h2M3_OS" << k;
      std::ostringstream HNS4M1OS; HNS4M1OS << "h4M1_OS" << k;
      std::ostringstream HNS4M2OS; HNS4M2OS << "h4M2_OS" << k;
      std::ostringstream HNS3OS; HNS3OS << "h3_OS" << k;
      std::ostringstream HNSOS; HNS2OS << "h_OS" << k;
      // binnum2X,bins2X,binnum2Y,bins2Y
      h0_OS.push_back(new TH1F (HNS0OS.str().c_str(),"",binnum0,bins0)); h0_OS[k]->Sumw2();
      h1_OS.push_back(new TH2F (HNS1OS.str().c_str(),"",binnum1X,bins1X,binnum1Y,bins1Y)); h1_OS[k]->Sumw2();
      h2_OS.push_back(new TH2F (HNS2OS.str().c_str(),"",binnum2X,bins2X,binnum2Y,bins2Y)); h2_OS[k]->Sumw2();      
      h3_OS.push_back(new TH2F (HNS3OS.str().c_str(),"",binnum2X,bins2X,binnum2Y,bins2Y)); h3_OS[k]->Sumw2();
      h_OS.push_back(new TH1F (HNSOS.str().c_str(),"",binnum0,bins0)); h_OS[k]->Sumw2();
      
      std::ostringstream HNS0SS; HNS0OS << "h0_SS" << k;
      std::ostringstream HNS1SS; HNS1OS << "h1_SS" << k;
      std::ostringstream HNS2SS; HNS2OS << "h2_SS" << k;
      std::ostringstream HNS3SS; HNS2OS << "h3_SS" << k;
      std::ostringstream HNSSS; HNSOS << "h_SS" << k;

      h0_SS.push_back(new TH1F (HNS0SS.str().c_str(),"",binnum1,bins1)); h0_SS[k]->Sumw2();
      h1_SS.push_back(new TH2F (HNS1SS.str().c_str(),"",binnum1X,bins1X,binnum1Y,bins1Y)); h1_SS[k]->Sumw2();
      h2_SS.push_back(new TH2F (HNS2SS.str().c_str(),"",binnum2X,bins2X,binnum2Y,bins2Y)); h2_SS[k]->Sumw2();
      h3_SS.push_back(new TH2F (HNS3SS.str().c_str(),"",binnum2X,bins2X,binnum2Y,bins2Y)); h3_SS[k]->Sumw2();
      h_SS.push_back(new TH1F (HNSSS.str().c_str(),"",binnum1,bins1)); h_SS[k]->Sumw2();
      
      std::ostringstream HNS0AIOS; HNS0AIOS << "h0_AIOS" << k;
      std::ostringstream HNS1AIOS; HNS1AIOS << "h1_AIOS" << k;
      std::ostringstream HNS2AIOS; HNS2AIOS << "h2_AIOS" << k;
      std::ostringstream HNS3AIOS; HNS3AIOS << "h3_AIOS" << k;
      std::ostringstream HNSAIOS; HNSAIOS << "h_AIOS" << k;

      h0_AIOS.push_back(new TH1F (HNS0AIOS.str().c_str(),"",binnum0,bins0)); h0_AIOS[k]->Sumw2();
      h1_AIOS.push_back(new TH2F (HNS1AIOS.str().c_str(),"",binnum1X,bins1X,binnum1Y,bins1Y)); h1_AIOS[k]->Sumw2();
      h2_AIOS.push_back(new TH2F (HNS2AIOS.str().c_str(),"",binnum2X,bins2X,binnum2Y,bins2Y)); h2_AIOS[k]->Sumw2();
      h3_AIOS.push_back(new TH2F (HNS3AIOS.str().c_str(),"",binnum2X,bins2X,binnum2Y,bins2Y)); h3_AIOS[k]->Sumw2();
      h_AIOS.push_back(new TH1F (HNSAIOS.str().c_str(),"",binnum0,bins0)); h_AIOS[k]->Sumw2();
        
      std::ostringstream HNS0AISS; HNS0AISS << "h0_AISS" << k;
      std::ostringstream HNS1AISS; HNS1AISS << "h1_AISS" << k;
      std::ostringstream HNS2AISS; HNS2AISS << "h2_AISS" << k;
      std::ostringstream HNS3AISS; HNS3AISS << "h3_AISS" << k;
      std::ostringstream HNSAISS; HNSAISS << "h_AISS" << k;

      h0_AISS.push_back(new TH1F (HNS0AISS.str().c_str(),"",binnum1,bins1)); h0_AISS[k]->Sumw2();
      h1_AISS.push_back(new TH2F (HNS1AISS.str().c_str(),"",binnum1X,bins1X,binnum1Y,bins1Y)); h1_AISS[k]->Sumw2();
      h2_AISS.push_back(new TH2F (HNS2AISS.str().c_str(),"",binnum2X,bins2X,binnum2Y,bins2Y)); h2_AISS[k]->Sumw2();
      h3_AISS.push_back(new TH2F (HNS3AISS.str().c_str(),"",binnum2X,bins2X,binnum2Y,bins2Y)); h3_AISS[k]->Sumw2();
      h_AISS.push_back(new TH1F (HNSAISS.str().c_str(),"",binnum1,bins1)); h_AISS[k]->Sumw2();
      
      // D.Kim trgSF
      std::ostringstream HTRGSF1; HTRGSF1 << "h_trgSF1" << k;
      std::ostringstream HTRGSF2; HTRGSF2 << "h_trgSF2" << k;
      std::ostringstream HTRGSFRR; HTRGSFRR << "h_trgSF_RR" << k;
      std::ostringstream HTRGSFFR; HTRGSFFR << "h_trgSF_FR" << k;
      std::ostringstream HTRGSFRF; HTRGSFRF << "h_trgSF_RF" << k;
      std::ostringstream HTRGSFFF; HTRGSFFF << "h_trgSF_FF" << k;
      h_trgSF1.push_back(new TH1F (HTRGSF1.str().c_str(),"trgSF1", 80,1.00,1.10)); h_trgSF1[k]->Sumw2();
      h_trgSF2.push_back(new TH1F (HTRGSF2.str().c_str(),"trgSF2", 80,0.97,1.15)); h_trgSF2[k]->Sumw2();
      h_trgSF_RR.push_back(new TH1F (HTRGSFRR.str().c_str(),"trgSF_RR", 100,0.9,1.5)); h_trgSF_RR[k]->Sumw2();
      h_trgSF_FR.push_back(new TH1F (HTRGSFFR.str().c_str(),"trgSF_FR", 100,0.9,1.5)); h_trgSF_FR[k]->Sumw2();
      h_trgSF_RF.push_back(new TH1F (HTRGSFRF.str().c_str(),"trgSF_RF", 100,0.9,1.5)); h_trgSF_RF[k]->Sumw2();
      h_trgSF_FF.push_back(new TH1F (HTRGSFFF.str().c_str(),"trgSF_FF", 100,0.9,1.5)); h_trgSF_FF[k]->Sumw2();
      
    }
    
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

      // DoubleTau trigger
      if (sample=="data_obs" && input=="myntuples/Oct26_tt/data_H.root") {
	if(!tree->passDoubleTauCmbIso35) continue;
	if(!tree->matchDoubleTauCmbIso35_1  || !tree->matchDoubleTauCmbIso35_2) continue;
	if(!tree->filterDoubleTauCmbIso35_1 || !tree->filterDoubleTauCmbIso35_2) continue;
      }
      if (sample=="data_obs" && input=="myntuples/Oct25_tt/data_H.root") {
	if (!tree->passDoubleTau35) continue;
	if (!tree->matchDoubleTau35_1  || !tree->matchDoubleTau35_2) continue;
	if (!tree->filterDoubleTau35_1 || !tree->filterDoubleTau35_2) continue;
      }
      if (sample!="data_obs" && sample!="embedded") {
	bool t35     =  tree->passDoubleTau35 && tree->filterDoubleTau35_1 && tree->filterDoubleTau35_2 && tree->matchDoubleTau35_1 && tree->matchDoubleTau35_2;
	bool tcomb35 =  tree->passDoubleTauCmbIso35 && tree->filterDoubleTauCmbIso35_1 && tree->filterDoubleTauCmbIso35_2 && tree->matchDoubleTauCmbIso35_1 && tree->matchDoubleTauCmbIso35_2;
	if (  !t35 && !tcomb35 ) continue;
      }
      
      // Reject problomatic one event data G
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
      float sf_id=1.0;
      //float eff_tau=1.0;

      // D.Kim : Trigger SF
      float sf_trg1 = 1.0;
      float sf_trg2 = 1.0;
      float sf_trg_RR = 1.0;
      float sf_trg_FR = 1.0;
      float sf_trg_RF = 1.0;
      float sf_trg_FF = 1.0;
      PyObject* trgSF = PyObject_CallFunction(compute_sf,(char*)"[f,i]",0.0,0);
      if (sample!="data_obs"){
	if (tree->t1_decayMode==0 || tree->t1_decayMode==5) trgSF = PyObject_CallFunction(compute_sf,(char*)"[f,i]",mytau1.Pt(),0);
	else if (tree->t1_decayMode==1 || tree->t1_decayMode==6) trgSF = PyObject_CallFunction(compute_sf,(char*)"[f,i]",mytau1.Pt(),1);
	else if (tree->t1_decayMode==10) trgSF = PyObject_CallFunction(compute_sf,(char*)"[f,i]",mytau1.Pt(),10);
	sf_trg1 = PyFloat_AsDouble(trgSF);
	if (tree->gen_match_1==5)  {
	  sf_trg_RR = PyFloat_AsDouble(trgSF);
	  sf_trg_RF = PyFloat_AsDouble(trgSF);
	}
	if (tree->gen_match_1==6) {
	  sf_trg_FR = PyFloat_AsDouble(trgSF);
	  sf_trg_FF = PyFloat_AsDouble(trgSF);
	}
	if (tree->t2_decayMode==0 || tree->t2_decayMode==5) trgSF = PyObject_CallFunction(compute_sf,(char*)"[f,i]",mytau2.Pt(),0);
	else if (tree->t2_decayMode==1 || tree->t2_decayMode==6) trgSF = PyObject_CallFunction(compute_sf,(char*)"[f,i]",mytau2.Pt(),1);
	else if (tree->t2_decayMode==10) trgSF = PyObject_CallFunction(compute_sf,(char*)"[f,i]",mytau2.Pt(),10);
	sf_trg2 = PyFloat_AsDouble(trgSF);
	if (tree->gen_match_2==5)  {
	  sf_trg_RR = sf_trg_RR*PyFloat_AsDouble(trgSF);
          sf_trg_FR = sf_trg_FR*PyFloat_AsDouble(trgSF);
        }
        if (tree->gen_match_2==6) {
          sf_trg_RF = sf_trg_RF*PyFloat_AsDouble(trgSF);
          sf_trg_FF = sf_trg_FF*PyFloat_AsDouble(trgSF);
	}

      }
          
      
      // Weights depending in the generated jet multiplicity
      if (sample=="W"){
	weight=25.446;
	if (tree->numGenJets==1) weight=6.8176;
	else if (tree->numGenJets==2) weight=2.1038;
	else if (tree->numGenJets==3) weight=0.6889;
	else if (tree->numGenJets==4) weight=0.6900;
	//std::cout << weight << std::endl;
      }
      
      if (sample=="DY" or sample=="ZTT" or sample=="ZLL" or sample=="ZL" or sample=="ZJ"){
	weight=1.41957039;
	if (tree->numGenJets==1)  weight=0.457675455;
	else if (tree->numGenJets==2) weight=0.467159142;
	else if (tree->numGenJets==3) weight=0.480349711;
	else if (tree->numGenJets==4) weight=0.3938184351;
      }
      
      // Multiply some weights and scale factors together
      // ID and iso corrections
      float correction=sf_id;
      if (sample!="data_obs") correction=correction*LumiWeights_12->weight(tree->npu);
      float aweight=tree->genweight*weight*correction;
      if (sample!="data_obs"){
	//Tau ID SF (Tight WP)
	if (tree->gen_match_1==5) aweight=aweight*0.95;
	if (tree->gen_match_2==5) aweight=aweight*0.95;
	//e->tau fakes VLoose
	if (tree->gen_match_1==1 or tree->gen_match_1==3){
	  if (std::abs(mytau1.Eta())<1.460) aweight=aweight*1.213;
	  else if (std::abs(mytau1.Eta())>1.558) aweight=aweight*1.375;
	}
	if (tree->gen_match_2==1 or tree->gen_match_2==3){
	  if (std::abs(mytau2.Eta())<1.460) aweight=aweight*1.213;
	  else if (std::abs(mytau2.Eta())>1.558) aweight=aweight*1.375;
	}
	// mu->tau fakes Loose
	else if (tree->gen_match_1==2 or tree->gen_match_1==4){
	  if (std::abs(mytau1.Eta())<0.4) aweight=aweight*1.010;
	  else if (std::abs(mytau1.Eta())<0.8) aweight=aweight*1.007;
	  else if (std::abs(mytau1.Eta())<1.2) aweight=aweight*0.870;
	  else if (std::abs(mytau1.Eta())<1.7) aweight=aweight*1.154;
	  else aweight=aweight*2.281;
	}
	else if (tree->gen_match_2==2 or tree->gen_match_2==4){
	  if (std::abs(mytau2.Eta())<0.4) aweight=aweight*1.010;
	  else if (std::abs(mytau2.Eta())<0.8) aweight=aweight*1.007;
	  else if (std::abs(mytau2.Eta())<1.2) aweight=aweight*0.870;
	  else if (std::abs(mytau2.Eta())<1.7) aweight=aweight*1.154;
	  else aweight=aweight*2.281;
	}
	//aweight=aweight*h_Trk->Eval(eta_1);
      }

      // Z pt reweighting for DY events
      if (sample=="DY" || sample=="EWKZLL" || sample=="EWKZNuNu" || sample=="ZTT" || sample=="ZLL" || sample=="ZL" || sample=="ZJ"){
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
      if ((sample=="TTL" or sample=="TTJ" or sample=="TTT" or sample=="TT") && (shape!="ttbarShape_Up" && shape!="ttbarShape_Down")) aweight*=sqrt(exp(0.0615-0.0005*pttop1)*exp(0.0615-0.0005*pttop2));
      //aweight*=sqrt(exp(0.156-0.00137*pttop1)*exp(0.156-0.00137*pttop2));
      if ((sample=="TTL" or sample=="TTJ" or sample=="TTT" or sample=="TT") && shape=="ttbarShape_Up") aweight*=(1+2*(sqrt(exp(0.0615-0.0005*pttop1)*exp(0.0615-0.0005*pttop2))-1));

      if (sample=="data_obs") aweight=1.0;
      
      // D.Kim : https://github.com/cecilecaillol/SMHTT2016/blob/master/mt/Analyze/FinalSelection2D_relaxed.cc#L744-L754
      //************************ Jet to tau FR shape **************************
      if (shape=="jetToTauFake_Up" && (sample=="TTJ" or sample=="ZJ" or sample=="W")) {
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

	if (shape=="jetToTauFake_Down" && (sample=="TTJ" or sample=="ZJ" or sample=="W")) {
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

	if (mytau1.Pt() < 40 || mytau2.Pt() < 40 ) continue;
	if (mytau1.Pt() < 50) continue;	
	if ((fabs(mytau1.Eta()))>2.1 || (fabs(mytau2.Eta())>2.1)) continue; // L770

	float weight2=1.0;	  

	// D.Kim
	weight2=weight2*sf_trg1*sf_trg2;

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
	}
      }
    } // end of loop over events
    
    TFile *fout = TFile::Open(output.c_str(), "RECREATE");
    fout->cd();
    namu->Write();
    nbevt->Write();

    fout->Close();
    Py_Finalize();
} 


