#!/bin/sh 

 rm output_DatacardMaker/tt/*
 ####################
 ### Nominal ${2} runs ###
 ####################

 if [ -z ${1} ]; then
     ${1} = output_Slicer/tt
 fi
 # 1. Data
 ./datacardMaker_tt.exe ${1}/data_obs.root output_DatacardMaker/tt/data_obs.root data_obs nominal ${2}

 # 2. Signals
 ./datacardMaker_tt.exe ${1}/VBF125.root output_DatacardMaker/tt/VBF125.root VBF125 nominal ${2}
 ./datacardMaker_tt.exe ${1}/ggH125.root output_DatacardMaker/tt/ggH125.root ggH125 nominal ${2}
 ./datacardMaker_tt.exe ${1}/WH125.root output_DatacardMaker/tt/WH125.root WH125 nominal ${2}
 ./datacardMaker_tt.exe ${1}/ZH125.root output_DatacardMaker/tt/ZH125.root ZH125 nominal ${2}

 # 3. DY
 ./datacardMaker_tt.exe ${1}/ZL.root output_DatacardMaker/tt/ZL.root ZL nominal ${2}
 ./datacardMaker_tt.exe ${1}/ZJ.root output_DatacardMaker/tt/ZJ.root ZJ nominal ${2}

 # 4. EWKZ
 ./datacardMaker_tt.exe ${1}/EWKZ.root output_DatacardMaker/tt/EWKZ.root EWKZ nominal ${2}

 # 5. TT
 ./datacardMaker_tt.exe ${1}/TTT.root output_DatacardMaker/tt/TTT.root TTT nominal ${2}
 ./datacardMaker_tt.exe ${1}/TTJ.root output_DatacardMaker/tt/TTJ.root TTJ nominal ${2}

 # 6. W
 ./datacardMaker_tt.exe ${1}/W.root output_DatacardMaker/tt/W.root W nominal ${2}

 # 7. VV
 ./datacardMaker_tt.exe ${1}/VVT.root output_DatacardMaker/tt/VVT.root VVT nominal ${2}
 ./datacardMaker_tt.exe ${1}/VVJ.root output_DatacardMaker/tt/VVJ.root VVJ nominal ${2}

 # Embedded or MC (default(no 2nd input) is embedded)
 if [ -z ${3} ]; then
      ./datacardMaker_tt.exe ${1}/embedded.root output_DatacardMaker/tt/embedded.root embedded nominal ${2}
      #python python/SignalCreator.py
      python python/QCDcreator_tt.py -i output_DatacardMaker/tt
      hadd -f htt_tt_input.root output_DatacardMaker/tt/data_obs.root output_DatacardMaker/tt/ZJ.root output_DatacardMaker/tt/ZL.root output_DatacardMaker/tt/TTT.root output_DatacardMaker/tt/TTJ.root output_DatacardMaker/tt/VVT.root output_DatacardMaker/tt/VVJ.root output_DatacardMaker/tt/W.root output_DatacardMaker/tt/EWKZ.root output_DatacardMaker/tt/VBF125.root output_DatacardMaker/tt/ggH125.root output_DatacardMaker/tt/WH125.root output_DatacardMaker/tt/ZH125.root output_DatacardMaker/tt/QCD.root output_DatacardMaker/tt/embedded.root #output_DatacardMaker/tt/SMH.root 

 elif [ ${3} = "mc" ]; then
     ./datacardMaker_tt.exe ${1}/ZTT.root output_DatacardMaker/tt/ZTT.root ZTT nominal ${2}
     python python/QCDcreator_tt.py -i output_DatacardMaker/tt -z
     hadd -f htt_tt_input.root output_DatacardMaker/tt/data_obs.root output_DatacardMaker/tt/ZTT.root output_DatacardMaker/tt/ZJ.root output_DatacardMaker/tt/ZL.root output_DatacardMaker/tt/TTT.root output_DatacardMaker/tt/TTJ.root output_DatacardMaker/tt/VVT.root output_DatacardMaker/tt/VVJ.root output_DatacardMaker/tt/W.root output_DatacardMaker/tt/EWKZ.root output_DatacardMaker/tt/VBF125.root output_DatacardMaker/tt/ggH125.root output_DatacardMaker/tt/WH125.root output_DatacardMaker/tt/ZH125.root output_DatacardMaker/tt/QCD.root 

 #else
 #    echo "Usage : source do_plotter.sh inputfolder (mc or empty for embedded)"
 #    exit
 fi
 
