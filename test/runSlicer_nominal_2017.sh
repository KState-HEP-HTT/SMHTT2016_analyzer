#!/bin/bash
data="false"
dy="false"
w="false"
signal="false"
ttbar="false"
diboson="false"
electroweak="false"
all="false"
out="false"
ztt="false"
embed="false"
dyinclusive="false"

while [ -n "$1" ]; do # while loop starts
    case "$1" in
	-da)
            data="true"
            echo "Running over Data ... "
            ;;
        -dy)
            dy="true"
	    ztt="true"
            echo "Running over DY ... "
            ;;
        -ztt)
            ztt="true"
            echo "Running over ZTT ... "
            ;;
        -w)
            w="true"
            echo "Running over W ... "
            ;;
        -si)
            signal="true"
            echo "Running over Signals ... "
            ;;
	-tt)
	    ttbar="true"
	    echo "Running over TT-bar ... "
	    ;;
	-vv)
	    diboson="true"
	    echo "Running over Di-boson ... "
	    ;;
	-ew)
	    electroweak="true"
	    echo "Running over Electro Weak ... "
	    ;;
	-em)
	    embed="true"
	    echo "Running over Embedded ... "
	    ;;
	-dyi)
	    dyinclusive="true"
	    echo "Running over DY inclusive ... "
	    ;;
	-mc) 
	    dy="true"
	    w="true"
	    ttbar="true"
	    diboson="true"
	    electroweak="true"
	    echo "Running over all MC backgrounds ... "
	    ;;
	-all)
	    dy="true"
	    w="true"
	    ttbar="true"
	    diboson="true"
	    electroweak="true"
	    data="true"
	    signal="true"
	    embed="true"
	    all="true"
	    echo "Running over all samples ... "
	    ;;
	-echo)
	    out="true"
	    ;;
        -i)
            input="$2"
            echo "Input root files are in $2"
            shift
            ;;
        -ch) channel="$2"
            echo "channel : $2"
            shift
            ;;
        --)
            shift # The double dash which separates options from parameters                                                                                                                
            break
            ;;
        *) echo "Option $1 not recognized : -da -dy -w -tt -vv -ew -mc -si -all -echo -i -ch" ;;
    esac
    shift
done


if [ $all = "true" ]; then
    rm output_Slicer/${channel}/*.root
fi

if [ $out = "true" ]; then
    echo ./slicer_${channel}_2017.exe ${input}/data_B.root output_Slicer/${channel}/data/data_B.root data_obs data_obs nominal
    echo ./slicer_${channel}_2017.exe ${input}/DY0_1.root output_Slicer/${channel}/ZTT/ZTT0_1.root DY0 ZTT nominal 
fi

if [ $data = "true" ]; then
    rm optput_Slicer/${channel}/data/*.root
    ./slicer_${channel}_2017.exe ${input}/data_B.root output_Slicer/${channel}/data/data_B.root data_obs data_obs nominal
    ./slicer_${channel}_2017.exe ${input}/data_C.root output_Slicer/${channel}/data/data_C.root data_obs data_obs nominal
    ./slicer_${channel}_2017.exe ${input}/data_D.root output_Slicer/${channel}/data/data_D.root data_obs data_obs nominal
    ./slicer_${channel}_2017.exe ${input}/data_E.root output_Slicer/${channel}/data/data_E.root data_obs data_obs nominal
    ./slicer_${channel}_2017.exe ${input}/data_F.root output_Slicer/${channel}/data/data_F.root data_obs data_obs nominal
    hadd -f output_Slicer/tt/data_obs.root output_Slicer/tt/data/*.root
fi

if [ $ztt = "true" ]; then
    # DY1_1, DY1_3, DY3_1, DY4_1 are unsafe
    rm output_Slicer/${channel}/ZTT/*.root
    rm output_Slicer/${channel}/ZJ/*.root
    rm output_Slicer/${channel}/ZL/*.root

    ./slicer_${channel}_2017.exe ${input}/DY0.root output_Slicer/${channel}/ZTT/ZTT0.root DY0 ZTT nominal 
    ./slicer_${channel}_2017.exe ${input}/DY1.root output_Slicer/${channel}/ZTT/ZTT1.root DY1 ZTT nominal 
    ./slicer_${channel}_2017.exe ${input}/DY2.root output_Slicer/${channel}/ZTT/ZTT2.root DY2 ZTT nominal 
    ./slicer_${channel}_2017.exe ${input}/DY3.root output_Slicer/${channel}/ZTT/ZTT3.root DY3 ZTT nominal 
    ./slicer_${channel}_2017.exe ${input}/DY4.root output_Slicer/${channel}/ZTT/ZTT4.root DY4 ZTT nominal 
    hadd -f output_Slicer/${channel}/ZTT.root output_Slicer/${channel}/ZTT/ZTT*.root
    if [ $dy = "true" ]; then    
	./slicer_${channel}_2017.exe ${input}/DY0.root output_Slicer/${channel}/ZJ/ZJ0.root DY0 ZJ nominal 
	./slicer_${channel}_2017.exe ${input}/DY1.root output_Slicer/${channel}/ZJ/ZJ1.root DY1 ZJ nominal 
	./slicer_${channel}_2017.exe ${input}/DY2.root output_Slicer/${channel}/ZJ/ZJ2.root DY2 ZJ nominal 
	./slicer_${channel}_2017.exe ${input}/DY3.root output_Slicer/${channel}/ZJ/ZJ3.root DY3 ZJ nominal 
	./slicer_${channel}_2017.exe ${input}/DY4.root output_Slicer/${channel}/ZJ/ZJ4.root DY4 ZJ nominal 
	hadd -f output_Slicer/${channel}/ZJ.root output_Slicer/${channel}/ZJ/ZJ*.root
	
	./slicer_${channel}_2017.exe ${input}/DY0.root output_Slicer/${channel}/ZL/ZL0.root DY0 ZL nominal 
	./slicer_${channel}_2017.exe ${input}/DY1.root output_Slicer/${channel}/ZL/ZL1.root DY1 ZL nominal 
	./slicer_${channel}_2017.exe ${input}/DY2.root output_Slicer/${channel}/ZL/ZL2.root DY2 ZL nominal 
	./slicer_${channel}_2017.exe ${input}/DY3.root output_Slicer/${channel}/ZL/ZL3.root DY3 ZL nominal 
	./slicer_${channel}_2017.exe ${input}/DY4.root output_Slicer/${channel}/ZL/ZL4.root DY4 ZL nominal 
	hadd -f output_Slicer/${channel}/ZL.root output_Slicer/${channel}/ZL/ZL*.root
    fi
fi


if [ $dyinclusive = "true" ]; then    
    rm output_Slicer/${channel}/ZTT/*.root
    rm output_Slicer/${channel}/ZJ/*.root
    rm output_Slicer/${channel}/ZL/*.root
    ./slicer_${channel}_2017.exe ${input}/DY0.root output_Slicer/${channel}/ZTT.root DY0 ZTT nominal
    ./slicer_${channel}_2017.exe ${input}/DY0.root output_Slicer/${channel}/ZJ.root DY0 ZJ nominal
    ./slicer_${channel}_2017.exe ${input}/DY0.root output_Slicer/${channel}/ZL.root DY0 ZL nominal
fi
	

if [ $electroweak = "true" ]; then
    rm output_Slicer/${channel}/EWKZ/*.root
    ./slicer_${channel}_2017.exe ${input}/EWKZ2l.root output_Slicer/${channel}/EWKZ/EWKZLL.root EWKZLL EWKZ nominal
    ./slicer_${channel}_2017.exe ${input}/EWKZ2nu.root output_Slicer/${channel}/EWKZ/EWKZNuNu.root EWKZNuNu EWKZ nominal
    hadd -f output_Slicer/${channel}/EWKZ.root output_Slicer/${channel}/EWKZ/EWKZ*.root
fi


if [ $ttbar = "true" ]; then
    # TThadronic_1, TTsemiLepton_2 are unsafe 
    rm output_Slicer/${channel}/TTT/*.root
    rm output_Slicer/${channel}/TTJ/*.root

    ./slicer_${channel}_2017.exe ${input}/TT2l2nu.root output_Slicer/${channel}/TTT/TTT0.root TT2l2nu TTT nominal
    ./slicer_${channel}_2017.exe ${input}/TT2l2nu.root output_Slicer/${channel}/TTJ/TTJ0.root TT2l2nu TTJ nominal
    ./slicer_${channel}_2017.exe ${input}/TThadronic_2.root output_Slicer/${channel}/TTT/TTT1_2.root TThadronic TTT nominal
    ./slicer_${channel}_2017.exe ${input}/TThadronic_2.root output_Slicer/${channel}/TTJ/TTJ1_2.root TThadronic TTJ nominal
    ./slicer_${channel}_2017.exe ${input}/TTsemiLepton_1.root output_Slicer/${channel}/TTT/TTT2_1.root TTsemileptonic TTT nominal
    ./slicer_${channel}_2017.exe ${input}/TTsemiLepton_1.root output_Slicer/${channel}/TTJ/TTJ2_1.root TTsemileptonic TTJ nominal
    hadd -f output_Slicer/${channel}/TTT.root output_Slicer/${channel}/TTT/TTT*.root
    hadd -f output_Slicer/${channel}/TTJ.root output_Slicer/${channel}/TTJ/TTJ*.root
fi

if [ $w = "true" ]; then
    rm output_Slicer/${channel}/W/*.root
    ./slicer_${channel}_2017.exe ${input}/W0.root output_Slicer/${channel}/W/W0.root WJets0 W nominal
    ./slicer_${channel}_2017.exe ${input}/W1.root output_Slicer/${channel}/W/W1.root WJets1 W nominal
    ./slicer_${channel}_2017.exe ${input}/W2.root output_Slicer/${channel}/W/W2.root WJets2 W nominal
    ./slicer_${channel}_2017.exe ${input}/W3.root output_Slicer/${channel}/W/W3.root WJets3 W nominal
    ./slicer_${channel}_2017.exe ${input}/W4.root output_Slicer/${channel}/W/W4.root WJets4 W nominal
    ./slicer_${channel}_2017.exe ${input}/EWKWMinus.root output_Slicer/${channel}/W/EWKWminus.root EWKWminus W nominal
    ./slicer_${channel}_2017.exe ${input}/EWKWPlus.root output_Slicer/${channel}/W/EWKWplus.root EWKWplus W nominal
    hadd -f output_Slicer/${channel}/W.root output_Slicer/${channel}/W/*.root
fi

if [ $diboson = "true" ]; then
    rm output_Slicer/${channel}/VVT/*.root
    rm output_Slicer/${channel}/VVJ/*.root
    # T-tW_1, Tbar-tchan_1, WZ1l1nu2q_1 are unsafe
    ./slicer_${channel}_2017.exe ${input}/T-tW_2.root output_Slicer/${channel}/VVT/T-tW_2.root ST_tW_top VVT nominal
    ./slicer_${channel}_2017.exe ${input}/T-tchan.root output_Slicer/${channel}/VVT/T-tchan.root ST_t_top VVT nominal
    ./slicer_${channel}_2017.exe ${input}/Tbar-tW.root output_Slicer/${channel}/VVT/Tbar-tW.root ST_tW_antitop VVT nominal
    ./slicer_${channel}_2017.exe ${input}/Tbar-tchan_2.root output_Slicer/${channel}/VVT/Tbar-tchan_2.root ST_t_antitop VVT nominal
    ./slicer_${channel}_2017.exe ${input}/VV2l2nu.root output_Slicer/${channel}/VVT/VV2l2nu.root VV2L2Nu VVT nominal
    ./slicer_${channel}_2017.exe ${input}/WW1l1nu2q_powheg.root output_Slicer/${channel}/VVT/WW1l1nu2q_powheg.root WW1L1Nu2Q VVT nominal
    ./slicer_${channel}_2017.exe ${input}/WZ1l1nu2q_2.root output_Slicer/${channel}/VVT/WZ1l1nu2q_2.root WZ1L1Nu2Q VVT nominal
    ./slicer_${channel}_2017.exe ${input}/WZ1l3nu.root output_Slicer/${channel}/VVT/WZ1l3nu.root WZ1L3Nu VVT nominal
    ./slicer_${channel}_2017.exe ${input}/WZ2l2q.root output_Slicer/${channel}/VVT/WZ2l2q.root WZ2L2Q VVT nominal
    ./slicer_${channel}_2017.exe ${input}/WZ3l1nu.root output_Slicer/${channel}/VVT/WZ3l1nu.root WZLLLNu VVT nominal
    ./slicer_${channel}_2017.exe ${input}/ZZ2l2q.root output_Slicer/${channel}/VVT/ZZ2l2q.root ZZ2L2Q VVT nominal
    ./slicer_${channel}_2017.exe ${input}/ZZ4l.root output_Slicer/${channel}/VVT/ZZ4l.root ZZ4L VVT nominal
    hadd -f  output_Slicer/${channel}/VVT.root  output_Slicer/${channel}/VVT/*.root

    ./slicer_${channel}_2017.exe ${input}/T-tW_2.root output_Slicer/${channel}/VVJ/T-tW_2.root ST_tW_top VVJ nominal
    ./slicer_${channel}_2017.exe ${input}/T-tchan.root output_Slicer/${channel}/VVJ/T-tchan.root ST_t_top VVJ nominal
    ./slicer_${channel}_2017.exe ${input}/Tbar-tW.root output_Slicer/${channel}/VVJ/Tbar-tW.root ST_tW_antitop VVJ nominal
    ./slicer_${channel}_2017.exe ${input}/Tbar-tchan_2.root output_Slicer/${channel}/VVJ/Tbar-tchan_2.root ST_t_antitop VVJ nominal
    ./slicer_${channel}_2017.exe ${input}/VV2l2nu.root output_Slicer/${channel}/VVJ/VV2l2nu.root VV2L2Nu VVJ nominal
    ./slicer_${channel}_2017.exe ${input}/WW1l1nu2q_powheg.root output_Slicer/${channel}/VVJ/WW1l1nu2q_powheg.root WW1L1Nu2Q VVJ nominal
    ./slicer_${channel}_2017.exe ${input}/WZ1l1nu2q_2.root output_Slicer/${channel}/VVJ/WZ1l1nu2q_2.root WZ1L1Nu2Q VVJ nominal
    ./slicer_${channel}_2017.exe ${input}/WZ1l3nu.root output_Slicer/${channel}/VVJ/WZ1l3nu.root WZ1L3Nu VVJ nominal
    ./slicer_${channel}_2017.exe ${input}/WZ2l2q.root output_Slicer/${channel}/VVJ/WZ2l2q.root WZ2L2Q VVJ nominal
    ./slicer_${channel}_2017.exe ${input}/WZ3l1nu.root output_Slicer/${channel}/VVJ/WZ3l1nu.root WZLLLNu VVJ nominal
    ./slicer_${channel}_2017.exe ${input}/ZZ2l2q.root output_Slicer/${channel}/VVJ/ZZ2l2q.root ZZ2L2Q VVJ nominal
    ./slicer_${channel}_2017.exe ${input}/ZZ4l.root output_Slicer/${channel}/VVJ/ZZ4l.root ZZ4L VVJ nominal
    hadd -f  output_Slicer/${channel}/VVJ.root  output_Slicer/${channel}/VVJ/*.root
fi


if [ $signal = "true" ]; then
    rm output_Slicer/${channel}/*125.root
    ./slicer_${channel}_2017.exe ${input}/VBFHtoTauTau125.root output_Slicer/${channel}/VBF125.root VBF125 VBF125 nominal
    ./slicer_${channel}_2017.exe ${input}/ggH125.root output_Slicer/${channel}/ggH125.root ggH125 ggH125 nominal
    ./slicer_${channel}_2017.exe ${input}/WMinusHTauTau125.root output_Slicer/${channel}/WminusH125.root WminusH125 WH125 nominal
    ./slicer_${channel}_2017.exe ${input}/WPlusHTauTau125.root output_Slicer/${channel}/WplusH125.root WplusH125 WH125 nominal
    hadd -f output_Slicer/${channel}/WH125.root output_Slicer/${channel}/WplusH125.root output_Slicer/${channel}/WminusH125.root
    ./slicer_${channel}_2017.exe ${input}/ZHTauTau125.root output_Slicer/${channel}/ZH125.root ZH125 ZH125 nominal
fi


if [ $embed = "true" ]; then
    rm output_Slicer/${channel}/embed/*.root
    rm output_Slicer/${channel}/embed.root
    ./slicer_${channel}_2017.exe ${input}/Embed_B.root output_Slicer/${channel}/embed/embed_B.root embedded embedded nominal
    ./slicer_${channel}_2017.exe ${input}/Embed_C.root output_Slicer/${channel}/embed/embed_C.root embedded embedded nominal
    ./slicer_${channel}_2017.exe ${input}/Embed_D.root output_Slicer/${channel}/embed/embed_D.root embedded embedded nominal
    ./slicer_${channel}_2017.exe ${input}/Embed_E.root output_Slicer/${channel}/embed/embed_E.root embedded embedded nominal
    ./slicer_${channel}_2017.exe ${input}/Embed_F.root output_Slicer/${channel}/embed/embed_F.root embedded embedded nominal
    hadd -f output_Slicer/${channel}/embedded.root output_Slicer/${channel}/embed/*.root
fi

echo ls -lrt output_Slicer/${channel}