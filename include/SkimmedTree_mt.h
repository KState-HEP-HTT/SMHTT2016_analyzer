//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Sun Oct 28 06:44:54 2018 by ROOT version 6.12/04
// from TTree mutau_tree/mutau_tree
// found on file: TauTau_13_ES1_W1-TauTau_13_ES1_W1-W4_3_9.root
//////////////////////////////////////////////////////////

#ifndef SkimmedTree_mt_h
#define SkimmedTree_mt_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>
#include <vector>

using namespace std;
// Header file for the classes stored in the TTree if any.

class SkimmedTree_mt {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain

// Fixed size dimensions of array or collections stored in the TTree if any.

   // Declaration of leaf types
   UInt_t          run;
   UInt_t          lumi;
   UInt_t          evt;
   Float_t         tZTTGenDR;
   Float_t         npv;
   Float_t         npu;
   Float_t         genweight;
   Float_t         Rivet_stage1_cat_pTjet30GeV;
   Float_t         Rivet_stage0_cat;
   Float_t         Rivet_higgsPt;
   Float_t         Rivet_nJets30;
   Float_t         pt_1;
   Float_t         px_1;
   Float_t         py_1;
   Float_t         pz_1;
   Float_t         phi_1;
   Float_t         eta_1;
   Float_t         m_1;
   Float_t         e_1;
   Float_t         q_1;
   Float_t         mt_1;
   Float_t         iso_1;
   Float_t         iso_1_v2;
   Float_t         id_m_medium_1;
   Float_t         id_m_medium2016_1;
   Float_t         genpX;
   Float_t         genpY;
   Float_t         genpT;
   Float_t         genM;
   Float_t         vispX;
   Float_t         vispY;
   Float_t         matchIsoMu22eta2p1_1;
   Float_t         matchIsoTkMu22eta2p1_1;
   Float_t         matchIsoMu22_1;
   Float_t         matchIsoTkMu22_1;
   Float_t         matchIsoMu24_1;
   Float_t         matchIsoTkMu24_1;
   Float_t         matchIsoMu19Tau20_1;
   Float_t         matchIsoMu21Tau20_1;
   Float_t         filterIsoMu22eta2p1_1;
   Float_t         filterIsoTkMu22eta2p1_1;
   Float_t         filterIsoMu22_1;
   Float_t         filterIsoTkMu22_1;
   Float_t         filterIsoMu24_1;
   Float_t         filterIsoTkMu24_1;
   Float_t         filterIsoMu19Tau20_1;
   Float_t         filterIsoMu21Tau20_1;
   Float_t         passIsoMu22eta2p1;
   Float_t         passIsoTkMu22eta2p1;
   Float_t         passIsoMu22;
   Float_t         passIsoTkMu22;
   Float_t         passIsoMu24;
   Float_t         passIsoTkMu24;
   Float_t         passIsoMu19Tau20;
   Float_t         passIsoMu21Tau20;
   Float_t         matchIsoMu19Tau20_2;
   Float_t         matchIsoMu21Tau20_2;
   Float_t         filterIsoMu19Tau20_2;
   Float_t         filterIsoMu21Tau20_2;
   Float_t         flag_goodVertices;
   Float_t         flag_globalTightHalo2016;
   Float_t         flag_eeBadSc;
   Float_t         flag_badGlobalMuon;
   Float_t         flag_badCloneMuon;
   Float_t         flag_HBHENoiseIso;
   Float_t         flag_HBHENoise;
   Float_t         flag_EcalDeadCellTriggerPrimitive;
   Float_t         flag_BadPFMuon;
   Float_t         flag_BadChargedCandidate;
   Float_t         pt_2;
   Float_t         phi_2;
   Float_t         eta_2;
   Float_t         px_2;
   Float_t         py_2;
   Float_t         pz_2;
   Float_t         m_2;
   Float_t         e_2;
   Float_t         q_2;
   Float_t         l2_decayMode;
   Float_t         againstElectronVLooseMVA6_2;
   Float_t         againstMuonTight3_2;
   Float_t         byVLooseIsolationMVArun2v1DBoldDMwLT_2;
   Float_t         byLooseIsolationMVArun2v1DBoldDMwLT_2;
   Float_t         byMediumIsolationMVArun2v1DBoldDMwLT_2;
   Float_t         byTightIsolationMVArun2v1DBoldDMwLT_2;
   Float_t         byVTightIsolationMVArun2v1DBoldDMwLT_2;
   Float_t         byVVTightIsolationMVArun2v1DBoldDMwLT_2;
   Float_t         iso_2_old;
   Float_t         decayModeFinding_2;
   Float_t         byVLooseIsolationMVArun2v1DBnewDMwLT_2;
   Float_t         byLooseIsolationMVArun2v1DBnewDMwLT_2;
   Float_t         byMediumIsolationMVArun2v1DBnewDMwLT_2;
   Float_t         byTightIsolationMVArun2v1DBnewDMwLT_2;
   Float_t         byVTightIsolationMVArun2v1DBnewDMwLT_2;
   Float_t         byVVTightIsolationMVArun2v1DBnewDMwLT_2;
   Float_t         iso_2_new;
   Float_t         decayModeFindingNewDMs_2;
   Float_t         numGenJets;
   Float_t         jetPt_2;
   Float_t         pt_tt;
   Float_t         m_vis;
   Float_t         pt_top1;
   Float_t         pt_top2;
   Float_t         met_JESDown;
   Float_t         met_UESDown;
   Float_t         met_JESUp;
   Float_t         met_UESUp;
   Float_t         metphi_JESDown;
   Float_t         metphi_TESDown;
   Float_t         metphi_UESDown;
   Float_t         metphi_JESUp;
   Float_t         metphi_UESUp;
   Float_t         met;
   Float_t         metSig;
   Float_t         metcov00;
   Float_t         metcov10;
   Float_t         metcov11;
   Float_t         metcov01;
   Float_t         metcov00_v2;
   Float_t         metcov10_v2;
   Float_t         metcov11_v2;
   Float_t         metcov01_v2;
   Float_t         metphi;
   Float_t         met_px;
   Float_t         met_py;
   Float_t         mjj;
   Float_t         jdeta;
   Float_t         mjj_JESUp;
   Float_t         mjj_JESDown;
   Int_t           gen_match_1;
   Int_t           gen_match_2;
   Int_t           njets_JetAbsoluteFlavMapDown;
   Float_t         mjj_JetAbsoluteFlavMapDown;
   Int_t           njets_JetAbsoluteMPFBiasDown;
   Float_t         mjj_JetAbsoluteMPFBiasDown;
   Int_t           njets_JetAbsoluteScaleDown;
   Float_t         mjj_JetAbsoluteScaleDown;
   Int_t           njets_JetAbsoluteStatDown;
   Float_t         mjj_JetAbsoluteStatDown;
   Int_t           njets_JetEnDown;
   Float_t         mjj_JetEnDown;
   Int_t           njets_JetFlavorQCDDown;
   Float_t         mjj_JetFlavorQCDDown;
   Int_t           njets_JetFragmentationDown;
   Float_t         mjj_JetFragmentationDown;
   Int_t           njets_JetPileUpDataMCDown;
   Float_t         mjj_JetPileUpDataMCDown;
   Int_t           njets_JetPileUpPtBBDown;
   Float_t         mjj_JetPileUpPtBBDown;
   Int_t           njets_JetPileUpPtEC1Down;
   Float_t         mjj_JetPileUpPtEC1Down;
   Int_t           njets_JetPileUpPtEC2Down;
   Float_t         mjj_JetPileUpPtEC2Down;
   Int_t           njets_JetPileUpPtHFDown;
   Float_t         mjj_JetPileUpPtHFDown;
   Int_t           njets_JetPileUpPtRefDown;
   Float_t         mjj_JetPileUpPtRefDown;
   Int_t           njets_JetRelativeBalDown;
   Float_t         mjj_JetRelativeBalDown;
   Int_t           njets_JetRelativeFSRDown;
   Float_t         mjj_JetRelativeFSRDown;
   Int_t           njets_JetRelativeJEREC1Down;
   Float_t         mjj_JetRelativeJEREC1Down;
   Int_t           njets_JetRelativeJEREC2Down;
   Float_t         mjj_JetRelativeJEREC2Down;
   Int_t           njets_JetRelativeJERHFDown;
   Float_t         mjj_JetRelativeJERHFDown;
   Int_t           njets_JetRelativePtBBDown;
   Float_t         mjj_JetRelativePtBBDown;
   Int_t           njets_JetRelativePtEC1Down;
   Float_t         mjj_JetRelativePtEC1Down;
   Int_t           njets_JetRelativePtEC2Down;
   Float_t         mjj_JetRelativePtEC2Down;
   Int_t           njets_JetRelativePtHFDown;
   Float_t         mjj_JetRelativePtHFDown;
   Int_t           njets_JetRelativeStatECDown;
   Float_t         mjj_JetRelativeStatECDown;
   Int_t           njets_JetRelativeStatFSRDown;
   Float_t         mjj_JetRelativeStatFSRDown;
   Int_t           njets_JetRelativeStatHFDown;
   Float_t         mjj_JetRelativeStatHFDown;
   Int_t           njets_JetSinglePionECALDown;
   Float_t         mjj_JetSinglePionECALDown;
   Int_t           njets_JetSinglePionHCALDown;
   Float_t         mjj_JetSinglePionHCALDown;
   Int_t           njets_JetTimePtEtaDown;
   Float_t         mjj_JetTimePtEtaDown;
   Int_t           njets_JetAbsoluteFlavMapUp;
   Float_t         mjj_JetAbsoluteFlavMapUp;
   Int_t           njets_JetAbsoluteMPFBiasUp;
   Float_t         mjj_JetAbsoluteMPFBiasUp;
   Int_t           njets_JetAbsoluteScaleUp;
   Float_t         mjj_JetAbsoluteScaleUp;
   Int_t           njets_JetAbsoluteStatUp;
   Float_t         mjj_JetAbsoluteStatUp;
   Int_t           njets_JetEnUp;
   Float_t         mjj_JetEnUp;
   Int_t           njets_JetFlavorQCDUp;
   Float_t         mjj_JetFlavorQCDUp;
   Int_t           njets_JetFragmentationUp;
   Float_t         mjj_JetFragmentationUp;
   Int_t           njets_JetPileUpDataMCUp;
   Float_t         mjj_JetPileUpDataMCUp;
   Int_t           njets_JetPileUpPtBBUp;
   Float_t         mjj_JetPileUpPtBBUp;
   Int_t           njets_JetPileUpPtEC1Up;
   Float_t         mjj_JetPileUpPtEC1Up;
   Int_t           njets_JetPileUpPtEC2Up;
   Float_t         mjj_JetPileUpPtEC2Up;
   Int_t           njets_JetPileUpPtHFUp;
   Float_t         mjj_JetPileUpPtHFUp;
   Int_t           njets_JetPileUpPtRefUp;
   Float_t         mjj_JetPileUpPtRefUp;
   Int_t           njets_JetRelativeBalUp;
   Float_t         mjj_JetRelativeBalUp;
   Int_t           njets_JetRelativeFSRUp;
   Float_t         mjj_JetRelativeFSRUp;
   Int_t           njets_JetRelativeJEREC1Up;
   Float_t         mjj_JetRelativeJEREC1Up;
   Int_t           njets_JetRelativeJEREC2Up;
   Float_t         mjj_JetRelativeJEREC2Up;
   Int_t           njets_JetRelativeJERHFUp;
   Float_t         mjj_JetRelativeJERHFUp;
   Int_t           njets_JetRelativePtBBUp;
   Float_t         mjj_JetRelativePtBBUp;
   Int_t           njets_JetRelativePtEC1Up;
   Float_t         mjj_JetRelativePtEC1Up;
   Int_t           njets_JetRelativePtEC2Up;
   Float_t         mjj_JetRelativePtEC2Up;
   Int_t           njets_JetRelativePtHFUp;
   Float_t         mjj_JetRelativePtHFUp;
   Int_t           njets_JetRelativeStatECUp;
   Float_t         mjj_JetRelativeStatECUp;
   Int_t           njets_JetRelativeStatFSRUp;
   Float_t         mjj_JetRelativeStatFSRUp;
   Int_t           njets_JetRelativeStatHFUp;
   Float_t         mjj_JetRelativeStatHFUp;
   Int_t           njets_JetSinglePionECALUp;
   Float_t         mjj_JetSinglePionECALUp;
   Int_t           njets_JetSinglePionHCALUp;
   Float_t         mjj_JetSinglePionHCALUp;
   Int_t           njets_JetTimePtEtaUp;
   Float_t         mjj_JetTimePtEtaUp;
   Int_t           nbtag;
   Int_t           njets;
   Int_t           njetspt20;
   Int_t           njets_JESDown;
   Int_t           njets_JESUp;
   Float_t         jpt_1;
   Float_t         jeta_1;
   Float_t         jphi_1;
   Float_t         jcsv_1;
   Float_t         jpt_1_JESUp;
   Float_t         jpt_1_JESDown;
   Float_t         jpt_2;
   Float_t         jeta_2;
   Float_t         jphi_2;
   Float_t         jcsv_2;
   Float_t         jpt_2_JESUp;
   Float_t         jpt_2_JESDown;
   Float_t         bpt_1;
   Float_t         beta_1;
   Float_t         bphi_1;
   Float_t         bcsv_1;
   Float_t         bflavor_1;
   Float_t         bpt_2;
   Float_t         beta_2;
   Float_t         bphi_2;
   Float_t         bcsv_2;
   Float_t         bflavor_2;
   Float_t         extraelec_veto;
   Float_t         extramuon_veto;
   Float_t         dilepton_veto;
   Float_t         m_sv;
   Float_t         pt_sv;
   Float_t         eta_sv;
   Float_t         phi_sv;
   Float_t         met_sv;
   Float_t         mt_sv;
   Float_t         metcorr_ex;
   Float_t         metcorr_ey;
   Float_t         metcor;
   Float_t         metcorphi;
   Float_t         m_sv_Up;
   Float_t         pt_sv_Up;
   Float_t         eta_sv_Up;
   Float_t         phi_sv_Up;
   Float_t         met_sv_Up;
   Float_t         mt_sv_Up;
   Float_t         m_sv_Down;
   Float_t         pt_sv_Down;
   Float_t         eta_sv_Down;
   Float_t         phi_sv_Down;
   Float_t         met_sv_Down;
   Float_t         mt_sv_Down;
   Float_t         m_sv_DM0_Up;
   Float_t         pt_sv_DM0_Up;
   Float_t         eta_sv_DM0_Up;
   Float_t         phi_sv_DM0_Up;
   Float_t         met_sv_DM0_Up;
   Float_t         mt_sv_DM0_Up;
   Float_t         m_sv_DM0_Down;
   Float_t         pt_sv_DM0_Down;
   Float_t         eta_sv_DM0_Down;
   Float_t         phi_sv_DM0_Down;
   Float_t         met_sv_DM0_Down;
   Float_t         mt_sv_DM0_Down;
   Float_t         m_sv_DM1_Up;
   Float_t         pt_sv_DM1_Up;
   Float_t         eta_sv_DM1_Up;
   Float_t         phi_sv_DM1_Up;
   Float_t         met_sv_DM1_Up;
   Float_t         mt_sv_DM1_Up;
   Float_t         m_sv_DM1_Down;
   Float_t         pt_sv_DM1_Down;
   Float_t         eta_sv_DM1_Down;
   Float_t         phi_sv_DM1_Down;
   Float_t         met_sv_DM1_Down;
   Float_t         mt_sv_DM1_Down;
   Float_t         m_sv_DM10_Up;
   Float_t         pt_sv_DM10_Up;
   Float_t         eta_sv_DM10_Up;
   Float_t         phi_sv_DM10_Up;
   Float_t         met_sv_DM10_Up;
   Float_t         mt_sv_DM10_Up;
   Float_t         m_sv_DM10_Down;
   Float_t         pt_sv_DM10_Down;
   Float_t         eta_sv_DM10_Down;
   Float_t         phi_sv_DM10_Down;
   Float_t         met_sv_DM10_Down;
   Float_t         mt_sv_DM10_Down;
   Float_t         m_sv_UncMet_Up;
   Float_t         pt_sv_UncMet_Up;
   Float_t         eta_sv_UncMet_Up;
   Float_t         phi_sv_UncMet_Up;
   Float_t         met_sv_UncMet_Up;
   Float_t         mt_sv_UncMet_Up;
   Float_t         m_sv_UncMet_Down;
   Float_t         pt_sv_UncMet_Down;
   Float_t         eta_sv_UncMet_Down;
   Float_t         phi_sv_UncMet_Down;
   Float_t         met_sv_UncMet_Down;
   Float_t         mt_sv_UncMet_Down;
   Float_t         m_sv_ClusteredMet_Up;
   Float_t         pt_sv_ClusteredMet_Up;
   Float_t         eta_sv_ClusteredMet_Up;
   Float_t         phi_sv_ClusteredMet_Up;
   Float_t         met_sv_ClusteredMet_Up;
   Float_t         mt_sv_ClusteredMet_Up;
   Float_t         m_sv_ClusteredMet_Down;
   Float_t         pt_sv_ClusteredMet_Down;
   Float_t         eta_sv_ClusteredMet_Down;
   Float_t         phi_sv_ClusteredMet_Down;
   Float_t         met_sv_ClusteredMet_Down;
   Float_t         mt_sv_ClusteredMet_Down;
   Float_t         metcorClusteredDown;
   Float_t         metcorphiClusteredDown;
   Float_t         metcorClusteredUp;
   Float_t         metcorphiClusteredUp;
   Float_t         metcorUncDown;
   Float_t         metcorphiUncDown;
   Float_t         metcorUncUp;
   Float_t         metcorphiUncUp;
   Float_t         tau1_pt;
   Float_t         tau1_eta;
   Float_t         tau1_phi;
   Float_t         tau1_m;
   Float_t         tau2_pt;
   Float_t         tau2_eta;
   Float_t         tau2_phi;
   Float_t         tau2_m;
   Float_t         tau1_pt_Up;
   Float_t         tau1_eta_Up;
   Float_t         tau1_phi_Up;
   Float_t         tau1_m_Up;
   Float_t         tau2_pt_Up;
   Float_t         tau2_eta_Up;
   Float_t         tau2_phi_Up;
   Float_t         tau2_m_Up;
   Float_t         tau1_pt_Down;
   Float_t         tau1_eta_Down;
   Float_t         tau1_phi_Down;
   Float_t         tau1_m_Down;
   Float_t         tau2_pt_Down;
   Float_t         tau2_eta_Down;
   Float_t         tau2_phi_Down;
   Float_t         tau2_m_Down;
   Float_t         tau1_pt_DM0_Up;
   Float_t         tau1_eta_DM0_Up;
   Float_t         tau1_phi_DM0_Up;
   Float_t         tau1_m_DM0_Up;
   Float_t         tau2_pt_DM0_Up;
   Float_t         tau2_eta_DM0_Up;
   Float_t         tau2_phi_DM0_Up;
   Float_t         tau2_m_DM0_Up;
   Float_t         tau1_pt_DM0_Down;
   Float_t         tau1_eta_DM0_Down;
   Float_t         tau1_phi_DM0_Down;
   Float_t         tau1_m_DM0_Down;
   Float_t         tau2_pt_DM0_Down;
   Float_t         tau2_eta_DM0_Down;
   Float_t         tau2_phi_DM0_Down;
   Float_t         tau2_m_DM0_Down;
   Float_t         tau1_pt_DM1_Up;
   Float_t         tau1_eta_DM1_Up;
   Float_t         tau1_phi_DM1_Up;
   Float_t         tau1_m_DM1_Up;
   Float_t         tau2_pt_DM1_Up;
   Float_t         tau2_eta_DM1_Up;
   Float_t         tau2_phi_DM1_Up;
   Float_t         tau2_m_DM1_Up;
   Float_t         tau1_pt_DM1_Down;
   Float_t         tau1_eta_DM1_Down;
   Float_t         tau1_phi_DM1_Down;
   Float_t         tau1_m_DM1_Down;
   Float_t         tau2_pt_DM1_Down;
   Float_t         tau2_eta_DM1_Down;
   Float_t         tau2_phi_DM1_Down;
   Float_t         tau2_m_DM1_Down;
   Float_t         tau1_pt_DM10_Up;
   Float_t         tau1_eta_DM10_Up;
   Float_t         tau1_phi_DM10_Up;
   Float_t         tau1_m_DM10_Up;
   Float_t         tau2_pt_DM10_Up;
   Float_t         tau2_eta_DM10_Up;
   Float_t         tau2_phi_DM10_Up;
   Float_t         tau2_m_DM10_Up;
   Float_t         tau1_pt_DM10_Down;
   Float_t         tau1_eta_DM10_Down;
   Float_t         tau1_phi_DM10_Down;
   Float_t         tau1_m_DM10_Down;
   Float_t         tau2_pt_DM10_Down;
   Float_t         tau2_eta_DM10_Down;
   Float_t         tau2_phi_DM10_Down;
   Float_t         tau2_m_DM10_Down;
   Float_t         tau1_pt_UncMet_Up;
   Float_t         tau1_eta_UncMet_Up;
   Float_t         tau1_phi_UncMet_Up;
   Float_t         tau1_m_UncMet_Up;
   Float_t         tau2_pt_UncMet_Up;
   Float_t         tau2_eta_UncMet_Up;
   Float_t         tau2_phi_UncMet_Up;
   Float_t         tau2_m_UncMet_Up;
   Float_t         tau1_pt_UncMet_Down;
   Float_t         tau1_eta_UncMet_Down;
   Float_t         tau1_phi_UncMet_Down;
   Float_t         tau1_m_UncMet_Down;
   Float_t         tau2_pt_UncMet_Down;
   Float_t         tau2_eta_UncMet_Down;
   Float_t         tau2_phi_UncMet_Down;
   Float_t         tau2_m_UncMet_Down;
   Float_t         tau1_pt_ClusteredMet_Up;
   Float_t         tau1_eta_ClusteredMet_Up;
   Float_t         tau1_phi_ClusteredMet_Up;
   Float_t         tau1_m_ClusteredMet_Up;
   Float_t         tau2_pt_ClusteredMet_Up;
   Float_t         tau2_eta_ClusteredMet_Up;
   Float_t         tau2_phi_ClusteredMet_Up;
   Float_t         tau2_m_ClusteredMet_Up;
   Float_t         tau1_pt_ClusteredMet_Down;
   Float_t         tau1_eta_ClusteredMet_Down;
   Float_t         tau1_phi_ClusteredMet_Down;
   Float_t         tau1_m_ClusteredMet_Down;
   Float_t         tau2_pt_ClusteredMet_Down;
   Float_t         tau2_eta_ClusteredMet_Down;
   Float_t         tau2_phi_ClusteredMet_Down;
   Float_t         tau2_m_ClusteredMet_Down;
   Float_t         Dbkg_VBF;
   Float_t         Dbkg_ggH;
   Float_t         Dbkg_WH;
   Float_t         Dbkg_ZH;
   Float_t         ME_sm_VBF;
   Float_t         ME_sm_ggH;
   Float_t         ME_sm_WH;
   Float_t         ME_sm_ZH;
   Float_t         ME_bkg;
   Float_t         ME_bkg1;
   Float_t         ME_bkg2;
   Float_t         Q2V1;
   Float_t         Q2V2;
   Float_t         costheta1;
   Float_t         costheta2;
   Float_t         Phi;
   Float_t         costhetastar;
   Float_t         Phi1;
   Float_t         Dbkg_VBF_ClusteredMet_Up;
   Float_t         Dbkg_ggH_ClusteredMet_Up;
   Float_t         Dbkg_WH_ClusteredMet_Up;
   Float_t         Dbkg_ZH_ClusteredMet_Up;
   Float_t         ME_sm_VBF_ClusteredMet_Up;
   Float_t         ME_sm_ggH_ClusteredMet_Up;
   Float_t         ME_sm_WH_ClusteredMet_Up;
   Float_t         ME_sm_ZH_ClusteredMet_Up;
   Float_t         ME_bkg_ClusteredMet_Up;
   Float_t         ME_bkg1_ClusteredMet_Up;
   Float_t         ME_bkg2_ClusteredMet_Up;
   Float_t         Q2V1_ClusteredMet_Up;
   Float_t         Q2V2_ClusteredMet_Up;
   Float_t         costheta1_ClusteredMet_Up;
   Float_t         costheta2_ClusteredMet_Up;
   Float_t         Phi_ClusteredMet_Up;
   Float_t         costhetastar_ClusteredMet_Up;
   Float_t         Phi1_ClusteredMet_Up;
   Float_t         mjj_ClusteredMet_Up;
   Float_t         Dbkg_VBF_ClusteredMet_Down;
   Float_t         Dbkg_ggH_ClusteredMet_Down;
   Float_t         Dbkg_WH_ClusteredMet_Down;
   Float_t         Dbkg_ZH_ClusteredMet_Down;
   Float_t         ME_sm_VBF_ClusteredMet_Down;
   Float_t         ME_sm_ggH_ClusteredMet_Down;
   Float_t         ME_sm_WH_ClusteredMet_Down;
   Float_t         ME_sm_ZH_ClusteredMet_Down;
   Float_t         ME_bkg_ClusteredMet_Down;
   Float_t         ME_bkg1_ClusteredMet_Down;
   Float_t         ME_bkg2_ClusteredMet_Down;
   Float_t         Q2V1_ClusteredMet_Down;
   Float_t         Q2V2_ClusteredMet_Down;
   Float_t         costheta1_ClusteredMet_Down;
   Float_t         costheta2_ClusteredMet_Down;
   Float_t         Phi_ClusteredMet_Down;
   Float_t         costhetastar_ClusteredMet_Down;
   Float_t         Phi1_ClusteredMet_Down;
   Float_t         mjj_ClusteredMet_Down;
   Float_t         Dbkg_VBF_UncMet_Up;
   Float_t         Dbkg_ggH_UncMet_Up;
   Float_t         Dbkg_WH_UncMet_Up;
   Float_t         Dbkg_ZH_UncMet_Up;
   Float_t         ME_sm_VBF_UncMet_Up;
   Float_t         ME_sm_ggH_UncMet_Up;
   Float_t         ME_sm_WH_UncMet_Up;
   Float_t         ME_sm_ZH_UncMet_Up;
   Float_t         ME_bkg_UncMet_Up;
   Float_t         ME_bkg1_UncMet_Up;
   Float_t         ME_bkg2_UncMet_Up;
   Float_t         Q2V1_UncMet_Up;
   Float_t         Q2V2_UncMet_Up;
   Float_t         costheta1_UncMet_Up;
   Float_t         costheta2_UncMet_Up;
   Float_t         Phi_UncMet_Up;
   Float_t         costhetastar_UncMet_Up;
   Float_t         Phi1_UncMet_Up;
   Float_t         mjj_UncMet_Up;
   Float_t         Dbkg_VBF_UncMet_Down;
   Float_t         Dbkg_ggH_UncMet_Down;
   Float_t         Dbkg_WH_UncMet_Down;
   Float_t         Dbkg_ZH_UncMet_Down;
   Float_t         ME_sm_VBF_UncMet_Down;
   Float_t         ME_sm_ggH_UncMet_Down;
   Float_t         ME_sm_WH_UncMet_Down;
   Float_t         ME_sm_ZH_UncMet_Down;
   Float_t         ME_bkg_UncMet_Down;
   Float_t         ME_bkg1_UncMet_Down;
   Float_t         ME_bkg2_UncMet_Down;
   Float_t         Q2V1_UncMet_Down;
   Float_t         Q2V2_UncMet_Down;
   Float_t         costheta1_UncMet_Down;
   Float_t         costheta2_UncMet_Down;
   Float_t         Phi_UncMet_Down;
   Float_t         costhetastar_UncMet_Down;
   Float_t         Phi1_UncMet_Down;
   Float_t         mjj_UncMet_Down;
   Float_t         Dbkg_VBF_JESUp;
   Float_t         Dbkg_ggH_JESUp;
   Float_t         Dbkg_WH_JESUp;
   Float_t         Dbkg_ZH_JESUp;
   Float_t         ME_sm_VBF_JESUp;
   Float_t         ME_sm_ggH_JESUp;
   Float_t         ME_sm_WH_JESUp;
   Float_t         ME_sm_ZH_JESUp;
   Float_t         ME_bkg_JESUp;
   Float_t         ME_bkg1_JESUp;
   Float_t         ME_bkg2_JESUp;
   Float_t         Q2V1_JESUp;
   Float_t         Q2V2_JESUp;
   Float_t         costheta1_JESUp;
   Float_t         costheta2_JESUp;
   Float_t         Phi_JESUp;
   Float_t         costhetastar_JESUp;
   Float_t         Phi1_JESUp;
   Float_t         Dbkg_VBF_JESDown;
   Float_t         Dbkg_ggH_JESDown;
   Float_t         Dbkg_WH_JESDown;
   Float_t         Dbkg_ZH_JESDown;
   Float_t         ME_sm_VBF_JESDown;
   Float_t         ME_sm_ggH_JESDown;
   Float_t         ME_sm_WH_JESDown;
   Float_t         ME_sm_ZH_JESDown;
   Float_t         ME_bkg_JESDown;
   Float_t         ME_bkg1_JESDown;
   Float_t         ME_bkg2_JESDown;
   Float_t         Q2V1_JESDown;
   Float_t         Q2V2_JESDown;
   Float_t         costheta1_JESDown;
   Float_t         costheta2_JESDown;
   Float_t         Phi_JESDown;
   Float_t         costhetastar_JESDown;
   Float_t         Phi1_JESDown;
   Float_t         Dbkg_VBF_DM0_Up;
   Float_t         Dbkg_ggH_DM0_Up;
   Float_t         Dbkg_WH_DM0_Up;
   Float_t         Dbkg_ZH_DM0_Up;
   Float_t         ME_sm_VBF_DM0_Up;
   Float_t         ME_sm_ggH_DM0_Up;
   Float_t         ME_sm_WH_DM0_Up;
   Float_t         ME_sm_ZH_DM0_Up;
   Float_t         ME_bkg_DM0_Up;
   Float_t         ME_bkg1_DM0_Up;
   Float_t         ME_bkg2_DM0_Up;
   Float_t         Q2V1_DM0_Up;
   Float_t         Q2V2_DM0_Up;
   Float_t         costheta1_DM0_Up;
   Float_t         costheta2_DM0_Up;
   Float_t         Phi_DM0_Up;
   Float_t         costhetastar_DM0_Up;
   Float_t         Phi1_DM0_Up;
   Float_t         mjj_DM0_Up;
   Float_t         Dbkg_VBF_DM0_Down;
   Float_t         Dbkg_ggH_DM0_Down;
   Float_t         Dbkg_WH_DM0_Down;
   Float_t         Dbkg_ZH_DM0_Down;
   Float_t         ME_sm_VBF_DM0_Down;
   Float_t         ME_sm_ggH_DM0_Down;
   Float_t         ME_sm_WH_DM0_Down;
   Float_t         ME_sm_ZH_DM0_Down;
   Float_t         ME_bkg_DM0_Down;
   Float_t         ME_bkg1_DM0_Down;
   Float_t         ME_bkg2_DM0_Down;
   Float_t         Q2V1_DM0_Down;
   Float_t         Q2V2_DM0_Down;
   Float_t         costheta1_DM0_Down;
   Float_t         costheta2_DM0_Down;
   Float_t         Phi_DM0_Down;
   Float_t         costhetastar_DM0_Down;
   Float_t         Phi1_DM0_Down;
   Float_t         mjj_DM0_Down;
   Float_t         Dbkg_VBF_DM1_Up;
   Float_t         Dbkg_ggH_DM1_Up;
   Float_t         Dbkg_WH_DM1_Up;
   Float_t         Dbkg_ZH_DM1_Up;
   Float_t         ME_sm_VBF_DM1_Up;
   Float_t         ME_sm_ggH_DM1_Up;
   Float_t         ME_sm_WH_DM1_Up;
   Float_t         ME_sm_ZH_DM1_Up;
   Float_t         ME_bkg_DM1_Up;
   Float_t         ME_bkg1_DM1_Up;
   Float_t         ME_bkg2_DM1_Up;
   Float_t         Q2V1_DM1_Up;
   Float_t         Q2V2_DM1_Up;
   Float_t         costheta1_DM1_Up;
   Float_t         costheta2_DM1_Up;
   Float_t         Phi_DM1_Up;
   Float_t         costhetastar_DM1_Up;
   Float_t         Phi1_DM1_Up;
   Float_t         mjj_DM1_Up;
   Float_t         Dbkg_VBF_DM1_Down;
   Float_t         Dbkg_ggH_DM1_Down;
   Float_t         Dbkg_WH_DM1_Down;
   Float_t         Dbkg_ZH_DM1_Down;
   Float_t         ME_sm_VBF_DM1_Down;
   Float_t         ME_sm_ggH_DM1_Down;
   Float_t         ME_sm_WH_DM1_Down;
   Float_t         ME_sm_ZH_DM1_Down;
   Float_t         ME_bkg_DM1_Down;
   Float_t         ME_bkg1_DM1_Down;
   Float_t         ME_bkg2_DM1_Down;
   Float_t         Q2V1_DM1_Down;
   Float_t         Q2V2_DM1_Down;
   Float_t         costheta1_DM1_Down;
   Float_t         costheta2_DM1_Down;
   Float_t         Phi_DM1_Down;
   Float_t         costhetastar_DM1_Down;
   Float_t         Phi1_DM1_Down;
   Float_t         mjj_DM1_Down;
   Float_t         Dbkg_VBF_DM10_Up;
   Float_t         Dbkg_ggH_DM10_Up;
   Float_t         Dbkg_WH_DM10_Up;
   Float_t         Dbkg_ZH_DM10_Up;
   Float_t         ME_sm_VBF_DM10_Up;
   Float_t         ME_sm_ggH_DM10_Up;
   Float_t         ME_sm_WH_DM10_Up;
   Float_t         ME_sm_ZH_DM10_Up;
   Float_t         ME_bkg_DM10_Up;
   Float_t         ME_bkg1_DM10_Up;
   Float_t         ME_bkg2_DM10_Up;
   Float_t         Q2V1_DM10_Up;
   Float_t         Q2V2_DM10_Up;
   Float_t         costheta1_DM10_Up;
   Float_t         costheta2_DM10_Up;
   Float_t         Phi_DM10_Up;
   Float_t         costhetastar_DM10_Up;
   Float_t         Phi1_DM10_Up;
   Float_t         mjj_DM10_Up;
   Float_t         Dbkg_VBF_DM10_Down;
   Float_t         Dbkg_ggH_DM10_Down;
   Float_t         Dbkg_WH_DM10_Down;
   Float_t         Dbkg_ZH_DM10_Down;
   Float_t         ME_sm_VBF_DM10_Down;
   Float_t         ME_sm_ggH_DM10_Down;
   Float_t         ME_sm_WH_DM10_Down;
   Float_t         ME_sm_ZH_DM10_Down;
   Float_t         ME_bkg_DM10_Down;
   Float_t         ME_bkg1_DM10_Down;
   Float_t         ME_bkg2_DM10_Down;
   Float_t         Q2V1_DM10_Down;
   Float_t         Q2V2_DM10_Down;
   Float_t         costheta1_DM10_Down;
   Float_t         costheta2_DM10_Down;
   Float_t         Phi_DM10_Down;
   Float_t         costhetastar_DM10_Down;
   Float_t         Phi1_DM10_Down;
   Float_t         mjj_DM10_Down;

   // List of branches
   TBranch        *b_run;   //!
   TBranch        *b_lumi;   //!
   TBranch        *b_evt;   //!
   TBranch        *b_tZTTGenDR;   //!
   TBranch        *b_npv;   //!
   TBranch        *b_npu;   //!
   TBranch        *b_genweight;   //!
   TBranch        *b_Rivet_stage1_cat_pTjet30GeV;   //!
   TBranch        *b_Rivet_stage0_cat;   //!
   TBranch        *b_Rivet_higgsPt;   //!
   TBranch        *b_Rivet_nJets30;   //!
   TBranch        *b_pt_1;   //!
   TBranch        *b_px_1;   //!
   TBranch        *b_py_1;   //!
   TBranch        *b_pz_1;   //!
   TBranch        *b_phi_1;   //!
   TBranch        *b_eta_1;   //!
   TBranch        *b_m_1;   //!
   TBranch        *b_e_1;   //!
   TBranch        *b_q_1;   //!
   TBranch        *b_mt_1;   //!
   TBranch        *b_iso_1;   //!
   TBranch        *b_iso_1_v2;   //!
   TBranch        *b_id_m_medium_1;   //!
   TBranch        *b_id_m_medium2016_1;   //!
   TBranch        *b_genpX;   //!
   TBranch        *b_genpY;   //!
   TBranch        *b_genpT;   //!
   TBranch        *b_genM;   //!
   TBranch        *b_vispX;   //!
   TBranch        *b_vispY;   //!
   TBranch        *b_matchIsoMu22eta2p1_1;   //!
   TBranch        *b_matchIsoTkMu22eta2p1_1;   //!
   TBranch        *b_matchIsoMu22_1;   //!
   TBranch        *b_matchIsoTkMu22_1;   //!
   TBranch        *b_matchIsoMu24_1;   //!
   TBranch        *b_matchIsoTkMu24_1;   //!
   TBranch        *b_matchIsoMu19Tau20_1;   //!
   TBranch        *b_matchIsoMu21Tau20_1;   //!
   TBranch        *b_filterIsoMu22eta2p1_1;   //!
   TBranch        *b_filterIsoTkMu22eta2p1_1;   //!
   TBranch        *b_filterIsoMu22_1;   //!
   TBranch        *b_filterIsoTkMu22_1;   //!
   TBranch        *b_filterIsoMu24_1;   //!
   TBranch        *b_filterIsoTkMu24_1;   //!
   TBranch        *b_filterIsoMu19Tau20_1;   //!
   TBranch        *b_filterIsoMu21Tau20_1;   //!
   TBranch        *b_passIsoMu22eta2p1;   //!
   TBranch        *b_passIsoTkMu22eta2p1;   //!
   TBranch        *b_passIsoMu22;   //!
   TBranch        *b_passIsoTkMu22;   //!
   TBranch        *b_passIsoMu24;   //!
   TBranch        *b_passIsoTkMu24;   //!
   TBranch        *b_passIsoMu19Tau20;   //!
   TBranch        *b_passIsoMu21Tau20;   //!
   TBranch        *b_matchIsoMu19Tau20_2;   //!
   TBranch        *b_matchIsoMu21Tau20_2;   //!
   TBranch        *b_filterIsoMu19Tau20_2;   //!
   TBranch        *b_filterIsoMu21Tau20_2;   //!
   TBranch        *b_flag_goodVertices;   //!
   TBranch        *b_flag_globalTightHalo2016;   //!
   TBranch        *b_flag_eeBadSc;   //!
   TBranch        *b_flag_badGlobalMuon;   //!
   TBranch        *b_flag_badCloneMuon;   //!
   TBranch        *b_flag_HBHENoiseIso;   //!
   TBranch        *b_flag_HBHENoise;   //!
   TBranch        *b_flag_EcalDeadCellTriggerPrimitive;   //!
   TBranch        *b_flag_BadPFMuon;   //!
   TBranch        *b_flag_BadChargedCandidate;   //!
   TBranch        *b_pt_2;   //!
   TBranch        *b_phi_2;   //!
   TBranch        *b_eta_2;   //!
   TBranch        *b_px_2;   //!
   TBranch        *b_py_2;   //!
   TBranch        *b_pz_2;   //!
   TBranch        *b_m_2;   //!
   TBranch        *b_e_2;   //!
   TBranch        *b_q_2;   //!
   TBranch        *b_l2_decayMode;   //!
   TBranch        *b_againstElectronVLooseMVA6_2;   //!
   TBranch        *b_againstMuonTight3_2;   //!
   TBranch        *b_byVLooseIsolationMVArun2v1DBoldDMwLT_2;   //!
   TBranch        *b_byLooseIsolationMVArun2v1DBoldDMwLT_2;   //!
   TBranch        *b_byMediumIsolationMVArun2v1DBoldDMwLT_2;   //!
   TBranch        *b_byTightIsolationMVArun2v1DBoldDMwLT_2;   //!
   TBranch        *b_byVTightIsolationMVArun2v1DBoldDMwLT_2;   //!
   TBranch        *b_byVVTightIsolationMVArun2v1DBoldDMwLT_2;   //!
   TBranch        *b_iso_2_old;   //!
   TBranch        *b_decayModeFinding_2;   //!
   TBranch        *b_byVLooseIsolationMVArun2v1DBnewDMwLT_2;   //!
   TBranch        *b_byLooseIsolationMVArun2v1DBnewDMwLT_2;   //!
   TBranch        *b_byMediumIsolationMVArun2v1DBnewDMwLT_2;   //!
   TBranch        *b_byTightIsolationMVArun2v1DBnewDMwLT_2;   //!
   TBranch        *b_byVTightIsolationMVArun2v1DBnewDMwLT_2;   //!
   TBranch        *b_byVVTightIsolationMVArun2v1DBnewDMwLT_2;   //!
   TBranch        *b_iso_2_new;   //!
   TBranch        *b_decayModeFindingNewDMs_2;   //!
   TBranch        *b_numGenJets;   //!
   TBranch        *b_jetPt_2;   //!
   TBranch        *b_pt_tt;   //!
   TBranch        *b_m_vis;   //!
   TBranch        *b_pt_top1;   //!
   TBranch        *b_pt_top2;   //!
   TBranch        *b_met_JESDown;   //!
   TBranch        *b_met_UESDown;   //!
   TBranch        *b_met_JESUp;   //!
   TBranch        *b_met_UESUp;   //!
   TBranch        *b_metphi_JESDown;   //!
   TBranch        *b_metphi_TESDown;   //!
   TBranch        *b_metphi_UESDown;   //!
   TBranch        *b_metphi_JESUp;   //!
   TBranch        *b_metphi_UESUp;   //!
   TBranch        *b_met;   //!
   TBranch        *b_metSig;   //!
   TBranch        *b_metcov00;   //!
   TBranch        *b_metcov10;   //!
   TBranch        *b_metcov11;   //!
   TBranch        *b_metcov01;   //!
   TBranch        *b_metcov00_v2;   //!
   TBranch        *b_metcov10_v2;   //!
   TBranch        *b_metcov11_v2;   //!
   TBranch        *b_metcov01_v2;   //!
   TBranch        *b_metphi;   //!
   TBranch        *b_met_px;   //!
   TBranch        *b_met_py;   //!
   TBranch        *b_mjj;   //!
   TBranch        *b_jdeta;   //!
   TBranch        *b_gen_match_1;   //!
   TBranch        *b_gen_match_2;   //!
   TBranch        *b_njets_JetAbsoluteFlavMapDown;   //!
   TBranch        *b_mjj_JetAbsoluteFlavMapDown;   //!
   TBranch        *b_njets_JetAbsoluteMPFBiasDown;   //!
   TBranch        *b_mjj_JetAbsoluteMPFBiasDown;   //!
   TBranch        *b_njets_JetAbsoluteScaleDown;   //!
   TBranch        *b_mjj_JetAbsoluteScaleDown;   //!
   TBranch        *b_njets_JetAbsoluteStatDown;   //!
   TBranch        *b_mjj_JetAbsoluteStatDown;   //!
   TBranch        *b_njets_JetEnDown;   //!
   TBranch        *b_mjj_JetEnDown;   //!
   TBranch        *b_njets_JetFlavorQCDDown;   //!
   TBranch        *b_mjj_JetFlavorQCDDown;   //!
   TBranch        *b_njets_JetFragmentationDown;   //!
   TBranch        *b_mjj_JetFragmentationDown;   //!
   TBranch        *b_njets_JetPileUpDataMCDown;   //!
   TBranch        *b_mjj_JetPileUpDataMCDown;   //!
   TBranch        *b_njets_JetPileUpPtBBDown;   //!
   TBranch        *b_mjj_JetPileUpPtBBDown;   //!
   TBranch        *b_njets_JetPileUpPtEC1Down;   //!
   TBranch        *b_mjj_JetPileUpPtEC1Down;   //!
   TBranch        *b_njets_JetPileUpPtEC2Down;   //!
   TBranch        *b_mjj_JetPileUpPtEC2Down;   //!
   TBranch        *b_njets_JetPileUpPtHFDown;   //!
   TBranch        *b_mjj_JetPileUpPtHFDown;   //!
   TBranch        *b_njets_JetPileUpPtRefDown;   //!
   TBranch        *b_mjj_JetPileUpPtRefDown;   //!
   TBranch        *b_njets_JetRelativeBalDown;   //!
   TBranch        *b_mjj_JetRelativeBalDown;   //!
   TBranch        *b_njets_JetRelativeFSRDown;   //!
   TBranch        *b_mjj_JetRelativeFSRDown;   //!
   TBranch        *b_njets_JetRelativeJEREC1Down;   //!
   TBranch        *b_mjj_JetRelativeJEREC1Down;   //!
   TBranch        *b_njets_JetRelativeJEREC2Down;   //!
   TBranch        *b_mjj_JetRelativeJEREC2Down;   //!
   TBranch        *b_njets_JetRelativeJERHFDown;   //!
   TBranch        *b_mjj_JetRelativeJERHFDown;   //!
   TBranch        *b_njets_JetRelativePtBBDown;   //!
   TBranch        *b_mjj_JetRelativePtBBDown;   //!
   TBranch        *b_njets_JetRelativePtEC1Down;   //!
   TBranch        *b_mjj_JetRelativePtEC1Down;   //!
   TBranch        *b_njets_JetRelativePtEC2Down;   //!
   TBranch        *b_mjj_JetRelativePtEC2Down;   //!
   TBranch        *b_njets_JetRelativePtHFDown;   //!
   TBranch        *b_mjj_JetRelativePtHFDown;   //!
   TBranch        *b_njets_JetRelativeStatECDown;   //!
   TBranch        *b_mjj_JetRelativeStatECDown;   //!
   TBranch        *b_njets_JetRelativeStatFSRDown;   //!
   TBranch        *b_mjj_JetRelativeStatFSRDown;   //!
   TBranch        *b_njets_JetRelativeStatHFDown;   //!
   TBranch        *b_mjj_JetRelativeStatHFDown;   //!
   TBranch        *b_njets_JetSinglePionECALDown;   //!
   TBranch        *b_mjj_JetSinglePionECALDown;   //!
   TBranch        *b_njets_JetSinglePionHCALDown;   //!
   TBranch        *b_mjj_JetSinglePionHCALDown;   //!
   TBranch        *b_njets_JetTimePtEtaDown;   //!
   TBranch        *b_mjj_JetTimePtEtaDown;   //!
   TBranch        *b_njets_JetAbsoluteFlavMapUp;   //!
   TBranch        *b_mjj_JetAbsoluteFlavMapUp;   //!
   TBranch        *b_njets_JetAbsoluteMPFBiasUp;   //!
   TBranch        *b_mjj_JetAbsoluteMPFBiasUp;   //!
   TBranch        *b_njets_JetAbsoluteScaleUp;   //!
   TBranch        *b_mjj_JetAbsoluteScaleUp;   //!
   TBranch        *b_njets_JetAbsoluteStatUp;   //!
   TBranch        *b_mjj_JetAbsoluteStatUp;   //!
   TBranch        *b_njets_JetEnUp;   //!
   TBranch        *b_mjj_JetEnUp;   //!
   TBranch        *b_njets_JetFlavorQCDUp;   //!
   TBranch        *b_mjj_JetFlavorQCDUp;   //!
   TBranch        *b_njets_JetFragmentationUp;   //!
   TBranch        *b_mjj_JetFragmentationUp;   //!
   TBranch        *b_njets_JetPileUpDataMCUp;   //!
   TBranch        *b_mjj_JetPileUpDataMCUp;   //!
   TBranch        *b_njets_JetPileUpPtBBUp;   //!
   TBranch        *b_mjj_JetPileUpPtBBUp;   //!
   TBranch        *b_njets_JetPileUpPtEC1Up;   //!
   TBranch        *b_mjj_JetPileUpPtEC1Up;   //!
   TBranch        *b_njets_JetPileUpPtEC2Up;   //!
   TBranch        *b_mjj_JetPileUpPtEC2Up;   //!
   TBranch        *b_njets_JetPileUpPtHFUp;   //!
   TBranch        *b_mjj_JetPileUpPtHFUp;   //!
   TBranch        *b_njets_JetPileUpPtRefUp;   //!
   TBranch        *b_mjj_JetPileUpPtRefUp;   //!
   TBranch        *b_njets_JetRelativeBalUp;   //!
   TBranch        *b_mjj_JetRelativeBalUp;   //!
   TBranch        *b_njets_JetRelativeFSRUp;   //!
   TBranch        *b_mjj_JetRelativeFSRUp;   //!
   TBranch        *b_njets_JetRelativeJEREC1Up;   //!
   TBranch        *b_mjj_JetRelativeJEREC1Up;   //!
   TBranch        *b_njets_JetRelativeJEREC2Up;   //!
   TBranch        *b_mjj_JetRelativeJEREC2Up;   //!
   TBranch        *b_njets_JetRelativeJERHFUp;   //!
   TBranch        *b_mjj_JetRelativeJERHFUp;   //!
   TBranch        *b_njets_JetRelativePtBBUp;   //!
   TBranch        *b_mjj_JetRelativePtBBUp;   //!
   TBranch        *b_njets_JetRelativePtEC1Up;   //!
   TBranch        *b_mjj_JetRelativePtEC1Up;   //!
   TBranch        *b_njets_JetRelativePtEC2Up;   //!
   TBranch        *b_mjj_JetRelativePtEC2Up;   //!
   TBranch        *b_njets_JetRelativePtHFUp;   //!
   TBranch        *b_mjj_JetRelativePtHFUp;   //!
   TBranch        *b_njets_JetRelativeStatECUp;   //!
   TBranch        *b_mjj_JetRelativeStatECUp;   //!
   TBranch        *b_njets_JetRelativeStatFSRUp;   //!
   TBranch        *b_mjj_JetRelativeStatFSRUp;   //!
   TBranch        *b_njets_JetRelativeStatHFUp;   //!
   TBranch        *b_mjj_JetRelativeStatHFUp;   //!
   TBranch        *b_njets_JetSinglePionECALUp;   //!
   TBranch        *b_mjj_JetSinglePionECALUp;   //!
   TBranch        *b_njets_JetSinglePionHCALUp;   //!
   TBranch        *b_mjj_JetSinglePionHCALUp;   //!
   TBranch        *b_njets_JetTimePtEtaUp;   //!
   TBranch        *b_mjj_JetTimePtEtaUp;   //!
   TBranch        *b_nbtag;   //!
   TBranch        *b_njets;   //!
   TBranch        *b_njetspt20;   //!
   TBranch        *b_njets_JESDown;   //!
   TBranch        *b_njets_JESUp;   //!
   TBranch        *b_jpt_1;   //!
   TBranch        *b_jeta_1;   //!
   TBranch        *b_jphi_1;   //!
   TBranch        *b_jcsv_1;   //!
   TBranch        *b_jpt_1_JESUp;   //!
   TBranch        *b_jpt_1_JESDown;   //!
   TBranch        *b_jpt_2;   //!
   TBranch        *b_jeta_2;   //!
   TBranch        *b_jphi_2;   //!
   TBranch        *b_jcsv_2;   //!
   TBranch        *b_jpt_2_JESUp;   //!
   TBranch        *b_jpt_2_JESDown;   //!
   TBranch        *b_bpt_1;   //!
   TBranch        *b_beta_1;   //!
   TBranch        *b_bphi_1;   //!
   TBranch        *b_bcsv_1;   //!
   TBranch        *b_bflavor_1;   //!
   TBranch        *b_bpt_2;   //!
   TBranch        *b_beta_2;   //!
   TBranch        *b_bphi_2;   //!
   TBranch        *b_bcsv_2;   //!
   TBranch        *b_bflavor_2;   //!
   TBranch        *b_extraelec_veto;   //!
   TBranch        *b_extramuon_veto;   //!
   TBranch        *b_dilepton_veto;   //!
   TBranch        *b_m_sv;   //!
   TBranch        *b_pt_sv;   //!
   TBranch        *b_eta_sv;   //!
   TBranch        *b_phi_sv;   //!
   TBranch        *b_met_sv;   //!
   TBranch        *b_mt_sv;   //!
   TBranch        *b_metcorr_ex;   //!
   TBranch        *b_metcorr_ey;   //!
   TBranch        *b_metcor;   //!
   TBranch        *b_metcorphi;   //!
   TBranch        *b_m_sv_Up;   //!
   TBranch        *b_pt_sv_Up;   //!
   TBranch        *b_eta_sv_Up;   //!
   TBranch        *b_phi_sv_Up;   //!
   TBranch        *b_met_sv_Up;   //!
   TBranch        *b_mt_sv_Up;   //!
   TBranch        *b_m_sv_Down;   //!
   TBranch        *b_pt_sv_Down;   //!
   TBranch        *b_eta_sv_Down;   //!
   TBranch        *b_phi_sv_Down;   //!
   TBranch        *b_met_sv_Down;   //!
   TBranch        *b_mt_sv_Down;   //!
   TBranch        *b_m_sv_DM0_Up;   //!
   TBranch        *b_pt_sv_DM0_Up;   //!
   TBranch        *b_eta_sv_DM0_Up;   //!
   TBranch        *b_phi_sv_DM0_Up;   //!
   TBranch        *b_met_sv_DM0_Up;   //!
   TBranch        *b_mt_sv_DM0_Up;   //!
   TBranch        *b_m_sv_DM0_Down;   //!
   TBranch        *b_pt_sv_DM0_Down;   //!
   TBranch        *b_eta_sv_DM0_Down;   //!
   TBranch        *b_phi_sv_DM0_Down;   //!
   TBranch        *b_met_sv_DM0_Down;   //!
   TBranch        *b_mt_sv_DM0_Down;   //!
   TBranch        *b_m_sv_DM1_Up;   //!
   TBranch        *b_pt_sv_DM1_Up;   //!
   TBranch        *b_eta_sv_DM1_Up;   //!
   TBranch        *b_phi_sv_DM1_Up;   //!
   TBranch        *b_met_sv_DM1_Up;   //!
   TBranch        *b_mt_sv_DM1_Up;   //!
   TBranch        *b_m_sv_DM1_Down;   //!
   TBranch        *b_pt_sv_DM1_Down;   //!
   TBranch        *b_eta_sv_DM1_Down;   //!
   TBranch        *b_phi_sv_DM1_Down;   //!
   TBranch        *b_met_sv_DM1_Down;   //!
   TBranch        *b_mt_sv_DM1_Down;   //!
   TBranch        *b_m_sv_DM10_Up;   //!
   TBranch        *b_pt_sv_DM10_Up;   //!
   TBranch        *b_eta_sv_DM10_Up;   //!
   TBranch        *b_phi_sv_DM10_Up;   //!
   TBranch        *b_met_sv_DM10_Up;   //!
   TBranch        *b_mt_sv_DM10_Up;   //!
   TBranch        *b_m_sv_DM10_Down;   //!
   TBranch        *b_pt_sv_DM10_Down;   //!
   TBranch        *b_eta_sv_DM10_Down;   //!
   TBranch        *b_phi_sv_DM10_Down;   //!
   TBranch        *b_met_sv_DM10_Down;   //!
   TBranch        *b_mt_sv_DM10_Down;   //!
   TBranch        *b_m_sv_UncMet_Up;   //!
   TBranch        *b_pt_sv_UncMet_Up;   //!
   TBranch        *b_eta_sv_UncMet_Up;   //!
   TBranch        *b_phi_sv_UncMet_Up;   //!
   TBranch        *b_met_sv_UncMet_Up;   //!
   TBranch        *b_mt_sv_UncMet_Up;   //!
   TBranch        *b_m_sv_UncMet_Down;   //!
   TBranch        *b_pt_sv_UncMet_Down;   //!
   TBranch        *b_eta_sv_UncMet_Down;   //!
   TBranch        *b_phi_sv_UncMet_Down;   //!
   TBranch        *b_met_sv_UncMet_Down;   //!
   TBranch        *b_mt_sv_UncMet_Down;   //!
   TBranch        *b_m_sv_ClusteredMet_Up;   //!
   TBranch        *b_pt_sv_ClusteredMet_Up;   //!
   TBranch        *b_eta_sv_ClusteredMet_Up;   //!
   TBranch        *b_phi_sv_ClusteredMet_Up;   //!
   TBranch        *b_met_sv_ClusteredMet_Up;   //!
   TBranch        *b_mt_sv_ClusteredMet_Up;   //!
   TBranch        *b_m_sv_ClusteredMet_Down;   //!
   TBranch        *b_pt_sv_ClusteredMet_Down;   //!
   TBranch        *b_eta_sv_ClusteredMet_Down;   //!
   TBranch        *b_phi_sv_ClusteredMet_Down;   //!
   TBranch        *b_met_sv_ClusteredMet_Down;   //!
   TBranch        *b_mt_sv_ClusteredMet_Down;   //!
   TBranch        *b_metcorClusteredDown;   //!
   TBranch        *b_metcorphiClusteredDown;   //!
   TBranch        *b_metcorClusteredUp;   //!
   TBranch        *b_metcorphiClusteredUp;   //!
   TBranch        *b_metcorUncDown;   //!
   TBranch        *b_metcorphiUncDown;   //!
   TBranch        *b_metcorUncUp;   //!
   TBranch        *b_metcorphiUncUp;   //!
   TBranch        *b_tau1_pt;   //!
   TBranch        *b_tau1_eta;   //!
   TBranch        *b_tau1_phi;   //!
   TBranch        *b_tau1_m;   //!
   TBranch        *b_tau2_pt;   //!
   TBranch        *b_tau2_eta;   //!
   TBranch        *b_tau2_phi;   //!
   TBranch        *b_tau2_m;   //!
   TBranch        *b_tau1_pt_Up;   //!
   TBranch        *b_tau1_eta_Up;   //!
   TBranch        *b_tau1_phi_Up;   //!
   TBranch        *b_tau1_m_Up;   //!
   TBranch        *b_tau2_pt_Up;   //!
   TBranch        *b_tau2_eta_Up;   //!
   TBranch        *b_tau2_phi_Up;   //!
   TBranch        *b_tau2_m_Up;   //!
   TBranch        *b_tau1_pt_Down;   //!
   TBranch        *b_tau1_eta_Down;   //!
   TBranch        *b_tau1_phi_Down;   //!
   TBranch        *b_tau1_m_Down;   //!
   TBranch        *b_tau2_pt_Down;   //!
   TBranch        *b_tau2_eta_Down;   //!
   TBranch        *b_tau2_phi_Down;   //!
   TBranch        *b_tau2_m_Down;   //!
   TBranch        *b_tau1_pt_DM0_Up;   //!
   TBranch        *b_tau1_eta_DM0_Up;   //!
   TBranch        *b_tau1_phi_DM0_Up;   //!
   TBranch        *b_tau1_m_DM0_Up;   //!
   TBranch        *b_tau2_pt_DM0_Up;   //!
   TBranch        *b_tau2_eta_DM0_Up;   //!
   TBranch        *b_tau2_phi_DM0_Up;   //!
   TBranch        *b_tau2_m_DM0_Up;   //!
   TBranch        *b_tau1_pt_DM0_Down;   //!
   TBranch        *b_tau1_eta_DM0_Down;   //!
   TBranch        *b_tau1_phi_DM0_Down;   //!
   TBranch        *b_tau1_m_DM0_Down;   //!
   TBranch        *b_tau2_pt_DM0_Down;   //!
   TBranch        *b_tau2_eta_DM0_Down;   //!
   TBranch        *b_tau2_phi_DM0_Down;   //!
   TBranch        *b_tau2_m_DM0_Down;   //!
   TBranch        *b_tau1_pt_DM1_Up;   //!
   TBranch        *b_tau1_eta_DM1_Up;   //!
   TBranch        *b_tau1_phi_DM1_Up;   //!
   TBranch        *b_tau1_m_DM1_Up;   //!
   TBranch        *b_tau2_pt_DM1_Up;   //!
   TBranch        *b_tau2_eta_DM1_Up;   //!
   TBranch        *b_tau2_phi_DM1_Up;   //!
   TBranch        *b_tau2_m_DM1_Up;   //!
   TBranch        *b_tau1_pt_DM1_Down;   //!
   TBranch        *b_tau1_eta_DM1_Down;   //!
   TBranch        *b_tau1_phi_DM1_Down;   //!
   TBranch        *b_tau1_m_DM1_Down;   //!
   TBranch        *b_tau2_pt_DM1_Down;   //!
   TBranch        *b_tau2_eta_DM1_Down;   //!
   TBranch        *b_tau2_phi_DM1_Down;   //!
   TBranch        *b_tau2_m_DM1_Down;   //!
   TBranch        *b_tau1_pt_DM10_Up;   //!
   TBranch        *b_tau1_eta_DM10_Up;   //!
   TBranch        *b_tau1_phi_DM10_Up;   //!
   TBranch        *b_tau1_m_DM10_Up;   //!
   TBranch        *b_tau2_pt_DM10_Up;   //!
   TBranch        *b_tau2_eta_DM10_Up;   //!
   TBranch        *b_tau2_phi_DM10_Up;   //!
   TBranch        *b_tau2_m_DM10_Up;   //!
   TBranch        *b_tau1_pt_DM10_Down;   //!
   TBranch        *b_tau1_eta_DM10_Down;   //!
   TBranch        *b_tau1_phi_DM10_Down;   //!
   TBranch        *b_tau1_m_DM10_Down;   //!
   TBranch        *b_tau2_pt_DM10_Down;   //!
   TBranch        *b_tau2_eta_DM10_Down;   //!
   TBranch        *b_tau2_phi_DM10_Down;   //!
   TBranch        *b_tau2_m_DM10_Down;   //!
   TBranch        *b_tau1_pt_UncMet_Up;   //!
   TBranch        *b_tau1_eta_UncMet_Up;   //!
   TBranch        *b_tau1_phi_UncMet_Up;   //!
   TBranch        *b_tau1_m_UncMet_Up;   //!
   TBranch        *b_tau2_pt_UncMet_Up;   //!
   TBranch        *b_tau2_eta_UncMet_Up;   //!
   TBranch        *b_tau2_phi_UncMet_Up;   //!
   TBranch        *b_tau2_m_UncMet_Up;   //!
   TBranch        *b_tau1_pt_UncMet_Down;   //!
   TBranch        *b_tau1_eta_UncMet_Down;   //!
   TBranch        *b_tau1_phi_UncMet_Down;   //!
   TBranch        *b_tau1_m_UncMet_Down;   //!
   TBranch        *b_tau2_pt_UncMet_Down;   //!
   TBranch        *b_tau2_eta_UncMet_Down;   //!
   TBranch        *b_tau2_phi_UncMet_Down;   //!
   TBranch        *b_tau2_m_UncMet_Down;   //!
   TBranch        *b_tau1_pt_ClusteredMet_Up;   //!
   TBranch        *b_tau1_eta_ClusteredMet_Up;   //!
   TBranch        *b_tau1_phi_ClusteredMet_Up;   //!
   TBranch        *b_tau1_m_ClusteredMet_Up;   //!
   TBranch        *b_tau2_pt_ClusteredMet_Up;   //!
   TBranch        *b_tau2_eta_ClusteredMet_Up;   //!
   TBranch        *b_tau2_phi_ClusteredMet_Up;   //!
   TBranch        *b_tau2_m_ClusteredMet_Up;   //!
   TBranch        *b_tau1_pt_ClusteredMet_Down;   //!
   TBranch        *b_tau1_eta_ClusteredMet_Down;   //!
   TBranch        *b_tau1_phi_ClusteredMet_Down;   //!
   TBranch        *b_tau1_m_ClusteredMet_Down;   //!
   TBranch        *b_tau2_pt_ClusteredMet_Down;   //!
   TBranch        *b_tau2_eta_ClusteredMet_Down;   //!
   TBranch        *b_tau2_phi_ClusteredMet_Down;   //!
   TBranch        *b_tau2_m_ClusteredMet_Down;   //!
   TBranch        *b_Dbkg_VBF;   //!
   TBranch        *b_Dbkg_ggH;   //!
   TBranch        *b_Dbkg_WH;   //!
   TBranch        *b_Dbkg_ZH;   //!
   TBranch        *b_ME_sm_VBF;   //!
   TBranch        *b_ME_sm_ggH;   //!
   TBranch        *b_ME_sm_WH;   //!
   TBranch        *b_ME_sm_ZH;   //!
   TBranch        *b_ME_bkg;   //!
   TBranch        *b_ME_bkg1;   //!
   TBranch        *b_ME_bkg2;   //!
   TBranch        *b_Q2V1;   //!
   TBranch        *b_Q2V2;   //!
   TBranch        *b_costheta1;   //!
   TBranch        *b_costheta2;   //!
   TBranch        *b_Phi;   //!
   TBranch        *b_costhetastar;   //!
   TBranch        *b_Phi1;   //!
   TBranch        *b_Dbkg_VBF_ClusteredMet_Up;   //!
   TBranch        *b_Dbkg_ggH_ClusteredMet_Up;   //!
   TBranch        *b_Dbkg_WH_ClusteredMet_Up;   //!
   TBranch        *b_Dbkg_ZH_ClusteredMet_Up;   //!
   TBranch        *b_ME_sm_VBF_ClusteredMet_Up;   //!
   TBranch        *b_ME_sm_ggH_ClusteredMet_Up;   //!
   TBranch        *b_ME_sm_WH_ClusteredMet_Up;   //!
   TBranch        *b_ME_sm_ZH_ClusteredMet_Up;   //!
   TBranch        *b_ME_bkg_ClusteredMet_Up;   //!
   TBranch        *b_ME_bkg1_ClusteredMet_Up;   //!
   TBranch        *b_ME_bkg2_ClusteredMet_Up;   //!
   TBranch        *b_Q2V1_ClusteredMet_Up;   //!
   TBranch        *b_Q2V2_ClusteredMet_Up;   //!
   TBranch        *b_costheta1_ClusteredMet_Up;   //!
   TBranch        *b_costheta2_ClusteredMet_Up;   //!
   TBranch        *b_Phi_ClusteredMet_Up;   //!
   TBranch        *b_costhetastar_ClusteredMet_Up;   //!
   TBranch        *b_Phi1_ClusteredMet_Up;   //!
   TBranch        *b_mjj_ClusteredMet_Up;   //!
   TBranch        *b_Dbkg_VBF_ClusteredMet_Down;   //!
   TBranch        *b_Dbkg_ggH_ClusteredMet_Down;   //!
   TBranch        *b_Dbkg_WH_ClusteredMet_Down;   //!
   TBranch        *b_Dbkg_ZH_ClusteredMet_Down;   //!
   TBranch        *b_ME_sm_VBF_ClusteredMet_Down;   //!
   TBranch        *b_ME_sm_ggH_ClusteredMet_Down;   //!
   TBranch        *b_ME_sm_WH_ClusteredMet_Down;   //!
   TBranch        *b_ME_sm_ZH_ClusteredMet_Down;   //!
   TBranch        *b_ME_bkg_ClusteredMet_Down;   //!
   TBranch        *b_ME_bkg1_ClusteredMet_Down;   //!
   TBranch        *b_ME_bkg2_ClusteredMet_Down;   //!
   TBranch        *b_Q2V1_ClusteredMet_Down;   //!
   TBranch        *b_Q2V2_ClusteredMet_Down;   //!
   TBranch        *b_costheta1_ClusteredMet_Down;   //!
   TBranch        *b_costheta2_ClusteredMet_Down;   //!
   TBranch        *b_Phi_ClusteredMet_Down;   //!
   TBranch        *b_costhetastar_ClusteredMet_Down;   //!
   TBranch        *b_Phi1_ClusteredMet_Down;   //!
   TBranch        *b_mjj_ClusteredMet_Down;   //!
   TBranch        *b_Dbkg_VBF_UncMet_Up;   //!
   TBranch        *b_Dbkg_ggH_UncMet_Up;   //!
   TBranch        *b_Dbkg_WH_UncMet_Up;   //!
   TBranch        *b_Dbkg_ZH_UncMet_Up;   //!
   TBranch        *b_ME_sm_VBF_UncMet_Up;   //!
   TBranch        *b_ME_sm_ggH_UncMet_Up;   //!
   TBranch        *b_ME_sm_WH_UncMet_Up;   //!
   TBranch        *b_ME_sm_ZH_UncMet_Up;   //!
   TBranch        *b_ME_bkg_UncMet_Up;   //!
   TBranch        *b_ME_bkg1_UncMet_Up;   //!
   TBranch        *b_ME_bkg2_UncMet_Up;   //!
   TBranch        *b_Q2V1_UncMet_Up;   //!
   TBranch        *b_Q2V2_UncMet_Up;   //!
   TBranch        *b_costheta1_UncMet_Up;   //!
   TBranch        *b_costheta2_UncMet_Up;   //!
   TBranch        *b_Phi_UncMet_Up;   //!
   TBranch        *b_costhetastar_UncMet_Up;   //!
   TBranch        *b_Phi1_UncMet_Up;   //!
   TBranch        *b_mjj_UncMet_Up;   //!
   TBranch        *b_Dbkg_VBF_UncMet_Down;   //!
   TBranch        *b_Dbkg_ggH_UncMet_Down;   //!
   TBranch        *b_Dbkg_WH_UncMet_Down;   //!
   TBranch        *b_Dbkg_ZH_UncMet_Down;   //!
   TBranch        *b_ME_sm_VBF_UncMet_Down;   //!
   TBranch        *b_ME_sm_ggH_UncMet_Down;   //!
   TBranch        *b_ME_sm_WH_UncMet_Down;   //!
   TBranch        *b_ME_sm_ZH_UncMet_Down;   //!
   TBranch        *b_ME_bkg_UncMet_Down;   //!
   TBranch        *b_ME_bkg1_UncMet_Down;   //!
   TBranch        *b_ME_bkg2_UncMet_Down;   //!
   TBranch        *b_Q2V1_UncMet_Down;   //!
   TBranch        *b_Q2V2_UncMet_Down;   //!
   TBranch        *b_costheta1_UncMet_Down;   //!
   TBranch        *b_costheta2_UncMet_Down;   //!
   TBranch        *b_Phi_UncMet_Down;   //!
   TBranch        *b_costhetastar_UncMet_Down;   //!
   TBranch        *b_Phi1_UncMet_Down;   //!
   TBranch        *b_mjj_UncMet_Down;   //!
   TBranch        *b_Dbkg_VBF_JESUp;   //!
   TBranch        *b_Dbkg_ggH_JESUp;   //!
   TBranch        *b_Dbkg_WH_JESUp;   //!
   TBranch        *b_Dbkg_ZH_JESUp;   //!
   TBranch        *b_ME_sm_VBF_JESUp;   //!
   TBranch        *b_ME_sm_ggH_JESUp;   //!
   TBranch        *b_ME_sm_WH_JESUp;   //!
   TBranch        *b_ME_sm_ZH_JESUp;   //!
   TBranch        *b_ME_bkg_JESUp;   //!
   TBranch        *b_ME_bkg1_JESUp;   //!
   TBranch        *b_ME_bkg2_JESUp;   //!
   TBranch        *b_Q2V1_JESUp;   //!
   TBranch        *b_Q2V2_JESUp;   //!
   TBranch        *b_costheta1_JESUp;   //!
   TBranch        *b_costheta2_JESUp;   //!
   TBranch        *b_Phi_JESUp;   //!
   TBranch        *b_costhetastar_JESUp;   //!
   TBranch        *b_Phi1_JESUp;   //!
   TBranch        *b_mjj_JESUp;   //!
   TBranch        *b_Dbkg_VBF_JESDown;   //!
   TBranch        *b_Dbkg_ggH_JESDown;   //!
   TBranch        *b_Dbkg_WH_JESDown;   //!
   TBranch        *b_Dbkg_ZH_JESDown;   //!
   TBranch        *b_ME_sm_VBF_JESDown;   //!
   TBranch        *b_ME_sm_ggH_JESDown;   //!
   TBranch        *b_ME_sm_WH_JESDown;   //!
   TBranch        *b_ME_sm_ZH_JESDown;   //!
   TBranch        *b_ME_bkg_JESDown;   //!
   TBranch        *b_ME_bkg1_JESDown;   //!
   TBranch        *b_ME_bkg2_JESDown;   //!
   TBranch        *b_Q2V1_JESDown;   //!
   TBranch        *b_Q2V2_JESDown;   //!
   TBranch        *b_costheta1_JESDown;   //!
   TBranch        *b_costheta2_JESDown;   //!
   TBranch        *b_Phi_JESDown;   //!
   TBranch        *b_costhetastar_JESDown;   //!
   TBranch        *b_Phi1_JESDown;   //!
   TBranch        *b_mjj_JESDown;   //!
   TBranch        *b_Dbkg_VBF_DM0_Up;   //!
   TBranch        *b_Dbkg_ggH_DM0_Up;   //!
   TBranch        *b_Dbkg_WH_DM0_Up;   //!
   TBranch        *b_Dbkg_ZH_DM0_Up;   //!
   TBranch        *b_ME_sm_VBF_DM0_Up;   //!
   TBranch        *b_ME_sm_ggH_DM0_Up;   //!
   TBranch        *b_ME_sm_WH_DM0_Up;   //!
   TBranch        *b_ME_sm_ZH_DM0_Up;   //!
   TBranch        *b_ME_bkg_DM0_Up;   //!
   TBranch        *b_ME_bkg1_DM0_Up;   //!
   TBranch        *b_ME_bkg2_DM0_Up;   //!
   TBranch        *b_Q2V1_DM0_Up;   //!
   TBranch        *b_Q2V2_DM0_Up;   //!
   TBranch        *b_costheta1_DM0_Up;   //!
   TBranch        *b_costheta2_DM0_Up;   //!
   TBranch        *b_Phi_DM0_Up;   //!
   TBranch        *b_costhetastar_DM0_Up;   //!
   TBranch        *b_Phi1_DM0_Up;   //!
   TBranch        *b_mjj_DM0_Up;   //!
   TBranch        *b_Dbkg_VBF_DM0_Down;   //!
   TBranch        *b_Dbkg_ggH_DM0_Down;   //!
   TBranch        *b_Dbkg_WH_DM0_Down;   //!
   TBranch        *b_Dbkg_ZH_DM0_Down;   //!
   TBranch        *b_ME_sm_VBF_DM0_Down;   //!
   TBranch        *b_ME_sm_ggH_DM0_Down;   //!
   TBranch        *b_ME_sm_WH_DM0_Down;   //!
   TBranch        *b_ME_sm_ZH_DM0_Down;   //!
   TBranch        *b_ME_bkg_DM0_Down;   //!
   TBranch        *b_ME_bkg1_DM0_Down;   //!
   TBranch        *b_ME_bkg2_DM0_Down;   //!
   TBranch        *b_Q2V1_DM0_Down;   //!
   TBranch        *b_Q2V2_DM0_Down;   //!
   TBranch        *b_costheta1_DM0_Down;   //!
   TBranch        *b_costheta2_DM0_Down;   //!
   TBranch        *b_Phi_DM0_Down;   //!
   TBranch        *b_costhetastar_DM0_Down;   //!
   TBranch        *b_Phi1_DM0_Down;   //!
   TBranch        *b_mjj_DM0_Down;   //!
   TBranch        *b_Dbkg_VBF_DM1_Up;   //!
   TBranch        *b_Dbkg_ggH_DM1_Up;   //!
   TBranch        *b_Dbkg_WH_DM1_Up;   //!
   TBranch        *b_Dbkg_ZH_DM1_Up;   //!
   TBranch        *b_ME_sm_VBF_DM1_Up;   //!
   TBranch        *b_ME_sm_ggH_DM1_Up;   //!
   TBranch        *b_ME_sm_WH_DM1_Up;   //!
   TBranch        *b_ME_sm_ZH_DM1_Up;   //!
   TBranch        *b_ME_bkg_DM1_Up;   //!
   TBranch        *b_ME_bkg1_DM1_Up;   //!
   TBranch        *b_ME_bkg2_DM1_Up;   //!
   TBranch        *b_Q2V1_DM1_Up;   //!
   TBranch        *b_Q2V2_DM1_Up;   //!
   TBranch        *b_costheta1_DM1_Up;   //!
   TBranch        *b_costheta2_DM1_Up;   //!
   TBranch        *b_Phi_DM1_Up;   //!
   TBranch        *b_costhetastar_DM1_Up;   //!
   TBranch        *b_Phi1_DM1_Up;   //!
   TBranch        *b_mjj_DM1_Up;   //!
   TBranch        *b_Dbkg_VBF_DM1_Down;   //!
   TBranch        *b_Dbkg_ggH_DM1_Down;   //!
   TBranch        *b_Dbkg_WH_DM1_Down;   //!
   TBranch        *b_Dbkg_ZH_DM1_Down;   //!
   TBranch        *b_ME_sm_VBF_DM1_Down;   //!
   TBranch        *b_ME_sm_ggH_DM1_Down;   //!
   TBranch        *b_ME_sm_WH_DM1_Down;   //!
   TBranch        *b_ME_sm_ZH_DM1_Down;   //!
   TBranch        *b_ME_bkg_DM1_Down;   //!
   TBranch        *b_ME_bkg1_DM1_Down;   //!
   TBranch        *b_ME_bkg2_DM1_Down;   //!
   TBranch        *b_Q2V1_DM1_Down;   //!
   TBranch        *b_Q2V2_DM1_Down;   //!
   TBranch        *b_costheta1_DM1_Down;   //!
   TBranch        *b_costheta2_DM1_Down;   //!
   TBranch        *b_Phi_DM1_Down;   //!
   TBranch        *b_costhetastar_DM1_Down;   //!
   TBranch        *b_Phi1_DM1_Down;   //!
   TBranch        *b_mjj_DM1_Down;   //!
   TBranch        *b_Dbkg_VBF_DM10_Up;   //!
   TBranch        *b_Dbkg_ggH_DM10_Up;   //!
   TBranch        *b_Dbkg_WH_DM10_Up;   //!
   TBranch        *b_Dbkg_ZH_DM10_Up;   //!
   TBranch        *b_ME_sm_VBF_DM10_Up;   //!
   TBranch        *b_ME_sm_ggH_DM10_Up;   //!
   TBranch        *b_ME_sm_WH_DM10_Up;   //!
   TBranch        *b_ME_sm_ZH_DM10_Up;   //!
   TBranch        *b_ME_bkg_DM10_Up;   //!
   TBranch        *b_ME_bkg1_DM10_Up;   //!
   TBranch        *b_ME_bkg2_DM10_Up;   //!
   TBranch        *b_Q2V1_DM10_Up;   //!
   TBranch        *b_Q2V2_DM10_Up;   //!
   TBranch        *b_costheta1_DM10_Up;   //!
   TBranch        *b_costheta2_DM10_Up;   //!
   TBranch        *b_Phi_DM10_Up;   //!
   TBranch        *b_costhetastar_DM10_Up;   //!
   TBranch        *b_Phi1_DM10_Up;   //!
   TBranch        *b_mjj_DM10_Up;   //!
   TBranch        *b_Dbkg_VBF_DM10_Down;   //!
   TBranch        *b_Dbkg_ggH_DM10_Down;   //!
   TBranch        *b_Dbkg_WH_DM10_Down;   //!
   TBranch        *b_Dbkg_ZH_DM10_Down;   //!
   TBranch        *b_ME_sm_VBF_DM10_Down;   //!
   TBranch        *b_ME_sm_ggH_DM10_Down;   //!
   TBranch        *b_ME_sm_WH_DM10_Down;   //!
   TBranch        *b_ME_sm_ZH_DM10_Down;   //!
   TBranch        *b_ME_bkg_DM10_Down;   //!
   TBranch        *b_ME_bkg1_DM10_Down;   //!
   TBranch        *b_ME_bkg2_DM10_Down;   //!
   TBranch        *b_Q2V1_DM10_Down;   //!
   TBranch        *b_Q2V2_DM10_Down;   //!
   TBranch        *b_costheta1_DM10_Down;   //!
   TBranch        *b_costheta2_DM10_Down;   //!
   TBranch        *b_Phi_DM10_Down;   //!
   TBranch        *b_costhetastar_DM10_Down;   //!
   TBranch        *b_Phi1_DM10_Down;   //!
   TBranch        *b_mjj_DM10_Down;   //!

   SkimmedTree_mt(TTree *tree=0);
   virtual ~SkimmedTree_mt();
   virtual Int_t    GetEntry(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual Long64_t GetEntries();
   TTree* GetTree();
};

SkimmedTree_mt::SkimmedTree_mt(TTree *tree) : fChain(0) 
{
   Init(tree);
}

SkimmedTree_mt::~SkimmedTree_mt() {}

Int_t SkimmedTree_mt::GetEntry(Long64_t entry)
{
   return fChain->GetEntry(entry);
}

Long64_t SkimmedTree_mt::GetEntries()
{
  return fChain->GetEntries();
}

TTree* SkimmedTree_mt::GetTree()
{
  return fChain;
}

void SkimmedTree_mt::Init(TTree *tree)
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
   fChain->SetMakeClass(1);

   fChain->SetBranchAddress("run", &run, &b_run);
   fChain->SetBranchAddress("lumi", &lumi, &b_lumi);
   fChain->SetBranchAddress("evt", &evt, &b_evt);
   fChain->SetBranchAddress("tZTTGenDR", &tZTTGenDR, &b_tZTTGenDR);
   fChain->SetBranchAddress("npv", &npv, &b_npv);
   fChain->SetBranchAddress("npu", &npu, &b_npu);
   fChain->SetBranchAddress("genweight", &genweight, &b_genweight);
   fChain->SetBranchAddress("Rivet_stage1_cat_pTjet30GeV", &Rivet_stage1_cat_pTjet30GeV, &b_Rivet_stage1_cat_pTjet30GeV);
   fChain->SetBranchAddress("Rivet_stage0_cat", &Rivet_stage0_cat, &b_Rivet_stage0_cat);
   fChain->SetBranchAddress("Rivet_higgsPt", &Rivet_higgsPt, &b_Rivet_higgsPt);
   fChain->SetBranchAddress("Rivet_nJets30", &Rivet_nJets30, &b_Rivet_nJets30);
   fChain->SetBranchAddress("pt_1", &pt_1, &b_pt_1);
   fChain->SetBranchAddress("px_1", &px_1, &b_px_1);
   fChain->SetBranchAddress("py_1", &py_1, &b_py_1);
   fChain->SetBranchAddress("pz_1", &pz_1, &b_pz_1);
   fChain->SetBranchAddress("phi_1", &phi_1, &b_phi_1);
   fChain->SetBranchAddress("eta_1", &eta_1, &b_eta_1);
   fChain->SetBranchAddress("m_1", &m_1, &b_m_1);
   fChain->SetBranchAddress("e_1", &e_1, &b_e_1);
   fChain->SetBranchAddress("q_1", &q_1, &b_q_1);
   fChain->SetBranchAddress("mt_1", &mt_1, &b_mt_1);
   fChain->SetBranchAddress("iso_1", &iso_1, &b_iso_1);
   fChain->SetBranchAddress("iso_1_v2", &iso_1_v2, &b_iso_1_v2);
   fChain->SetBranchAddress("id_m_medium_1", &id_m_medium_1, &b_id_m_medium_1);
   fChain->SetBranchAddress("id_m_medium2016_1", &id_m_medium2016_1, &b_id_m_medium2016_1);
   fChain->SetBranchAddress("genpX", &genpX, &b_genpX);
   fChain->SetBranchAddress("genpY", &genpY, &b_genpY);
   fChain->SetBranchAddress("genpT", &genpT, &b_genpT);
   fChain->SetBranchAddress("genM", &genM, &b_genM);
   fChain->SetBranchAddress("vispX", &vispX, &b_vispX);
   fChain->SetBranchAddress("vispY", &vispY, &b_vispY);
   fChain->SetBranchAddress("matchIsoMu22eta2p1_1", &matchIsoMu22eta2p1_1, &b_matchIsoMu22eta2p1_1);
   fChain->SetBranchAddress("matchIsoTkMu22eta2p1_1", &matchIsoTkMu22eta2p1_1, &b_matchIsoTkMu22eta2p1_1);
   fChain->SetBranchAddress("matchIsoMu22_1", &matchIsoMu22_1, &b_matchIsoMu22_1);
   fChain->SetBranchAddress("matchIsoTkMu22_1", &matchIsoTkMu22_1, &b_matchIsoTkMu22_1);
   fChain->SetBranchAddress("matchIsoMu24_1", &matchIsoMu24_1, &b_matchIsoMu24_1);
   fChain->SetBranchAddress("matchIsoTkMu24_1", &matchIsoTkMu24_1, &b_matchIsoTkMu24_1);
   fChain->SetBranchAddress("matchIsoMu19Tau20_1", &matchIsoMu19Tau20_1, &b_matchIsoMu19Tau20_1);
   fChain->SetBranchAddress("matchIsoMu21Tau20_1", &matchIsoMu21Tau20_1, &b_matchIsoMu21Tau20_1);
   fChain->SetBranchAddress("filterIsoMu22eta2p1_1", &filterIsoMu22eta2p1_1, &b_filterIsoMu22eta2p1_1);
   fChain->SetBranchAddress("filterIsoTkMu22eta2p1_1", &filterIsoTkMu22eta2p1_1, &b_filterIsoTkMu22eta2p1_1);
   fChain->SetBranchAddress("filterIsoMu22_1", &filterIsoMu22_1, &b_filterIsoMu22_1);
   fChain->SetBranchAddress("filterIsoTkMu22_1", &filterIsoTkMu22_1, &b_filterIsoTkMu22_1);
   fChain->SetBranchAddress("filterIsoMu24_1", &filterIsoMu24_1, &b_filterIsoMu24_1);
   fChain->SetBranchAddress("filterIsoTkMu24_1", &filterIsoTkMu24_1, &b_filterIsoTkMu24_1);
   fChain->SetBranchAddress("filterIsoMu19Tau20_1", &filterIsoMu19Tau20_1, &b_filterIsoMu19Tau20_1);
   fChain->SetBranchAddress("filterIsoMu21Tau20_1", &filterIsoMu21Tau20_1, &b_filterIsoMu21Tau20_1);
   fChain->SetBranchAddress("passIsoMu22eta2p1", &passIsoMu22eta2p1, &b_passIsoMu22eta2p1);
   fChain->SetBranchAddress("passIsoTkMu22eta2p1", &passIsoTkMu22eta2p1, &b_passIsoTkMu22eta2p1);
   fChain->SetBranchAddress("passIsoMu22", &passIsoMu22, &b_passIsoMu22);
   fChain->SetBranchAddress("passIsoTkMu22", &passIsoTkMu22, &b_passIsoTkMu22);
   fChain->SetBranchAddress("passIsoMu24", &passIsoMu24, &b_passIsoMu24);
   fChain->SetBranchAddress("passIsoTkMu24", &passIsoTkMu24, &b_passIsoTkMu24);
   fChain->SetBranchAddress("passIsoMu19Tau20", &passIsoMu19Tau20, &b_passIsoMu19Tau20);
   fChain->SetBranchAddress("passIsoMu21Tau20", &passIsoMu21Tau20, &b_passIsoMu21Tau20);
   fChain->SetBranchAddress("matchIsoMu19Tau20_2", &matchIsoMu19Tau20_2, &b_matchIsoMu19Tau20_2);
   fChain->SetBranchAddress("matchIsoMu21Tau20_2", &matchIsoMu21Tau20_2, &b_matchIsoMu21Tau20_2);
   fChain->SetBranchAddress("filterIsoMu19Tau20_2", &filterIsoMu19Tau20_2, &b_filterIsoMu19Tau20_2);
   fChain->SetBranchAddress("filterIsoMu21Tau20_2", &filterIsoMu21Tau20_2, &b_filterIsoMu21Tau20_2);
   fChain->SetBranchAddress("flag_goodVertices", &flag_goodVertices, &b_flag_goodVertices);
   fChain->SetBranchAddress("flag_globalTightHalo2016", &flag_globalTightHalo2016, &b_flag_globalTightHalo2016);
   fChain->SetBranchAddress("flag_eeBadSc", &flag_eeBadSc, &b_flag_eeBadSc);
   fChain->SetBranchAddress("flag_badGlobalMuon", &flag_badGlobalMuon, &b_flag_badGlobalMuon);
   fChain->SetBranchAddress("flag_badCloneMuon", &flag_badCloneMuon, &b_flag_badCloneMuon);
   fChain->SetBranchAddress("flag_HBHENoiseIso", &flag_HBHENoiseIso, &b_flag_HBHENoiseIso);
   fChain->SetBranchAddress("flag_HBHENoise", &flag_HBHENoise, &b_flag_HBHENoise);
   fChain->SetBranchAddress("flag_EcalDeadCellTriggerPrimitive", &flag_EcalDeadCellTriggerPrimitive, &b_flag_EcalDeadCellTriggerPrimitive);
   fChain->SetBranchAddress("flag_BadPFMuon", &flag_BadPFMuon, &b_flag_BadPFMuon);
   fChain->SetBranchAddress("flag_BadChargedCandidate", &flag_BadChargedCandidate, &b_flag_BadChargedCandidate);
   fChain->SetBranchAddress("pt_2", &pt_2, &b_pt_2);
   fChain->SetBranchAddress("phi_2", &phi_2, &b_phi_2);
   fChain->SetBranchAddress("eta_2", &eta_2, &b_eta_2);
   fChain->SetBranchAddress("px_2", &px_2, &b_px_2);
   fChain->SetBranchAddress("py_2", &py_2, &b_py_2);
   fChain->SetBranchAddress("pz_2", &pz_2, &b_pz_2);
   fChain->SetBranchAddress("m_2", &m_2, &b_m_2);
   fChain->SetBranchAddress("e_2", &e_2, &b_e_2);
   fChain->SetBranchAddress("q_2", &q_2, &b_q_2);
   fChain->SetBranchAddress("l2_decayMode", &l2_decayMode, &b_l2_decayMode);
   fChain->SetBranchAddress("againstElectronVLooseMVA6_2", &againstElectronVLooseMVA6_2, &b_againstElectronVLooseMVA6_2);
   fChain->SetBranchAddress("againstMuonTight3_2", &againstMuonTight3_2, &b_againstMuonTight3_2);
   fChain->SetBranchAddress("byVLooseIsolationMVArun2v1DBoldDMwLT_2", &byVLooseIsolationMVArun2v1DBoldDMwLT_2, &b_byVLooseIsolationMVArun2v1DBoldDMwLT_2);
   fChain->SetBranchAddress("byLooseIsolationMVArun2v1DBoldDMwLT_2", &byLooseIsolationMVArun2v1DBoldDMwLT_2, &b_byLooseIsolationMVArun2v1DBoldDMwLT_2);
   fChain->SetBranchAddress("byMediumIsolationMVArun2v1DBoldDMwLT_2", &byMediumIsolationMVArun2v1DBoldDMwLT_2, &b_byMediumIsolationMVArun2v1DBoldDMwLT_2);
   fChain->SetBranchAddress("byTightIsolationMVArun2v1DBoldDMwLT_2", &byTightIsolationMVArun2v1DBoldDMwLT_2, &b_byTightIsolationMVArun2v1DBoldDMwLT_2);
   fChain->SetBranchAddress("byVTightIsolationMVArun2v1DBoldDMwLT_2", &byVTightIsolationMVArun2v1DBoldDMwLT_2, &b_byVTightIsolationMVArun2v1DBoldDMwLT_2);
   fChain->SetBranchAddress("byVVTightIsolationMVArun2v1DBoldDMwLT_2", &byVVTightIsolationMVArun2v1DBoldDMwLT_2, &b_byVVTightIsolationMVArun2v1DBoldDMwLT_2);
   fChain->SetBranchAddress("iso_2_old", &iso_2_old, &b_iso_2_old);
   fChain->SetBranchAddress("decayModeFinding_2", &decayModeFinding_2, &b_decayModeFinding_2);
   fChain->SetBranchAddress("byVLooseIsolationMVArun2v1DBnewDMwLT_2", &byVLooseIsolationMVArun2v1DBnewDMwLT_2, &b_byVLooseIsolationMVArun2v1DBnewDMwLT_2);
   fChain->SetBranchAddress("byLooseIsolationMVArun2v1DBnewDMwLT_2", &byLooseIsolationMVArun2v1DBnewDMwLT_2, &b_byLooseIsolationMVArun2v1DBnewDMwLT_2);
   fChain->SetBranchAddress("byMediumIsolationMVArun2v1DBnewDMwLT_2", &byMediumIsolationMVArun2v1DBnewDMwLT_2, &b_byMediumIsolationMVArun2v1DBnewDMwLT_2);
   fChain->SetBranchAddress("byTightIsolationMVArun2v1DBnewDMwLT_2", &byTightIsolationMVArun2v1DBnewDMwLT_2, &b_byTightIsolationMVArun2v1DBnewDMwLT_2);
   fChain->SetBranchAddress("byVTightIsolationMVArun2v1DBnewDMwLT_2", &byVTightIsolationMVArun2v1DBnewDMwLT_2, &b_byVTightIsolationMVArun2v1DBnewDMwLT_2);
   fChain->SetBranchAddress("byVVTightIsolationMVArun2v1DBnewDMwLT_2", &byVVTightIsolationMVArun2v1DBnewDMwLT_2, &b_byVVTightIsolationMVArun2v1DBnewDMwLT_2);
   fChain->SetBranchAddress("iso_2_new", &iso_2_new, &b_iso_2_new);
   fChain->SetBranchAddress("decayModeFindingNewDMs_2", &decayModeFindingNewDMs_2, &b_decayModeFindingNewDMs_2);
   fChain->SetBranchAddress("numGenJets", &numGenJets, &b_numGenJets);
   fChain->SetBranchAddress("jetPt_2", &jetPt_2, &b_jetPt_2);
   fChain->SetBranchAddress("pt_tt", &pt_tt, &b_pt_tt);
   fChain->SetBranchAddress("m_vis", &m_vis, &b_m_vis);
   fChain->SetBranchAddress("pt_top1", &pt_top1, &b_pt_top1);
   fChain->SetBranchAddress("pt_top2", &pt_top2, &b_pt_top2);
//    fChain->SetBranchAddress("genweight", &genweight, &b_genweight);
   fChain->SetBranchAddress("met_JESDown", &met_JESDown, &b_met_JESDown);
   fChain->SetBranchAddress("met_UESDown", &met_UESDown, &b_met_UESDown);
   fChain->SetBranchAddress("met_JESUp", &met_JESUp, &b_met_JESUp);
   fChain->SetBranchAddress("met_UESUp", &met_UESUp, &b_met_UESUp);
   fChain->SetBranchAddress("metphi_JESDown", &metphi_JESDown, &b_metphi_JESDown);
   fChain->SetBranchAddress("metphi_TESDown", &metphi_TESDown, &b_metphi_TESDown);
   fChain->SetBranchAddress("metphi_UESDown", &metphi_UESDown, &b_metphi_UESDown);
   fChain->SetBranchAddress("metphi_JESUp", &metphi_JESUp, &b_metphi_JESUp);
   fChain->SetBranchAddress("metphi_UESUp", &metphi_UESUp, &b_metphi_UESUp);
   fChain->SetBranchAddress("met", &met, &b_met);
   fChain->SetBranchAddress("metSig", &metSig, &b_metSig);
   fChain->SetBranchAddress("metcov00", &metcov00, &b_metcov00);
   fChain->SetBranchAddress("metcov10", &metcov10, &b_metcov10);
   fChain->SetBranchAddress("metcov11", &metcov11, &b_metcov11);
   fChain->SetBranchAddress("metcov01", &metcov01, &b_metcov01);
   fChain->SetBranchAddress("metcov00_v2", &metcov00_v2, &b_metcov00_v2);
   fChain->SetBranchAddress("metcov10_v2", &metcov10_v2, &b_metcov10_v2);
   fChain->SetBranchAddress("metcov11_v2", &metcov11_v2, &b_metcov11_v2);
   fChain->SetBranchAddress("metcov01_v2", &metcov01_v2, &b_metcov01_v2);
   fChain->SetBranchAddress("metphi", &metphi, &b_metphi);
   fChain->SetBranchAddress("met_px", &met_px, &b_met_px);
   fChain->SetBranchAddress("met_py", &met_py, &b_met_py);
   fChain->SetBranchAddress("mjj", &mjj, &b_mjj);
   fChain->SetBranchAddress("jdeta", &jdeta, &b_jdeta);
   fChain->SetBranchAddress("mjj_JESUp", &mjj_JESUp, &b_mjj_JESUp);
   fChain->SetBranchAddress("mjj_JESDown", &mjj_JESDown, &b_mjj_JESDown);
   fChain->SetBranchAddress("gen_match_1", &gen_match_1, &b_gen_match_1);
   fChain->SetBranchAddress("gen_match_2", &gen_match_2, &b_gen_match_2);
   fChain->SetBranchAddress("njets_JetAbsoluteFlavMapDown", &njets_JetAbsoluteFlavMapDown, &b_njets_JetAbsoluteFlavMapDown);
   fChain->SetBranchAddress("mjj_JetAbsoluteFlavMapDown", &mjj_JetAbsoluteFlavMapDown, &b_mjj_JetAbsoluteFlavMapDown);
   fChain->SetBranchAddress("njets_JetAbsoluteMPFBiasDown", &njets_JetAbsoluteMPFBiasDown, &b_njets_JetAbsoluteMPFBiasDown);
   fChain->SetBranchAddress("mjj_JetAbsoluteMPFBiasDown", &mjj_JetAbsoluteMPFBiasDown, &b_mjj_JetAbsoluteMPFBiasDown);
   fChain->SetBranchAddress("njets_JetAbsoluteScaleDown", &njets_JetAbsoluteScaleDown, &b_njets_JetAbsoluteScaleDown);
   fChain->SetBranchAddress("mjj_JetAbsoluteScaleDown", &mjj_JetAbsoluteScaleDown, &b_mjj_JetAbsoluteScaleDown);
   fChain->SetBranchAddress("njets_JetAbsoluteStatDown", &njets_JetAbsoluteStatDown, &b_njets_JetAbsoluteStatDown);
   fChain->SetBranchAddress("mjj_JetAbsoluteStatDown", &mjj_JetAbsoluteStatDown, &b_mjj_JetAbsoluteStatDown);
   fChain->SetBranchAddress("njets_JetEnDown", &njets_JetEnDown, &b_njets_JetEnDown);
   fChain->SetBranchAddress("mjj_JetEnDown", &mjj_JetEnDown, &b_mjj_JetEnDown);
   fChain->SetBranchAddress("njets_JetFlavorQCDDown", &njets_JetFlavorQCDDown, &b_njets_JetFlavorQCDDown);
   fChain->SetBranchAddress("mjj_JetFlavorQCDDown", &mjj_JetFlavorQCDDown, &b_mjj_JetFlavorQCDDown);
   fChain->SetBranchAddress("njets_JetFragmentationDown", &njets_JetFragmentationDown, &b_njets_JetFragmentationDown);
   fChain->SetBranchAddress("mjj_JetFragmentationDown", &mjj_JetFragmentationDown, &b_mjj_JetFragmentationDown);
   fChain->SetBranchAddress("njets_JetPileUpDataMCDown", &njets_JetPileUpDataMCDown, &b_njets_JetPileUpDataMCDown);
   fChain->SetBranchAddress("mjj_JetPileUpDataMCDown", &mjj_JetPileUpDataMCDown, &b_mjj_JetPileUpDataMCDown);
   fChain->SetBranchAddress("njets_JetPileUpPtBBDown", &njets_JetPileUpPtBBDown, &b_njets_JetPileUpPtBBDown);
   fChain->SetBranchAddress("mjj_JetPileUpPtBBDown", &mjj_JetPileUpPtBBDown, &b_mjj_JetPileUpPtBBDown);
   fChain->SetBranchAddress("njets_JetPileUpPtEC1Down", &njets_JetPileUpPtEC1Down, &b_njets_JetPileUpPtEC1Down);
   fChain->SetBranchAddress("mjj_JetPileUpPtEC1Down", &mjj_JetPileUpPtEC1Down, &b_mjj_JetPileUpPtEC1Down);
   fChain->SetBranchAddress("njets_JetPileUpPtEC2Down", &njets_JetPileUpPtEC2Down, &b_njets_JetPileUpPtEC2Down);
   fChain->SetBranchAddress("mjj_JetPileUpPtEC2Down", &mjj_JetPileUpPtEC2Down, &b_mjj_JetPileUpPtEC2Down);
   fChain->SetBranchAddress("njets_JetPileUpPtHFDown", &njets_JetPileUpPtHFDown, &b_njets_JetPileUpPtHFDown);
   fChain->SetBranchAddress("mjj_JetPileUpPtHFDown", &mjj_JetPileUpPtHFDown, &b_mjj_JetPileUpPtHFDown);
   fChain->SetBranchAddress("njets_JetPileUpPtRefDown", &njets_JetPileUpPtRefDown, &b_njets_JetPileUpPtRefDown);
   fChain->SetBranchAddress("mjj_JetPileUpPtRefDown", &mjj_JetPileUpPtRefDown, &b_mjj_JetPileUpPtRefDown);
   fChain->SetBranchAddress("njets_JetRelativeBalDown", &njets_JetRelativeBalDown, &b_njets_JetRelativeBalDown);
   fChain->SetBranchAddress("mjj_JetRelativeBalDown", &mjj_JetRelativeBalDown, &b_mjj_JetRelativeBalDown);
   fChain->SetBranchAddress("njets_JetRelativeFSRDown", &njets_JetRelativeFSRDown, &b_njets_JetRelativeFSRDown);
   fChain->SetBranchAddress("mjj_JetRelativeFSRDown", &mjj_JetRelativeFSRDown, &b_mjj_JetRelativeFSRDown);
   fChain->SetBranchAddress("njets_JetRelativeJEREC1Down", &njets_JetRelativeJEREC1Down, &b_njets_JetRelativeJEREC1Down);
   fChain->SetBranchAddress("mjj_JetRelativeJEREC1Down", &mjj_JetRelativeJEREC1Down, &b_mjj_JetRelativeJEREC1Down);
   fChain->SetBranchAddress("njets_JetRelativeJEREC2Down", &njets_JetRelativeJEREC2Down, &b_njets_JetRelativeJEREC2Down);
   fChain->SetBranchAddress("mjj_JetRelativeJEREC2Down", &mjj_JetRelativeJEREC2Down, &b_mjj_JetRelativeJEREC2Down);
   fChain->SetBranchAddress("njets_JetRelativeJERHFDown", &njets_JetRelativeJERHFDown, &b_njets_JetRelativeJERHFDown);
   fChain->SetBranchAddress("mjj_JetRelativeJERHFDown", &mjj_JetRelativeJERHFDown, &b_mjj_JetRelativeJERHFDown);
   fChain->SetBranchAddress("njets_JetRelativePtBBDown", &njets_JetRelativePtBBDown, &b_njets_JetRelativePtBBDown);
   fChain->SetBranchAddress("mjj_JetRelativePtBBDown", &mjj_JetRelativePtBBDown, &b_mjj_JetRelativePtBBDown);
   fChain->SetBranchAddress("njets_JetRelativePtEC1Down", &njets_JetRelativePtEC1Down, &b_njets_JetRelativePtEC1Down);
   fChain->SetBranchAddress("mjj_JetRelativePtEC1Down", &mjj_JetRelativePtEC1Down, &b_mjj_JetRelativePtEC1Down);
   fChain->SetBranchAddress("njets_JetRelativePtEC2Down", &njets_JetRelativePtEC2Down, &b_njets_JetRelativePtEC2Down);
   fChain->SetBranchAddress("mjj_JetRelativePtEC2Down", &mjj_JetRelativePtEC2Down, &b_mjj_JetRelativePtEC2Down);
   fChain->SetBranchAddress("njets_JetRelativePtHFDown", &njets_JetRelativePtHFDown, &b_njets_JetRelativePtHFDown);
   fChain->SetBranchAddress("mjj_JetRelativePtHFDown", &mjj_JetRelativePtHFDown, &b_mjj_JetRelativePtHFDown);
   fChain->SetBranchAddress("njets_JetRelativeStatECDown", &njets_JetRelativeStatECDown, &b_njets_JetRelativeStatECDown);
   fChain->SetBranchAddress("mjj_JetRelativeStatECDown", &mjj_JetRelativeStatECDown, &b_mjj_JetRelativeStatECDown);
   fChain->SetBranchAddress("njets_JetRelativeStatFSRDown", &njets_JetRelativeStatFSRDown, &b_njets_JetRelativeStatFSRDown);
   fChain->SetBranchAddress("mjj_JetRelativeStatFSRDown", &mjj_JetRelativeStatFSRDown, &b_mjj_JetRelativeStatFSRDown);
   fChain->SetBranchAddress("njets_JetRelativeStatHFDown", &njets_JetRelativeStatHFDown, &b_njets_JetRelativeStatHFDown);
   fChain->SetBranchAddress("mjj_JetRelativeStatHFDown", &mjj_JetRelativeStatHFDown, &b_mjj_JetRelativeStatHFDown);
   fChain->SetBranchAddress("njets_JetSinglePionECALDown", &njets_JetSinglePionECALDown, &b_njets_JetSinglePionECALDown);
   fChain->SetBranchAddress("mjj_JetSinglePionECALDown", &mjj_JetSinglePionECALDown, &b_mjj_JetSinglePionECALDown);
   fChain->SetBranchAddress("njets_JetSinglePionHCALDown", &njets_JetSinglePionHCALDown, &b_njets_JetSinglePionHCALDown);
   fChain->SetBranchAddress("mjj_JetSinglePionHCALDown", &mjj_JetSinglePionHCALDown, &b_mjj_JetSinglePionHCALDown);
   fChain->SetBranchAddress("njets_JetTimePtEtaDown", &njets_JetTimePtEtaDown, &b_njets_JetTimePtEtaDown);
   fChain->SetBranchAddress("mjj_JetTimePtEtaDown", &mjj_JetTimePtEtaDown, &b_mjj_JetTimePtEtaDown);
   fChain->SetBranchAddress("njets_JetAbsoluteFlavMapUp", &njets_JetAbsoluteFlavMapUp, &b_njets_JetAbsoluteFlavMapUp);
   fChain->SetBranchAddress("mjj_JetAbsoluteFlavMapUp", &mjj_JetAbsoluteFlavMapUp, &b_mjj_JetAbsoluteFlavMapUp);
   fChain->SetBranchAddress("njets_JetAbsoluteMPFBiasUp", &njets_JetAbsoluteMPFBiasUp, &b_njets_JetAbsoluteMPFBiasUp);
   fChain->SetBranchAddress("mjj_JetAbsoluteMPFBiasUp", &mjj_JetAbsoluteMPFBiasUp, &b_mjj_JetAbsoluteMPFBiasUp);
   fChain->SetBranchAddress("njets_JetAbsoluteScaleUp", &njets_JetAbsoluteScaleUp, &b_njets_JetAbsoluteScaleUp);
   fChain->SetBranchAddress("mjj_JetAbsoluteScaleUp", &mjj_JetAbsoluteScaleUp, &b_mjj_JetAbsoluteScaleUp);
   fChain->SetBranchAddress("njets_JetAbsoluteStatUp", &njets_JetAbsoluteStatUp, &b_njets_JetAbsoluteStatUp);
   fChain->SetBranchAddress("mjj_JetAbsoluteStatUp", &mjj_JetAbsoluteStatUp, &b_mjj_JetAbsoluteStatUp);
   fChain->SetBranchAddress("njets_JetEnUp", &njets_JetEnUp, &b_njets_JetEnUp);
   fChain->SetBranchAddress("mjj_JetEnUp", &mjj_JetEnUp, &b_mjj_JetEnUp);
   fChain->SetBranchAddress("njets_JetFlavorQCDUp", &njets_JetFlavorQCDUp, &b_njets_JetFlavorQCDUp);
   fChain->SetBranchAddress("mjj_JetFlavorQCDUp", &mjj_JetFlavorQCDUp, &b_mjj_JetFlavorQCDUp);
   fChain->SetBranchAddress("njets_JetFragmentationUp", &njets_JetFragmentationUp, &b_njets_JetFragmentationUp);
   fChain->SetBranchAddress("mjj_JetFragmentationUp", &mjj_JetFragmentationUp, &b_mjj_JetFragmentationUp);
   fChain->SetBranchAddress("njets_JetPileUpDataMCUp", &njets_JetPileUpDataMCUp, &b_njets_JetPileUpDataMCUp);
   fChain->SetBranchAddress("mjj_JetPileUpDataMCUp", &mjj_JetPileUpDataMCUp, &b_mjj_JetPileUpDataMCUp);
   fChain->SetBranchAddress("njets_JetPileUpPtBBUp", &njets_JetPileUpPtBBUp, &b_njets_JetPileUpPtBBUp);
   fChain->SetBranchAddress("mjj_JetPileUpPtBBUp", &mjj_JetPileUpPtBBUp, &b_mjj_JetPileUpPtBBUp);
   fChain->SetBranchAddress("njets_JetPileUpPtEC1Up", &njets_JetPileUpPtEC1Up, &b_njets_JetPileUpPtEC1Up);
   fChain->SetBranchAddress("mjj_JetPileUpPtEC1Up", &mjj_JetPileUpPtEC1Up, &b_mjj_JetPileUpPtEC1Up);
   fChain->SetBranchAddress("njets_JetPileUpPtEC2Up", &njets_JetPileUpPtEC2Up, &b_njets_JetPileUpPtEC2Up);
   fChain->SetBranchAddress("mjj_JetPileUpPtEC2Up", &mjj_JetPileUpPtEC2Up, &b_mjj_JetPileUpPtEC2Up);
   fChain->SetBranchAddress("njets_JetPileUpPtHFUp", &njets_JetPileUpPtHFUp, &b_njets_JetPileUpPtHFUp);
   fChain->SetBranchAddress("mjj_JetPileUpPtHFUp", &mjj_JetPileUpPtHFUp, &b_mjj_JetPileUpPtHFUp);
   fChain->SetBranchAddress("njets_JetPileUpPtRefUp", &njets_JetPileUpPtRefUp, &b_njets_JetPileUpPtRefUp);
   fChain->SetBranchAddress("mjj_JetPileUpPtRefUp", &mjj_JetPileUpPtRefUp, &b_mjj_JetPileUpPtRefUp);
   fChain->SetBranchAddress("njets_JetRelativeBalUp", &njets_JetRelativeBalUp, &b_njets_JetRelativeBalUp);
   fChain->SetBranchAddress("mjj_JetRelativeBalUp", &mjj_JetRelativeBalUp, &b_mjj_JetRelativeBalUp);
   fChain->SetBranchAddress("njets_JetRelativeFSRUp", &njets_JetRelativeFSRUp, &b_njets_JetRelativeFSRUp);
   fChain->SetBranchAddress("mjj_JetRelativeFSRUp", &mjj_JetRelativeFSRUp, &b_mjj_JetRelativeFSRUp);
   fChain->SetBranchAddress("njets_JetRelativeJEREC1Up", &njets_JetRelativeJEREC1Up, &b_njets_JetRelativeJEREC1Up);
   fChain->SetBranchAddress("mjj_JetRelativeJEREC1Up", &mjj_JetRelativeJEREC1Up, &b_mjj_JetRelativeJEREC1Up);
   fChain->SetBranchAddress("njets_JetRelativeJEREC2Up", &njets_JetRelativeJEREC2Up, &b_njets_JetRelativeJEREC2Up);
   fChain->SetBranchAddress("mjj_JetRelativeJEREC2Up", &mjj_JetRelativeJEREC2Up, &b_mjj_JetRelativeJEREC2Up);
   fChain->SetBranchAddress("njets_JetRelativeJERHFUp", &njets_JetRelativeJERHFUp, &b_njets_JetRelativeJERHFUp);
   fChain->SetBranchAddress("mjj_JetRelativeJERHFUp", &mjj_JetRelativeJERHFUp, &b_mjj_JetRelativeJERHFUp);
   fChain->SetBranchAddress("njets_JetRelativePtBBUp", &njets_JetRelativePtBBUp, &b_njets_JetRelativePtBBUp);
   fChain->SetBranchAddress("mjj_JetRelativePtBBUp", &mjj_JetRelativePtBBUp, &b_mjj_JetRelativePtBBUp);
   fChain->SetBranchAddress("njets_JetRelativePtEC1Up", &njets_JetRelativePtEC1Up, &b_njets_JetRelativePtEC1Up);
   fChain->SetBranchAddress("mjj_JetRelativePtEC1Up", &mjj_JetRelativePtEC1Up, &b_mjj_JetRelativePtEC1Up);
   fChain->SetBranchAddress("njets_JetRelativePtEC2Up", &njets_JetRelativePtEC2Up, &b_njets_JetRelativePtEC2Up);
   fChain->SetBranchAddress("mjj_JetRelativePtEC2Up", &mjj_JetRelativePtEC2Up, &b_mjj_JetRelativePtEC2Up);
   fChain->SetBranchAddress("njets_JetRelativePtHFUp", &njets_JetRelativePtHFUp, &b_njets_JetRelativePtHFUp);
   fChain->SetBranchAddress("mjj_JetRelativePtHFUp", &mjj_JetRelativePtHFUp, &b_mjj_JetRelativePtHFUp);
   fChain->SetBranchAddress("njets_JetRelativeStatECUp", &njets_JetRelativeStatECUp, &b_njets_JetRelativeStatECUp);
   fChain->SetBranchAddress("mjj_JetRelativeStatECUp", &mjj_JetRelativeStatECUp, &b_mjj_JetRelativeStatECUp);
   fChain->SetBranchAddress("njets_JetRelativeStatFSRUp", &njets_JetRelativeStatFSRUp, &b_njets_JetRelativeStatFSRUp);
   fChain->SetBranchAddress("mjj_JetRelativeStatFSRUp", &mjj_JetRelativeStatFSRUp, &b_mjj_JetRelativeStatFSRUp);
   fChain->SetBranchAddress("njets_JetRelativeStatHFUp", &njets_JetRelativeStatHFUp, &b_njets_JetRelativeStatHFUp);
   fChain->SetBranchAddress("mjj_JetRelativeStatHFUp", &mjj_JetRelativeStatHFUp, &b_mjj_JetRelativeStatHFUp);
   fChain->SetBranchAddress("njets_JetSinglePionECALUp", &njets_JetSinglePionECALUp, &b_njets_JetSinglePionECALUp);
   fChain->SetBranchAddress("mjj_JetSinglePionECALUp", &mjj_JetSinglePionECALUp, &b_mjj_JetSinglePionECALUp);
   fChain->SetBranchAddress("njets_JetSinglePionHCALUp", &njets_JetSinglePionHCALUp, &b_njets_JetSinglePionHCALUp);
   fChain->SetBranchAddress("mjj_JetSinglePionHCALUp", &mjj_JetSinglePionHCALUp, &b_mjj_JetSinglePionHCALUp);
   fChain->SetBranchAddress("njets_JetTimePtEtaUp", &njets_JetTimePtEtaUp, &b_njets_JetTimePtEtaUp);
   fChain->SetBranchAddress("mjj_JetTimePtEtaUp", &mjj_JetTimePtEtaUp, &b_mjj_JetTimePtEtaUp);
   fChain->SetBranchAddress("nbtag", &nbtag, &b_nbtag);
   fChain->SetBranchAddress("njets", &njets, &b_njets);
   fChain->SetBranchAddress("njetspt20", &njetspt20, &b_njetspt20);
   fChain->SetBranchAddress("njets_JESDown", &njets_JESDown, &b_njets_JESDown);
   fChain->SetBranchAddress("njets_JESUp", &njets_JESUp, &b_njets_JESUp);
   fChain->SetBranchAddress("jpt_1", &jpt_1, &b_jpt_1);
   fChain->SetBranchAddress("jeta_1", &jeta_1, &b_jeta_1);
   fChain->SetBranchAddress("jphi_1", &jphi_1, &b_jphi_1);
   fChain->SetBranchAddress("jcsv_1", &jcsv_1, &b_jcsv_1);
   fChain->SetBranchAddress("jpt_1_JESUp", &jpt_1_JESUp, &b_jpt_1_JESUp);
   fChain->SetBranchAddress("jpt_1_JESDown", &jpt_1_JESDown, &b_jpt_1_JESDown);
   fChain->SetBranchAddress("jpt_2", &jpt_2, &b_jpt_2);
   fChain->SetBranchAddress("jeta_2", &jeta_2, &b_jeta_2);
   fChain->SetBranchAddress("jphi_2", &jphi_2, &b_jphi_2);
   fChain->SetBranchAddress("jcsv_2", &jcsv_2, &b_jcsv_2);
   fChain->SetBranchAddress("jpt_2_JESUp", &jpt_2_JESUp, &b_jpt_2_JESUp);
   fChain->SetBranchAddress("jpt_2_JESDown", &jpt_2_JESDown, &b_jpt_2_JESDown);
   fChain->SetBranchAddress("bpt_1", &bpt_1, &b_bpt_1);
   fChain->SetBranchAddress("beta_1", &beta_1, &b_beta_1);
   fChain->SetBranchAddress("bphi_1", &bphi_1, &b_bphi_1);
   fChain->SetBranchAddress("bcsv_1", &bcsv_1, &b_bcsv_1);
   fChain->SetBranchAddress("bflavor_1", &bflavor_1, &b_bflavor_1);
   fChain->SetBranchAddress("bpt_2", &bpt_2, &b_bpt_2);
   fChain->SetBranchAddress("beta_2", &beta_2, &b_beta_2);
   fChain->SetBranchAddress("bphi_2", &bphi_2, &b_bphi_2);
   fChain->SetBranchAddress("bcsv_2", &bcsv_2, &b_bcsv_2);
   fChain->SetBranchAddress("bflavor_2", &bflavor_2, &b_bflavor_2);
   fChain->SetBranchAddress("extraelec_veto", &extraelec_veto, &b_extraelec_veto);
   fChain->SetBranchAddress("extramuon_veto", &extramuon_veto, &b_extramuon_veto);
   fChain->SetBranchAddress("dilepton_veto", &dilepton_veto, &b_dilepton_veto);
   fChain->SetBranchAddress("m_sv", &m_sv, &b_m_sv);
   fChain->SetBranchAddress("pt_sv", &pt_sv, &b_pt_sv);
   fChain->SetBranchAddress("eta_sv", &eta_sv, &b_eta_sv);
   fChain->SetBranchAddress("phi_sv", &phi_sv, &b_phi_sv);
   fChain->SetBranchAddress("met_sv", &met_sv, &b_met_sv);
   fChain->SetBranchAddress("mt_sv", &mt_sv, &b_mt_sv);
   fChain->SetBranchAddress("metcorr_ex", &metcorr_ex, &b_metcorr_ex);
   fChain->SetBranchAddress("metcorr_ey", &metcorr_ey, &b_metcorr_ey);
   fChain->SetBranchAddress("metcor", &metcor, &b_metcor);
   fChain->SetBranchAddress("metcorphi", &metcorphi, &b_metcorphi);
   fChain->SetBranchAddress("m_sv_Up", &m_sv_Up, &b_m_sv_Up);
   fChain->SetBranchAddress("pt_sv_Up", &pt_sv_Up, &b_pt_sv_Up);
   fChain->SetBranchAddress("eta_sv_Up", &eta_sv_Up, &b_eta_sv_Up);
   fChain->SetBranchAddress("phi_sv_Up", &phi_sv_Up, &b_phi_sv_Up);
   fChain->SetBranchAddress("met_sv_Up", &met_sv_Up, &b_met_sv_Up);
   fChain->SetBranchAddress("mt_sv_Up", &mt_sv_Up, &b_mt_sv_Up);
   fChain->SetBranchAddress("m_sv_Down", &m_sv_Down, &b_m_sv_Down);
   fChain->SetBranchAddress("pt_sv_Down", &pt_sv_Down, &b_pt_sv_Down);
   fChain->SetBranchAddress("eta_sv_Down", &eta_sv_Down, &b_eta_sv_Down);
   fChain->SetBranchAddress("phi_sv_Down", &phi_sv_Down, &b_phi_sv_Down);
   fChain->SetBranchAddress("met_sv_Down", &met_sv_Down, &b_met_sv_Down);
   fChain->SetBranchAddress("mt_sv_Down", &mt_sv_Down, &b_mt_sv_Down);
   fChain->SetBranchAddress("m_sv_DM0_Up", &m_sv_DM0_Up, &b_m_sv_DM0_Up);
   fChain->SetBranchAddress("pt_sv_DM0_Up", &pt_sv_DM0_Up, &b_pt_sv_DM0_Up);
   fChain->SetBranchAddress("eta_sv_DM0_Up", &eta_sv_DM0_Up, &b_eta_sv_DM0_Up);
   fChain->SetBranchAddress("phi_sv_DM0_Up", &phi_sv_DM0_Up, &b_phi_sv_DM0_Up);
   fChain->SetBranchAddress("met_sv_DM0_Up", &met_sv_DM0_Up, &b_met_sv_DM0_Up);
   fChain->SetBranchAddress("mt_sv_DM0_Up", &mt_sv_DM0_Up, &b_mt_sv_DM0_Up);
   fChain->SetBranchAddress("m_sv_DM0_Down", &m_sv_DM0_Down, &b_m_sv_DM0_Down);
   fChain->SetBranchAddress("pt_sv_DM0_Down", &pt_sv_DM0_Down, &b_pt_sv_DM0_Down);
   fChain->SetBranchAddress("eta_sv_DM0_Down", &eta_sv_DM0_Down, &b_eta_sv_DM0_Down);
   fChain->SetBranchAddress("phi_sv_DM0_Down", &phi_sv_DM0_Down, &b_phi_sv_DM0_Down);
   fChain->SetBranchAddress("met_sv_DM0_Down", &met_sv_DM0_Down, &b_met_sv_DM0_Down);
   fChain->SetBranchAddress("mt_sv_DM0_Down", &mt_sv_DM0_Down, &b_mt_sv_DM0_Down);
   fChain->SetBranchAddress("m_sv_DM1_Up", &m_sv_DM1_Up, &b_m_sv_DM1_Up);
   fChain->SetBranchAddress("pt_sv_DM1_Up", &pt_sv_DM1_Up, &b_pt_sv_DM1_Up);
   fChain->SetBranchAddress("eta_sv_DM1_Up", &eta_sv_DM1_Up, &b_eta_sv_DM1_Up);
   fChain->SetBranchAddress("phi_sv_DM1_Up", &phi_sv_DM1_Up, &b_phi_sv_DM1_Up);
   fChain->SetBranchAddress("met_sv_DM1_Up", &met_sv_DM1_Up, &b_met_sv_DM1_Up);
   fChain->SetBranchAddress("mt_sv_DM1_Up", &mt_sv_DM1_Up, &b_mt_sv_DM1_Up);
   fChain->SetBranchAddress("m_sv_DM1_Down", &m_sv_DM1_Down, &b_m_sv_DM1_Down);
   fChain->SetBranchAddress("pt_sv_DM1_Down", &pt_sv_DM1_Down, &b_pt_sv_DM1_Down);
   fChain->SetBranchAddress("eta_sv_DM1_Down", &eta_sv_DM1_Down, &b_eta_sv_DM1_Down);
   fChain->SetBranchAddress("phi_sv_DM1_Down", &phi_sv_DM1_Down, &b_phi_sv_DM1_Down);
   fChain->SetBranchAddress("met_sv_DM1_Down", &met_sv_DM1_Down, &b_met_sv_DM1_Down);
   fChain->SetBranchAddress("mt_sv_DM1_Down", &mt_sv_DM1_Down, &b_mt_sv_DM1_Down);
   fChain->SetBranchAddress("m_sv_DM10_Up", &m_sv_DM10_Up, &b_m_sv_DM10_Up);
   fChain->SetBranchAddress("pt_sv_DM10_Up", &pt_sv_DM10_Up, &b_pt_sv_DM10_Up);
   fChain->SetBranchAddress("eta_sv_DM10_Up", &eta_sv_DM10_Up, &b_eta_sv_DM10_Up);
   fChain->SetBranchAddress("phi_sv_DM10_Up", &phi_sv_DM10_Up, &b_phi_sv_DM10_Up);
   fChain->SetBranchAddress("met_sv_DM10_Up", &met_sv_DM10_Up, &b_met_sv_DM10_Up);
   fChain->SetBranchAddress("mt_sv_DM10_Up", &mt_sv_DM10_Up, &b_mt_sv_DM10_Up);
   fChain->SetBranchAddress("m_sv_DM10_Down", &m_sv_DM10_Down, &b_m_sv_DM10_Down);
   fChain->SetBranchAddress("pt_sv_DM10_Down", &pt_sv_DM10_Down, &b_pt_sv_DM10_Down);
   fChain->SetBranchAddress("eta_sv_DM10_Down", &eta_sv_DM10_Down, &b_eta_sv_DM10_Down);
   fChain->SetBranchAddress("phi_sv_DM10_Down", &phi_sv_DM10_Down, &b_phi_sv_DM10_Down);
   fChain->SetBranchAddress("met_sv_DM10_Down", &met_sv_DM10_Down, &b_met_sv_DM10_Down);
   fChain->SetBranchAddress("mt_sv_DM10_Down", &mt_sv_DM10_Down, &b_mt_sv_DM10_Down);
   fChain->SetBranchAddress("m_sv_UncMet_Up", &m_sv_UncMet_Up, &b_m_sv_UncMet_Up);
   fChain->SetBranchAddress("pt_sv_UncMet_Up", &pt_sv_UncMet_Up, &b_pt_sv_UncMet_Up);
   fChain->SetBranchAddress("eta_sv_UncMet_Up", &eta_sv_UncMet_Up, &b_eta_sv_UncMet_Up);
   fChain->SetBranchAddress("phi_sv_UncMet_Up", &phi_sv_UncMet_Up, &b_phi_sv_UncMet_Up);
   fChain->SetBranchAddress("met_sv_UncMet_Up", &met_sv_UncMet_Up, &b_met_sv_UncMet_Up);
   fChain->SetBranchAddress("mt_sv_UncMet_Up", &mt_sv_UncMet_Up, &b_mt_sv_UncMet_Up);
   fChain->SetBranchAddress("m_sv_UncMet_Down", &m_sv_UncMet_Down, &b_m_sv_UncMet_Down);
   fChain->SetBranchAddress("pt_sv_UncMet_Down", &pt_sv_UncMet_Down, &b_pt_sv_UncMet_Down);
   fChain->SetBranchAddress("eta_sv_UncMet_Down", &eta_sv_UncMet_Down, &b_eta_sv_UncMet_Down);
   fChain->SetBranchAddress("phi_sv_UncMet_Down", &phi_sv_UncMet_Down, &b_phi_sv_UncMet_Down);
   fChain->SetBranchAddress("met_sv_UncMet_Down", &met_sv_UncMet_Down, &b_met_sv_UncMet_Down);
   fChain->SetBranchAddress("mt_sv_UncMet_Down", &mt_sv_UncMet_Down, &b_mt_sv_UncMet_Down);
   fChain->SetBranchAddress("m_sv_ClusteredMet_Up", &m_sv_ClusteredMet_Up, &b_m_sv_ClusteredMet_Up);
   fChain->SetBranchAddress("pt_sv_ClusteredMet_Up", &pt_sv_ClusteredMet_Up, &b_pt_sv_ClusteredMet_Up);
   fChain->SetBranchAddress("eta_sv_ClusteredMet_Up", &eta_sv_ClusteredMet_Up, &b_eta_sv_ClusteredMet_Up);
   fChain->SetBranchAddress("phi_sv_ClusteredMet_Up", &phi_sv_ClusteredMet_Up, &b_phi_sv_ClusteredMet_Up);
   fChain->SetBranchAddress("met_sv_ClusteredMet_Up", &met_sv_ClusteredMet_Up, &b_met_sv_ClusteredMet_Up);
   fChain->SetBranchAddress("mt_sv_ClusteredMet_Up", &mt_sv_ClusteredMet_Up, &b_mt_sv_ClusteredMet_Up);
   fChain->SetBranchAddress("m_sv_ClusteredMet_Down", &m_sv_ClusteredMet_Down, &b_m_sv_ClusteredMet_Down);
   fChain->SetBranchAddress("pt_sv_ClusteredMet_Down", &pt_sv_ClusteredMet_Down, &b_pt_sv_ClusteredMet_Down);
   fChain->SetBranchAddress("eta_sv_ClusteredMet_Down", &eta_sv_ClusteredMet_Down, &b_eta_sv_ClusteredMet_Down);
   fChain->SetBranchAddress("phi_sv_ClusteredMet_Down", &phi_sv_ClusteredMet_Down, &b_phi_sv_ClusteredMet_Down);
   fChain->SetBranchAddress("met_sv_ClusteredMet_Down", &met_sv_ClusteredMet_Down, &b_met_sv_ClusteredMet_Down);
   fChain->SetBranchAddress("mt_sv_ClusteredMet_Down", &mt_sv_ClusteredMet_Down, &b_mt_sv_ClusteredMet_Down);
   fChain->SetBranchAddress("metcorClusteredDown", &metcorClusteredDown, &b_metcorClusteredDown);
   fChain->SetBranchAddress("metcorphiClusteredDown", &metcorphiClusteredDown, &b_metcorphiClusteredDown);
   fChain->SetBranchAddress("metcorClusteredUp", &metcorClusteredUp, &b_metcorClusteredUp);
   fChain->SetBranchAddress("metcorphiClusteredUp", &metcorphiClusteredUp, &b_metcorphiClusteredUp);
   fChain->SetBranchAddress("metcorUncDown", &metcorUncDown, &b_metcorUncDown);
   fChain->SetBranchAddress("metcorphiUncDown", &metcorphiUncDown, &b_metcorphiUncDown);
   fChain->SetBranchAddress("metcorUncUp", &metcorUncUp, &b_metcorUncUp);
   fChain->SetBranchAddress("metcorphiUncUp", &metcorphiUncUp, &b_metcorphiUncUp);
   fChain->SetBranchAddress("tau1_pt", &tau1_pt, &b_tau1_pt);
   fChain->SetBranchAddress("tau1_eta", &tau1_eta, &b_tau1_eta);
   fChain->SetBranchAddress("tau1_phi", &tau1_phi, &b_tau1_phi);
   fChain->SetBranchAddress("tau1_m", &tau1_m, &b_tau1_m);
   fChain->SetBranchAddress("tau2_pt", &tau2_pt, &b_tau2_pt);
   fChain->SetBranchAddress("tau2_eta", &tau2_eta, &b_tau2_eta);
   fChain->SetBranchAddress("tau2_phi", &tau2_phi, &b_tau2_phi);
   fChain->SetBranchAddress("tau2_m", &tau2_m, &b_tau2_m);
   fChain->SetBranchAddress("tau1_pt_Up", &tau1_pt_Up, &b_tau1_pt_Up);
   fChain->SetBranchAddress("tau1_eta_Up", &tau1_eta_Up, &b_tau1_eta_Up);
   fChain->SetBranchAddress("tau1_phi_Up", &tau1_phi_Up, &b_tau1_phi_Up);
   fChain->SetBranchAddress("tau1_m_Up", &tau1_m_Up, &b_tau1_m_Up);
   fChain->SetBranchAddress("tau2_pt_Up", &tau2_pt_Up, &b_tau2_pt_Up);
   fChain->SetBranchAddress("tau2_eta_Up", &tau2_eta_Up, &b_tau2_eta_Up);
   fChain->SetBranchAddress("tau2_phi_Up", &tau2_phi_Up, &b_tau2_phi_Up);
   fChain->SetBranchAddress("tau2_m_Up", &tau2_m_Up, &b_tau2_m_Up);
   fChain->SetBranchAddress("tau1_pt_Down", &tau1_pt_Down, &b_tau1_pt_Down);
   fChain->SetBranchAddress("tau1_eta_Down", &tau1_eta_Down, &b_tau1_eta_Down);
   fChain->SetBranchAddress("tau1_phi_Down", &tau1_phi_Down, &b_tau1_phi_Down);
   fChain->SetBranchAddress("tau1_m_Down", &tau1_m_Down, &b_tau1_m_Down);
   fChain->SetBranchAddress("tau2_pt_Down", &tau2_pt_Down, &b_tau2_pt_Down);
   fChain->SetBranchAddress("tau2_eta_Down", &tau2_eta_Down, &b_tau2_eta_Down);
   fChain->SetBranchAddress("tau2_phi_Down", &tau2_phi_Down, &b_tau2_phi_Down);
   fChain->SetBranchAddress("tau2_m_Down", &tau2_m_Down, &b_tau2_m_Down);
   fChain->SetBranchAddress("tau1_pt_DM0_Up", &tau1_pt_DM0_Up, &b_tau1_pt_DM0_Up);
   fChain->SetBranchAddress("tau1_eta_DM0_Up", &tau1_eta_DM0_Up, &b_tau1_eta_DM0_Up);
   fChain->SetBranchAddress("tau1_phi_DM0_Up", &tau1_phi_DM0_Up, &b_tau1_phi_DM0_Up);
   fChain->SetBranchAddress("tau1_m_DM0_Up", &tau1_m_DM0_Up, &b_tau1_m_DM0_Up);
   fChain->SetBranchAddress("tau2_pt_DM0_Up", &tau2_pt_DM0_Up, &b_tau2_pt_DM0_Up);
   fChain->SetBranchAddress("tau2_eta_DM0_Up", &tau2_eta_DM0_Up, &b_tau2_eta_DM0_Up);
   fChain->SetBranchAddress("tau2_phi_DM0_Up", &tau2_phi_DM0_Up, &b_tau2_phi_DM0_Up);
   fChain->SetBranchAddress("tau2_m_DM0_Up", &tau2_m_DM0_Up, &b_tau2_m_DM0_Up);
   fChain->SetBranchAddress("tau1_pt_DM0_Down", &tau1_pt_DM0_Down, &b_tau1_pt_DM0_Down);
   fChain->SetBranchAddress("tau1_eta_DM0_Down", &tau1_eta_DM0_Down, &b_tau1_eta_DM0_Down);
   fChain->SetBranchAddress("tau1_phi_DM0_Down", &tau1_phi_DM0_Down, &b_tau1_phi_DM0_Down);
   fChain->SetBranchAddress("tau1_m_DM0_Down", &tau1_m_DM0_Down, &b_tau1_m_DM0_Down);
   fChain->SetBranchAddress("tau2_pt_DM0_Down", &tau2_pt_DM0_Down, &b_tau2_pt_DM0_Down);
   fChain->SetBranchAddress("tau2_eta_DM0_Down", &tau2_eta_DM0_Down, &b_tau2_eta_DM0_Down);
   fChain->SetBranchAddress("tau2_phi_DM0_Down", &tau2_phi_DM0_Down, &b_tau2_phi_DM0_Down);
   fChain->SetBranchAddress("tau2_m_DM0_Down", &tau2_m_DM0_Down, &b_tau2_m_DM0_Down);
   fChain->SetBranchAddress("tau1_pt_DM1_Up", &tau1_pt_DM1_Up, &b_tau1_pt_DM1_Up);
   fChain->SetBranchAddress("tau1_eta_DM1_Up", &tau1_eta_DM1_Up, &b_tau1_eta_DM1_Up);
   fChain->SetBranchAddress("tau1_phi_DM1_Up", &tau1_phi_DM1_Up, &b_tau1_phi_DM1_Up);
   fChain->SetBranchAddress("tau1_m_DM1_Up", &tau1_m_DM1_Up, &b_tau1_m_DM1_Up);
   fChain->SetBranchAddress("tau2_pt_DM1_Up", &tau2_pt_DM1_Up, &b_tau2_pt_DM1_Up);
   fChain->SetBranchAddress("tau2_eta_DM1_Up", &tau2_eta_DM1_Up, &b_tau2_eta_DM1_Up);
   fChain->SetBranchAddress("tau2_phi_DM1_Up", &tau2_phi_DM1_Up, &b_tau2_phi_DM1_Up);
   fChain->SetBranchAddress("tau2_m_DM1_Up", &tau2_m_DM1_Up, &b_tau2_m_DM1_Up);
   fChain->SetBranchAddress("tau1_pt_DM1_Down", &tau1_pt_DM1_Down, &b_tau1_pt_DM1_Down);
   fChain->SetBranchAddress("tau1_eta_DM1_Down", &tau1_eta_DM1_Down, &b_tau1_eta_DM1_Down);
   fChain->SetBranchAddress("tau1_phi_DM1_Down", &tau1_phi_DM1_Down, &b_tau1_phi_DM1_Down);
   fChain->SetBranchAddress("tau1_m_DM1_Down", &tau1_m_DM1_Down, &b_tau1_m_DM1_Down);
   fChain->SetBranchAddress("tau2_pt_DM1_Down", &tau2_pt_DM1_Down, &b_tau2_pt_DM1_Down);
   fChain->SetBranchAddress("tau2_eta_DM1_Down", &tau2_eta_DM1_Down, &b_tau2_eta_DM1_Down);
   fChain->SetBranchAddress("tau2_phi_DM1_Down", &tau2_phi_DM1_Down, &b_tau2_phi_DM1_Down);
   fChain->SetBranchAddress("tau2_m_DM1_Down", &tau2_m_DM1_Down, &b_tau2_m_DM1_Down);
   fChain->SetBranchAddress("tau1_pt_DM10_Up", &tau1_pt_DM10_Up, &b_tau1_pt_DM10_Up);
   fChain->SetBranchAddress("tau1_eta_DM10_Up", &tau1_eta_DM10_Up, &b_tau1_eta_DM10_Up);
   fChain->SetBranchAddress("tau1_phi_DM10_Up", &tau1_phi_DM10_Up, &b_tau1_phi_DM10_Up);
   fChain->SetBranchAddress("tau1_m_DM10_Up", &tau1_m_DM10_Up, &b_tau1_m_DM10_Up);
   fChain->SetBranchAddress("tau2_pt_DM10_Up", &tau2_pt_DM10_Up, &b_tau2_pt_DM10_Up);
   fChain->SetBranchAddress("tau2_eta_DM10_Up", &tau2_eta_DM10_Up, &b_tau2_eta_DM10_Up);
   fChain->SetBranchAddress("tau2_phi_DM10_Up", &tau2_phi_DM10_Up, &b_tau2_phi_DM10_Up);
   fChain->SetBranchAddress("tau2_m_DM10_Up", &tau2_m_DM10_Up, &b_tau2_m_DM10_Up);
   fChain->SetBranchAddress("tau1_pt_DM10_Down", &tau1_pt_DM10_Down, &b_tau1_pt_DM10_Down);
   fChain->SetBranchAddress("tau1_eta_DM10_Down", &tau1_eta_DM10_Down, &b_tau1_eta_DM10_Down);
   fChain->SetBranchAddress("tau1_phi_DM10_Down", &tau1_phi_DM10_Down, &b_tau1_phi_DM10_Down);
   fChain->SetBranchAddress("tau1_m_DM10_Down", &tau1_m_DM10_Down, &b_tau1_m_DM10_Down);
   fChain->SetBranchAddress("tau2_pt_DM10_Down", &tau2_pt_DM10_Down, &b_tau2_pt_DM10_Down);
   fChain->SetBranchAddress("tau2_eta_DM10_Down", &tau2_eta_DM10_Down, &b_tau2_eta_DM10_Down);
   fChain->SetBranchAddress("tau2_phi_DM10_Down", &tau2_phi_DM10_Down, &b_tau2_phi_DM10_Down);
   fChain->SetBranchAddress("tau2_m_DM10_Down", &tau2_m_DM10_Down, &b_tau2_m_DM10_Down);
   fChain->SetBranchAddress("tau1_pt_UncMet_Up", &tau1_pt_UncMet_Up, &b_tau1_pt_UncMet_Up);
   fChain->SetBranchAddress("tau1_eta_UncMet_Up", &tau1_eta_UncMet_Up, &b_tau1_eta_UncMet_Up);
   fChain->SetBranchAddress("tau1_phi_UncMet_Up", &tau1_phi_UncMet_Up, &b_tau1_phi_UncMet_Up);
   fChain->SetBranchAddress("tau1_m_UncMet_Up", &tau1_m_UncMet_Up, &b_tau1_m_UncMet_Up);
   fChain->SetBranchAddress("tau2_pt_UncMet_Up", &tau2_pt_UncMet_Up, &b_tau2_pt_UncMet_Up);
   fChain->SetBranchAddress("tau2_eta_UncMet_Up", &tau2_eta_UncMet_Up, &b_tau2_eta_UncMet_Up);
   fChain->SetBranchAddress("tau2_phi_UncMet_Up", &tau2_phi_UncMet_Up, &b_tau2_phi_UncMet_Up);
   fChain->SetBranchAddress("tau2_m_UncMet_Up", &tau2_m_UncMet_Up, &b_tau2_m_UncMet_Up);
   fChain->SetBranchAddress("tau1_pt_UncMet_Down", &tau1_pt_UncMet_Down, &b_tau1_pt_UncMet_Down);
   fChain->SetBranchAddress("tau1_eta_UncMet_Down", &tau1_eta_UncMet_Down, &b_tau1_eta_UncMet_Down);
   fChain->SetBranchAddress("tau1_phi_UncMet_Down", &tau1_phi_UncMet_Down, &b_tau1_phi_UncMet_Down);
   fChain->SetBranchAddress("tau1_m_UncMet_Down", &tau1_m_UncMet_Down, &b_tau1_m_UncMet_Down);
   fChain->SetBranchAddress("tau2_pt_UncMet_Down", &tau2_pt_UncMet_Down, &b_tau2_pt_UncMet_Down);
   fChain->SetBranchAddress("tau2_eta_UncMet_Down", &tau2_eta_UncMet_Down, &b_tau2_eta_UncMet_Down);
   fChain->SetBranchAddress("tau2_phi_UncMet_Down", &tau2_phi_UncMet_Down, &b_tau2_phi_UncMet_Down);
   fChain->SetBranchAddress("tau2_m_UncMet_Down", &tau2_m_UncMet_Down, &b_tau2_m_UncMet_Down);
   fChain->SetBranchAddress("tau1_pt_ClusteredMet_Up", &tau1_pt_ClusteredMet_Up, &b_tau1_pt_ClusteredMet_Up);
   fChain->SetBranchAddress("tau1_eta_ClusteredMet_Up", &tau1_eta_ClusteredMet_Up, &b_tau1_eta_ClusteredMet_Up);
   fChain->SetBranchAddress("tau1_phi_ClusteredMet_Up", &tau1_phi_ClusteredMet_Up, &b_tau1_phi_ClusteredMet_Up);
   fChain->SetBranchAddress("tau1_m_ClusteredMet_Up", &tau1_m_ClusteredMet_Up, &b_tau1_m_ClusteredMet_Up);
   fChain->SetBranchAddress("tau2_pt_ClusteredMet_Up", &tau2_pt_ClusteredMet_Up, &b_tau2_pt_ClusteredMet_Up);
   fChain->SetBranchAddress("tau2_eta_ClusteredMet_Up", &tau2_eta_ClusteredMet_Up, &b_tau2_eta_ClusteredMet_Up);
   fChain->SetBranchAddress("tau2_phi_ClusteredMet_Up", &tau2_phi_ClusteredMet_Up, &b_tau2_phi_ClusteredMet_Up);
   fChain->SetBranchAddress("tau2_m_ClusteredMet_Up", &tau2_m_ClusteredMet_Up, &b_tau2_m_ClusteredMet_Up);
   fChain->SetBranchAddress("tau1_pt_ClusteredMet_Down", &tau1_pt_ClusteredMet_Down, &b_tau1_pt_ClusteredMet_Down);
   fChain->SetBranchAddress("tau1_eta_ClusteredMet_Down", &tau1_eta_ClusteredMet_Down, &b_tau1_eta_ClusteredMet_Down);
   fChain->SetBranchAddress("tau1_phi_ClusteredMet_Down", &tau1_phi_ClusteredMet_Down, &b_tau1_phi_ClusteredMet_Down);
   fChain->SetBranchAddress("tau1_m_ClusteredMet_Down", &tau1_m_ClusteredMet_Down, &b_tau1_m_ClusteredMet_Down);
   fChain->SetBranchAddress("tau2_pt_ClusteredMet_Down", &tau2_pt_ClusteredMet_Down, &b_tau2_pt_ClusteredMet_Down);
   fChain->SetBranchAddress("tau2_eta_ClusteredMet_Down", &tau2_eta_ClusteredMet_Down, &b_tau2_eta_ClusteredMet_Down);
   fChain->SetBranchAddress("tau2_phi_ClusteredMet_Down", &tau2_phi_ClusteredMet_Down, &b_tau2_phi_ClusteredMet_Down);
   fChain->SetBranchAddress("tau2_m_ClusteredMet_Down", &tau2_m_ClusteredMet_Down, &b_tau2_m_ClusteredMet_Down);
   fChain->SetBranchAddress("Dbkg_VBF", &Dbkg_VBF, &b_Dbkg_VBF);
   fChain->SetBranchAddress("Dbkg_ggH", &Dbkg_ggH, &b_Dbkg_ggH);
   fChain->SetBranchAddress("Dbkg_WH", &Dbkg_WH, &b_Dbkg_WH);
   fChain->SetBranchAddress("Dbkg_ZH", &Dbkg_ZH, &b_Dbkg_ZH);
   fChain->SetBranchAddress("ME_sm_VBF", &ME_sm_VBF, &b_ME_sm_VBF);
   fChain->SetBranchAddress("ME_sm_ggH", &ME_sm_ggH, &b_ME_sm_ggH);
   fChain->SetBranchAddress("ME_sm_WH", &ME_sm_WH, &b_ME_sm_WH);
   fChain->SetBranchAddress("ME_sm_ZH", &ME_sm_ZH, &b_ME_sm_ZH);
   fChain->SetBranchAddress("ME_bkg", &ME_bkg, &b_ME_bkg);
   fChain->SetBranchAddress("ME_bkg1", &ME_bkg1, &b_ME_bkg1);
   fChain->SetBranchAddress("ME_bkg2", &ME_bkg2, &b_ME_bkg2);
   fChain->SetBranchAddress("Q2V1", &Q2V1, &b_Q2V1);
   fChain->SetBranchAddress("Q2V2", &Q2V2, &b_Q2V2);
   fChain->SetBranchAddress("costheta1", &costheta1, &b_costheta1);
   fChain->SetBranchAddress("costheta2", &costheta2, &b_costheta2);
   fChain->SetBranchAddress("Phi", &Phi, &b_Phi);
   fChain->SetBranchAddress("costhetastar", &costhetastar, &b_costhetastar);
   fChain->SetBranchAddress("Phi1", &Phi1, &b_Phi1);
//    fChain->SetBranchAddress("mjj", &mjj, &b_mjj);
   fChain->SetBranchAddress("Dbkg_VBF_ClusteredMet_Up", &Dbkg_VBF_ClusteredMet_Up, &b_Dbkg_VBF_ClusteredMet_Up);
   fChain->SetBranchAddress("Dbkg_ggH_ClusteredMet_Up", &Dbkg_ggH_ClusteredMet_Up, &b_Dbkg_ggH_ClusteredMet_Up);
   fChain->SetBranchAddress("Dbkg_WH_ClusteredMet_Up", &Dbkg_WH_ClusteredMet_Up, &b_Dbkg_WH_ClusteredMet_Up);
   fChain->SetBranchAddress("Dbkg_ZH_ClusteredMet_Up", &Dbkg_ZH_ClusteredMet_Up, &b_Dbkg_ZH_ClusteredMet_Up);
   fChain->SetBranchAddress("ME_sm_VBF_ClusteredMet_Up", &ME_sm_VBF_ClusteredMet_Up, &b_ME_sm_VBF_ClusteredMet_Up);
   fChain->SetBranchAddress("ME_sm_ggH_ClusteredMet_Up", &ME_sm_ggH_ClusteredMet_Up, &b_ME_sm_ggH_ClusteredMet_Up);
   fChain->SetBranchAddress("ME_sm_WH_ClusteredMet_Up", &ME_sm_WH_ClusteredMet_Up, &b_ME_sm_WH_ClusteredMet_Up);
   fChain->SetBranchAddress("ME_sm_ZH_ClusteredMet_Up", &ME_sm_ZH_ClusteredMet_Up, &b_ME_sm_ZH_ClusteredMet_Up);
   fChain->SetBranchAddress("ME_bkg_ClusteredMet_Up", &ME_bkg_ClusteredMet_Up, &b_ME_bkg_ClusteredMet_Up);
   fChain->SetBranchAddress("ME_bkg1_ClusteredMet_Up", &ME_bkg1_ClusteredMet_Up, &b_ME_bkg1_ClusteredMet_Up);
   fChain->SetBranchAddress("ME_bkg2_ClusteredMet_Up", &ME_bkg2_ClusteredMet_Up, &b_ME_bkg2_ClusteredMet_Up);
   fChain->SetBranchAddress("Q2V1_ClusteredMet_Up", &Q2V1_ClusteredMet_Up, &b_Q2V1_ClusteredMet_Up);
   fChain->SetBranchAddress("Q2V2_ClusteredMet_Up", &Q2V2_ClusteredMet_Up, &b_Q2V2_ClusteredMet_Up);
   fChain->SetBranchAddress("costheta1_ClusteredMet_Up", &costheta1_ClusteredMet_Up, &b_costheta1_ClusteredMet_Up);
   fChain->SetBranchAddress("costheta2_ClusteredMet_Up", &costheta2_ClusteredMet_Up, &b_costheta2_ClusteredMet_Up);
   fChain->SetBranchAddress("Phi_ClusteredMet_Up", &Phi_ClusteredMet_Up, &b_Phi_ClusteredMet_Up);
   fChain->SetBranchAddress("costhetastar_ClusteredMet_Up", &costhetastar_ClusteredMet_Up, &b_costhetastar_ClusteredMet_Up);
   fChain->SetBranchAddress("Phi1_ClusteredMet_Up", &Phi1_ClusteredMet_Up, &b_Phi1_ClusteredMet_Up);
   fChain->SetBranchAddress("mjj_ClusteredMet_Up", &mjj_ClusteredMet_Up, &b_mjj_ClusteredMet_Up);
   fChain->SetBranchAddress("Dbkg_VBF_ClusteredMet_Down", &Dbkg_VBF_ClusteredMet_Down, &b_Dbkg_VBF_ClusteredMet_Down);
   fChain->SetBranchAddress("Dbkg_ggH_ClusteredMet_Down", &Dbkg_ggH_ClusteredMet_Down, &b_Dbkg_ggH_ClusteredMet_Down);
   fChain->SetBranchAddress("Dbkg_WH_ClusteredMet_Down", &Dbkg_WH_ClusteredMet_Down, &b_Dbkg_WH_ClusteredMet_Down);
   fChain->SetBranchAddress("Dbkg_ZH_ClusteredMet_Down", &Dbkg_ZH_ClusteredMet_Down, &b_Dbkg_ZH_ClusteredMet_Down);
   fChain->SetBranchAddress("ME_sm_VBF_ClusteredMet_Down", &ME_sm_VBF_ClusteredMet_Down, &b_ME_sm_VBF_ClusteredMet_Down);
   fChain->SetBranchAddress("ME_sm_ggH_ClusteredMet_Down", &ME_sm_ggH_ClusteredMet_Down, &b_ME_sm_ggH_ClusteredMet_Down);
   fChain->SetBranchAddress("ME_sm_WH_ClusteredMet_Down", &ME_sm_WH_ClusteredMet_Down, &b_ME_sm_WH_ClusteredMet_Down);
   fChain->SetBranchAddress("ME_sm_ZH_ClusteredMet_Down", &ME_sm_ZH_ClusteredMet_Down, &b_ME_sm_ZH_ClusteredMet_Down);
   fChain->SetBranchAddress("ME_bkg_ClusteredMet_Down", &ME_bkg_ClusteredMet_Down, &b_ME_bkg_ClusteredMet_Down);
   fChain->SetBranchAddress("ME_bkg1_ClusteredMet_Down", &ME_bkg1_ClusteredMet_Down, &b_ME_bkg1_ClusteredMet_Down);
   fChain->SetBranchAddress("ME_bkg2_ClusteredMet_Down", &ME_bkg2_ClusteredMet_Down, &b_ME_bkg2_ClusteredMet_Down);
   fChain->SetBranchAddress("Q2V1_ClusteredMet_Down", &Q2V1_ClusteredMet_Down, &b_Q2V1_ClusteredMet_Down);
   fChain->SetBranchAddress("Q2V2_ClusteredMet_Down", &Q2V2_ClusteredMet_Down, &b_Q2V2_ClusteredMet_Down);
   fChain->SetBranchAddress("costheta1_ClusteredMet_Down", &costheta1_ClusteredMet_Down, &b_costheta1_ClusteredMet_Down);
   fChain->SetBranchAddress("costheta2_ClusteredMet_Down", &costheta2_ClusteredMet_Down, &b_costheta2_ClusteredMet_Down);
   fChain->SetBranchAddress("Phi_ClusteredMet_Down", &Phi_ClusteredMet_Down, &b_Phi_ClusteredMet_Down);
   fChain->SetBranchAddress("costhetastar_ClusteredMet_Down", &costhetastar_ClusteredMet_Down, &b_costhetastar_ClusteredMet_Down);
   fChain->SetBranchAddress("Phi1_ClusteredMet_Down", &Phi1_ClusteredMet_Down, &b_Phi1_ClusteredMet_Down);
   fChain->SetBranchAddress("mjj_ClusteredMet_Down", &mjj_ClusteredMet_Down, &b_mjj_ClusteredMet_Down);
   fChain->SetBranchAddress("Dbkg_VBF_UncMet_Up", &Dbkg_VBF_UncMet_Up, &b_Dbkg_VBF_UncMet_Up);
   fChain->SetBranchAddress("Dbkg_ggH_UncMet_Up", &Dbkg_ggH_UncMet_Up, &b_Dbkg_ggH_UncMet_Up);
   fChain->SetBranchAddress("Dbkg_WH_UncMet_Up", &Dbkg_WH_UncMet_Up, &b_Dbkg_WH_UncMet_Up);
   fChain->SetBranchAddress("Dbkg_ZH_UncMet_Up", &Dbkg_ZH_UncMet_Up, &b_Dbkg_ZH_UncMet_Up);
   fChain->SetBranchAddress("ME_sm_VBF_UncMet_Up", &ME_sm_VBF_UncMet_Up, &b_ME_sm_VBF_UncMet_Up);
   fChain->SetBranchAddress("ME_sm_ggH_UncMet_Up", &ME_sm_ggH_UncMet_Up, &b_ME_sm_ggH_UncMet_Up);
   fChain->SetBranchAddress("ME_sm_WH_UncMet_Up", &ME_sm_WH_UncMet_Up, &b_ME_sm_WH_UncMet_Up);
   fChain->SetBranchAddress("ME_sm_ZH_UncMet_Up", &ME_sm_ZH_UncMet_Up, &b_ME_sm_ZH_UncMet_Up);
   fChain->SetBranchAddress("ME_bkg_UncMet_Up", &ME_bkg_UncMet_Up, &b_ME_bkg_UncMet_Up);
   fChain->SetBranchAddress("ME_bkg1_UncMet_Up", &ME_bkg1_UncMet_Up, &b_ME_bkg1_UncMet_Up);
   fChain->SetBranchAddress("ME_bkg2_UncMet_Up", &ME_bkg2_UncMet_Up, &b_ME_bkg2_UncMet_Up);
   fChain->SetBranchAddress("Q2V1_UncMet_Up", &Q2V1_UncMet_Up, &b_Q2V1_UncMet_Up);
   fChain->SetBranchAddress("Q2V2_UncMet_Up", &Q2V2_UncMet_Up, &b_Q2V2_UncMet_Up);
   fChain->SetBranchAddress("costheta1_UncMet_Up", &costheta1_UncMet_Up, &b_costheta1_UncMet_Up);
   fChain->SetBranchAddress("costheta2_UncMet_Up", &costheta2_UncMet_Up, &b_costheta2_UncMet_Up);
   fChain->SetBranchAddress("Phi_UncMet_Up", &Phi_UncMet_Up, &b_Phi_UncMet_Up);
   fChain->SetBranchAddress("costhetastar_UncMet_Up", &costhetastar_UncMet_Up, &b_costhetastar_UncMet_Up);
   fChain->SetBranchAddress("Phi1_UncMet_Up", &Phi1_UncMet_Up, &b_Phi1_UncMet_Up);
   fChain->SetBranchAddress("mjj_UncMet_Up", &mjj_UncMet_Up, &b_mjj_UncMet_Up);
   fChain->SetBranchAddress("Dbkg_VBF_UncMet_Down", &Dbkg_VBF_UncMet_Down, &b_Dbkg_VBF_UncMet_Down);
   fChain->SetBranchAddress("Dbkg_ggH_UncMet_Down", &Dbkg_ggH_UncMet_Down, &b_Dbkg_ggH_UncMet_Down);
   fChain->SetBranchAddress("Dbkg_WH_UncMet_Down", &Dbkg_WH_UncMet_Down, &b_Dbkg_WH_UncMet_Down);
   fChain->SetBranchAddress("Dbkg_ZH_UncMet_Down", &Dbkg_ZH_UncMet_Down, &b_Dbkg_ZH_UncMet_Down);
   fChain->SetBranchAddress("ME_sm_VBF_UncMet_Down", &ME_sm_VBF_UncMet_Down, &b_ME_sm_VBF_UncMet_Down);
   fChain->SetBranchAddress("ME_sm_ggH_UncMet_Down", &ME_sm_ggH_UncMet_Down, &b_ME_sm_ggH_UncMet_Down);
   fChain->SetBranchAddress("ME_sm_WH_UncMet_Down", &ME_sm_WH_UncMet_Down, &b_ME_sm_WH_UncMet_Down);
   fChain->SetBranchAddress("ME_sm_ZH_UncMet_Down", &ME_sm_ZH_UncMet_Down, &b_ME_sm_ZH_UncMet_Down);
   fChain->SetBranchAddress("ME_bkg_UncMet_Down", &ME_bkg_UncMet_Down, &b_ME_bkg_UncMet_Down);
   fChain->SetBranchAddress("ME_bkg1_UncMet_Down", &ME_bkg1_UncMet_Down, &b_ME_bkg1_UncMet_Down);
   fChain->SetBranchAddress("ME_bkg2_UncMet_Down", &ME_bkg2_UncMet_Down, &b_ME_bkg2_UncMet_Down);
   fChain->SetBranchAddress("Q2V1_UncMet_Down", &Q2V1_UncMet_Down, &b_Q2V1_UncMet_Down);
   fChain->SetBranchAddress("Q2V2_UncMet_Down", &Q2V2_UncMet_Down, &b_Q2V2_UncMet_Down);
   fChain->SetBranchAddress("costheta1_UncMet_Down", &costheta1_UncMet_Down, &b_costheta1_UncMet_Down);
   fChain->SetBranchAddress("costheta2_UncMet_Down", &costheta2_UncMet_Down, &b_costheta2_UncMet_Down);
   fChain->SetBranchAddress("Phi_UncMet_Down", &Phi_UncMet_Down, &b_Phi_UncMet_Down);
   fChain->SetBranchAddress("costhetastar_UncMet_Down", &costhetastar_UncMet_Down, &b_costhetastar_UncMet_Down);
   fChain->SetBranchAddress("Phi1_UncMet_Down", &Phi1_UncMet_Down, &b_Phi1_UncMet_Down);
   fChain->SetBranchAddress("mjj_UncMet_Down", &mjj_UncMet_Down, &b_mjj_UncMet_Down);
   fChain->SetBranchAddress("Dbkg_VBF_JESUp", &Dbkg_VBF_JESUp, &b_Dbkg_VBF_JESUp);
   fChain->SetBranchAddress("Dbkg_ggH_JESUp", &Dbkg_ggH_JESUp, &b_Dbkg_ggH_JESUp);
   fChain->SetBranchAddress("Dbkg_WH_JESUp", &Dbkg_WH_JESUp, &b_Dbkg_WH_JESUp);
   fChain->SetBranchAddress("Dbkg_ZH_JESUp", &Dbkg_ZH_JESUp, &b_Dbkg_ZH_JESUp);
   fChain->SetBranchAddress("ME_sm_VBF_JESUp", &ME_sm_VBF_JESUp, &b_ME_sm_VBF_JESUp);
   fChain->SetBranchAddress("ME_sm_ggH_JESUp", &ME_sm_ggH_JESUp, &b_ME_sm_ggH_JESUp);
   fChain->SetBranchAddress("ME_sm_WH_JESUp", &ME_sm_WH_JESUp, &b_ME_sm_WH_JESUp);
   fChain->SetBranchAddress("ME_sm_ZH_JESUp", &ME_sm_ZH_JESUp, &b_ME_sm_ZH_JESUp);
   fChain->SetBranchAddress("ME_bkg_JESUp", &ME_bkg_JESUp, &b_ME_bkg_JESUp);
   fChain->SetBranchAddress("ME_bkg1_JESUp", &ME_bkg1_JESUp, &b_ME_bkg1_JESUp);
   fChain->SetBranchAddress("ME_bkg2_JESUp", &ME_bkg2_JESUp, &b_ME_bkg2_JESUp);
   fChain->SetBranchAddress("Q2V1_JESUp", &Q2V1_JESUp, &b_Q2V1_JESUp);
   fChain->SetBranchAddress("Q2V2_JESUp", &Q2V2_JESUp, &b_Q2V2_JESUp);
   fChain->SetBranchAddress("costheta1_JESUp", &costheta1_JESUp, &b_costheta1_JESUp);
   fChain->SetBranchAddress("costheta2_JESUp", &costheta2_JESUp, &b_costheta2_JESUp);
   fChain->SetBranchAddress("Phi_JESUp", &Phi_JESUp, &b_Phi_JESUp);
   fChain->SetBranchAddress("costhetastar_JESUp", &costhetastar_JESUp, &b_costhetastar_JESUp);
   fChain->SetBranchAddress("Phi1_JESUp", &Phi1_JESUp, &b_Phi1_JESUp);
//    fChain->SetBranchAddress("mjj_JESUp", &mjj_JESUp, &b_mjj_JESUp);
   fChain->SetBranchAddress("Dbkg_VBF_JESDown", &Dbkg_VBF_JESDown, &b_Dbkg_VBF_JESDown);
   fChain->SetBranchAddress("Dbkg_ggH_JESDown", &Dbkg_ggH_JESDown, &b_Dbkg_ggH_JESDown);
   fChain->SetBranchAddress("Dbkg_WH_JESDown", &Dbkg_WH_JESDown, &b_Dbkg_WH_JESDown);
   fChain->SetBranchAddress("Dbkg_ZH_JESDown", &Dbkg_ZH_JESDown, &b_Dbkg_ZH_JESDown);
   fChain->SetBranchAddress("ME_sm_VBF_JESDown", &ME_sm_VBF_JESDown, &b_ME_sm_VBF_JESDown);
   fChain->SetBranchAddress("ME_sm_ggH_JESDown", &ME_sm_ggH_JESDown, &b_ME_sm_ggH_JESDown);
   fChain->SetBranchAddress("ME_sm_WH_JESDown", &ME_sm_WH_JESDown, &b_ME_sm_WH_JESDown);
   fChain->SetBranchAddress("ME_sm_ZH_JESDown", &ME_sm_ZH_JESDown, &b_ME_sm_ZH_JESDown);
   fChain->SetBranchAddress("ME_bkg_JESDown", &ME_bkg_JESDown, &b_ME_bkg_JESDown);
   fChain->SetBranchAddress("ME_bkg1_JESDown", &ME_bkg1_JESDown, &b_ME_bkg1_JESDown);
   fChain->SetBranchAddress("ME_bkg2_JESDown", &ME_bkg2_JESDown, &b_ME_bkg2_JESDown);
   fChain->SetBranchAddress("Q2V1_JESDown", &Q2V1_JESDown, &b_Q2V1_JESDown);
   fChain->SetBranchAddress("Q2V2_JESDown", &Q2V2_JESDown, &b_Q2V2_JESDown);
   fChain->SetBranchAddress("costheta1_JESDown", &costheta1_JESDown, &b_costheta1_JESDown);
   fChain->SetBranchAddress("costheta2_JESDown", &costheta2_JESDown, &b_costheta2_JESDown);
   fChain->SetBranchAddress("Phi_JESDown", &Phi_JESDown, &b_Phi_JESDown);
   fChain->SetBranchAddress("costhetastar_JESDown", &costhetastar_JESDown, &b_costhetastar_JESDown);
   fChain->SetBranchAddress("Phi1_JESDown", &Phi1_JESDown, &b_Phi1_JESDown);
//    fChain->SetBranchAddress("mjj_JESDown", &mjj_JESDown, &b_mjj_JESDown);
   fChain->SetBranchAddress("Dbkg_VBF_DM0_Up", &Dbkg_VBF_DM0_Up, &b_Dbkg_VBF_DM0_Up);
   fChain->SetBranchAddress("Dbkg_ggH_DM0_Up", &Dbkg_ggH_DM0_Up, &b_Dbkg_ggH_DM0_Up);
   fChain->SetBranchAddress("Dbkg_WH_DM0_Up", &Dbkg_WH_DM0_Up, &b_Dbkg_WH_DM0_Up);
   fChain->SetBranchAddress("Dbkg_ZH_DM0_Up", &Dbkg_ZH_DM0_Up, &b_Dbkg_ZH_DM0_Up);
   fChain->SetBranchAddress("ME_sm_VBF_DM0_Up", &ME_sm_VBF_DM0_Up, &b_ME_sm_VBF_DM0_Up);
   fChain->SetBranchAddress("ME_sm_ggH_DM0_Up", &ME_sm_ggH_DM0_Up, &b_ME_sm_ggH_DM0_Up);
   fChain->SetBranchAddress("ME_sm_WH_DM0_Up", &ME_sm_WH_DM0_Up, &b_ME_sm_WH_DM0_Up);
   fChain->SetBranchAddress("ME_sm_ZH_DM0_Up", &ME_sm_ZH_DM0_Up, &b_ME_sm_ZH_DM0_Up);
   fChain->SetBranchAddress("ME_bkg_DM0_Up", &ME_bkg_DM0_Up, &b_ME_bkg_DM0_Up);
   fChain->SetBranchAddress("ME_bkg1_DM0_Up", &ME_bkg1_DM0_Up, &b_ME_bkg1_DM0_Up);
   fChain->SetBranchAddress("ME_bkg2_DM0_Up", &ME_bkg2_DM0_Up, &b_ME_bkg2_DM0_Up);
   fChain->SetBranchAddress("Q2V1_DM0_Up", &Q2V1_DM0_Up, &b_Q2V1_DM0_Up);
   fChain->SetBranchAddress("Q2V2_DM0_Up", &Q2V2_DM0_Up, &b_Q2V2_DM0_Up);
   fChain->SetBranchAddress("costheta1_DM0_Up", &costheta1_DM0_Up, &b_costheta1_DM0_Up);
   fChain->SetBranchAddress("costheta2_DM0_Up", &costheta2_DM0_Up, &b_costheta2_DM0_Up);
   fChain->SetBranchAddress("Phi_DM0_Up", &Phi_DM0_Up, &b_Phi_DM0_Up);
   fChain->SetBranchAddress("costhetastar_DM0_Up", &costhetastar_DM0_Up, &b_costhetastar_DM0_Up);
   fChain->SetBranchAddress("Phi1_DM0_Up", &Phi1_DM0_Up, &b_Phi1_DM0_Up);
   fChain->SetBranchAddress("mjj_DM0_Up", &mjj_DM0_Up, &b_mjj_DM0_Up);
   fChain->SetBranchAddress("Dbkg_VBF_DM0_Down", &Dbkg_VBF_DM0_Down, &b_Dbkg_VBF_DM0_Down);
   fChain->SetBranchAddress("Dbkg_ggH_DM0_Down", &Dbkg_ggH_DM0_Down, &b_Dbkg_ggH_DM0_Down);
   fChain->SetBranchAddress("Dbkg_WH_DM0_Down", &Dbkg_WH_DM0_Down, &b_Dbkg_WH_DM0_Down);
   fChain->SetBranchAddress("Dbkg_ZH_DM0_Down", &Dbkg_ZH_DM0_Down, &b_Dbkg_ZH_DM0_Down);
   fChain->SetBranchAddress("ME_sm_VBF_DM0_Down", &ME_sm_VBF_DM0_Down, &b_ME_sm_VBF_DM0_Down);
   fChain->SetBranchAddress("ME_sm_ggH_DM0_Down", &ME_sm_ggH_DM0_Down, &b_ME_sm_ggH_DM0_Down);
   fChain->SetBranchAddress("ME_sm_WH_DM0_Down", &ME_sm_WH_DM0_Down, &b_ME_sm_WH_DM0_Down);
   fChain->SetBranchAddress("ME_sm_ZH_DM0_Down", &ME_sm_ZH_DM0_Down, &b_ME_sm_ZH_DM0_Down);
   fChain->SetBranchAddress("ME_bkg_DM0_Down", &ME_bkg_DM0_Down, &b_ME_bkg_DM0_Down);
   fChain->SetBranchAddress("ME_bkg1_DM0_Down", &ME_bkg1_DM0_Down, &b_ME_bkg1_DM0_Down);
   fChain->SetBranchAddress("ME_bkg2_DM0_Down", &ME_bkg2_DM0_Down, &b_ME_bkg2_DM0_Down);
   fChain->SetBranchAddress("Q2V1_DM0_Down", &Q2V1_DM0_Down, &b_Q2V1_DM0_Down);
   fChain->SetBranchAddress("Q2V2_DM0_Down", &Q2V2_DM0_Down, &b_Q2V2_DM0_Down);
   fChain->SetBranchAddress("costheta1_DM0_Down", &costheta1_DM0_Down, &b_costheta1_DM0_Down);
   fChain->SetBranchAddress("costheta2_DM0_Down", &costheta2_DM0_Down, &b_costheta2_DM0_Down);
   fChain->SetBranchAddress("Phi_DM0_Down", &Phi_DM0_Down, &b_Phi_DM0_Down);
   fChain->SetBranchAddress("costhetastar_DM0_Down", &costhetastar_DM0_Down, &b_costhetastar_DM0_Down);
   fChain->SetBranchAddress("Phi1_DM0_Down", &Phi1_DM0_Down, &b_Phi1_DM0_Down);
   fChain->SetBranchAddress("mjj_DM0_Down", &mjj_DM0_Down, &b_mjj_DM0_Down);
   fChain->SetBranchAddress("Dbkg_VBF_DM1_Up", &Dbkg_VBF_DM1_Up, &b_Dbkg_VBF_DM1_Up);
   fChain->SetBranchAddress("Dbkg_ggH_DM1_Up", &Dbkg_ggH_DM1_Up, &b_Dbkg_ggH_DM1_Up);
   fChain->SetBranchAddress("Dbkg_WH_DM1_Up", &Dbkg_WH_DM1_Up, &b_Dbkg_WH_DM1_Up);
   fChain->SetBranchAddress("Dbkg_ZH_DM1_Up", &Dbkg_ZH_DM1_Up, &b_Dbkg_ZH_DM1_Up);
   fChain->SetBranchAddress("ME_sm_VBF_DM1_Up", &ME_sm_VBF_DM1_Up, &b_ME_sm_VBF_DM1_Up);
   fChain->SetBranchAddress("ME_sm_ggH_DM1_Up", &ME_sm_ggH_DM1_Up, &b_ME_sm_ggH_DM1_Up);
   fChain->SetBranchAddress("ME_sm_WH_DM1_Up", &ME_sm_WH_DM1_Up, &b_ME_sm_WH_DM1_Up);
   fChain->SetBranchAddress("ME_sm_ZH_DM1_Up", &ME_sm_ZH_DM1_Up, &b_ME_sm_ZH_DM1_Up);
   fChain->SetBranchAddress("ME_bkg_DM1_Up", &ME_bkg_DM1_Up, &b_ME_bkg_DM1_Up);
   fChain->SetBranchAddress("ME_bkg1_DM1_Up", &ME_bkg1_DM1_Up, &b_ME_bkg1_DM1_Up);
   fChain->SetBranchAddress("ME_bkg2_DM1_Up", &ME_bkg2_DM1_Up, &b_ME_bkg2_DM1_Up);
   fChain->SetBranchAddress("Q2V1_DM1_Up", &Q2V1_DM1_Up, &b_Q2V1_DM1_Up);
   fChain->SetBranchAddress("Q2V2_DM1_Up", &Q2V2_DM1_Up, &b_Q2V2_DM1_Up);
   fChain->SetBranchAddress("costheta1_DM1_Up", &costheta1_DM1_Up, &b_costheta1_DM1_Up);
   fChain->SetBranchAddress("costheta2_DM1_Up", &costheta2_DM1_Up, &b_costheta2_DM1_Up);
   fChain->SetBranchAddress("Phi_DM1_Up", &Phi_DM1_Up, &b_Phi_DM1_Up);
   fChain->SetBranchAddress("costhetastar_DM1_Up", &costhetastar_DM1_Up, &b_costhetastar_DM1_Up);
   fChain->SetBranchAddress("Phi1_DM1_Up", &Phi1_DM1_Up, &b_Phi1_DM1_Up);
   fChain->SetBranchAddress("mjj_DM1_Up", &mjj_DM1_Up, &b_mjj_DM1_Up);
   fChain->SetBranchAddress("Dbkg_VBF_DM1_Down", &Dbkg_VBF_DM1_Down, &b_Dbkg_VBF_DM1_Down);
   fChain->SetBranchAddress("Dbkg_ggH_DM1_Down", &Dbkg_ggH_DM1_Down, &b_Dbkg_ggH_DM1_Down);
   fChain->SetBranchAddress("Dbkg_WH_DM1_Down", &Dbkg_WH_DM1_Down, &b_Dbkg_WH_DM1_Down);
   fChain->SetBranchAddress("Dbkg_ZH_DM1_Down", &Dbkg_ZH_DM1_Down, &b_Dbkg_ZH_DM1_Down);
   fChain->SetBranchAddress("ME_sm_VBF_DM1_Down", &ME_sm_VBF_DM1_Down, &b_ME_sm_VBF_DM1_Down);
   fChain->SetBranchAddress("ME_sm_ggH_DM1_Down", &ME_sm_ggH_DM1_Down, &b_ME_sm_ggH_DM1_Down);
   fChain->SetBranchAddress("ME_sm_WH_DM1_Down", &ME_sm_WH_DM1_Down, &b_ME_sm_WH_DM1_Down);
   fChain->SetBranchAddress("ME_sm_ZH_DM1_Down", &ME_sm_ZH_DM1_Down, &b_ME_sm_ZH_DM1_Down);
   fChain->SetBranchAddress("ME_bkg_DM1_Down", &ME_bkg_DM1_Down, &b_ME_bkg_DM1_Down);
   fChain->SetBranchAddress("ME_bkg1_DM1_Down", &ME_bkg1_DM1_Down, &b_ME_bkg1_DM1_Down);
   fChain->SetBranchAddress("ME_bkg2_DM1_Down", &ME_bkg2_DM1_Down, &b_ME_bkg2_DM1_Down);
   fChain->SetBranchAddress("Q2V1_DM1_Down", &Q2V1_DM1_Down, &b_Q2V1_DM1_Down);
   fChain->SetBranchAddress("Q2V2_DM1_Down", &Q2V2_DM1_Down, &b_Q2V2_DM1_Down);
   fChain->SetBranchAddress("costheta1_DM1_Down", &costheta1_DM1_Down, &b_costheta1_DM1_Down);
   fChain->SetBranchAddress("costheta2_DM1_Down", &costheta2_DM1_Down, &b_costheta2_DM1_Down);
   fChain->SetBranchAddress("Phi_DM1_Down", &Phi_DM1_Down, &b_Phi_DM1_Down);
   fChain->SetBranchAddress("costhetastar_DM1_Down", &costhetastar_DM1_Down, &b_costhetastar_DM1_Down);
   fChain->SetBranchAddress("Phi1_DM1_Down", &Phi1_DM1_Down, &b_Phi1_DM1_Down);
   fChain->SetBranchAddress("mjj_DM1_Down", &mjj_DM1_Down, &b_mjj_DM1_Down);
   fChain->SetBranchAddress("Dbkg_VBF_DM10_Up", &Dbkg_VBF_DM10_Up, &b_Dbkg_VBF_DM10_Up);
   fChain->SetBranchAddress("Dbkg_ggH_DM10_Up", &Dbkg_ggH_DM10_Up, &b_Dbkg_ggH_DM10_Up);
   fChain->SetBranchAddress("Dbkg_WH_DM10_Up", &Dbkg_WH_DM10_Up, &b_Dbkg_WH_DM10_Up);
   fChain->SetBranchAddress("Dbkg_ZH_DM10_Up", &Dbkg_ZH_DM10_Up, &b_Dbkg_ZH_DM10_Up);
   fChain->SetBranchAddress("ME_sm_VBF_DM10_Up", &ME_sm_VBF_DM10_Up, &b_ME_sm_VBF_DM10_Up);
   fChain->SetBranchAddress("ME_sm_ggH_DM10_Up", &ME_sm_ggH_DM10_Up, &b_ME_sm_ggH_DM10_Up);
   fChain->SetBranchAddress("ME_sm_WH_DM10_Up", &ME_sm_WH_DM10_Up, &b_ME_sm_WH_DM10_Up);
   fChain->SetBranchAddress("ME_sm_ZH_DM10_Up", &ME_sm_ZH_DM10_Up, &b_ME_sm_ZH_DM10_Up);
   fChain->SetBranchAddress("ME_bkg_DM10_Up", &ME_bkg_DM10_Up, &b_ME_bkg_DM10_Up);
   fChain->SetBranchAddress("ME_bkg1_DM10_Up", &ME_bkg1_DM10_Up, &b_ME_bkg1_DM10_Up);
   fChain->SetBranchAddress("ME_bkg2_DM10_Up", &ME_bkg2_DM10_Up, &b_ME_bkg2_DM10_Up);
   fChain->SetBranchAddress("Q2V1_DM10_Up", &Q2V1_DM10_Up, &b_Q2V1_DM10_Up);
   fChain->SetBranchAddress("Q2V2_DM10_Up", &Q2V2_DM10_Up, &b_Q2V2_DM10_Up);
   fChain->SetBranchAddress("costheta1_DM10_Up", &costheta1_DM10_Up, &b_costheta1_DM10_Up);
   fChain->SetBranchAddress("costheta2_DM10_Up", &costheta2_DM10_Up, &b_costheta2_DM10_Up);
   fChain->SetBranchAddress("Phi_DM10_Up", &Phi_DM10_Up, &b_Phi_DM10_Up);
   fChain->SetBranchAddress("costhetastar_DM10_Up", &costhetastar_DM10_Up, &b_costhetastar_DM10_Up);
   fChain->SetBranchAddress("Phi1_DM10_Up", &Phi1_DM10_Up, &b_Phi1_DM10_Up);
   fChain->SetBranchAddress("mjj_DM10_Up", &mjj_DM10_Up, &b_mjj_DM10_Up);
   fChain->SetBranchAddress("Dbkg_VBF_DM10_Down", &Dbkg_VBF_DM10_Down, &b_Dbkg_VBF_DM10_Down);
   fChain->SetBranchAddress("Dbkg_ggH_DM10_Down", &Dbkg_ggH_DM10_Down, &b_Dbkg_ggH_DM10_Down);
   fChain->SetBranchAddress("Dbkg_WH_DM10_Down", &Dbkg_WH_DM10_Down, &b_Dbkg_WH_DM10_Down);
   fChain->SetBranchAddress("Dbkg_ZH_DM10_Down", &Dbkg_ZH_DM10_Down, &b_Dbkg_ZH_DM10_Down);
   fChain->SetBranchAddress("ME_sm_VBF_DM10_Down", &ME_sm_VBF_DM10_Down, &b_ME_sm_VBF_DM10_Down);
   fChain->SetBranchAddress("ME_sm_ggH_DM10_Down", &ME_sm_ggH_DM10_Down, &b_ME_sm_ggH_DM10_Down);
   fChain->SetBranchAddress("ME_sm_WH_DM10_Down", &ME_sm_WH_DM10_Down, &b_ME_sm_WH_DM10_Down);
   fChain->SetBranchAddress("ME_sm_ZH_DM10_Down", &ME_sm_ZH_DM10_Down, &b_ME_sm_ZH_DM10_Down);
   fChain->SetBranchAddress("ME_bkg_DM10_Down", &ME_bkg_DM10_Down, &b_ME_bkg_DM10_Down);
   fChain->SetBranchAddress("ME_bkg1_DM10_Down", &ME_bkg1_DM10_Down, &b_ME_bkg1_DM10_Down);
   fChain->SetBranchAddress("ME_bkg2_DM10_Down", &ME_bkg2_DM10_Down, &b_ME_bkg2_DM10_Down);
   fChain->SetBranchAddress("Q2V1_DM10_Down", &Q2V1_DM10_Down, &b_Q2V1_DM10_Down);
   fChain->SetBranchAddress("Q2V2_DM10_Down", &Q2V2_DM10_Down, &b_Q2V2_DM10_Down);
   fChain->SetBranchAddress("costheta1_DM10_Down", &costheta1_DM10_Down, &b_costheta1_DM10_Down);
   fChain->SetBranchAddress("costheta2_DM10_Down", &costheta2_DM10_Down, &b_costheta2_DM10_Down);
   fChain->SetBranchAddress("Phi_DM10_Down", &Phi_DM10_Down, &b_Phi_DM10_Down);
   fChain->SetBranchAddress("costhetastar_DM10_Down", &costhetastar_DM10_Down, &b_costhetastar_DM10_Down);
   fChain->SetBranchAddress("Phi1_DM10_Down", &Phi1_DM10_Down, &b_Phi1_DM10_Down);
   fChain->SetBranchAddress("mjj_DM10_Down", &mjj_DM10_Down, &b_mjj_DM10_Down);
}

#endif // #ifdef SkimmedTree_mt_cxx
