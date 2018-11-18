#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <utility>
#include <stdio.h>
#include <typeinfo>
// ROOT
#include <TH2.h>
#include <TF1.h>
#include <TDirectoryFile.h>
#include "TH1F.h"
#include "TFile.h"
// my includes
#include "../include/myHelper.h"
#include "../include/tt_Tree.h"
#include "../include/scenario_info.h"

int main(int argc, char** argv) {    
    std::string input = *(argv + 1);
    std::string output = *(argv + 2);
    std::string name = *(argv + 3);
    std::string shape = *(argv + 4);
    float is2016 = atof(argv[5]);
    if (is2016==2016) std::cout << "All selections are consistent with 2016 SMHTT analysis." << std::endl;

    TFile *f_Double = new TFile(input.c_str());
    std::cout<< input.c_str() << "  is processing ... " <<std::endl;
    TTree* namu = (TTree*) f_Double->Get("tautau_tree");
    TH1F* nbevt = (TH1F*) f_Double->Get("nevents");
    float ngen = nbevt->GetBinContent(2);
    std::cout.precision(11);

    namu->SetBranchAddress("evtwt",               &evtwt                );

    namu->SetBranchAddress("mu_pt",               &mu_pt                );         
    namu->SetBranchAddress("mu_eta",              &mu_eta               );  
    namu->SetBranchAddress("mu_phi",              &mu_phi               );
    namu->SetBranchAddress("mu_mass",             &mu_mass              ); 
    namu->SetBranchAddress("mu_charge",           &mu_charge            );
    namu->SetBranchAddress("mu_iso",              &mu_iso               );
    namu->SetBranchAddress("t1_pt",               &t1_pt                ); 
    namu->SetBranchAddress("t1_eta",              &t1_eta               );
    namu->SetBranchAddress("t1_phi",              &t1_phi               );
    namu->SetBranchAddress("t1_mass",             &t1_mass              );
    namu->SetBranchAddress("t1_charge",           &t1_charge            );
    namu->SetBranchAddress("t1_decayMode",        &t1_decayMode         );
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


    float binsMvis[] = {0,50,80,100,110,120,130,150,170,200,250,1000};
    float binsNjets[] = {-0.5,0.5,1.5,15};
    int  binnumMvis = sizeof(binsMvis)/sizeof(Float_t) - 1;
    int  binnumNjets = sizeof(binsNjets)/sizeof(Float_t) - 1;

    std::vector<TH2F*> h0_AIOS_FF;
    std::vector<TH2F*> h1_AIOS_FF;
    std::vector<TH2F*> h2_AIOS_FF;

    TString postfix = postfixMaps(shape);
    std::cout << postfix << std::endl;

    int nbhist=1;
    for (int k=0; k<nbhist; ++k){
      std::ostringstream HNS0AIOSFF; HNS0AIOSFF << "h0_AIOS_FF" << k;
      std::ostringstream HNS1AIOSFF; HNS1AIOSFF << "h1_AIOS_FF" << k;
      std::ostringstream HNS2AIOSFF; HNS2AIOSFF << "h2_AIOS_FF" << k;
      h0_AIOS_FF.push_back(new TH2F (HNS0AIOSFF.str().c_str(),"",binnumMvis,binsMvis,binnumNjets,binsNjets)); h0_AIOS_FF[k]->Sumw2();
      h1_AIOS_FF.push_back(new TH2F (HNS1AIOSFF.str().c_str(),"",binnumMvis,binsMvis,binnumNjets,binsNjets)); h1_AIOS_FF[k]->Sumw2();
      h2_AIOS_FF.push_back(new TH2F (HNS2AIOSFF.str().c_str(),"",binnumMvis,binsMvis,binnumNjets,binsNjets)); h2_AIOS_FF[k]->Sumw2();
    }
    
    // Loop over all events
    Int_t nentries_wtn = (Int_t) namu->GetEntries();
    for (Int_t i = 0; i < nentries_wtn; i++) {
      namu->GetEntry(i);
      if (i % 1000 == 0) fprintf(stdout, "\r  Processed events: %8d of %8d ", i, nentries_wtn);
      fflush(stdout);

      /////////////////////////
      //  For relaxed skims  //
      /////////////////////////
      bool twoProng = t1_decayMode == 5 || t1_decayMode ==  6 || t2_decayMode == 5 || t2_decayMode ==6;
      if (twoProng) continue;            
      if (!t1_iso_VL || !t2_iso_VL) continue;
      if (!t1_dmf || !t2_dmf) continue;
      bool signalRegion = false;
      bool aiRegion = false;
      signalRegion = t1_iso_T && t2_iso_T;
      aiRegion = (t1_iso_M && t2_iso_L && !t2_iso_T) || (t2_iso_M && t1_iso_L && !t1_iso_T);
      //if (!t1_newiso_VL || !t2_newiso_VL) continue;
      //signalRegion = is_signal;
      //aiRegion = is_ai;
      ////////////////////////

      // Categories
      bool is_0jet = false;
      bool is_boosted = false;
      bool is_VBF = false;
      if (is2016 == 2016) {
	////////////////////////////
	// 2016 analysis category //
	////////////////////////////
	if (njets==0) is_0jet=true;
	if (njets==1 || (njets>=2 && (!(higgs_pT>100 && dEtajj>2.5)))) is_boosted=true;
	if (njets>=2 && higgs_pT>100 && dEtajj>2.5) is_VBF=true;
      }
      else {	
	////////////////////////     
	// KSU study category //     
	////////////////////////     
	if (njets==0) is_0jet=true;
	//else if (njets==1 ||) is_boosted=true;   
	else if (cat_vbf && higgs_pT>100) is_VBF=true;
	else is_boosted=true;
      }
      for (int k=0; k<nbhist; ++k){
	if (is_0jet && t1_charge*t2_charge<0 && aiRegion) 	  h0_AIOS_FF[k]->Fill(vis_mass,njets,evtwt);
	if (is_boosted && t1_charge*t2_charge<0 && aiRegion) 	  h1_AIOS_FF[k]->Fill(vis_mass,njets,evtwt);
	if (is_VBF && t1_charge*t2_charge<0 && aiRegion) 	  h2_AIOS_FF[k]->Fill(vis_mass,njets,evtwt);
      }
    } // end of loop over events
    
    TFile *fout = TFile::Open(output.c_str(), "RECREATE");
    fout->cd();
    TDirectory *AIOS0jetFF =fout->mkdir("AIOS_0jet_ff");
    TDirectory *AIOSboostedFF =fout->mkdir("AIOS_boosted_ff");
    TDirectory *AIOSvbfFF =fout->mkdir("AIOS_vbf_ff");


    for (int k=0; k<nbhist; ++k){
      AIOS0jetFF->cd();
      h0_AIOS_FF[k]->SetName(name.c_str()+postfix);
      h0_AIOS_FF[k]->Write();
      AIOSboostedFF->cd();
      h1_AIOS_FF[k]->SetName(name.c_str()+postfix);
      h1_AIOS_FF[k]->Write();
      AIOSvbfFF->cd();
      h2_AIOS_FF[k]->SetName(name.c_str()+postfix);
      h2_AIOS_FF[k]->Write();
    }
    fout->Close();
} 


