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
 ./datacardMaker_mt.exe $input_dir/data_obs.root output_DatacardMaker/mt/data_obs.root data_obs nominal ${2}

 # 2. Signals
 ./datacardMaker_mt.exe $input_dir/VBF125.root output_DatacardMaker/mt/VBF125.root VBF125 nominal ${2}
 ./datacardMaker_mt.exe $input_dir/ggH125.root output_DatacardMaker/mt/ggH125.root ggH125 nominal ${2}
 ./datacardMaker_mt.exe $input_dir/WH125.root output_DatacardMaker/mt/WH125.root WH125 nominal ${2}
 ./datacardMaker_mt.exe $input_dir/ZH125.root output_DatacardMaker/mt/ZH125.root ZH125 nominal ${2}

 # 3. DY
 ./datacardMaker_mt.exe $input_dir/ZL.root output_DatacardMaker/mt/ZL.root ZL nominal ${2}
 ./datacardMaker_mt.exe $input_dir/ZJ.root output_DatacardMaker/mt/ZJ.root ZJ nominal ${2}

 # 4. EWKZ
 ./datacardMaker_mt.exe $input_dir/EWKZ.root output_DatacardMaker/mt/EWKZ.root EWKZ nominal ${2}

 # 5. TT
 ./datacardMaker_mt.exe $input_dir/TTT.root output_DatacardMaker/mt/TTT.root TTT nominal ${2}
 ./datacardMaker_mt.exe $input_dir/TTJ.root output_DatacardMaker/mt/TTJ.root TTJ nominal ${2}

 # 6. W
 ./datacardMaker_mt.exe $input_dir/W.root output_DatacardMaker/mt/W.root W nominal ${2}

 # 7. VV
 ./datacardMaker_mt.exe $input_dir/VV.root output_DatacardMaker/mt/VV.root VV nominal ${2}
 ./datacardMaker_mt.exe $input_dir/VVT.root output_DatacardMaker/mt/VVT.root VVT nominal ${2}
 ./datacardMaker_mt.exe $input_dir/VVJ.root output_DatacardMaker/mt/VVJ.root VVJ nominal ${2}

 # Embedded or MC (default(no 2nd input) is embedded)
 if [ -z ${3} ]; then
      ./datacardMaker_mt.exe $input_dir/embedded.root output_DatacardMaker/mt/embedded.root embedded nominal ${2}
      #python python/SignalCreator.py
      python python/QCDcreator_mt.py -i output_DatacardMaker/mt
      hadd -f htt_mt_input.root output_DatacardMaker/mt/data_obs.root output_DatacardMaker/mt/ZJ.root output_DatacardMaker/mt/ZL.root output_DatacardMaker/mt/TTT.root output_DatacardMaker/mt/TTJ.root output_DatacardMaker/mt/VV.root output_DatacardMaker/mt/W.root output_DatacardMaker/mt/EWKZ.root output_DatacardMaker/mt/VBF125.root output_DatacardMaker/mt/ggH125.root output_DatacardMaker/mt/WH125.root output_DatacardMaker/mt/ZH125.root output_DatacardMaker/mt/QCD.root output_DatacardMaker/mt/embedded.root

 elif [ ${3} = "mc" ]; then
     ./datacardMaker_mt.exe $input_dir/ZTT.root output_DatacardMaker/mt/ZTT.root ZTT nominal ${2}
     python python/QCDcreator_mt.py -i output_DatacardMaker/mt  -z 
     hadd -f htt_mt_input.root output_DatacardMaker/mt/data_obs.root output_DatacardMaker/mt/ZTT.root output_DatacardMaker/mt/ZJ.root output_DatacardMaker/mt/ZL.root output_DatacardMaker/mt/TTT.root output_DatacardMaker/mt/TTJ.root output_DatacardMaker/mt/VV.root output_DatacardMaker/mt/W.root output_DatacardMaker/mt/EWKZ.root output_DatacardMaker/mt/VBF125.root output_DatacardMaker/mt/ggH125.root output_DatacardMaker/mt/WH125.root output_DatacardMaker/mt/ZH125.root output_DatacardMaker/mt/QCD.root 

 #else
 #    echo "Usage : source do_plotter.sh inputfolder (mc or empty for embedded)"
 #    exit
 fi
 
