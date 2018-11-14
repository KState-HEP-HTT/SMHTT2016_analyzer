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
#include "TH2F.h"
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
    std::cout<<"XXXXXXXXXXXXX "<<input.c_str()<<" XXXXXXXXXXXX"<<std::endl;
    TTree* namu = (TTree*) f_Double->Get("mutau_tree");
    TH1F* nbevt = (TH1F*) f_Double->Get("nevents");
    float ngen = nbevt->GetBinContent(2);
    std::cout.precision(11);

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
    namu->SetBranchAddress("is_qcd",              &is_qcd               );              

    namu->SetBranchAddress("NN_disc_QCD",         &NN_disc_QCD          );
    namu->SetBranchAddress("NN_disc_ZTT",         &NN_disc_ZTT          );


    //Binning for 0jet cat, x-axis
    float bins0X[] = {0,1,10,11};
    //Binning for 0jet cat, y-axis
    float bins0Y[] = {0,60,65,70,75,80,85,90,95,100,105,110,400,10000};
    //Binning for 1jet cat, x-axis
    float bins1X[] = {0,100,150,200,250,300,5000};
    //Binning for 1jet cat, y-axis
    float bins1Y[] = {0,80,90,100,110,120,130,140,150,160,300,10000};
    //Binning for 2jet cat, x-axis
    float bins2X[] = {300,700,1100,1500,10000};
    //float bins2X[] = {0,0.1,0.5,0.9,1.0};
    //Binning for 2jet cat, y-axis
    float bins2Y[] = {0,95,115,135,155,400,10000};

    int  binnum0X = sizeof(bins0X)/sizeof(Float_t) - 1;
    int  binnum0Y = sizeof(bins0Y)/sizeof(Float_t) - 1;
    int  binnum1X = sizeof(bins1X)/sizeof(Float_t) - 1;
    int  binnum1Y = sizeof(bins1Y)/sizeof(Float_t) - 1;
    int  binnum2X = sizeof(bins2X)/sizeof(Float_t) - 1;
    int  binnum2Y = sizeof(bins2Y)/sizeof(Float_t) - 1;

    std::vector<TH2F*> h0_OS;
    std::vector<TH2F*> h0_SS;
    std::vector<TH2F*> h0_QCD;
    std::vector<TH2F*> h1_OS;
    std::vector<TH2F*> h1_SS;
    std::vector<TH2F*> h1_QCD;
    std::vector<TH2F*> h2_OS;
    std::vector<TH2F*> h2_SS;
    std::vector<TH2F*> h2_QCD;

    TString postfix = postfixMaps(shape);

    //binnum2X,bins2X,binnum2Y,bins2Y
    int nbhist=1;
    for (int k=0; k<nbhist; ++k){
      std::ostringstream HNS0OS; HNS0OS << "h0_OS" << k;
      std::ostringstream HNS1OS; HNS1OS << "h1_OS" << k;
      std::ostringstream HNS2OS; HNS2OS << "h2_OS" << k;
      h0_OS.push_back(new TH2F (HNS0OS.str().c_str(),"",binnum0X,bins0X,binnum0Y,bins0Y)); h0_OS[k]->Sumw2();
      h1_OS.push_back(new TH2F (HNS1OS.str().c_str(),"",binnum1X,bins1X,binnum1Y,bins1Y)); h1_OS[k]->Sumw2();
      h2_OS.push_back(new TH2F (HNS2OS.str().c_str(),"",binnum2X,bins2X,binnum2Y,bins2Y)); h2_OS[k]->Sumw2();
      
      std::ostringstream HNS0SS; HNS0OS << "h0_SS" << k;
      std::ostringstream HNS1SS; HNS1OS << "h1_SS" << k;
      std::ostringstream HNS2SS; HNS2OS << "h2_SS" << k;
      h0_SS.push_back(new TH2F (HNS0SS.str().c_str(),"",binnum0X,bins0X,binnum0Y,bins0Y)); h0_SS[k]->Sumw2();
      h1_SS.push_back(new TH2F (HNS1SS.str().c_str(),"",binnum1X,bins1X,binnum1Y,bins1Y)); h1_SS[k]->Sumw2();
      h2_SS.push_back(new TH2F (HNS2SS.str().c_str(),"",binnum2X,bins2X,binnum2Y,bins2Y)); h2_SS[k]->Sumw2();
      
      std::ostringstream HNS0QCD; HNS0QCD << "h0_QCD" << k;
      std::ostringstream HNS1QCD; HNS1QCD << "h1_QCD" << k;
      std::ostringstream HNS2QCD; HNS2QCD << "h2_QCD" << k;
      h0_QCD.push_back(new TH2F (HNS0QCD.str().c_str(),"",binnum0X,bins0X,binnum0Y,bins0Y)); h0_QCD[k]->Sumw2();
      h1_QCD.push_back(new TH2F (HNS1QCD.str().c_str(),"",binnum1X,bins1X,binnum1Y,bins1Y)); h1_QCD[k]->Sumw2();
      h2_QCD.push_back(new TH2F (HNS2QCD.str().c_str(),"",binnum2X,bins2X,binnum2Y,bins2Y)); h2_QCD[k]->Sumw2();
    }
    
    // Loop over all events
    Int_t nentries_wtn = (Int_t) namu->GetEntries();
    for (Int_t i = 0; i < nentries_wtn; i++) {
      namu->GetEntry(i);
      if (i % 1000 == 0) fprintf(stdout, "\r  Processed events: %8d of %8d ", i, nentries_wtn);
      fflush(stdout);
      float normMELAvbf = ME_sm_VBF/(ME_sm_VBF+45*ME_bkg);

      /////////////////////////
      //  For relaxed skims  //
      /////////////////////////
      bool twoProng = t1_decayMode == 5 || t1_decayMode ==  6;
      if (twoProng) continue;            
      if (!t1_iso_VL) continue;
      if (!t1_dmf) continue;
      bool signalRegion = false;
      bool qcdRegion = false;
      signalRegion = t1_iso_T && mu_iso<0.15;
      qcdRegion = t1_iso_M && mu_iso<0.30;
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
	if (njets==1 || (njets>=2 && (mjj<=300 || pt_sv<=50 || t1_pt<=40))) is_boosted=true;
	if (njets>=2 && mjj>300 && pt_sv>50 && t1_pt>40) is_VBF=true;
      }
      else {
	////////////////////////
	// KSU study category //
	////////////////////////
	if (njets==0) is_0jet=true;
	else if (cat_vbf && nbjets==0) is_VBF=true; 
	else if (njets==1) is_boosted=true;   
      }


      float var_0jetX = t1_decayMode;
      float var_0jetY = m_sv;
      float var_boostedX = higgs_pT;
      float var_boostedY = m_sv;
      float var_vbfX = mjj;
      float var_vbfY = m_sv;

      for (int k=0; k<nbhist; ++k){
	if (mt<50 && t1_charge*mu_charge<0) {
	  // ################### signalRegion && OS ####################
	  if (is_0jet && signalRegion)         h0_OS[k]->Fill(var_0jetX,var_0jetY,evtwt);
	  if (is_boosted && signalRegion)	    h1_OS[k]->Fill(var_boostedX,var_boostedY,evtwt);
	  if (is_VBF && signalRegion) 	    h2_OS[k]->Fill(var_vbfX,var_vbfY,evtwt); 
	}

	if (mt<50 && t1_charge*mu_charge>0) {
	  // ################### signalRegion && SS ####################
	  if (is_0jet && signalRegion)         h0_SS[k]->Fill(var_0jetX,var_0jetY,evtwt);
	  if (is_boosted && signalRegion)	    h1_SS[k]->Fill(var_boostedX,var_boostedY,evtwt);
	  if (is_VBF && signalRegion) 	    h2_SS[k]->Fill(var_vbfX,var_vbfY,evtwt);	  
	  // ################### QCDRegion && SS ####################
	  if (is_0jet && qcdRegion)            h0_QCD[k]->Fill(var_0jetX,var_0jetY,evtwt);
	  if (is_boosted && qcdRegion)	    h1_QCD[k]->Fill(var_boostedX,var_boostedY,evtwt);
	  if (is_VBF && qcdRegion) 	    h2_QCD[k]->Fill(var_vbfX,var_vbfY,evtwt);	  
	}
      }
    } // end of loop over events
    
    TFile *fout = TFile::Open(output.c_str(), "RECREATE");
    fout->cd();
    TDirectory *OS0jet_tt =fout->mkdir("mt_0jet");
    TDirectory *OSboosted_tt =fout->mkdir("mt_boosted");
    TDirectory *OSvbf_tt =fout->mkdir("mt_vbf");

    TDirectory *SS0jet =fout->mkdir("SS0jet");
    TDirectory *SSboosted =fout->mkdir("SS1jet");
    TDirectory *SSvbf =fout->mkdir("SSvbf");
    
    TDirectory *QCD0jet =fout->mkdir("QCD0jet");
    TDirectory *QCDboosted =fout->mkdir("QCD1jet");
    TDirectory *QCDvbf =fout->mkdir("QCDvbf");

    for (int k=0; k<nbhist; ++k){
      OS0jet_tt->cd();
      h0_OS[k]->SetName(name.c_str()+postfix);
      h0_OS[k]->Write();
      OSboosted_tt->cd();
      h1_OS[k]->SetName(name.c_str()+postfix);
      h1_OS[k]->Write();
      OSvbf_tt->cd();
      h2_OS[k]->SetName(name.c_str()+postfix);
      h2_OS[k]->Write();        
      
      SS0jet->cd();
      h0_SS[k]->SetName(name.c_str()+postfix);
      h0_SS[k]->Write();
      SSboosted->cd();
      h1_SS[k]->SetName(name.c_str()+postfix);
      h1_SS[k]->Write();
      SSvbf->cd();
      h2_SS[k]->SetName(name.c_str()+postfix);
      h2_SS[k]->Write();
      
      QCD0jet->cd();
      h0_QCD[k]->SetName(name.c_str()+postfix);
      h0_QCD[k]->Write();
      QCDboosted->cd();
      h1_QCD[k]->SetName(name.c_str()+postfix);
      h1_QCD[k]->Write();
      QCDvbf->cd();
      h2_QCD[k]->SetName(name.c_str()+postfix);
      h2_QCD[k]->Write();
    }
    fout->Close();
} 


