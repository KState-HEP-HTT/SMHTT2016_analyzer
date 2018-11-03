#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <utility>
#include <stdio.h>
#include <typeinfo>
// ROOT
#include <TF1.h>
#include <TDirectoryFile.h>
#include "TH1F.h"
#include "TFile.h"
// my includes
#include "../include/myHelper.h"
#include "../include/tt_Tree.h"

int main(int argc, char** argv) {    
    std::string input = *(argv + 1);
    std::string output = *(argv + 2);
    std::string name = *(argv + 3);
    float num = atof(argv[4]);
    float min = atof(argv[5]);
    float max = atof(argv[6]);
    std::string tvar = *(argv + 7);

    TFile *f_Double = new TFile(input.c_str());
    std::cout<<"XXXXXXXXXXXXX "<<input.c_str()<<" XXXXXXXXXXXX"<<std::endl;
    TTree* namu = (TTree*) f_Double->Get("tautau_tree");
    TH1F* nbevt = (TH1F*) f_Double->Get("nevents");
    float ngen = nbevt->GetBinContent(2);
    Float_t var;

    namu->SetBranchAddress("evtwt",               &evtwt                );

    namu->SetBranchAddress("el_pt",               &el_pt                );     
    namu->SetBranchAddress("el_eta",              &el_eta               );        
    namu->SetBranchAddress("el_phi",              &el_phi               );        
    namu->SetBranchAddress("el_mass",             &el_mass              );       
    namu->SetBranchAddress("el_charge",           &el_charge            );     
    namu->SetBranchAddress("el_iso",              &el_iso               );
    namu->SetBranchAddress("mu_pt",               &mu_pt                );         
    namu->SetBranchAddress("mu_eta",              &mu_eta               );  
    namu->SetBranchAddress("mu_phi",              &mu_phi               );
    namu->SetBranchAddress("mu_mass",             &mu_mass              ); 
    namu->SetBranchAddress("mu_charge",           &mu_charge            );
    namu->SetBranchAddress("t1_pt",               &t1_pt                ); 
    namu->SetBranchAddress("t1_eta",              &t1_eta               );
    namu->SetBranchAddress("t1_phi",              &t1_phi               );
    namu->SetBranchAddress("t1_mass",             &t1_mass              );
    namu->SetBranchAddress("t1_charge",           &t1_charge            );
    namu->SetBranchAddress("t1_decayMode",        &t1_decayMode         );
    namu->SetBranchAddress("t1_tightIso",         &t1_tightIso          ); 
    namu->SetBranchAddress("t1_mediumIso",        &t1_mediumIso         );
    namu->SetBranchAddress("t1_dmf",              &t1_dmf               );
    namu->SetBranchAddress("t1_dmf_new",          &t1_dmf_new           );
    namu->SetBranchAddress("t1_iso_VL",           &t1_iso_VL            );
    namu->SetBranchAddress("t1_iso_L",            &t1_iso_L             );  
    namu->SetBranchAddress("t1_iso_M",            &t1_iso_M             );
    namu->SetBranchAddress("t1_iso_T",            &t1_iso_T             ); 
    namu->SetBranchAddress("t1_iso_VT",           &t1_iso_VT            );
    namu->SetBranchAddress("t1_iso",              &t1_iso               );
    namu->SetBranchAddress("t1_newiso_VL",        &t1_newiso_VL         );
    namu->SetBranchAddress("t1_newiso_L",         &t1_newiso_L          );
    namu->SetBranchAddress("t1_newiso_M",         &t1_newiso_M          );
    namu->SetBranchAddress("t1_newiso_T",         &t1_newiso_T          );
    namu->SetBranchAddress("t1_newiso_VT",        &t1_newiso_VT         );
    namu->SetBranchAddress("t1_newiso",           &t1_newiso            );

    namu->SetBranchAddress("t2_dmf",              &t2_dmf               );
    namu->SetBranchAddress("t2_dmf_new",          &t2_dmf_new           );
    namu->SetBranchAddress("t2_pt",               &t2_pt                );
    namu->SetBranchAddress("t2_eta",              &t2_eta               );
    namu->SetBranchAddress("t2_phi",              &t2_phi               );
    namu->SetBranchAddress("t2_mass",             &t2_mass              );
    namu->SetBranchAddress("t2_charge",           &t2_charge            );
    namu->SetBranchAddress("t2_decayMode",        &t2_decayMode         );
    namu->SetBranchAddress("t2_iso_VL",           &t2_iso_VL            );
    namu->SetBranchAddress("t2_iso_L",            &t2_iso_L             );
    namu->SetBranchAddress("t2_iso_M",            &t2_iso_M             );
    namu->SetBranchAddress("t2_iso_T",            &t2_iso_T             );
    namu->SetBranchAddress("t2_iso_VT",           &t2_iso_VT            );
    namu->SetBranchAddress("t2_iso",              &t2_iso               );
    namu->SetBranchAddress("t2_newiso_VL",        &t2_newiso_VL         );
    namu->SetBranchAddress("t2_newiso_L",         &t2_newiso_L          );
    namu->SetBranchAddress("t2_newiso_M",         &t2_newiso_M          );
    namu->SetBranchAddress("t2_newiso_T",         &t2_newiso_T          );
    namu->SetBranchAddress("t2_newiso_VT",        &t2_newiso_VT         );
    namu->SetBranchAddress("t2_newiso",           &t2_newiso            );

    namu->SetBranchAddress("njets",               &njets                );
    namu->SetBranchAddress("nbjets",              &nbjets               );
    namu->SetBranchAddress("j1_pt",               &j1_pt                );
    namu->SetBranchAddress("j1_eta",              &j1_eta               );
    namu->SetBranchAddress("j1_phi",              &j1_phi               );
    namu->SetBranchAddress("j2_pt",               &j2_pt                );
    namu->SetBranchAddress("j2_eta",              &j2_eta               );
    namu->SetBranchAddress("j2_phi",              &j2_phi               );
    namu->SetBranchAddress("b1_pt",               &b1_pt                );
    namu->SetBranchAddress("b1_eta",              &b1_eta               );
    namu->SetBranchAddress("b1_phi",              &b1_phi               );
    namu->SetBranchAddress("b2_pt",               &b2_pt                );         
    namu->SetBranchAddress("b2_eta",              &b2_eta               );
    namu->SetBranchAddress("b2_phi",              &b2_phi               );

    namu->SetBranchAddress("met",                 &met                  );
    namu->SetBranchAddress("metphi",              &metphi               );
    namu->SetBranchAddress("mjj",                 &mjj                  );
    namu->SetBranchAddress("mt",                  &mt                   );

    namu->SetBranchAddress("numGenJets",          &numGenJets           );

    namu->SetBranchAddress("pt_sv",               &pt_sv                );
    namu->SetBranchAddress("m_sv",                &m_sv                 );
    namu->SetBranchAddress("Dbkg_VBF",            &Dbkg_VBF             );
    namu->SetBranchAddress("Dbkg_ggH",            &Dbkg_ggH             );

    namu->SetBranchAddress("Phi"         ,        &Phi                  );
    namu->SetBranchAddress("Phi1"        ,        &Phi1                 );
    namu->SetBranchAddress("costheta1"   ,        &costheta1            );
    namu->SetBranchAddress("costheta2"   ,        &costheta2            );
    namu->SetBranchAddress("costhetastar",        &costhetastar         );
    namu->SetBranchAddress("Q2V1"        ,        &Q2V1                 );
    namu->SetBranchAddress("Q2V2"        ,        &Q2V2                 );
    namu->SetBranchAddress("ME_sm_VBF"   ,        &ME_sm_VBF            );
    namu->SetBranchAddress("ME_sm_ggH"   ,        &ME_sm_ggH            );
    namu->SetBranchAddress("ME_sm_WH"    ,        &ME_sm_WH             );
    namu->SetBranchAddress("ME_sm_ZH"    ,        &ME_sm_ZH             );
    namu->SetBranchAddress("ME_bkg"      ,        &ME_bkg               );
    namu->SetBranchAddress("ME_bkg1"     ,        &ME_bkg1              );  
    namu->SetBranchAddress("ME_bkg2"     ,        &ME_bkg2              ); 


    namu->SetBranchAddress("higgs_pT",            &higgs_pT             );
    namu->SetBranchAddress("higgs_m",             &higgs_m              );       
    namu->SetBranchAddress("hjj_pT",              &hjj_pT               );
    namu->SetBranchAddress("hjj_m",               &hjj_m                );
    namu->SetBranchAddress("vis_mass",            &vis_mass             );
    namu->SetBranchAddress("dEtajj",              &dEtajj               );
    namu->SetBranchAddress("dPhijj",              &dPhijj               );
    namu->SetBranchAddress("cat_0jet",            &cat_0jet             );
    namu->SetBranchAddress("cat_boosted",         &cat_boosted          );
    namu->SetBranchAddress("cat_vbf",             &cat_vbf              );
    namu->SetBranchAddress("cat_inclusive",       &cat_inclusive        ); 
    namu->SetBranchAddress("cat_antiiso",         &cat_antiiso          );
    namu->SetBranchAddress("cat_antiiso_0jet",    &cat_antiiso_0jet     );
    namu->SetBranchAddress("cat_antiiso_boosted", &cat_antiiso_boosted  );
    namu->SetBranchAddress("cat_antiiso_vbf",     &cat_antiiso_vbf      );
    namu->SetBranchAddress("cat_qcd",             &cat_qcd              );            
    namu->SetBranchAddress("cat_qcd_0jet",        &cat_qcd_0jet         );       
    namu->SetBranchAddress("cat_qcd_boosted",     &cat_qcd_boosted      );    
    namu->SetBranchAddress("cat_qcd_vbf",         &cat_qcd_vbf          );        

    namu->SetBranchAddress("is_signal",           &is_signal            );          
    namu->SetBranchAddress("is_ai",               &is_ai                );              

    namu->SetBranchAddress("NN_disc",             &NN_disc              );
    // Reset branch address if it exists branch
    TBranch* br = namu->GetBranch(tvar.c_str());
    if (br) namu->SetBranchAddress(tvar.c_str(), &var);

    TH1F *h_os = new TH1F("","",num,min,max);
    TH1F *h_ss = new TH1F("","",num,min,max);
    TH1F *h_aios = new TH1F("","",num,min,max);
    TH1F *h_aiss = new TH1F("","",num,min,max);
    
    // Loop over all events
    Int_t nentries_wtn = (Int_t) namu->GetEntries();
    for (Int_t i = 0; i < nentries_wtn; i++) {
      namu->GetEntry(i);
      //if (i % 1000 == 0) fprintf(stdout, "\r  Processed events: %8d of %8d ", i, nentries_wtn);
      fflush(stdout);

      /////////////////////////
      //  For relaxed skims  //
      /////////////////////////
      bool twoProng = t1_decayMode == 5 || t1_decayMode ==  6 || t2_decayMode == 5 || t2_decayMode ==6;
      if (twoProng) continue;
      if (!t1_iso_VL || !t2_iso_VL) continue;
      if (!t1_dmf || !t2_dmf) continue;
      bool signalRegion = t1_iso_T && t2_iso_T;
      bool aiRegion = (t1_iso_M && t2_iso_L && !t2_iso_T) || (t2_iso_M && t1_iso_L && !t1_iso_T);
      //bool signalRegion = is_signal;
      //bool aiRegion = is_ai;  
      //if (!t1_newiso_VL || !t2_newiso_VL) continue;          
      ////////////////////////

      // Define VBF cate
      bool is_VBF = false;
      //if (njets>=2 && higgs_pT>100 && dEtajj>2.5) is_VBF=true;  // 2016 anaysis
      if (cat_vbf && higgs_pT>100) is_VBF=true; 

      // User obs
      if(tvar == "MELA") var = ME_sm_VBF/(ME_sm_VBF+45*ME_bkg);   
      if(tvar == "MELAggH") var = ME_sm_ggH/(ME_sm_ggH+45*ME_bkg);   

      if (is_VBF && signalRegion && t1_charge*t2_charge<0) h_os->Fill(var,evtwt);
      //if (is_VBF && is_ai) h_os->Fill(var,evtwt);
      if (is_VBF && signalRegion && t1_charge*t2_charge>0) h_ss->Fill(var,evtwt);
      if (is_VBF && aiRegion && t1_charge*t2_charge<0) h_aios->Fill(var,evtwt);
      if (is_VBF && aiRegion && t1_charge*t2_charge>0) h_aiss->Fill(var,evtwt);
    }
    
    TFile *fout = TFile::Open(output.c_str(), "RECREATE");
    fout->cd();
    TDirectory *OSvbf =fout->mkdir("tt_vbf");
    TDirectory *SSvbf =fout->mkdir("ttSS_vbf");
    TDirectory *AIOSvbf =fout->mkdir("AIOS_vbf");
    TDirectory *AISSvbf =fout->mkdir("AISS_vbf");

    OSvbf->cd();
    h_os->SetName(name.c_str());
    h_os->Write();
    
    SSvbf->cd();
    h_ss->SetName(name.c_str());
    h_ss->Write();

    AIOSvbf->cd();
    h_aios->SetName(name.c_str());
    h_aios->Write();
    
    AISSvbf->cd();
    h_aiss->SetName(name.c_str());
    h_aiss->Write();
    
    fout->Close();
} 


