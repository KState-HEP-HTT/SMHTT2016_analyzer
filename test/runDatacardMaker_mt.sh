#!/bin/sh 

 rm output_DatacardMaker/mt/*
 ####################
 ### Nominal runs ###
 ####################
if [ -z ${1} ]; then
    input_dir='output_Slicer/mt'
else
    input_dir=${1}
fi

echo $input_dir

 # 1. Data
 ./datacardMaker_mt.exe $input_dir/data_obs.root output_DatacardMaker/mt/data_obs.root data_obs nominal

 # 2. Signals
 ./datacardMaker_mt.exe $input_dir/VBF125.root output_DatacardMaker/mt/VBF125.root VBF125 nominal
 ./datacardMaker_mt.exe $input_dir/ggH125.root output_DatacardMaker/mt/ggH125.root ggH125 nominal
 ./datacardMaker_mt.exe $input_dir/WH125.root output_DatacardMaker/mt/WH125.root WH125 nominal
 ./datacardMaker_mt.exe $input_dir/ZH125.root output_DatacardMaker/mt/ZH125.root ZH125 nominal

 # 3. DY
 ./datacardMaker_mt.exe $input_dir/ZL.root output_DatacardMaker/mt/ZL.root ZL nominal
 ./datacardMaker_mt.exe $input_dir/ZJ.root output_DatacardMaker/mt/ZJ.root ZJ nominal

 # 4. EWKZ
 ./datacardMaker_mt.exe $input_dir/EWKZ.root output_DatacardMaker/mt/EWKZ.root EWKZ nominal

 # 5. TT
 ./datacardMaker_mt.exe $input_dir/TTT.root output_DatacardMaker/mt/TTT.root TTT nominal
 ./datacardMaker_mt.exe $input_dir/TTJ.root output_DatacardMaker/mt/TTJ.root TTJ nominal

 # 6. W
 ./datacardMaker_mt.exe $input_dir/W.root output_DatacardMaker/mt/W.root W nominal

 # 7. VV
 ./datacardMaker_mt.exe $input_dir/VV.root output_DatacardMaker/mt/VV.root VV nomianl

 # Embedded or MC (default(no 2nd input) is embedded)
 if [ -z ${2} ]; then
      ./datacardMaker_mt.exe $input_dir/embedded.root output_DatacardMaker/mt/embedded.root embedded nominal
      python python/SignalCreator.py
      python python/QCDcreator_mt.py -i output_DatacardMaker/mt
      hadd -f htt_mt_input.root output_DatacardMaker/mt/data_obs.root output_DatacardMaker/mt/ZJ.root output_DatacardMaker/mt/ZL.root output_DatacardMaker/mt/TTT.root output_DatacardMaker/mt/TTJ.root output_DatacardMaker/mt/VV.root output_DatacardMaker/mt/W.root output_DatacardMaker/mt/EWKZ.root output_DatacardMaker/mt/VBF125.root output_DatacardMaker/mt/ggH125.root output_DatacardMaker/mt/WH125.root output_DatacardMaker/mt/ZH125.root output_DatacardMaker/mt/QCD.root output_DatacardMaker/mt/embedded.root

 elif [ ${2} = "mc" ]; then
     ./datacardMaker_mt.exe $input_dir/ZTT.root output_DatacardMaker/mt/ZTT.root ZTT nominal
     python python/QCDcreator_mt.py -i output_DatacardMaker/mt  -z 
     hadd -f htt_mt_input.root output_DatacardMaker/mt/data_obs.root output_DatacardMaker/mt/ZTT.root output_DatacardMaker/mt/ZJ.root output_DatacardMaker/mt/ZL.root output_DatacardMaker/mt/TTT.root output_DatacardMaker/mt/TTJ.root output_DatacardMaker/mt/VV.root output_DatacardMaker/mt/W.root output_DatacardMaker/mt/EWKZ.root output_DatacardMaker/mt/VBF125.root output_DatacardMaker/mt/ggH125.root output_DatacardMaker/mt/WH125.root output_DatacardMaker/mt/ZH125.root output_DatacardMaker/mt/QCD.root 

 #else
 #    echo "Usage : source do_plotter.sh inputfolder (mc or empty for embedded)"
 #    exit
 fi
 
