#include "SkimmedTree_tt.h"
#include "SkimmedTree_mt.h"

TTree* namu;
Int_t cat_0jet, cat_boosted, cat_vbf, cat_inclusive, cat_antiiso, cat_antiiso_0jet, cat_antiiso_boosted, cat_antiiso_vbf,
  cat_qcd, cat_qcd_0jet, cat_qcd_boosted, cat_qcd_vbf, is_signal, is_ai, is_qcd;
Float_t evtwt,
  el_pt, el_eta, el_phi, el_mass, el_charge, el_iso,
  mu_pt, mu_eta, mu_phi, mu_mass, mu_charge, mu_iso,
  t1_pt, t1_eta, t1_phi, t1_mass, t1_charge, t1_dmf, t1_dmf_new, t1_decayMode,
  t1_iso_VL, t1_iso_L, t1_iso_M, t1_iso_T, t1_iso_VT, t1_iso,
  t1_newiso_VL, t1_newiso_L, t1_newiso_M, t1_newiso_T, t1_newiso_VT, t1_newiso,
  t2_pt, t2_eta, t2_phi, t2_mass, t2_charge, t2_dmf, t2_dmf_new, t2_decayMode, 
  t2_iso_VL, t2_iso_L, t2_iso_M, t2_iso_T, t2_iso_VT, t2_iso,
  t2_newiso_VL, t2_newiso_L, t2_newiso_M, t2_newiso_T, t2_newiso_VT, t2_newiso,
  njets, nbjets,
  j1_pt, j1_eta, j1_phi,
  j2_pt, j2_eta, j2_phi,
  b1_pt, b1_eta, b1_phi,
  b2_pt, b2_eta, b2_phi,
  met, metphi, mjj,  numGenJets, mt, 
  pt_sv, m_sv, Dbkg_VBF, Dbkg_ggH,
  Phi, Phi1, costheta1, costheta2, costhetastar, Q2V1, Q2V2,
  ME_sm_VBF, ME_sm_ggH, ME_sm_WH, ME_sm_ZH, ME_bkg, ME_bkg1, ME_bkg2,
  higgs_pT, higgs_m, hjj_pT, hjj_m, dEtajj, dPhijj, vis_mass, NN_disc_QCD, NN_disc_ZTT;
Float_t w_lumi, w_wjet, w_DYjet, w_pu, genweight, sf_id, sf_trg1, sf_trg2,w_trk;

void fillTree(TTree* namu, SkimmedTree_tt* tree, int index, TLorentzVector Higgs, TLorentzVector tau1, TLorentzVector tau2, TLorentzVector jet1, TLorentzVector jet2, Float_t mjj_, Float_t met_, Float_t metphi_, Float_t m_sv_, Float_t pt_sv_, Float_t njets_, Float_t Dbkg_VBF_, Float_t Dbkg_ggH_, Float_t ME_sm_VBF_, Float_t ME_sm_ggH_, Float_t ME_sm_WH_, Float_t ME_sm_ZH_, Float_t ME_bkg_, Float_t ME_bkg1_, Float_t ME_bkg2_, Float_t Phi_, Float_t Phi1_, Float_t costheta1_, Float_t costheta2_, Float_t costhetastar_, Float_t Q2V1_, Float_t Q2V2_, bool signalRegion, bool aiRegion , float weight) {
  tree->GetEntry(index);
  // reset the categories
  cat_0jet = 0;
  cat_boosted = 0;
  cat_vbf = 0;
  cat_inclusive = 0;
  is_signal = signalRegion;
  is_ai = aiRegion;

  if (njets_ == 0) cat_0jet = 1;
  else if (njets_ == 1) cat_boosted = 1;
  else if (njets_ > 1 && mjj_>300) cat_vbf = 1;
  if (cat_0jet && cat_boosted && cat_vbf) cat_inclusive = 1;

  // tau1
  t1_pt = tau1.Pt();
  t1_eta = tau1.Eta();
  t1_phi = tau1.Phi();
  t1_mass = tau1.M();
  t1_charge = tree->q_1;
  t1_dmf = tree->decayModeFinding_1;
  t1_dmf_new = tree->decayModeFindingNewDMs_1;
  t1_decayMode = tree->t1_decayMode;
  t1_iso_VL = tree->byVLooseIsolationMVArun2v1DBoldDMwLT_1;
  t1_iso_L = tree->byLooseIsolationMVArun2v1DBoldDMwLT_1;
  t1_iso_M = tree->byMediumIsolationMVArun2v1DBoldDMwLT_1;
  t1_iso_T = tree->byTightIsolationMVArun2v1DBoldDMwLT_1;
  t1_iso_VT = tree->byVTightIsolationMVArun2v1DBoldDMwLT_1;
  t1_iso = tree->iso_1_old;
  t1_newiso_VL = tree->byVLooseIsolationMVArun2v1DBnewDMwLT_1;
  t1_newiso_L = tree->byLooseIsolationMVArun2v1DBnewDMwLT_1;
  t1_newiso_M = tree->byMediumIsolationMVArun2v1DBnewDMwLT_1;
  t1_newiso_T = tree->byTightIsolationMVArun2v1DBnewDMwLT_1;
  t1_newiso_VT = tree->byVTightIsolationMVArun2v1DBnewDMwLT_1;
  t1_newiso = tree->iso_1_new;
  // tau2
  t2_pt = tau2.Pt();
  t2_eta = tau2.Eta();
  t2_phi = tau2.Phi();
  t2_mass = tau2.M();
  t2_charge = tree->q_2;
  t2_dmf = tree->decayModeFinding_2;
  t2_decayMode = tree->t2_decayMode;
  t2_dmf_new = tree->decayModeFindingNewDMs_2;
  t2_iso_VL = tree->byVLooseIsolationMVArun2v1DBoldDMwLT_2;
  t2_iso_L = tree->byLooseIsolationMVArun2v1DBoldDMwLT_2;
  t2_iso_M = tree->byMediumIsolationMVArun2v1DBoldDMwLT_2;
  t2_iso_T = tree->byTightIsolationMVArun2v1DBoldDMwLT_2;
  t2_iso_VT = tree->byVTightIsolationMVArun2v1DBoldDMwLT_2;
  t2_iso = tree->iso_2_old;
  t2_newiso_VL = tree->byVLooseIsolationMVArun2v1DBnewDMwLT_2;
  t2_newiso_L = tree->byLooseIsolationMVArun2v1DBnewDMwLT_2;
  t2_newiso_M = tree->byMediumIsolationMVArun2v1DBnewDMwLT_2;
  t2_newiso_T = tree->byTightIsolationMVArun2v1DBnewDMwLT_2;
  t2_newiso_VT = tree->byVTightIsolationMVArun2v1DBnewDMwLT_2;
  t2_newiso = tree->iso_2_new;
  // jets
  njets = njets_;
  j1_pt = jet1.Pt();
  j1_eta = jet1.Eta();
  j1_phi = jet1.Phi();
  j2_pt = jet2.Pt();
  j2_eta = jet2.Eta();
  j2_phi = jet2.Phi();
  mjj = mjj_;
  // bjets
  nbjets = tree->nbtag;
  b1_pt = tree->bpt_1;
  b1_eta = tree->beta_1;
  b1_phi = tree->bphi_1;
  b2_pt = tree->bpt_2;
  b2_eta = tree->beta_2;
  b2_phi = tree->bphi_2;
  // met
  met = met_;
  metphi = metphi_;
  // SVFit
  m_sv = m_sv_;
  pt_sv = pt_sv_;
  // MELA
  Dbkg_VBF = Dbkg_VBF_;
  Dbkg_ggH = Dbkg_ggH_;
  Phi = Phi_;
  Phi1 = Phi1_;
  costheta1 = costheta1_;
  costheta2 = costheta2_;
  costhetastar = costhetastar_;
  Q2V1 = Q2V1_;
  Q2V2 = Q2V2_;
  ME_sm_VBF = ME_sm_VBF_;
  ME_sm_ggH = ME_sm_ggH_;
  ME_sm_WH = ME_sm_WH_;
  ME_sm_ZH = ME_sm_ZH_;
  ME_bkg = ME_bkg_;
  ME_bkg1 = ME_bkg1_;
  ME_bkg2 = ME_bkg2_;
  // Higgs
  higgs_pT = Higgs.Pt();
  higgs_m = Higgs.M();
  // others
  hjj_pT = (Higgs + jet1 + jet2).Pt();
  hjj_m = (Higgs + jet1 + jet2).M();
  dEtajj = fabs(jet1.Eta()-jet2.Eta());
  dPhijj = fabs(jet1.Phi()-jet2.Phi());
  vis_mass = (tau1+tau2).M();
  numGenJets = tree->numGenJets;
  evtwt = weight;

  // Placeholder branches for Tyler's NN
  el_pt = 0;
  el_eta = 0;
  el_phi = 0;
  el_mass = 0;
  el_charge = 0;
  el_iso = 0;
  mu_pt = 0;
  mu_eta = 0;
  mu_phi = 0;
  mu_mass = 0;
  mu_charge = 0;
  mu_iso = 0;

  cat_antiiso = 0;
  cat_antiiso_0jet = 0;
  cat_antiiso_boosted = 0;
  cat_antiiso_vbf = 0;
  cat_qcd = 0;
  cat_qcd_0jet = 0;
  cat_qcd_boosted = 0;
  cat_qcd_vbf = 0;
    
  mt = 0; // no need for tt channel
  namu->Fill();
}

void fillTree_mt(TTree* namu, SkimmedTree_mt* tree, int index, TLorentzVector Higgs, TLorentzVector tau1, TLorentzVector mu, TLorentzVector jet1, TLorentzVector jet2, Float_t mjj_, Float_t met_, Float_t metphi_, Float_t m_sv_, Float_t pt_sv_, Float_t njets_, Float_t Dbkg_VBF_, Float_t Dbkg_ggH_, Float_t ME_sm_VBF_, Float_t ME_sm_ggH_, Float_t ME_sm_WH_, Float_t ME_sm_ZH_, Float_t ME_bkg_, Float_t ME_bkg1_, Float_t ME_bkg2_, Float_t Phi_, Float_t Phi1_, Float_t costheta1_, Float_t costheta2_, Float_t costhetastar_, Float_t Q2V1_, Float_t Q2V2_, bool signalRegion, bool qcdRegion , float weight, float mt_) {
  tree->GetEntry(index);
  // reset the categories
  cat_0jet = 0;
  cat_boosted = 0;
  cat_vbf = 0;
  cat_inclusive = 0;
  // need to confirm with Tyler
  cat_antiiso = 0;
  cat_antiiso_0jet = 0;
  cat_antiiso_boosted = 0;
  cat_antiiso_vbf = 0;
  cat_qcd = 0;
  cat_qcd_0jet = 0;
  cat_qcd_boosted = 0;
  cat_qcd_vbf = 0;
  is_signal = signalRegion;
  is_qcd = qcdRegion;


  if (njets_ == 0) cat_0jet = 1;
  else if (njets_ == 1) cat_boosted = 1;
  else if (njets_>1 && mjj_>300 && tau1.Pt()>40) cat_vbf = 1;
  if (cat_0jet && cat_boosted && cat_vbf) cat_inclusive = 1;

  // tau1
  t1_pt = tau1.Pt();
  t1_eta = tau1.Eta();
  t1_phi = tau1.Phi();
  t1_mass = tau1.M();
  t1_charge = tree->q_2;
  t1_dmf = tree->decayModeFinding_2;
  t1_dmf_new = tree->decayModeFindingNewDMs_2;
  t1_decayMode = tree->l2_decayMode;
  t1_iso_VL = tree->byVLooseIsolationMVArun2v1DBoldDMwLT_2;
  t1_iso_L = tree->byLooseIsolationMVArun2v1DBoldDMwLT_2;
  t1_iso_M = tree->byMediumIsolationMVArun2v1DBoldDMwLT_2;
  t1_iso_T = tree->byTightIsolationMVArun2v1DBoldDMwLT_2;
  t1_iso_VT = tree->byVTightIsolationMVArun2v1DBoldDMwLT_2;
  t1_iso = tree->iso_2_old;
  t1_newiso_VL = tree->byVLooseIsolationMVArun2v1DBnewDMwLT_2;
  t1_newiso_L = tree->byLooseIsolationMVArun2v1DBnewDMwLT_2;
  t1_newiso_M = tree->byMediumIsolationMVArun2v1DBnewDMwLT_2;
  t1_newiso_T = tree->byTightIsolationMVArun2v1DBnewDMwLT_2;
  t1_newiso_VT = tree->byVTightIsolationMVArun2v1DBnewDMwLT_2;
  t1_newiso = tree->iso_2_new;
  // tau2
  mu_pt = mu.Pt();
  mu_eta = mu.Eta();
  mu_phi = mu.Phi();
  mu_mass = mu.M();
  mu_charge = tree->q_1;
  mu_iso = tree->iso_1;
  // jets
  njets = njets_;
  j1_pt = jet1.Pt();
  j1_eta = jet1.Eta();
  j1_phi = jet1.Phi();
  j2_pt = jet2.Pt();
  j2_eta = jet2.Eta();
  j2_phi = jet2.Phi();
  mjj = mjj_;
  // bjets
  nbjets = tree->nbtag;
  b1_pt = tree->bpt_1;
  b1_eta = tree->beta_1;
  b1_phi = tree->bphi_1;
  b2_pt = tree->bpt_2;
  b2_eta = tree->beta_2;
  b2_phi = tree->bphi_2;
  // met
  met = met_;
  metphi = metphi_;
  // SVFit
  m_sv = m_sv_;
  pt_sv = pt_sv_;
  // MELA
  Dbkg_VBF = Dbkg_VBF_;
  Dbkg_ggH = Dbkg_ggH_;
  Phi = Phi_;
  Phi1 = Phi1_;
  costheta1 = costheta1_;
  costheta2 = costheta2_;
  costhetastar = costhetastar_;
  Q2V1 = Q2V1_;
  Q2V2 = Q2V2_;
  ME_sm_VBF = ME_sm_VBF_;
  ME_sm_ggH = ME_sm_ggH_;
  ME_sm_WH = ME_sm_WH_;
  ME_sm_ZH = ME_sm_ZH_;
  ME_bkg = ME_bkg_;
  ME_bkg1 = ME_bkg1_;
  ME_bkg2 = ME_bkg2_;
  // Higgs
  higgs_pT = Higgs.Pt();
  higgs_m = Higgs.M();
  // others
  hjj_pT = (Higgs + jet1 + jet2).Pt();
  hjj_m = (Higgs + jet1 + jet2).M();
  dEtajj = fabs(jet1.Eta()-jet2.Eta());
  dPhijj = fabs(jet1.Phi()-jet2.Phi());
  vis_mass = (tau1+mu).M();
  numGenJets = tree->numGenJets;
  evtwt = weight;

  // Placeholder branches for Tyler's NN
  el_pt = 0;
  el_eta = 0;
  el_phi = 0;
  el_mass = 0;
  el_charge = 0;
  el_iso = 0;
  t2_pt = 0;
  t2_eta = 0;
  t2_phi = 0;
  t2_mass = 0;
  t2_charge = 0;
  t2_dmf = 0;
  t2_dmf_new = 0;
  t2_decayMode = 0;
  t2_iso_VL = 0;
  t2_iso_L = 0;
  t2_iso_M = 0;
  t2_iso_T = 0;
  t2_iso_VT = 0;
  t2_iso = 0;
  t2_newiso_VL = 0;
  t2_newiso_L = 0;
  t2_newiso_M = 0;
  t2_newiso_T = 0;
  t2_newiso_VT = 0;
  t2_newiso = 0;
    
  mt = mt_; // no need for tt channel
  namu->Fill();
}


void fillWeightTree(TTree* w_namu, float w_lumi_, float w_wjet_, float w_DYjet_, float w_pu_, float genweight_, float sf_id_, float sf_trg1_, float sf_trg2_, float w_trk_, float evtwt_) {
  w_lumi = w_lumi_;
  w_wjet = w_wjet_;
  w_DYjet = w_DYjet_;
  w_pu = w_pu_;
  genweight = genweight_;
  sf_id = sf_id_;
  sf_trg1 = sf_trg1_;
  sf_trg2 = sf_trg2_;
  w_trk = w_trk_;
  evtwt = evtwt_;

  w_namu->Fill();
  
}
