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

echo ""
echo ""

rm output_DatacardMaker/${channel}/*


 ####################
 ### Nominal runs ###
 ####################
for i in `ls ${inputfolder}/*.root`; do
    export input="$iput $i"
    echo $input                                                                                                                                               
    fileName="${input%.*}"
    fileName="${fileName##*/}"
    ./datacardMaker_${channel}.exe ${input} output_DatacardMaker/${channel}/${fileName}.root ${fileName} nominal ${selection}
done

python python/QCDcreator_${channel}.py -i output_DatacardMaker/${channel}/ -d

if [ $fakefactor = "false" ]; then
    hadd -f htt_${channel}_input.root output_DatacardMaker/${channel}/*.root

elif [ $fakefactor = "true" ]; then
    ./datacardMakerFF_${channel}.exe ${inputfolder}/data_obs.root output_DatacardMaker/${channel}/JetFakes.root JetFakes nominal ${selection} ${ntuple}
    hadd -f htt_${channel}_input.root output_DatacardMaker/${channel}/*.root
fi

