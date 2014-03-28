{
  //may need to load other libraries or files that depend on analysis.C
  gROOT->ProcessLine(".L analysis.C++");
  gROOT->ProcessLine("doAnalysis()");
}
