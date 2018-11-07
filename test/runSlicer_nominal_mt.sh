rm output_Slicer/mt/*

# Data
./slicer_mt.exe ${1}/data_B.root output_Slicer/mt/data_B.root data_obs data_obs nominal
./slicer_mt.exe ${1}/data_C.root output_Slicer/mt/data_C.root data_obs data_obs nominal
./slicer_mt.exe ${1}/data_D.root output_Slicer/mt/data_D.root data_obs data_obs nominal
./slicer_mt.exe ${1}/data_E.root output_Slicer/mt/data_E.root data_obs data_obs nominal
./slicer_mt.exe ${1}/data_F.root output_Slicer/mt/data_F.root data_obs data_obs nominal
./slicer_mt.exe ${1}/data_G.root output_Slicer/mt/data_G.root data_obs data_obs nominal
./slicer_mt.exe ${1}/data_H.root output_Slicer/mt/data_H.root data_obs data_obs nominal
hadd -f output_Slicer/mt/data_obs.root output_Slicer/mt/data*.root
rm output_Slicer/mt/data_B.root
rm output_Slicer/mt/data_C.root
rm output_Slicer/mt/data_D.root
rm output_Slicer/mt/data_E.root
rm output_Slicer/mt/data_F.root
rm output_Slicer/mt/data_G.root
rm output_Slicer/mt/data_H.root

# DY
./slicer_mt.exe ${1}/DY.root output_Slicer/mt/ZTTall.root ZTT ZTT nominal
./slicer_mt.exe ${1}/DY1.root output_Slicer/mt/ZTT1.root ZTT ZTT nominal
./slicer_mt.exe ${1}/DY2.root output_Slicer/mt/ZTT2.root ZTT ZTT nominal
./slicer_mt.exe ${1}/DY3.root output_Slicer/mt/ZTT3.root ZTT ZTT nominal
./slicer_mt.exe ${1}/DY4.root output_Slicer/mt/ZTT4.root ZTT ZTT nominal
hadd -f output_Slicer/mt/ZTT.root output_Slicer/mt/ZTT*.root 
rm output_Slicer/mt/ZTTall.root
rm output_Slicer/mt/ZTT1.root
rm output_Slicer/mt/ZTT2.root
rm output_Slicer/mt/ZTT3.root
rm output_Slicer/mt/ZTT4.root

./slicer_mt.exe ${1}/DY.root output_Slicer/mt/ZLall.root ZL ZL nominal
./slicer_mt.exe ${1}/DY1.root output_Slicer/mt/ZL1.root ZL ZL nominal
./slicer_mt.exe ${1}/DY2.root output_Slicer/mt/ZL2.root ZL ZL nominal
./slicer_mt.exe ${1}/DY3.root output_Slicer/mt/ZL3.root ZL ZL nominal
./slicer_mt.exe ${1}/DY4.root output_Slicer/mt/ZL4.root ZL ZL nominal
hadd -f output_Slicer/mt/ZL.root output_Slicer/mt/ZL*.root
rm output_Slicer/mt/ZLall.root
rm output_Slicer/mt/ZL1.root
rm output_Slicer/mt/ZL2.root
rm output_Slicer/mt/ZL3.root
rm output_Slicer/mt/ZL4.root

./slicer_mt.exe ${1}/DY.root output_Slicer/mt/ZJall.root ZJ ZJ nominal
./slicer_mt.exe ${1}/DY1.root output_Slicer/mt/ZJ1.root ZJ ZJ nominal
./slicer_mt.exe ${1}/DY2.root output_Slicer/mt/ZJ2.root ZJ ZJ nominal
./slicer_mt.exe ${1}/DY3.root output_Slicer/mt/ZJ3.root ZJ ZJ nominal
./slicer_mt.exe ${1}/DY4.root output_Slicer/mt/ZJ4.root ZJ ZJ nominal
hadd -f output_Slicer/mt/ZJ.root output_Slicer/mt/ZJ*.root
rm output_Slicer/mt/ZJall.root
rm output_Slicer/mt/ZJ1.root
rm output_Slicer/mt/ZJ2.root
rm output_Slicer/mt/ZJ3.root
rm output_Slicer/mt/ZJ4.root

#EWKZ
./slicer_mt.exe ${1}/EWKZ2l.root output_Slicer/mt/EWKZLL.root EWKZLL EWKZ nominal
./slicer_mt.exe ${1}/EWKZ2nu.root output_Slicer/mt/EWKZNuNu.root EWKZNuNu EWKZ nominal
hadd -f output_Slicer/mt/EWKZ.root output_Slicer/mt/EWKZ*.root
rm output_Slicer/mt/EWKZLL.root
rm output_Slicer/mt/EWKZNuNu.root

# TT
./slicer_mt.exe ${1}/TT.root output_Slicer/mt/TTT.root TTT TTT nominal
./slicer_mt.exe ${1}/TT.root output_Slicer/mt/TTJ.root TTJ TTJ nominal

# WJets
./slicer_mt.exe ${1}/W.root output_Slicer/mt/Wincl.root W W nominal
./slicer_mt.exe ${1}/W1.root output_Slicer/mt/W1.root W W nominal
./slicer_mt.exe ${1}/W2.root output_Slicer/mt/W2.root W W nominal
./slicer_mt.exe ${1}/W3.root output_Slicer/mt/W3.root W W nominal
./slicer_mt.exe ${1}/W4.root output_Slicer/mt/W4.root W W nominal
./slicer_mt.exe ${1}/EWKWMinus.root output_Slicer/mt/EWKWminus.root EWKWminus W nominal
./slicer_mt.exe ${1}/EWKWPlus.root output_Slicer/mt/EWKWplus.root EWKWplus W nominal
hadd -f output_Slicer/mt/W.root output_Slicer/mt/W4.root output_Slicer/mt/W3.root output_Slicer/mt/W2.root output_Slicer/mt/W1.root output_Slicer/mt/Wincl.root output_Slicer/mt/EWKWminus.root output_Slicer/mt/EWKWplus.root
rm output_Slicer/mt/Wincl.root
rm output_Slicer/mt/W1.root
rm output_Slicer/mt/W2.root
rm output_Slicer/mt/W3.root
rm output_Slicer/mt/W4.root
rm output_Slicer/mt/EWKW*.root



./slicer_mt.exe ${1}/WW1l1nu2q.root output_Slicer/mt/WW1L1Nu2Q.root WW1L1Nu2Q VV nominal 
./slicer_mt.exe ${1}/VV2l2nu.root output_Slicer/mt/VV2L2Nu.root VV2L2Nu VV nominal 
./slicer_mt.exe ${1}/WZ3l1nu.root output_Slicer/mt/WZLLLNu.root WZLLLNu VV nominal 
./slicer_mt.exe ${1}/ZZ2l2q.root output_Slicer/mt/ZZ2L2Q.root ZZ2L2Q VV nominal 
./slicer_mt.exe ${1}/ZZ4l.root output_Slicer/mt/ZZ4L.root ZZ4L VV nominal 
./slicer_mt.exe ${1}/WZ2l2q.root output_Slicer/mt/WZ2L2Q.root WZ2L2Q VV nominal
./slicer_mt.exe ${1}/WZ1l3nu.root output_Slicer/mt/WZ1L3Nu.root WZ1L3Nu VV nominal
./slicer_mt.exe ${1}/WZ1l1nu2q.root output_Slicer/mt/WZ1L1Nu2Q.root WZ1L1Nu2Q VV nominal
./slicer_mt.exe ${1}/T-tchan.root output_Slicer/mt/ST_t_top.root ST_t_top VV nominal 
./slicer_mt.exe ${1}/Tbar-tchan.root output_Slicer/mt/ST_t_antitop.root ST_t_antitop VV nominal
./slicer_mt.exe ${1}/T-tW.root output_Slicer/mt/ST_tW_top.root ST_tW_top VV nominal 
./slicer_mt.exe ${1}/Tbar-tW.root output_Slicer/mt/ST_tW_antitop.root ST_tW_antitop VV nominal 
hadd -f output_Slicer/mt/VV.root output_Slicer/mt/ST_t_top.root output_Slicer/mt/ST_t_antitop.root output_Slicer/mt/ST_tW_top.root output_Slicer/mt/ST_tW_antitop.root output_Slicer/mt/WW1L1Nu2Q.root output_Slicer/mt/ZZ2L2Q.root output_Slicer/mt/WZ2L2Q.root output_Slicer/mt/WZ1L3Nu.root output_Slicer/mt/WZ1L1Nu2Q.root output_Slicer/mt/VV2L2Nu.root output_Slicer/mt/WZLLLNu.root output_Slicer/mt/ZZ4L.root
rm output_Slicer/mt/WW1L1Nu2Q.root
rm output_Slicer/mt/VV2L2Nu.root
rm output_Slicer/mt/WZLLLNu.root
rm output_Slicer/mt/ZZ2L2Q.root
rm output_Slicer/mt/ZZ4L.root
rm output_Slicer/mt/WZ2L2Q.root
rm output_Slicer/mt/WZ1L3Nu.root
rm output_Slicer/mt/WZ1L1Nu2Q.root
rm output_Slicer/mt/ST_t_antitop.root
rm output_Slicer/mt/ST_t_top.root
rm output_Slicer/mt/ST_tW_top.root
rm output_Slicer/mt/ST_tW_antitop.root


# signal
./slicer_mt.exe ${1}/VBF125.root output_Slicer/mt/VBF125.root VBF125 VBF125 nominal
./slicer_mt.exe ${1}/ggH125.root output_Slicer/mt/ggH125.root ggH125 ggH125 nominal
./slicer_mt.exe ${1}/WminusH125.root output_Slicer/mt/WminusH125.root WminusH125 WH125 nominal
./slicer_mt.exe ${1}/WplusH125.root output_Slicer/mt/WplusH125.root WplusH125 WH125 nominal
hadd -f output_Slicer/mt/WH125.root output_Slicer/mt/WplusH125.root output_Slicer/mt/WminusH125.root
rm output_Slicer/mt/WminusH125.root
rm output_Slicer/mt/WplusH125.root
./slicer_mt.exe ${1}/ZH125.root output_Slicer/mt/ZH125.root ZH125 ZH125 nominal

#embedded
./slicer_mt.exe ${1}/embed_B.root output_Slicer/mt/embed_B.root embedded embedded nominal
./slicer_mt.exe ${1}/embed_C.root output_Slicer/mt/embed_C.root embedded embedded nominal
./slicer_mt.exe ${1}/embed_D.root output_Slicer/mt/embed_D.root embedded embedded nominal
./slicer_mt.exe ${1}/embed_E.root output_Slicer/mt/embed_E.root embedded embedded nominal
./slicer_mt.exe ${1}/embed_F.root output_Slicer/mt/embed_F.root embedded embedded nominal
./slicer_mt.exe ${1}/embed_G.root output_Slicer/mt/embed_G.root embedded embedded nominal
./slicer_mt.exe ${1}/embed_H.root output_Slicer/mt/embed_H.root embedded embedded nominal
hadd -f output_Slicer/mt/embedded.root output_Slicer/mt/embed_*.root
rm output_Slicer/mt/embed_*.root

#python python/Scale_W_HighMT.py --scale nominal --anti iso  
#python python/Create_QCD_2Drelaxed.py --scale nominal

#hadd -f final_nominal.root output_Slicer/mt/Data.root output_Slicer/mt/ZTT.root output_Slicer/mt/ZL.root output_Slicer/mt/ZJ.root output_Slicer/mt/EWKZ.root output_Slicer/mt/TTT.root output_Slicer/mt/TTJ.root output_Slicer/mt/W.root output_Slicer/mt/VV.root output_Slicer/mt/VBF125.root output_Slicer/mt/ggH125.root output_Slicer/mt/WH125.root output_Slicer/mt/ZH125.root output_Slicer/mt/QCD.root

