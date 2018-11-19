if __name__ == "__main__":

    import ROOT
    import argparse
    from optparse import OptionParser
    import sys

    parser = OptionParser()
    parser.add_option('--ztt', '-z', action='store_true',
                      default=False, dest='is_zttMC',
                      help='run on embedded or MC ZTT'
                      )
    parser.add_option('--inputfolder', '-i', action='store',
                      default='output_FakeFraction', dest='outputs_xxx',
                      help='run on output dof analyzer or template'
                      )
    parser.add_option('--channel', '-c', action='store',
                      default='tt', dest='ch',
                      help='channels: tt, mt'
                      )
    (options, args) = parser.parse_args()

    regions = ["AIOS"]
    cates = ["0jet","boosted","vbf"]
    files = []
    histos = [[],[],[]] # [[hAIOS_0jet,hAISS_0jet,hSS_0jet],[same for boosted],[same for vbf]]
    samples = ["data_obs", "W", "ZJ", "VVJ","embedded", "TTT", "VVT", "EWKZ", "ZL","W", "ZJ", "VVJ","TTJ"]
    ##########################################
    #                                        #
    #  frac_w = (W + ZJ + VVJ) / data        #
    #  frac_tt = TTJ / data                  #
    #  frac_real = (ZTT + TTT + VVT) / data  #
    #                                        #
    ##########################################
    samples_w = ["W", "ZJ", "VVJ"]
    samples_real = ["embedded", "TTT", "VVT", "EWKZ", "ZL"]
    samples_tt = ["TTJ"]
    if options.is_zttMC:
        del files[:]
        samples_real = ["ZTT", "TTT", "VVT", "EWKZ", "ZL"]
        samples = ["data_obs", "W", "ZJ", "VVJ","ZTT", "TTT", "VVT", "EWKZ", "ZL","W", "ZJ", "VVJ","TTJ"]

    print options.outputs_xxx

    # Open root files
    for sample in samples:
        files.append(ROOT.TFile(options.outputs_xxx+"/"+sample+".root","r"))
    fout=ROOT.TFile("JetFakesFraction.root","recreate")

    # Get all histograms
    for region in regions:
        print ""
        for cate in cates:
            # combine all histo in the group
            print "-----  Group W  -----"
            for sample_w in samples_w:
                #print samples_w.index(sample_w)
                print region+"_"+cate+"_ff/"+sample_w
                print files[samples.index(sample_w)].Get(region+"_"+cate+"_ff/"+sample_w).Integral()
                if samples_w.index(sample_w)==0 :
                    histos[cates.index(cate)].append(files[samples.index(sample_w)].Get(region+"_"+cate+"_ff/"+sample_w))
                else:
                    histos[cates.index(cate)][-1].Add(files[samples.index(sample_w)].Get(region+"_"+cate+"_ff/"+sample_w),1)
            print "---------------------"

            print "-----  Group tt  -----"
            for sample_tt in samples_tt:
                #print samples_w.index(sample_w)
                print region+"_"+cate+"_ff/"+sample_tt
                print files[samples.index(sample_tt)].Get(region+"_"+cate+"_ff/"+sample_tt).Integral()
                if samples_tt.index(sample_tt)==0 :
                    histos[cates.index(cate)].append(files[samples.index(sample_tt)].Get(region+"_"+cate+"_ff/"+sample_tt))
                else:
                    histos[cates.index(cate)][-1].Add(files[samples.index(sample_w)].Get(region+"_"+cate+"_ff/"+sample_w),1)
            print "---------------------"

            print "-----  Group real  -----"
            for sample_real in samples_real:
                #print samples_w.index(sample_w)
                print region+"_"+cate+"_ff/"+sample_real
                print files[samples.index(sample_real)].Get(region+"_"+cate+"_ff/"+sample_real).Integral()
                if samples_real.index(sample_real)==0 :
                    histos[cates.index(cate)].append(files[samples.index(sample_real)].Get(region+"_"+cate+"_ff/"+sample_real))
                else:
                    histos[cates.index(cate)][-1].Add(files[samples.index(sample_real)].Get(region+"_"+cate+"_ff/"+sample_real),1)
            print "---------------------\n\n"

    #################################
    #  Dividing each group by data  #
    #################################
    for k in range(0,len(cates)):  # loop over categories
        fout.cd()
        dir = fout.mkdir(options.ch+cates[k]+"_ff")
        dir.cd()
        # Save control region histograms for checking.
        histos[k][0].SetName("frac_w")
        histos[k][0].Divide(files[samples.index("data_obs")].Get("AIOS_"+cate+"_ff/data_obs"))
        histos[k][0].Write()
        histos[k][1].SetName("frac_tt")
        histos[k][1].Divide(files[samples.index("data_obs")].Get("AIOS_"+cate+"_ff/data_obs"))
        histos[k][1].Write()
        histos[k][2].SetName("frac_real")
        histos[k][2].Divide(files[samples.index("data_obs")].Get("AIOS_"+cate+"_ff/data_obs"))
        histos[k][2].Write()

        print "Integral of fractions : "+ cates[k]
        print histos[k][0].Integral()
        print histos[k][1].Integral()
        print histos[k][2].Integral()
        print "\n"
