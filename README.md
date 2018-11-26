# 2016 Higgs to Tau-Tau Analysis Code

Checkout the repository.
```
git clone git@github.com:KState-HEP-HTT/SMHTT2016_analyzer.git
cd ../test
git clone https://github.com/CMS-HTT/LeptonEfficiencies 
```

Slicer is saparated for 2016 and 2017 ntuples. Plotter and DatacardMaker can be used for both 2016 and 2017 after slicing.

Output root files of slicer is input of plotter and datacard maker. 

## Instruction of tree slicer :

To compile,
```
cd SMHTT_analyzer/src
./Make.sh slicer_tt.cc 
./Make.sh slicer_mt.cc 
```

To run on one sample,

```
cd ../test
./slicer_<ch>.exe <input.root> <output.root> <sample name> <output tag> <shape>
./slicer_mt.exe myntuples/Nov07_mt/DY0.root test.root DY0 ZTT nominal
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

To run on one sample,

```
cd ../test
./datacardMaker_<ch>.exe <input.root> <output.roo> <output tag> <shape> <2016 for 2016 selection or any number>
./datacardMaker_mt.exe output_Slicer/mt/ZTT.root output.root ZTT nominal 2016
```

To run the code and make the distribution plots,

```
cd ../test
source runDatacardMaker_<ch>.sh <inputfolder> <2016 for 2016 selection or any number> <mc(or empty for embedded ZTT)> 
source runDatacardMaker_tt.sh output_Slicer/tt 2016 (mc)
source runDatacardMaker_mt.sh output_Slicer/mt 2016 (mc) 
```


## Instruction of quick plotter :
One can run this analyzer from local machine as well as Wisconsin machine. 

To compile,
```
cd SMHTT_analyzer/src
./Make.sh plotter_tt.cc 
./Make.sh plotter_mt.cc 
```

To run on one sample,
```
cd ../test
./plotter_<ch>.exe <input.root> <output.root> <output tag> <min> <max> <obs> <ch>
./plotter_mt.exe output_Slicer/mt/ZTT.root test.root ZTT 10 0 200 mjj mt
```


To run the code and make the distribution plots,

```
cd ../test
source quickPlot.sh <options> -- <binnum> <min> <max> <obs>
source quickPlot.sh -ch tt -sel 2016 -fsa 2017 -i output_Slicer/tt -- 14 -2.1 2.1 t1_eta 
```

-fsa : 2016 or 2017 (Ntuples).

-sel : if it is 2016, 2016 category definition will be used.

-ch : channel. tt and mt is available.

This will give you the plots with embedded sample + three lines that enable you to make the same plots usint MC ZTT.


One need to recompile the code to change VBF category definition.



## Instruction of fake factor method :

```
source runFakeFractionMaker.sh output_Slicer/tt 2016 tt
```

This will generate JetFakesFraction.root which has fractions as 2D distributions.

