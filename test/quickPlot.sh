#!/bin/bash

selection=2016 # 0 means user category will be used.
ntuple=2016 # default Ntuple is 2016
fakefactor="false"

while [ -n "$1" ]; do # while loop starts
    case "$1" in
	-fsa)
            ntuple="$2"
            echo "Running over $2 FSA Ntuples ... "
	    shift
            ;;
	-sel)
            selection="$2"
            echo "2016 category is selected."
	    shift
            ;;
        -ch) channel="$2"
            echo "channel : $2"
            shift
            ;;
        -ff) fakefactor="true"
            echo "FakeFactor+embed and embed plots will be produced ..."
            ;;
        -i)
            inputfolder="$2"
            echo "Input root files are in $2"
            shift
            ;;
        --)
            shift # The double dash which separates options from parameters
            break
            ;;
        *) echo "Option $1 not recognized : -fsa -sel -ch -ff -i" ;;
    esac
    shift
done                                                                                                          
##############################################################################################################################################
##                                                                                                                                          ##         
##  Usage: source quickplot.sh < input dir > < number of bins > < min > < max > < var > < channel > <2016selection> <2016/2017 FSAversion>  ##
##    ex)  source quickPlot.sh FREEZE_TREES/mt_sync_NN 70 300 1000 mjj mt 2016 2017                                                         ##
##                                                                                                                                          ##         
##############################################################################################################################################
echo "\n\n\n"
rm plots/Quick/*.root

#export input=""
for i in `ls ${inputfolder}/*.root`; do
    export input="$iput $i"
    echo $input                                                                                                                                               
    fileName="${input%.*}"
    fileName="${fileName##*/}"
    #echo $fileName                                                                                                                                 
    ./plotter_${channel}.exe ${input} plots/Quick/${fileName}.root ${fileName} $1 $2 $3 $4 ${selection}
done

python python/QCDcreator_${channel}.py -i plots/Quick/ #-q
hadd -f plots/Quick/templates/$4.root plots/Quick/*.root
python python/stackPlotter_dev.py -i plots/Quick/templates/$4.root -v $4 -c ${channel}
if [ $fakefactor = "true" ]; then
    ./plotterFF_${channel}.exe ${inputfolder}/data_obs.root plots/Quick/JetFakes.root JetFakes $1 $2 $3 $4 ${selection} ${ntuple}
    python python/stackPlotter_dev.py -i plots/Quick/templates/$4.root -v $4 -c ${channel} -f
fi


printf "\nCopy and paste the following to make ZTT MC plot.\n\n" 
echo python python/QCDcreator_${channel}.py -i plots/Quick/ -z #-q
echo hadd -f plots/Quick/templates/$4.root plots/Quick/*.root
echo python python/stackPlotter_dev.py -i plots/Quick/templates/$4.root -v $4 -c ${channel} -z
echo
