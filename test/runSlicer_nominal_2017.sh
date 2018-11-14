rm output_Slicer/${2}/*

# Data
./slicer_${2}_2017.exe ${1}/data_B.root output_Slicer/${2}/data_B.root data_obs data_obs nominal
./slicer_${2}_2017.exe ${1}/data_C.root output_Slicer/${2}/data_C.root data_obs data_obs nominal
./slicer_${2}_2017.exe ${1}/data_D.root output_Slicer/${2}/data_D.root data_obs data_obs nominal
./slicer_${2}_2017.exe ${1}/data_E.root output_Slicer/${2}/data_E.root data_obs data_obs nominal
./slicer_${2}_2017.exe ${1}/data_F.root output_Slicer/${2}/data_F.root data_obs data_obs nominal
hadd -f output_Slicer/${2}/data_obs.root output_Slicer/${2}/data*.root
rm output_Slicer/${2}/data_B.root
rm output_Slicer/${2}/data_C.root
rm output_Slicer/${2}/data_D.root
rm output_Slicer/${2}/data_E.root
rm output_Slicer/${2}/data_F.root

# DY
./slicer_${2}_2017.exe ${1}/DY0.root output_Slicer/${2}/ZTT.root DY0 ZTT nominal
#./slicer_${2}_2017.exe ${1}/DY1.root output_Slicer/${2}/ZTT1.root DY1 ZTT nominal
#./slicer_${2}_2017.exe ${1}/DY2.root output_Slicer/${2}/ZTT2.root DY2 ZTT nominal
#./slicer_${2}_2017.exe ${1}/DY3.root output_Slicer/${2}/ZTT3.root DY3 ZTT nominal
#./slicer_${2}_2017.exe ${1}/DY4.root output_Slicer/${2}/ZTT4.root DY4 ZTT nominal
#hadd -f output_Slicer/${2}/ZTT.root output_Slicer/${2}/ZTT*.root 
#rm output_Slicer/${2}/ZTTall.root
#rm output_Slicer/${2}/ZTT1.root
#rm output_Slicer/${2}/ZTT2.root
#rm output_Slicer/${2}/ZTT3.root
#rm output_Slicer/${2}/ZTT4.root

./slicer_${2}_2017.exe ${1}/DY0.root output_Slicer/${2}/ZL.root DY0 ZL nominal
#./slicer_${2}_2017.exe ${1}/DY1.root output_Slicer/${2}/ZL1.root DY1 ZL nominal
#./slicer_${2}_2017.exe ${1}/DY2.root output_Slicer/${2}/ZL2.root DY2 ZL nominal
#./slicer_${2}_2017.exe ${1}/DY3.root output_Slicer/${2}/ZL3.root DY3 ZL nominal
#./slicer_${2}_2017.exe ${1}/DY4.root output_Slicer/${2}/ZL4.root DY4 ZL nominal
#hadd -f output_Slicer/${2}/ZL.root output_Slicer/${2}/ZL*.root
#rm output_Slicer/${2}/ZLall.root
#rm output_Slicer/${2}/ZL1.root
#rm output_Slicer/${2}/ZL2.root
#rm output_Slicer/${2}/ZL3.root
#rm output_Slicer/${2}/ZL4.root

./slicer_${2}_2017.exe ${1}/DY0.root output_Slicer/${2}/ZJ.root DY0 ZJ nominal
#./slicer_${2}_2017.exe ${1}/DY1.root output_Slicer/${2}/ZJ1.root DY1 ZJ nominal
#./slicer_${2}_2017.exe ${1}/DY2.root output_Slicer/${2}/ZJ2.root DY2 ZJ nominal
#./slicer_${2}_2017.exe ${1}/DY3.root output_Slicer/${2}/ZJ3.root DY3 ZJ nominal
#./slicer_${2}_2017.exe ${1}/DY4.root output_Slicer/${2}/ZJ4.root DY4 ZJ nominal
#hadd -f output_Slicer/${2}/ZJ.root output_Slicer/${2}/ZJ*.root
#rm output_Slicer/${2}/ZJall.root
#rm output_Slicer/${2}/ZJ1.root
#rm output_Slicer/${2}/ZJ2.root
#rm output_Slicer/${2}/ZJ3.root
#rm output_Slicer/${2}/ZJ4.root

#EWKZ
./slicer_${2}_2017.exe ${1}/EWKZ2l.root output_Slicer/${2}/EWKZLL.root EWKZLL EWKZ nominal
./slicer_${2}_2017.exe ${1}/EWKZ2nu.root output_Slicer/${2}/EWKZNuNu.root EWKZNuNu EWKZ nominal
hadd -f output_Slicer/${2}/EWKZ.root output_Slicer/${2}/EWKZ*.root
rm output_Slicer/${2}/EWKZLL.root
rm output_Slicer/${2}/EWKZNuNu.root

# TT
./slicer_${2}_2017.exe ${1}/TT2l2nu.root output_Slicer/${2}/TTT0.root TT2l2nu TTT nominal
./slicer_${2}_2017.exe ${1}/TT2l2nu.root output_Slicer/${2}/TTJ0.root TT2l2nu TTJ nominal
./slicer_${2}_2017.exe ${1}/TThadronic.root output_Slicer/${2}/TTT1.root TThadronic TTT nominal
./slicer_${2}_2017.exe ${1}/TThadronic.root output_Slicer/${2}/TTJ1.root TThadronic TTJ nominal
./slicer_${2}_2017.exe ${1}/TTsemiLepton.root output_Slicer/${2}/TTT2.root TTsemileptonic TTT nominal
./slicer_${2}_2017.exe ${1}/TTsemiLepton.root output_Slicer/${2}/TTJ2.root TTsemileptonic TTJ nominal
hadd -f output_Slicer/${2}/TTT.root output_Slicer/${2}/TTT0.root output_Slicer/${2}/TTT1.root output_Slicer/${2}/TTT2.root
hadd -f output_Slicer/${2}/TTJ.root output_Slicer/${2}/TTJ0.root output_Slicer/${2}/TTJ1.root output_Slicer/${2}/TTJ2.root
rm output_Slicer/${2}/TTT0.root
rm output_Slicer/${2}/TTT1.root
rm output_Slicer/${2}/TTT2.root
rm output_Slicer/${2}/TTJ0.root
rm output_Slicer/${2}/TTJ1.root
rm output_Slicer/${2}/TTJ2.root

# WJets
./slicer_${2}_2017.exe ${1}/W0.root output_Slicer/${2}/Wincl.root WJets0 W nominal
#./slicer_${2}_2017.exe ${1}/W1.root output_Slicer/${2}/W1.root WJets1 W nominal
#./slicer_${2}_2017.exe ${1}/W2.root output_Slicer/${2}/W2.root WJets2 W nominal
#./slicer_${2}_2017.exe ${1}/W3.root output_Slicer/${2}/W3.root WJets3 W nominal
#./slicer_${2}_2017.exe ${1}/W4.root output_Slicer/${2}/W4.root WJets4 W nominal
./slicer_${2}_2017.exe ${1}/EWKWMinus.root output_Slicer/${2}/EWKWminus.root EWKWminus W nominal
./slicer_${2}_2017.exe ${1}/EWKWPlus.root output_Slicer/${2}/EWKWplus.root EWKWplus W nominal
#hadd -f output_Slicer/${2}/W.root output_Slicer/${2}/W4.root output_Slicer/${2}/W3.root output_Slicer/${2}/W2.root output_Slicer/${2}/W1.root output_Slicer/${2}/Wincl.root output_Slicer/${2}/EWKWminus.root output_Slicer/${2}/EWKWplus.root
#rm output_Slicer/${2}/Wincl.root
#rm output_Slicer/${2}/W1.root
#rm output_Slicer/${2}/W2.root
#rm output_Slicer/${2}/W3.root
#rm output_Slicer/${2}/W4.root
#rm output_Slicer/${2}/EWKW*.root
hadd -f output_Slicer/${2}/W.root output_Slicer/${2}/Wincl.root output_Slicer/${2}/EWKWminus.root output_Slicer/${2}/EWKWplus.root

# VV
if [ ${2} = "mt" ]; then
    ./slicer_${2}_2017.exe ${1}/WW.root output_Slicer/${2}/WW.root WW VV nominal
    ./slicer_${2}_2017.exe ${1}/WZ.root output_Slicer/${2}/WZ.root WZ VV nominal
    ./slicer_${2}_2017.exe ${1}/ZZ.root output_Slicer/${2}/ZZ.root ZZ VV nominal
    hadd -f output_Slicer/${2}/VV.root output_Slicer/${2}/WW.root output_Slicer/${2}/WZ.root output_Slicer/${2}/ZZ.root
    rm output_Slicer/${2}/WW.root
    rm output_Slicer/${2}/WZ.root
    rm output_Slicer/${2}/ZZ.root
elif [ ${2} = "tt" ]; then
    ./slicer_${2}_2017.exe ${1}/WW.root output_Slicer/${2}/WW.root WW VVT nominal
    ./slicer_${2}_2017.exe ${1}/WZ.root output_Slicer/${2}/WZ.root WZ VVT nominal
    ./slicer_${2}_2017.exe ${1}/ZZ.root output_Slicer/${2}/ZZ.root ZZ VVT nominal
    hadd -f output_Slicer/${2}/VVT.root output_Slicer/${2}/WW.root output_Slicer/${2}/WZ.root output_Slicer/${2}/ZZ.root
    rm output_Slicer/${2}/WW.root
    rm output_Slicer/${2}/WZ.root
    rm output_Slicer/${2}/ZZ.root
    ./slicer_${2}_2017.exe ${1}/WW.root output_Slicer/${2}/WW.root WW VVJ nominal
    ./slicer_${2}_2017.exe ${1}/WZ.root output_Slicer/${2}/WZ.root WZ VVJ nominal
    ./slicer_${2}_2017.exe ${1}/ZZ.root output_Slicer/${2}/ZZ.root ZZ VVJ nominal
    hadd -f output_Slicer/${2}/VVJ.root output_Slicer/${2}/WW.root output_Slicer/${2}/WZ.root output_Slicer/${2}/ZZ.root
    rm output_Slicer/${2}/WW.root
    rm output_Slicer/${2}/WZ.root
    rm output_Slicer/${2}/ZZ.root
fi

# signal
./slicer_${2}_2017.exe ${1}/VBF125.root output_Slicer/${2}/VBF125.root VBF125 VBF125 nominal
./slicer_${2}_2017.exe ${1}/ggH125.root output_Slicer/${2}/ggH125.root ggH125 ggH125 nominal
./slicer_${2}_2017.exe ${1}/WminusH125.root output_Slicer/${2}/WminusH125.root WminusH125 WH125 nominal
./slicer_${2}_2017.exe ${1}/WplusH125.root output_Slicer/${2}/WplusH125.root WplusH125 WH125 nominal
hadd -f output_Slicer/${2}/WH125.root output_Slicer/${2}/WplusH125.root output_Slicer/${2}/WminusH125.root
rm output_Slicer/${2}/WminusH125.root
rm output_Slicer/${2}/WplusH125.root
./slicer_${2}_2017.exe ${1}/ZH125.root output_Slicer/${2}/ZH125.root ZH125 ZH125 nominal

