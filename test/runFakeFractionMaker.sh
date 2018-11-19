#!/bin/sh 

 rm output_FakeFraction/${3}/*
 ####################
 ### Nominal ${2} runs ###
 ####################

 if [ -z ${1} ]; then
     ${1} = output_Slicer/${3}
 fi
 # 1. Data
 ./JetFakesFractionMaker_${3}.exe ${1}/data_obs.root output_FakeFraction/${3}/data_obs.root data_obs nominal ${2}

 # 2. Signals
 ./JetFakesFractionMaker_${3}.exe ${1}/VBF125.root output_FakeFraction/${3}/VBF125.root VBF125 nominal ${2}
 ./JetFakesFractionMaker_${3}.exe ${1}/ggH125.root output_FakeFraction/${3}/ggH125.root ggH125 nominal ${2}
 ./JetFakesFractionMaker_${3}.exe ${1}/WH125.root output_FakeFraction/${3}/WH125.root WH125 nominal ${2}
 ./JetFakesFractionMaker_${3}.exe ${1}/ZH125.root output_FakeFraction/${3}/ZH125.root ZH125 nominal ${2}

 # 3. DY
 ./JetFakesFractionMaker_${3}.exe ${1}/ZL.root output_FakeFraction/${3}/ZL.root ZL nominal ${2}
 ./JetFakesFractionMaker_${3}.exe ${1}/ZJ.root output_FakeFraction/${3}/ZJ.root ZJ nominal ${2}

 # 4. EWKZ
 ./JetFakesFractionMaker_${3}.exe ${1}/EWKZ.root output_FakeFraction/${3}/EWKZ.root EWKZ nominal ${2}

 # 5. TT
 ./JetFakesFractionMaker_${3}.exe ${1}/TTT.root output_FakeFraction/${3}/TTT.root TTT nominal ${2}
 ./JetFakesFractionMaker_${3}.exe ${1}/TTJ.root output_FakeFraction/${3}/TTJ.root TTJ nominal ${2}

 # 6. W
 ./JetFakesFractionMaker_${3}.exe ${1}/W.root output_FakeFraction/${3}/W.root W nominal ${2}

 # 7. VV
 ./JetFakesFractionMaker_${3}.exe ${1}/VVT.root output_FakeFraction/${3}/VVT.root VVT nominal ${2}
 ./JetFakesFractionMaker_${3}.exe ${1}/VVJ.root output_FakeFraction/${3}/VVJ.root VVJ nominal ${2}

 # Embedded or MC (default(no 2nd input) is embedded)
 if [ -z ${4} ]; then
      ./JetFakesFractionMaker_${3}.exe ${1}/embedded.root output_FakeFraction/${3}/embedded.root embedded nominal ${2}
      python python/JetFakesCreator_tt.py -i output_FakeFraction/${3} -c ${3}

 elif [ ${4} = "mc" ]; then
     ./JetFakesFractionMaker_${3}.exe ${1}/ZTT.root output_FakeFraction/${3}/ZTT.root ZTT nominal ${2}
     python python/JetFakesCreator_tt.py -i output_FakeFraction/${3} -z -c ${3}
 fi
 
