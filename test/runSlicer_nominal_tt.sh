 rm output_Slicer/tt/*
 ####################
 ### Nominal runs ###
 ####################

 # 1. Data
 ./slicer_tt.exe ${1}/data_B.root output_Slicer/tt/data_B.root data_obs data_obs nominal
 ./slicer_tt.exe ${1}/data_C.root output_Slicer/tt/data_C.root data_obs data_obs nominal
 ./slicer_tt.exe ${1}/data_D.root output_Slicer/tt/data_D.root data_obs data_obs nominal
 ./slicer_tt.exe ${1}/data_E.root output_Slicer/tt/data_E.root data_obs data_obs nominal
 ./slicer_tt.exe ${1}/data_F.root output_Slicer/tt/data_F.root data_obs data_obs nominal
 ./slicer_tt.exe ${1}/data_G.root output_Slicer/tt/data_G.root data_obs data_obs nominal
 ./slicer_tt.exe ${1}/data_H.root output_Slicer/tt/data_H.root data_obs data_obs nominal
 hadd -f output_Slicer/tt/fakename.root output_Slicer/tt/data_*.root
 rm output_Slicer/tt/data_*.root 
 mv output_Slicer/tt/fakename.root output_Slicer/tt/data_obs.root
 # 2. Signals
 ./slicer_tt.exe ${1}/VBF125.root output_Slicer/tt/VBF125.root VBF125 VBF125 nominal
 ./slicer_tt.exe ${1}/ggH125.root output_Slicer/tt/ggH125.root ggH125 ggH125 nominal
 ./slicer_tt.exe ${1}/WplusH125.root output_Slicer/tt/WplusH125.root WplusH125 WH125 nominal
 ./slicer_tt.exe ${1}/WminusH125.root output_Slicer/tt/WminusH125.root WminusH125 WH125 nominal 
 hadd -f output_Slicer/tt/WH125.root output_Slicer/tt/WplusH125.root output_Slicer/tt/WminusH125.root
 rm output_Slicer/tt/WplusH125.root
 rm output_Slicer/tt/WminusH125.root
 ./slicer_tt.exe ${1}/ZH125.root output_Slicer/tt/ZH125.root ZH125 ZH125 nominal
 # 3. DY
 ./slicer_tt.exe ${1}/DY.root output_Slicer/tt/ZTT0.root DY ZTT nominal
 ./slicer_tt.exe ${1}/DY1.root output_Slicer/tt/ZTT1.root DY ZTT nominal
 ./slicer_tt.exe ${1}/DY2.root output_Slicer/tt/ZTT2.root DY ZTT nominal
 ./slicer_tt.exe ${1}/DY3.root output_Slicer/tt/ZTT3.root DY ZTT nominal
 ./slicer_tt.exe ${1}/DY4.root output_Slicer/tt/ZTT4.root DY  ZTT nominal
 hadd -f output_Slicer/tt/ZTT.root output_Slicer/tt/ZTT0.root output_Slicer/tt/ZTT1.root output_Slicer/tt/ZTT2.root output_Slicer/tt/ZTT3.root output_Slicer/tt/ZTT4.root
 rm output_Slicer/tt/ZTT0.root 
 rm output_Slicer/tt/ZTT1.root 
 rm output_Slicer/tt/ZTT2.root 
 rm output_Slicer/tt/ZTT3.root 
 rm output_Slicer/tt/ZTT4.root
 ./slicer_tt.exe ${1}/DY.root output_Slicer/tt/ZL0.root DY ZL nominal
 ./slicer_tt.exe ${1}/DY1.root output_Slicer/tt/ZL1.root DY ZL nominal
 ./slicer_tt.exe ${1}/DY2.root output_Slicer/tt/ZL2.root DY ZL nominal
 ./slicer_tt.exe ${1}/DY3.root output_Slicer/tt/ZL3.root DY ZL nominal
 ./slicer_tt.exe ${1}/DY4.root output_Slicer/tt/ZL4.root DY  ZL nominal
 hadd -f output_Slicer/tt/ZL.root output_Slicer/tt/ZL0.root output_Slicer/tt/ZL1.root output_Slicer/tt/ZL2.root output_Slicer/tt/ZL3.root output_Slicer/tt/ZL4.root
 rm output_Slicer/tt/ZL0.root 
 rm output_Slicer/tt/ZL1.root 
 rm output_Slicer/tt/ZL2.root 
 rm output_Slicer/tt/ZL3.root 
 rm output_Slicer/tt/ZL4.root
 ./slicer_tt.exe ${1}/DY.root output_Slicer/tt/ZJ0.root DY ZJ nominal
 ./slicer_tt.exe ${1}/DY1.root output_Slicer/tt/ZJ1.root DY ZJ nominal
 ./slicer_tt.exe ${1}/DY2.root output_Slicer/tt/ZJ2.root DY ZJ nominal
 ./slicer_tt.exe ${1}/DY3.root output_Slicer/tt/ZJ3.root DY ZJ nominal
 ./slicer_tt.exe ${1}/DY4.root output_Slicer/tt/ZJ4.root DY ZJ nominal
 hadd -f output_Slicer/tt/ZJ.root output_Slicer/tt/ZJ0.root output_Slicer/tt/ZJ1.root output_Slicer/tt/ZJ2.root output_Slicer/tt/ZJ3.root output_Slicer/tt/ZJ4.root
 rm output_Slicer/tt/ZJ0.root 
 rm output_Slicer/tt/ZJ1.root 
 rm output_Slicer/tt/ZJ2.root 
 rm output_Slicer/tt/ZJ3.root 
 rm output_Slicer/tt/ZJ4.root
 # 4. EWKZ
 ./slicer_tt.exe ${1}/EWKZ2l.root output_Slicer/tt/EWKZ2l.root EWKZLL EWKZ nominal
 ./slicer_tt.exe ${1}/EWKZ2nu.root output_Slicer/tt/EWKZ2nu.root EWKZNuNu EWKZ nominal
 hadd -f output_Slicer/tt/EWKZ.root output_Slicer/tt/EWKZ2l.root output_Slicer/tt/EWKZ2nu.root
 rm output_Slicer/tt/EWKZ2l.root
 rm output_Slicer/tt/EWKZ2nu.root

 # 5. TT
 ./slicer_tt.exe ${1}/TT.root output_Slicer/tt/TTT.root TT TTT nominal
 ./slicer_tt.exe ${1}/TT.root output_Slicer/tt/TTJ.root TT TTJ nominal
 # 6. W
 ./slicer_tt.exe ${1}/W.root output_Slicer/tt/W0.root W W nominal
 ./slicer_tt.exe ${1}/W1.root output_Slicer/tt/W1.root W W nominal
 ./slicer_tt.exe ${1}/W2.root output_Slicer/tt/W2.root W W nominal
 ./slicer_tt.exe ${1}/W3.root output_Slicer/tt/W3.root W W nominal
 ./slicer_tt.exe ${1}/W4.root output_Slicer/tt/W4.root W W nominal
 ./slicer_tt.exe ${1}/EWKWMinus.root output_Slicer/tt/EWKWMinus.root EWKWminus W nominal
 ./slicer_tt.exe ${1}/EWKWPlus.root output_Slicer/tt/EWKWPlus.root EWKWplus W nominal
 hadd -f output_Slicer/tt/W.root output_Slicer/tt/W0.root output_Slicer/tt/W1.root output_Slicer/tt/W2.root output_Slicer/tt/W3.root output_Slicer/tt/W4.root output_Slicer/tt/EWKWMinus.root output_Slicer/tt/EWKWPlus.root 
 rm output_Slicer/tt/W0.root
 rm output_Slicer/tt/W1.root
 rm output_Slicer/tt/W2.root
 rm output_Slicer/tt/W3.root
 rm output_Slicer/tt/W4.root
 rm output_Slicer/tt/EWKWMinus.root
 rm output_Slicer/tt/EWKWPlus.root

 # 7. VV
 ./slicer_tt.exe ${1}/WZ1l1nu2q.root output_Slicer/tt/WZ1l1nu2q_T.root WZ1L1Nu2Q VVT nominal
 ./slicer_tt.exe ${1}/WZ1l3nu.root output_Slicer/tt/WZ1l3nu_T.root WZ1L3Nu VVT nominal
 ./slicer_tt.exe ${1}/WZ3l1nu.root output_Slicer/tt/WZ3l1nu_T.root WZLLLNu VVT nominal
 ./slicer_tt.exe ${1}/WZ2l2q.root output_Slicer/tt/WZ2l2q_T.root WZ2L2Q VVT nominal
 ./slicer_tt.exe ${1}/WW1l1nu2q.root output_Slicer/tt/WW1l1nu2q_T.root WW1L1Nu2Q VVT nominal 
 ./slicer_tt.exe ${1}/ZZ4l.root output_Slicer/tt/ZZ4l_T.root ZZ4L VVT nominal 
 ./slicer_tt.exe ${1}/ZZ2l2q.root output_Slicer/tt/ZZ2l2q_T.root ZZ2L2Q VVT nominal 
 ./slicer_tt.exe ${1}/VV2l2nu.root output_Slicer/tt/VV2l2nu_T.root VV2L2Nu VVT nominal
 ./slicer_tt.exe ${1}/Tbar-tW.root output_Slicer/tt/Tbar-tW_T.root ST_tW_antitop VVT nominal
 ./slicer_tt.exe ${1}/T-tW.root output_Slicer/tt/T-tW_T.root ST_tW_top VVT nominal
 ./slicer_tt.exe ${1}/Tbar-tchan.root output_Slicer/tt/Tbar-tchan_T.root ST_t_antitop VVT nominal
 ./slicer_tt.exe ${1}/T-tchan.root output_Slicer/tt/T-tchan_T.root ST_t_top VVT nominal
 hadd -f output_Slicer/tt/VVT.root output_Slicer/tt/WZ1l1nu2q_T.root output_Slicer/tt/WZ1l3nu_T.root output_Slicer/tt/WZ1l1nu2q_T.root output_Slicer/tt/WZ3l1nu_T.root output_Slicer/tt/WZ2l2q_T.root output_Slicer/tt/WW1l1nu2q_T.root output_Slicer/tt/ZZ4l_T.root output_Slicer/tt/ZZ2l2q_T.root output_Slicer/tt/VV2l2nu_T.root output_Slicer/tt/Tbar-tW_T.root output_Slicer/tt/T-tW_T.root output_Slicer/tt/Tbar-tchan_T.root output_Slicer/tt/T-tchan_T.root 
 rm output_Slicer/tt/WZ1l1nu2q_T.root 
 rm output_Slicer/tt/WZ1l3nu_T.root 
 rm output_Slicer/tt/WZ1l1nu2q_T.root 
 rm output_Slicer/tt/WZ3l1nu_T.root 
 rm output_Slicer/tt/WZ2l2q_T.root 
 rm output_Slicer/tt/WW1l1nu2q_T.root 
 rm output_Slicer/tt/ZZ4l_T.root 
 rm output_Slicer/tt/ZZ2l2q_T.root 
 rm output_Slicer/tt/VV2l2nu_T.root 
 rm output_Slicer/tt/Tbar-tW_T.root 
 rm output_Slicer/tt/T-tW_T.root 
 rm output_Slicer/tt/Tbar-tchan_T.root
 rm output_Slicer/tt/T-tchan_T.root

 ./slicer_tt.exe ${1}/WZ1l1nu2q.root output_Slicer/tt/WZ1l1nu2q_J.root WZ1L1Nu2Q VVJ nominal
 ./slicer_tt.exe ${1}/WZ1l3nu.root output_Slicer/tt/WZ1l3nu_J.root WZ1L3Nu VVJ nominal
 ./slicer_tt.exe ${1}/WZ3l1nu.root output_Slicer/tt/WZ3l1nu_J.root WZLLLNu VVJ nominal
 ./slicer_tt.exe ${1}/WZ2l2q.root output_Slicer/tt/WZ2l2q_J.root WZ2L2Q VVJ nominal
 ./slicer_tt.exe ${1}/WW1l1nu2q.root output_Slicer/tt/WW1l1nu2q_J.root WW1L1Nu2Q VVJ nominal 
 ./slicer_tt.exe ${1}/ZZ4l.root output_Slicer/tt/ZZ4l_J.root ZZ4L VVJ nominal 
 ./slicer_tt.exe ${1}/ZZ2l2q.root output_Slicer/tt/ZZ2l2q_J.root ZZ2L2Q VVJ nominal 
 ./slicer_tt.exe ${1}/VV2l2nu.root output_Slicer/tt/VV2l2nu_J.root VV2L2Nu VVJ nominal
 ./slicer_tt.exe ${1}/Tbar-tW.root output_Slicer/tt/Tbar-tW_J.root ST_tW_antitop VVJ nominal
 ./slicer_tt.exe ${1}/T-tW.root output_Slicer/tt/T-tW_J.root ST_tW_top VVJ nominal
 ./slicer_tt.exe ${1}/Tbar-tchan.root output_Slicer/tt/Tbar-tchan_J.root ST_t_antitop VVJ nominal
 ./slicer_tt.exe ${1}/T-tchan.root output_Slicer/tt/T-tchan_J.root ST_t_top VVJ nominal
 hadd -f output_Slicer/tt/VVJ.root output_Slicer/tt/WZ1l1nu2q_J.root output_Slicer/tt/WZ1l3nu_J.root output_Slicer/tt/WZ1l1nu2q_J.root output_Slicer/tt/WZ3l1nu_J.root output_Slicer/tt/WZ2l2q_J.root output_Slicer/tt/WW1l1nu2q_J.root output_Slicer/tt/ZZ4l_J.root output_Slicer/tt/ZZ2l2q_J.root output_Slicer/tt/VV2l2nu_J.root output_Slicer/tt/Tbar-tW_J.root output_Slicer/tt/T-tW_J.root output_Slicer/tt/Tbar-tchan_J.root output_Slicer/tt/T-tchan_J.root 
 rm output_Slicer/tt/WZ1l1nu2q_J.root 
 rm output_Slicer/tt/WZ1l3nu_J.root 
 rm output_Slicer/tt/WZ1l1nu2q_J.root 
 rm output_Slicer/tt/WZ3l1nu_J.root 
 rm output_Slicer/tt/WZ2l2q_J.root 
 rm output_Slicer/tt/WW1l1nu2q_J.root 
 rm output_Slicer/tt/ZZ4l_J.root 
 rm output_Slicer/tt/ZZ2l2q_J.root 
 rm output_Slicer/tt/VV2l2nu_J.root 
 rm output_Slicer/tt/Tbar-tW_J.root 
 rm output_Slicer/tt/T-tW_J.root 
 rm output_Slicer/tt/Tbar-tchan_J.root
 rm output_Slicer/tt/T-tchan_J.root
 # embedded
 ./slicer_tt.exe ${1}/embed_B.root output_Slicer/tt/embed_B.root embedded embedded nominal
 ./slicer_tt.exe ${1}/embed_C.root output_Slicer/tt/embed_C.root embedded embedded nominal
 ./slicer_tt.exe ${1}/embed_D.root output_Slicer/tt/embed_D.root embedded embedded nominal
 ./slicer_tt.exe ${1}/embed_E.root output_Slicer/tt/embed_E.root embedded embedded nominal
 ./slicer_tt.exe ${1}/embed_F.root output_Slicer/tt/embed_F.root embedded embedded nominal
 ./slicer_tt.exe ${1}/embed_G.root output_Slicer/tt/embed_G.root embedded embedded nominal
 ./slicer_tt.exe ${1}/embed_H.root output_Slicer/tt/embed_H.root embedded embedded nominal
 hadd -f output_Slicer/tt/embedded.root output_Slicer/tt/embed_*.root
 rm output_Slicer/tt/embed_*.root
 #python python/SignalCreator.py
 #python python/QCDcreator.py

 # hadd all outputs
 #hadd -f final_nominal.root output_Slicer/tt/data.root output_Slicer/tt/ZJ.root output_Slicer/tt/ZL.root output_Slicer/tt/TTJ.root output_Slicer/tt/VVJ.root output_Slicer/tt/W.root output_Slicer/tt/EWKZ.root output_Slicer/tt/VBF125.root output_Slicer/tt/ggH125.root output_Slicer/tt/WH125.root output_Slicer/tt/ZH125.root output_Slicer/tt/QCD.root output_Slicer/tt/SMH.root output_Slicer/tt/embedded.root



