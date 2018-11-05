#include <map>

class scenario_info {
 private:
  Float_t jpt_1, jpt_2, mjj;
  Int_t njets;
  Float_t met, metphi;
  Float_t m_sv, pt_sv;
  Float_t ME_sm_VBF, ME_sm_ggH, ME_sm_WH, ME_sm_ZH, ME_bkg, ME_bkg1, ME_bkg2, Dbkg_VBF, Dbkg_ggH;
  Float_t Phi, Phi1, costheta1, costheta2, costhetastar, Q2V1, Q2V2;
 public:
  scenario_info (TTree*, std::string);
  virtual ~scenario_info () {};

  Float_t get_jpt_1()         { return jpt_1;        };
  Float_t get_jpt_2()         { return jpt_2;        };
  Float_t get_mjj()           { return mjj;          };
  Int_t   get_njets()         { return njets;        };
  Float_t get_met()           { return met;          };
  Float_t get_metphi()        { return metphi;       };
  Float_t get_m_sv()          { return m_sv;         };
  Float_t get_pt_sv()         { return pt_sv;        };  
  Float_t get_ME_sm_VBF()     { return ME_sm_VBF;    }; 
  Float_t get_ME_sm_ggH()     { return ME_sm_ggH;    }; 
  Float_t get_ME_sm_WH()      { return ME_sm_WH;     }; 
  Float_t get_ME_sm_ZH()      { return ME_sm_ZH;     }; 
  Float_t get_ME_bkg()        { return ME_bkg;       }; 
  Float_t get_ME_bkg1()       { return ME_bkg1;      }; 
  Float_t get_ME_bkg2()       { return ME_bkg2;      }; 
  Float_t get_Dbkg_VBF()      { return Dbkg_VBF;     }; 
  Float_t get_Dbkg_ggH()      { return Dbkg_ggH;     }; 
  Float_t get_Phi()           { return Phi;          };
  Float_t get_Phi1()          { return Phi1;         };
  Float_t get_costheta1()     { return costheta1;    };
  Float_t get_costheta2()     { return costheta2;    };
  Float_t get_costhetastar()  { return costhetastar; };
  Float_t get_Q2V1()          { return Q2V1;         };
  Float_t get_Q2V2()          { return Q2V2;         };
};


// read branches from arbre
scenario_info::scenario_info(TTree* arbre, std::string unc) {
  // set nominal as a defalt
  std::string jpt_1_unc = "jpt_1";
  std::string jpt_2_unc = "jpt_2";
  std::string mjj_unc = "mjj";
  std::string njets_unc = "njets";
  std::string met_unc = "met";
  std::string metphi_unc = "metphi";
  std::string m_sv_unc = "m_sv";
  std::string pt_sv_unc = "pt_sv";
  std::string ME_sm_VBF_unc = "ME_sm_VBF";
  std::string ME_sm_ggH_unc = "ME_sm_ggH";
  std::string ME_sm_WH_unc = "ME_sm_WH";
  std::string ME_sm_ZH_unc = "ME_sm_ZH";
  std::string ME_bkg_unc = "ME_bkg";
  std::string ME_bkg1_unc = "ME_bkg1";
  std::string ME_bkg2_unc = "ME_bkg2";
  std::string Dbkg_VBF_unc = "Dbkg_VBF";
  std::string Dbkg_ggH_unc = "Dbkg_ggH";
  std::string Phi_unc = "Phi";
  std::string Phi1_unc = "Phi1";
  std::string costheta1_unc = "costheta1";
  std::string costheta2_unc = "costheta2";
  std::string costhetastar_unc = "costhetastar";
  std::string Q2V1_unc = "Q2V1";
  std::string Q2V2_unc = "Q2V2";

  std::cout << "-------------- " << unc << " --------------" << std::endl;

  // if branches for unc is availble, replace to them
  if (unc=="nominal") unc = "";
  else unc = "_"+unc;
  TIter next(arbre->GetListOfBranches());
  TBranch *branch;
  while ((branch = (TBranch*)next())) {
    if ((jpt_1_unc+unc)==branch->GetName())                   jpt_1_unc=branch->GetName();
    else if ((jpt_2_unc+unc)==branch->GetName())              jpt_2_unc=branch->GetName();
    else if ((mjj_unc+unc)==branch->GetName())                mjj_unc=branch->GetName();
    else if ((njets_unc+unc)==branch->GetName())              njets_unc=branch->GetName();
    else if ((met_unc+unc)==branch->GetName())                met_unc=branch->GetName();
    else if ((metphi_unc+unc)==branch->GetName())             metphi_unc=branch->GetName();
    else if ((m_sv_unc+unc)==branch->GetName())               m_sv_unc=branch->GetName();
    else if ((pt_sv_unc+unc)==branch->GetName())              pt_sv_unc=branch->GetName();
    else if ((ME_sm_VBF_unc+unc)==branch->GetName())          ME_sm_VBF_unc=branch->GetName();
    else if ((ME_sm_ggH_unc+unc)==branch->GetName())          ME_sm_ggH_unc=branch->GetName();
    else if ((ME_sm_WH_unc+unc)==branch->GetName())           ME_sm_WH_unc=branch->GetName();
    else if ((ME_sm_ZH_unc+unc)==branch->GetName())           ME_sm_ZH_unc=branch->GetName();
    else if ((ME_bkg_unc+unc)==branch->GetName())             ME_bkg_unc=branch->GetName();
    else if ((ME_bkg1_unc+unc)==branch->GetName())            ME_bkg1_unc=branch->GetName();
    else if ((ME_bkg2_unc+unc)==branch->GetName())            ME_bkg2_unc=branch->GetName();
    else if ((Dbkg_VBF_unc+unc)==branch->GetName())           Dbkg_VBF_unc=branch->GetName();
    else if ((Dbkg_ggH_unc+unc)==branch->GetName())           Dbkg_ggH_unc=branch->GetName();
    else if ((Phi_unc+unc)==branch->GetName())                Phi_unc=branch->GetName();
    else if ((Phi1_unc+unc)==branch->GetName())               Phi1_unc=branch->GetName();
    else if ((costheta1_unc+unc)==branch->GetName())          costheta1_unc=branch->GetName();
    else if ((costheta2_unc+unc)==branch->GetName())          costheta2_unc=branch->GetName();
    else if ((costhetastar_unc+unc)==branch->GetName())      costhetastar_unc=branch->GetName();
    else if ((Q2V1_unc+unc)==branch->GetName())               Q2V1_unc=branch->GetName();
    else if ((Q2V2_unc+unc)==branch->GetName())               Q2V2_unc=branch->GetName();

    // This is tmporary fixing. Need to be fixed at skimming level.
    if (unc == "_JESUp" || unc == "_JESDown") {
      met_unc = "met";
      metphi_unc = "metphi";
    }
  }

  // print used tau and jet kinematics
  std::cout << jpt_1_unc << std::endl;
  std::cout << jpt_2_unc << std::endl;
  std::cout << mjj_unc << std::endl;
  std::cout << njets_unc << std::endl;
  std::cout << met_unc << std::endl;
  std::cout << metphi_unc << std::endl;
  std::cout << m_sv_unc << std::endl;
  std::cout << pt_sv_unc << std::endl;
  std::cout << ME_sm_VBF_unc << std::endl;
  std::cout << ME_sm_ggH_unc << std::endl;
  std::cout << ME_sm_WH_unc << std::endl;
  std::cout << ME_sm_ZH_unc << std::endl;
  std::cout << ME_bkg_unc << std::endl;
  std::cout << ME_bkg1_unc << std::endl;
  std::cout << ME_bkg2_unc << std::endl;
  std::cout << Dbkg_VBF_unc << std::endl;
  std::cout << Dbkg_ggH_unc << std::endl;
  std::cout << Phi_unc << std::endl;
  std::cout << Phi1_unc << std::endl;
  std::cout << costheta1_unc << std::endl;
  std::cout << costheta2_unc << std::endl;
  std::cout << costhetastar_unc << std::endl;
  std::cout << Q2V1_unc << std::endl;
  std::cout << Q2V2_unc << std::endl;
  std::cout << "-------------- used branches --------------" << std::endl << std::endl;

  // pick up printed branches
  arbre -> SetBranchAddress( jpt_1_unc.c_str()        , &jpt_1       );
  arbre -> SetBranchAddress( jpt_2_unc.c_str()        , &jpt_2       );
  arbre -> SetBranchAddress( mjj_unc.c_str()          , &mjj         );
  arbre -> SetBranchAddress( njets_unc.c_str()        , &njets       );
  arbre -> SetBranchAddress( met_unc.c_str()          , &met         );
  arbre -> SetBranchAddress( metphi_unc.c_str()       , &metphi      );
  arbre -> SetBranchAddress( m_sv_unc.c_str()         , &m_sv        );
  arbre -> SetBranchAddress( pt_sv_unc.c_str()        , &pt_sv       );
  arbre -> SetBranchAddress( ME_sm_VBF_unc.c_str()    , &ME_sm_VBF   );
  arbre -> SetBranchAddress( ME_sm_ggH_unc.c_str()    , &ME_sm_ggH   );
  arbre -> SetBranchAddress( ME_sm_WH_unc.c_str()     , &ME_sm_WH    );
  arbre -> SetBranchAddress( ME_sm_ZH_unc.c_str()     , &ME_sm_ZH    );
  arbre -> SetBranchAddress( ME_bkg_unc.c_str()       , &ME_bkg      );
  arbre -> SetBranchAddress( ME_bkg1_unc.c_str()      , &ME_bkg1     );
  arbre -> SetBranchAddress( ME_bkg2_unc.c_str()      , &ME_bkg2     );
  arbre -> SetBranchAddress( Dbkg_VBF_unc.c_str()     , &Dbkg_VBF    );
  arbre -> SetBranchAddress( Dbkg_ggH_unc.c_str()     , &Dbkg_ggH    );
  arbre -> SetBranchAddress( Phi_unc.c_str()          , &Phi         );
  arbre -> SetBranchAddress( Phi1_unc.c_str()         , &Phi1        );
  arbre -> SetBranchAddress( costheta1_unc.c_str()    , &costheta1   );
  arbre -> SetBranchAddress( costheta2_unc.c_str()    , &costheta2   );
  arbre -> SetBranchAddress( costhetastar_unc.c_str() , &costhetastar);
  arbre -> SetBranchAddress( Q2V1_unc.c_str()         , &Q2V1        );
  arbre -> SetBranchAddress( Q2V2_unc.c_str()         , &Q2V2        );
}

static std::map<std::string, TString> syst {
  {"dyShape_Up", "_CMS_htt_dyShape_13TeVUp"},
  {"dyShape_Down", "_CMS_htt_dyShape_13TeVDown"},
  {"jetToTauFake_Up", "_CMS_htt_jetToTauFake_13TeVUp"},
  {"jetToTauFake_Down", "_CMS_htt_jetToTauFake_13TeVDown"},
  {"ttbarShape_Up", "_CMS_htt_ttbarShape_13TeVUp"},
  {"ttbarShape_Down", "_CMS_htt_ttbarShape_13TeVDown"},
  {"ClusteredMet_Up", "_CMS_scale_met_clustered_13TeVUp"},
  {"ClusteredMet_Down", "_CMS_scale_met_clustered_13TeVDown"},
  {"UncMet_Up", "_CMS_scale_met_unclustered_13TeVUp"},
  {"UncMet_Down", "_CMS_scale_met_unclustered_13TeVDown"},
  {"DM0_Up", "_CMS_scale_t_1prong_13TeVUp"},
  {"DM0_Down", "_CMS_scale_t_1prong_13TeVDown"},
  {"DM1_Up", "_CMS_scale_t_1prong1pizero_13TeVUp"},
  {"DM1_Down", "_CMS_scale_t_1prong1pizero_13TeVDown"},
  {"DM10_Up", "_CMS_scale_t_3prong_13TeVUp"},
  {"DM10_Down", "_CMS_scale_t_3prong_13TeVDown"},
  {"JESUp", "_CMS_scale_j_13TeVUp"},
  {"JESDown", "_CMS_scale_j_13TeVDown"},
  {"zmumuShape_Up", "_CMS_htt_zmumuShape_VBF_13TeVUp"},
  {"zmumuShape_Down", "_CMS_htt_zmumuShape_VBF_13TeVDown"}
};

TString postfixMaps(std::string shape) { return syst[shape]; }
