rm output_Slicer/mt/*

# Data
./slicer_mt.exe ${1}/data_B.root output_Slicer/mt/data_B.root data_obs data_obs nominal
./slicer_mt.exe ${1}/data_C.root output_Slicer/mt/data_C.root data_obs data_obs nominal
./slicer_mt.exe ${1}/data_D.root output_Slicer/mt/data_D.root data_obs data_obs nominal
./slicer_mt.exe ${1}/data_E.root output_Slicer/mt/data_E.root data_obs data_obs nominal
./slicer_mt.exe ${1}/data_F.root output_Slicer/mt/data_F.root data_obs data_obs nominal
hadd -f output_Slicer/mt/data_obs.root output_Slicer/mt/data*.root
rm output_Slicer/mt/data_B.root
rm output_Slicer/mt/data_C.root
rm output_Slicer/mt/data_D.root
rm output_Slicer/mt/data_E.root
rm output_Slicer/mt/data_F.root

# DY
./slicer_mt.exe ${1}/DY0.root output_Slicer/mt/ZTTall.root DY0 ZTT nominal
./slicer_mt.exe ${1}/DY1.root output_Slicer/mt/ZTT1.root DY1 ZTT nominal
./slicer_mt.exe ${1}/DY2.root output_Slicer/mt/ZTT2.root DY2 ZTT nominal
./slicer_mt.exe ${1}/DY3.root output_Slicer/mt/ZTT3.root DY3 ZTT nominal
./slicer_mt.exe ${1}/DY4.root output_Slicer/mt/ZTT4.root DY4 ZTT nominal
hadd -f output_Slicer/mt/ZTT.root output_Slicer/mt/ZTT*.root 
rm output_Slicer/mt/ZTTall.root
rm output_Slicer/mt/ZTT1.root
rm output_Slicer/mt/ZTT2.root
rm output_Slicer/mt/ZTT3.root
rm output_Slicer/mt/ZTT4.root

./slicer_mt.exe ${1}/DY0.root output_Slicer/mt/ZLall.root DY0 ZL nominal
./slicer_mt.exe ${1}/DY1.root output_Slicer/mt/ZL1.root DY1 ZL nominal
./slicer_mt.exe ${1}/DY2.root output_Slicer/mt/ZL2.root DY2 ZL nominal
./slicer_mt.exe ${1}/DY3.root output_Slicer/mt/ZL3.root DY3 ZL nominal
./slicer_mt.exe ${1}/DY4.root output_Slicer/mt/ZL4.root DY4 ZL nominal
hadd -f output_Slicer/mt/ZL.root output_Slicer/mt/ZL*.root
rm output_Slicer/mt/ZLall.root
rm output_Slicer/mt/ZL1.root
rm output_Slicer/mt/ZL2.root
rm output_Slicer/mt/ZL3.root
rm output_Slicer/mt/ZL4.root

./slicer_mt.exe ${1}/DY0.root output_Slicer/mt/ZJall.root DY0 ZJ nominal
./slicer_mt.exe ${1}/DY1.root output_Slicer/mt/ZJ1.root DY1 ZJ nominal
./slicer_mt.exe ${1}/DY2.root output_Slicer/mt/ZJ2.root DY2 ZJ nominal
./slicer_mt.exe ${1}/DY3.root output_Slicer/mt/ZJ3.root DY3 ZJ nominal
./slicer_mt.exe ${1}/DY4.root output_Slicer/mt/ZJ4.root DY4 ZJ nominal
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
./slicer_mt.exe ${1}/TT2l2nu.root output_Slicer/mt/TTT0.root TT2l2nu TTT nominal
./slicer_mt.exe ${1}/TT2l2nu.root output_Slicer/mt/TTJ0.root TT2l2nu TTJ nominal
./slicer_mt.exe ${1}/TThadronic.root output_Slicer/mt/TTT1.root TThadronic TTT nominal
./slicer_mt.exe ${1}/TThadronic.root output_Slicer/mt/TTJ1.root TThadronic TTJ nominal
./slicer_mt.exe ${1}/TTsemiLepton.root output_Slicer/mt/TTT2.root TTsemileptonic TTT nominal
./slicer_mt.exe ${1}/TTsemiLepton.root output_Slicer/mt/TTJ2.root TTsemileptonic TTJ nominal
hadd -f output_Slicer/mt/TTT.root output_Slicer/mt/TTT0.root output_Slicer/mt/TTT1.root output_Slicer/mt/TTT2.root
hadd -f output_Slicer/mt/TTJ.root output_Slicer/mt/TTJ0.root output_Slicer/mt/TTJ1.root output_Slicer/mt/TTJ2.root
rm output_Slicer/mt/TTT0.root
rm output_Slicer/mt/TTT1.root
rm output_Slicer/mt/TTT2.root
rm output_Slicer/mt/TTJ0.root
rm output_Slicer/mt/TTJ1.root
rm output_Slicer/mt/TTJ2.root

# WJets
./slicer_mt.exe ${1}/W0.root output_Slicer/mt/Wincl.root W0 W nominal
./slicer_mt.exe ${1}/W1.root output_Slicer/mt/W1.root W1 W nominal
./slicer_mt.exe ${1}/W2.root output_Slicer/mt/W2.root W2 W nominal
./slicer_mt.exe ${1}/W3.root output_Slicer/mt/W3.root W3 W nominal
./slicer_mt.exe ${1}/W4.root output_Slicer/mt/W4.root W4 W nominal
./slicer_mt.exe ${1}/EWKWMinus.root output_Slicer/mt/EWKWminus.root EWKWminus W nominal
./slicer_mt.exe ${1}/EWKWPlus.root output_Slicer/mt/EWKWplus.root EWKWplus W nominal
hadd -f output_Slicer/mt/W.root output_Slicer/mt/W4.root output_Slicer/mt/W3.root output_Slicer/mt/W2.root output_Slicer/mt/W1.root output_Slicer/mt/Wincl.root output_Slicer/mt/EWKWminus.root output_Slicer/mt/EWKWplus.root
rm output_Slicer/mt/Wincl.root
rm output_Slicer/mt/W1.root
rm output_Slicer/mt/W2.root
rm output_Slicer/mt/W3.root
rm output_Slicer/mt/W4.root
rm output_Slicer/mt/EWKW*.root


# VV
./slicer_mt.exe ${1}/WW.root output_Slicer/mt/WW.root WW WW nominal
./slicer_mt.exe ${1}/WZ.root output_Slicer/mt/WZ.root WZ WZ nominal
./slicer_mt.exe ${1}/ZZ.root output_Slicer/mt/ZZ.root ZZ ZZ nominal
hadd -f output_Slicer/mt/VV.root output_Slicer/mt/WW.root output_Slicer/mt/WZ.root output_Slicer/mt/ZZ.root
rm output_Slicer/mt/WW.root
rm output_Slicer/mt/WZ.root
rm output_Slicer/mt/ZZ.root

# signal
./slicer_mt.exe ${1}/VBF125.root output_Slicer/mt/VBF125.root VBF125 VBF125 nominal
./slicer_mt.exe ${1}/ggH125.root output_Slicer/mt/ggH125.root ggH125 ggH125 nominal
./slicer_mt.exe ${1}/WminusH125.root output_Slicer/mt/WminusH125.root WminusH125 WH125 nominal
./slicer_mt.exe ${1}/WplusH125.root output_Slicer/mt/WplusH125.root WplusH125 WH125 nominal
hadd -f output_Slicer/mt/WH125.root output_Slicer/mt/WplusH125.root output_Slicer/mt/WminusH125.root
rm output_Slicer/mt/WminusH125.root
rm output_Slicer/mt/WplusH125.root
./slicer_mt.exe ${1}/ZH125.root output_Slicer/mt/ZH125.root ZH125 ZH125 nominal

