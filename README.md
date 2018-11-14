# 2016 Higgs to Tau-Tau Analysis Code

Checkout the repository.
```
git clone git@github.com:KState-HEP-HTT/SMHTT2016_analyzer.git
cd ../tst
git clone https://github.com/CMS-HTT/LeptonEfficiencies 
```

Slicer is saparated for 2016 and 2017 ntuples. Plotter and DatacardMaker can be used for both 2016 and 2017 after slicing.

## Instruction of tree slicer :

To compile,
```
cd SMHTT_analyzer/src
./Make.sh slicer_tt.cc 
./Make.sh slicer_mt.cc 
```

To run the code and make the distribution plots,

```
cd ../test
source runSlicer_nominal_<ch>.sh <inputfolder>
source runSlicer_nominal_tt.sh myntuples/Sep03_fixQ
source runSlicer_nominal_2017.sh <inputfolder> <ch>
source runSlicer_nominal_2017.sh myntuples/Nov07_2017_tt tt
```



## Instruction of datacard maker :

To compile,
```
cd SMHTT_analyzer/src
./Make.sh datacardMaker_tt.cc 
./Make.sh datacardMaker_mt.cc 
```

To run the code and make the distribution plots,

```
cd ../test
source runDatacardMaker_<ch>.sh <inputfolder> <2016 to reproduce 2016 analysis result(fot now only tt)> <mc(or empty for embedded)> 
source runDatacardMaker_tt.sh output_Slicer/tt (2016) (mc)
source runDatacardMaker_mt.sh output_Slicer/mt (2016) (mc) 
```


## Instruction of quick plotter :
One can run this analyzer from local machine as well as Wisconsin machine. 

To compile,
```
cd SMHTT_analyzer/src
./Make.sh plotter_tt.cc 
./Make.sh plotter_mt.cc 
```

To run the code and make the distribution plots,

```
cd ../test
source quickPlot.sh <input folder> <numbin> <min> <max> <obs> <ch> 
source quickPlot.sh FREEZE_TREES/tt_qcdCRstudy 20 0 1 MELA tt
```

This will give you the plots with embedded sample + two lines that enable you to make the same plots usint MC ZTT.


One need to recompile the code to change VBF category definition.

https://github.com/KState-HEP-HTT/SMHTT2016_analyzer/blob/master/src/plotter_tt.cc#L177-L179




