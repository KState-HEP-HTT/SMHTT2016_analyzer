//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Sat Oct 27 21:52:08 2018 by ROOT version 6.12/04
// from TTree tautau_tree/tautau_tree
// found on file: output_Slicer/tt/VBF125.root
//////////////////////////////////////////////////////////

#ifndef tautau_tree_h
#define tautau_tree_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>
#include <vector>

using namespace std;
// Header file for the classes stored in the TTree if any.

class tautau_tree {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain

   // Declaration of leaf types
   Float_t         evtwt;
   Float_t         el_pt;
   Float_t         el_eta;
   Float_t         el_phi;
   Float_t         el_mass;
   Float_t         el_charge;
   Float_t         el_iso;
   Float_t         mu_pt;
   Float_t         mu_eta;
   Float_t         mu_phi;
   Float_t         mu_mass;
   Float_t         mu_charge;
   Float_t         t1_pt;
   Float_t         t1_eta;
   Float_t         t1_phi;
   Float_t         t1_mass;
   Float_t         t1_charge;
   Float_t         t1_tightIso;
   Float_t         t1_mediumIso;
   Float_t         t1_dmf;
   Float_t         t1_dmf_new;
   Float_t         t1_iso_VL;
   Float_t         t1_iso_L;
   Float_t         t1_iso_M;
   Float_t         t1_iso_T;
   Float_t         t1_iso_VT;
   Float_t         t1_iso;
   Float_t         t1_newiso_VL;
   Float_t         t1_newiso_L;
   Float_t         t1_newiso_M;
   Float_t         t1_newiso_T;
   Float_t         t1_newiso_VT;
   Float_t         t1_newiso;
   Float_t         t2_dmf;
   Float_t         t2_dmf_new;
   Float_t         t2_pt;
   Float_t         t2_eta;
   Float_t         t2_phi;
   Float_t         t2_mass;
   Float_t         t2_charge;
   Float_t         t2_iso_VL;
   Float_t         t2_iso_L;
   Float_t         t2_iso_M;
   Float_t         t2_iso_T;
   Float_t         t2_iso_VT;
   Float_t         t2_iso;
   Float_t         t2_newiso_VL;
   Float_t         t2_newiso_L;
   Float_t         t2_newiso_M;
   Float_t         t2_newiso_T;
   Float_t         t2_newiso_VT;
   Float_t         t2_newiso;
   Float_t         njets;
   Float_t         nbjets;
   Float_t         j1_pt;
   Float_t         j1_eta;
   Float_t         j1_phi;
   Float_t         j2_pt;
   Float_t         j2_eta;
   Float_t         j2_phi;
   Float_t         b1_pt;
   Float_t         b1_eta;
   Float_t         b1_phi;
   Float_t         b2_pt;
   Float_t         b2_eta;
   Float_t         b2_phi;
   Float_t         met;
   Float_t         metphi;
   Float_t         mjj;
   Float_t         mt;
   Float_t         numGenJets;
   Float_t         pt_sv;
   Float_t         m_sv;
   Float_t         Dbkg_VBF;
   Float_t         Dbkg_ggH;
   Float_t         Phi;
   Float_t         Phi1;
   Float_t         costheta1;
   Float_t         costheta2;
   Float_t         costhetastar;
   Float_t         Q2V1;
   Float_t         Q2V2;
   Float_t         ME_sm_VBF;
   Float_t         ME_sm_ggH;
   Float_t         ME_sm_WH;
   Float_t         ME_sm_ZH;
   Float_t         ME_bkg;
   Float_t         ME_bkg1;
   Float_t         ME_bkg2;
   Float_t         higgs_pT;
   Float_t         higgs_m;
   Float_t         hjj_pT;
   Float_t         hjj_m;
   Float_t         vis_mass;
   Float_t         dEtajj;
   Float_t         dPhijj;
   Int_t           cat_0jet;
   Int_t           cat_boosted;
   Int_t           cat_vbf;
   Int_t           cat_inclusive;
   Int_t           cat_antiiso;
   Int_t           cat_antiiso_0jet;
   Int_t           cat_antiiso_boosted;
   Int_t           cat_antiiso_vbf;
   Int_t           cat_qcd;
   Int_t           cat_qcd_0jet;
   Int_t           cat_qcd_boosted;
   Int_t           cat_qcd_vbf;
   Int_t           is_signal;
   Int_t           is_ai;

   // List of branches
   TBranch        *b_evtwt;   //!
   TBranch        *b_el_pt;   //!
   TBranch        *b_el_eta;   //!
   TBranch        *b_el_phi;   //!
   TBranch        *b_el_mass;   //!
   TBranch        *b_el_charge;   //!
   TBranch        *b_el_iso;   //!
   TBranch        *b_mu_pt;   //!
   TBranch        *b_mu_eta;   //!
   TBranch        *b_mu_phi;   //!
   TBranch        *b_mu_mass;   //!
   TBranch        *b_mu_charge;   //!
   TBranch        *b_t1_pt;   //!
   TBranch        *b_t1_eta;   //!
   TBranch        *b_t1_phi;   //!
   TBranch        *b_t1_mass;   //!
   TBranch        *b_t1_charge;   //!
   TBranch        *b_t1_tightIso;   //!
   TBranch        *b_t1_mediumIso;   //!
   TBranch        *b_t1_dmf;   //!
   TBranch        *b_t1_dmf_new;   //!
   TBranch        *b_t1_iso_VL;   //!
   TBranch        *b_t1_iso_L;   //!
   TBranch        *b_t1_iso_M;   //!
   TBranch        *b_t1_iso_T;   //!
   TBranch        *b_t1_iso_VT;   //!
   TBranch        *b_t1_iso;   //!
   TBranch        *b_t1_newiso_VL;   //!
   TBranch        *b_t1_newiso_L;   //!
   TBranch        *b_t1_newiso_M;   //!
   TBranch        *b_t1_newiso_T;   //!
   TBranch        *b_t1_newiso_VT;   //!
   TBranch        *b_t1_newiso;   //!
   TBranch        *b_t2_dmf;   //!
   TBranch        *b_t2_dmf_new;   //!
   TBranch        *b_t2_pt;   //!
   TBranch        *b_t2_eta;   //!
   TBranch        *b_t2_phi;   //!
   TBranch        *b_t2_mass;   //!
   TBranch        *b_t2_charge;   //!
   TBranch        *b_t2_iso_VL;   //!
   TBranch        *b_t2_iso_L;   //!
   TBranch        *b_t2_iso_M;   //!
   TBranch        *b_t2_iso_T;   //!
   TBranch        *b_t2_iso_VT;   //!
   TBranch        *b_t2_iso;   //!
   TBranch        *b_t2_newiso_VL;   //!
   TBranch        *b_t2_newiso_L;   //!
   TBranch        *b_t2_newiso_M;   //!
   TBranch        *b_t2_newiso_T;   //!
   TBranch        *b_t2_newiso_VT;   //!
   TBranch        *b_t2_newiso;   //!
   TBranch        *b_njets;   //!
   TBranch        *b_nbjets;   //!
   TBranch        *b_j1_pt;   //!
   TBranch        *b_j1_eta;   //!
   TBranch        *b_j1_phi;   //!
   TBranch        *b_j2_pt;   //!
   TBranch        *b_j2_eta;   //!
   TBranch        *b_j2_phi;   //!
   TBranch        *b_b1_pt;   //!
   TBranch        *b_b1_eta;   //!
   TBranch        *b_b1_phi;   //!
   TBranch        *b_b2_pt;   //!
   TBranch        *b_b2_eta;   //!
   TBranch        *b_b2_phi;   //!
   TBranch        *b_met;   //!
   TBranch        *b_metphi;   //!
   TBranch        *b_mjj;   //!
   TBranch        *b_mt;   //!
   TBranch        *b_numGenJets;   //!
   TBranch        *b_pt_sv;   //!
   TBranch        *b_m_sv;   //!
   TBranch        *b_Dbkg_VBF;   //!
   TBranch        *b_Dbkg_ggH;   //!
   TBranch        *b_Phi;   //!
   TBranch        *b_Phi1;   //!
   TBranch        *b_costheta1;   //!
   TBranch        *b_costheta2;   //!
   TBranch        *b_costhetastar;   //!
   TBranch        *b_Q2V1;   //!
   TBranch        *b_Q2V2;   //!
   TBranch        *b_ME_sm_;   //!
   TBranch        *b_ME_sm_WH;   //!
   TBranch        *b_ME_sm_ZH;   //!
   TBranch        *b_MEbkg_;   //!
   TBranch        *b_MEbkg1_;   //!
   TBranch        *b_MEbkg2_;   //!
   TBranch        *b_higgs_pT;   //!
   TBranch        *b_higgs_m;   //!
   TBranch        *b_hjj_pT;   //!
   TBranch        *b_hjj_m;   //!
   TBranch        *b_vis_mass;   //!
   TBranch        *b_dEtajj;   //!
   TBranch        *b_dPhijj;   //!
   TBranch        *b_cat_0jet;   //!
   TBranch        *b_cat_boosted;   //!
   TBranch        *b_cat_vbf;   //!
   TBranch        *b_cat_inclusive;   //!
   TBranch        *b_cat_antiiso;   //!
   TBranch        *b_cat_antiiso_0jet;   //!
   TBranch        *b_cat_antiiso_boosted;   //!
   TBranch        *b_cat_antiiso_vbf;   //!
   TBranch        *b_cat_qcd;   //!
   TBranch        *b_cat_qcd_0jet;   //!
   TBranch        *b_cat_qcd_boosted;   //!
   TBranch        *b_cat_qcd_vbf;   //!
   TBranch        *b_is_signal;   //!
   TBranch        *b_is_ai;   //!

   tautau_tree(TTree *tree);
   virtual ~tautau_tree();
   virtual Int_t    GetEntry(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual Long64_t GetEntries();
   TTree* GetTree();
};
tautau_tree::tautau_tree(TTree *tree)
{
   Init(tree);
}

tautau_tree::~tautau_tree() {}


Int_t tautau_tree::GetEntry(Long64_t entry)
{
   return fChain->GetEntry(entry);
}
Long64_t tautau_tree::GetEntries()
{
  return fChain->GetEntries();
}

TTree* tautau_tree::GetTree()
{
  return fChain;
}
void tautau_tree::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fCurrent = -1;
   fChain->SetMakeClass(1);

   fChain->SetBranchAddress("evtwt", &evtwt, &b_evtwt);
   fChain->SetBranchAddress("el_pt", &el_pt, &b_el_pt);
   fChain->SetBranchAddress("el_eta", &el_eta, &b_el_eta);
   fChain->SetBranchAddress("el_phi", &el_phi, &b_el_phi);
   fChain->SetBranchAddress("el_mass", &el_mass, &b_el_mass);
   fChain->SetBranchAddress("el_charge", &el_charge, &b_el_charge);
   fChain->SetBranchAddress("el_iso", &el_iso, &b_el_iso);
   fChain->SetBranchAddress("mu_pt", &mu_pt, &b_mu_pt);
   fChain->SetBranchAddress("mu_eta", &mu_eta, &b_mu_eta);
   fChain->SetBranchAddress("mu_phi", &mu_phi, &b_mu_phi);
   fChain->SetBranchAddress("mu_mass", &mu_mass, &b_mu_mass);
   fChain->SetBranchAddress("mu_charge", &mu_charge, &b_mu_charge);
   fChain->SetBranchAddress("t1_pt", &t1_pt, &b_t1_pt);
   fChain->SetBranchAddress("t1_eta", &t1_eta, &b_t1_eta);
   fChain->SetBranchAddress("t1_phi", &t1_phi, &b_t1_phi);
   fChain->SetBranchAddress("t1_mass", &t1_mass, &b_t1_mass);
   fChain->SetBranchAddress("t1_charge", &t1_charge, &b_t1_charge);
   fChain->SetBranchAddress("t1_tightIso", &t1_tightIso, &b_t1_tightIso);
   fChain->SetBranchAddress("t1_mediumIso", &t1_mediumIso, &b_t1_mediumIso);
   fChain->SetBranchAddress("t1_dmf", &t1_dmf, &b_t1_dmf);
   fChain->SetBranchAddress("t1_dmf_new", &t1_dmf_new, &b_t1_dmf_new);
   fChain->SetBranchAddress("t1_iso_VL", &t1_iso_VL, &b_t1_iso_VL);
   fChain->SetBranchAddress("t1_iso_L", &t1_iso_L, &b_t1_iso_L);
   fChain->SetBranchAddress("t1_iso_M", &t1_iso_M, &b_t1_iso_M);
   fChain->SetBranchAddress("t1_iso_T", &t1_iso_T, &b_t1_iso_T);
   fChain->SetBranchAddress("t1_iso_VT", &t1_iso_VT, &b_t1_iso_VT);
   fChain->SetBranchAddress("t1_iso", &t1_iso, &b_t1_iso);
   fChain->SetBranchAddress("t1_newiso_VL", &t1_newiso_VL, &b_t1_newiso_VL);
   fChain->SetBranchAddress("t1_newiso_L", &t1_newiso_L, &b_t1_newiso_L);
   fChain->SetBranchAddress("t1_newiso_M", &t1_newiso_M, &b_t1_newiso_M);
   fChain->SetBranchAddress("t1_newiso_T", &t1_newiso_T, &b_t1_newiso_T);
   fChain->SetBranchAddress("t1_newiso_VT", &t1_newiso_VT, &b_t1_newiso_VT);
   fChain->SetBranchAddress("t1_newiso", &t1_newiso, &b_t1_newiso);
   fChain->SetBranchAddress("t2_dmf", &t2_dmf, &b_t2_dmf);
   fChain->SetBranchAddress("t2_dmf_new", &t2_dmf_new, &b_t2_dmf_new);
   fChain->SetBranchAddress("t2_pt", &t2_pt, &b_t2_pt);
   fChain->SetBranchAddress("t2_eta", &t2_eta, &b_t2_eta);
   fChain->SetBranchAddress("t2_phi", &t2_phi, &b_t2_phi);
   fChain->SetBranchAddress("t2_mass", &t2_mass, &b_t2_mass);
   fChain->SetBranchAddress("t2_charge", &t2_charge, &b_t2_charge);
   fChain->SetBranchAddress("t2_iso_VL", &t2_iso_VL, &b_t2_iso_VL);
   fChain->SetBranchAddress("t2_iso_L", &t2_iso_L, &b_t2_iso_L);
   fChain->SetBranchAddress("t2_iso_M", &t2_iso_M, &b_t2_iso_M);
   fChain->SetBranchAddress("t2_iso_T", &t2_iso_T, &b_t2_iso_T);
   fChain->SetBranchAddress("t2_iso_VT", &t2_iso_VT, &b_t2_iso_VT);
   fChain->SetBranchAddress("t2_iso", &t2_iso, &b_t2_iso);
   fChain->SetBranchAddress("t2_newiso_VL", &t2_newiso_VL, &b_t2_newiso_VL);
   fChain->SetBranchAddress("t2_newiso_L", &t2_newiso_L, &b_t2_newiso_L);
   fChain->SetBranchAddress("t2_newiso_M", &t2_newiso_M, &b_t2_newiso_M);
   fChain->SetBranchAddress("t2_newiso_T", &t2_newiso_T, &b_t2_newiso_T);
   fChain->SetBranchAddress("t2_newiso_VT", &t2_newiso_VT, &b_t2_newiso_VT);
   fChain->SetBranchAddress("t2_newiso", &t2_newiso, &b_t2_newiso);
   fChain->SetBranchAddress("njets", &njets, &b_njets);
   fChain->SetBranchAddress("nbjets", &nbjets, &b_nbjets);
   fChain->SetBranchAddress("j1_pt", &j1_pt, &b_j1_pt);
   fChain->SetBranchAddress("j1_eta", &j1_eta, &b_j1_eta);
   fChain->SetBranchAddress("j1_phi", &j1_phi, &b_j1_phi);
   fChain->SetBranchAddress("j2_pt", &j2_pt, &b_j2_pt);
   fChain->SetBranchAddress("j2_eta", &j2_eta, &b_j2_eta);
   fChain->SetBranchAddress("j2_phi", &j2_phi, &b_j2_phi);
   fChain->SetBranchAddress("b1_pt", &b1_pt, &b_b1_pt);
   fChain->SetBranchAddress("b1_eta", &b1_eta, &b_b1_eta);
   fChain->SetBranchAddress("b1_phi", &b1_phi, &b_b1_phi);
   fChain->SetBranchAddress("b2_pt", &b2_pt, &b_b2_pt);
   fChain->SetBranchAddress("b2_eta", &b2_eta, &b_b2_eta);
   fChain->SetBranchAddress("b2_phi", &b2_phi, &b_b2_phi);
   fChain->SetBranchAddress("met", &met, &b_met);
   fChain->SetBranchAddress("metphi", &metphi, &b_metphi);
   fChain->SetBranchAddress("mjj", &mjj, &b_mjj);
   fChain->SetBranchAddress("mt", &mt, &b_mt);
   fChain->SetBranchAddress("numGenJets", &numGenJets, &b_numGenJets);
   fChain->SetBranchAddress("pt_sv", &pt_sv, &b_pt_sv);
   fChain->SetBranchAddress("m_sv", &m_sv, &b_m_sv);
   fChain->SetBranchAddress("Dbkg_VBF", &Dbkg_VBF, &b_Dbkg_VBF);
   fChain->SetBranchAddress("Dbkg_ggH", &Dbkg_ggH, &b_Dbkg_ggH);
   fChain->SetBranchAddress("Phi", &Phi, &b_Phi);
   fChain->SetBranchAddress("Phi1", &Phi1, &b_Phi1);
   fChain->SetBranchAddress("costheta1", &costheta1, &b_costheta1);
   fChain->SetBranchAddress("costheta2", &costheta2, &b_costheta2);
   fChain->SetBranchAddress("costhetastar", &costhetastar, &b_costhetastar);
   fChain->SetBranchAddress("Q2V1", &Q2V1, &b_Q2V1);
   fChain->SetBranchAddress("Q2V2", &Q2V2, &b_Q2V2);
   fChain->SetBranchAddress("ME_sm_ggH", &ME_sm_ggH, &b_ME_sm_);
   fChain->SetBranchAddress("ME_sm_WH", &ME_sm_WH, &b_ME_sm_WH);
   fChain->SetBranchAddress("ME_sm_ZH", &ME_sm_ZH, &b_ME_sm_ZH);
   fChain->SetBranchAddress("ME_bkg", &ME_bkg, &b_MEbkg_);
   fChain->SetBranchAddress("ME_bkg1", &ME_bkg1, &b_MEbkg1_);
   fChain->SetBranchAddress("ME_bkg2", &ME_bkg2, &b_MEbkg2_);
   fChain->SetBranchAddress("higgs_pT", &higgs_pT, &b_higgs_pT);
   fChain->SetBranchAddress("higgs_m", &higgs_m, &b_higgs_m);
   fChain->SetBranchAddress("hjj_pT", &hjj_pT, &b_hjj_pT);
   fChain->SetBranchAddress("hjj_m", &hjj_m, &b_hjj_m);
   fChain->SetBranchAddress("vis_mass", &vis_mass, &b_vis_mass);
   fChain->SetBranchAddress("dEtajj", &dEtajj, &b_dEtajj);
   fChain->SetBranchAddress("dPhijj", &dPhijj, &b_dPhijj);
   fChain->SetBranchAddress("cat_0jet", &cat_0jet, &b_cat_0jet);
   fChain->SetBranchAddress("cat_boosted", &cat_boosted, &b_cat_boosted);
   fChain->SetBranchAddress("cat_vbf", &cat_vbf, &b_cat_vbf);
   fChain->SetBranchAddress("cat_inclusive", &cat_inclusive, &b_cat_inclusive);
   fChain->SetBranchAddress("cat_antiiso", &cat_antiiso, &b_cat_antiiso);
   fChain->SetBranchAddress("cat_antiiso_0jet", &cat_antiiso_0jet, &b_cat_antiiso_0jet);
   fChain->SetBranchAddress("cat_antiiso_boosted", &cat_antiiso_boosted, &b_cat_antiiso_boosted);
   fChain->SetBranchAddress("cat_antiiso_vbf", &cat_antiiso_vbf, &b_cat_antiiso_vbf);
   fChain->SetBranchAddress("cat_qcd", &cat_qcd, &b_cat_qcd);
   fChain->SetBranchAddress("cat_qcd_0jet", &cat_qcd_0jet, &b_cat_qcd_0jet);
   fChain->SetBranchAddress("cat_qcd_boosted", &cat_qcd_boosted, &b_cat_qcd_boosted);
   fChain->SetBranchAddress("cat_qcd_vbf", &cat_qcd_vbf, &b_cat_qcd_vbf);
   fChain->SetBranchAddress("is_signal", &is_signal, &b_is_signal);
   fChain->SetBranchAddress("is_ai", &is_ai, &b_is_ai);

}


#endif // #ifdef tautau_tree_cxx
