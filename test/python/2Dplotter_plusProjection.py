#!/usr/bin/env python
import ROOT
import re
from array import array
import math
import plotRocCurve_def

channel = "#tau_{h}#tau_{h}"
varX = "NN disc (TMVA)"
varY = ""#M_{#tau#tau}"
plottitle = varX+" VS "+varY

file=ROOT.TFile("plots/Quick/templates/NN_disc.root","r")
#cate={"tt_boosted":"boosted","tt_vbf":"vbf"}
cate={"tt_vbf":"vbf"}
samples = ["embedded","QCD","ZL","ZJ","TTT","TTJ","W","VVT","VVJ","ggH125","VBF125","WH125","ZH125"]
histodic = {}
x1d = 0.38
x2d = 0.33
cateStudy = "njets>1"
ROOT.gStyle.SetFrameLineWidth(1)
ROOT.gStyle.SetLineWidth(1)
ROOT.gStyle.SetOptStat(0)

def add_title(x1,x2):
    title = ROOT.TPaveText(x1, 0.88, x2, 0.98, "NDC")
    title.SetBorderSize(   0 )
    title.SetFillStyle(    0 )
    title.SetTextAlign(   12 )
    title.SetTextSize ( 0.06 )
    title.SetTextColor(    1 )
    title.SetTextFont (   42 )
    title.AddText(plottitle)
    return title

def add_sample(histoN):
    #sample = ROOT.TPaveText(1-0.15, 0.70, 1-0.23, 0.90, "NDC")
    sample = ROOT.TPaveText(0.15, 0.70, 0.23, 0.90, "NDC")
    sample.SetBorderSize(   0 )
    sample.SetFillStyle(    0 )
    #sample.SetFillColor(ROOT.kGray)
    sample.SetTextAlign(   12 )
    sample.SetTextSize ( 0.06 )
    sample.SetTextColor(    1 )
    sample.SetTextFont (   42 )
    sample.AddText(histoN)
    return sample

for cats in file.GetListOfKeys():
    cat = cats.GetName()
    if cat in cate.keys():
        for histos in file.Get(cat).GetListOfKeys():
            histoN = histos.GetName()
            histo = file.Get(cat).Get(histoN)
            histo.SetTitle(channel)
            histo.SetTitleFont(42)
            histo.SetTitleOffset(10)
            histo.GetXaxis().SetTitle(varX)
            histo.GetYaxis().SetTitle(varY)
            histo.GetXaxis().SetTitleOffset(1.0)
            histo.GetYaxis().SetTitleOffset(0.9)

            # Set negative yield bins to 0
            for j in range(0,histo.GetSize()-2):
                if histo.GetBinContent(j)<0:
                    #print "negativ yield", histo.GetBinContent(j)
                    histo.SetBinContent(j,0)

            canvas = ROOT.TCanvas(cat+"_"+histoN,"",0,0,600,600)
            canvas.SetBottomMargin(0.15)
            canvas.SetTopMargin(0.12)
            canvas.SetBorderMode(0)
            canvas.SetBorderSize(10)    
            canvas.cd()
            histo.Draw("COLZ")
            plottitle = varX+" VS "+varY
            title = add_title(x2d, 0.60)
            title.Draw("same")
            #canvas.SaveAs("plots/2D_"+cateStudy+"_"+histoN+"_"+varX+".pdf")
            
            if(histo.GetDimension()==2):
                histo1d = histo.ProjectionX()
            else:
                histo1d = histo.Clone()
            histo1d.SetTitle(channel)
            histo1d.SetTitleFont(42)
            histo1d.SetTitleOffset(10)
            histo1d.GetXaxis().SetTitle(varX)
            histo1d.GetYaxis().SetTitle(varY)
            histo1d.GetXaxis().SetTitleOffset(1.0)
            histo1d.GetYaxis().SetTitleOffset(0.9)
            canvas = ROOT.TCanvas(cat+"_"+histoN,"",0,0,600,400)
            canvas.SetBottomMargin(0.15)
            canvas.SetTopMargin(0.12)
            canvas.SetBorderMode(0)
            canvas.SetBorderSize(10)    
            canvas.cd()
            histo1d.Draw("HISTO")
            plottitle = varX
            title = add_title(x1d, 0.60)
            title.Draw("same")
            samName = add_sample(histoN)
            samName.Draw("same")
            #canvas.SaveAs("plots/1D_"+cateStudy+"_"+histoN+"_"+varX+".pdf")

            if (histoN=="ggH125" or histoN=="VBF125" or histoN=="QCD") :
                histodic[histoN] = histo1d
            

canvas_overlaid = ROOT.TCanvas(cat+"_"+histoN,"",0,0,600,400)
canvas_overlaid.SetBottomMargin(0.15)
canvas_overlaid.SetTopMargin(0.12)
#canvas_overlaid.SetLogy()
sigScale = 1
histodic["ggH125"].GetYaxis().SetTitle("Normalized yields")
histodic["ggH125"].Scale(1./histodic["ggH125"].Integral())
histodic["QCD"].Scale(1./histodic["QCD"].Integral())
histodic["VBF125"].Scale(1./histodic["VBF125"].Integral())

histodic["ggH125"].SetLineWidth(2)
histodic["ggH125"].SetLineColor(ROOT.kBlue+2)
histodic["ggH125"].SetMaximum(1.8*max(histodic["ggH125"].GetMaximum(),histodic["QCD"].GetMaximum()))#,histodic["VBF"].GetMaximum()))
histodic["ggH125"].Draw("HISTE")

histodic["QCD"].SetLineWidth(2)
histodic["QCD"].SetLineColor(ROOT.kRed+1)
histodic["QCD"].Scale(sigScale)
histodic["QCD"].Draw("same HISTE")

histodic["VBF125"].SetLineWidth(2)
histodic["VBF125"].SetLineColor(ROOT.kGreen+2)
histodic["VBF125"].Scale(sigScale) 
histodic["VBF125"].Draw("same HISTE")
legend = ROOT.TLegend(0.6,0.7,1.0,0.83, "", "brNDC")
legend.SetLineWidth(0)
legend.SetLineStyle(0)
legend.SetFillStyle(0)
legend.SetBorderSize(0)
legend.SetMargin(0.3)
legend.SetTextFont(62)
legend.AddEntry(histodic["ggH125"],"ggH125","elp")
legend.AddEntry(histodic["VBF125"],"VBF125","l")
#legend.AddEntry(histodic["QCD"],"Z#rightarrow#tau#tau","l")
legend.AddEntry(histodic["QCD"],"QCD","l")
legend.Draw()
samName = add_sample("njets>1, Mjj>300, H pT>100")
samName.Draw("same")
plottitle = varX
title = add_title(x1d, 0.600) 
title.Draw("same")
canvas_overlaid.SaveAs("plots/main_"+cateStudy+"_"+varX+".pdf")    
