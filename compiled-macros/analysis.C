#include "TFile.h"
#include "TH1F.h"



int doAnalysis(){
  //Since the ROOT binary already defines a "main" an error will occur
  //if you redefine another function named "main", therefore we use
  //the verb "doAnalysis"
  
  //Open files and retrieve pointers here

  //number of events to process, usually if you are processing a tree, this is tree->GetEntries();
  const int N=10000;

  //variables to hold our data
  double jet_E=0,jet_px=0,jet_py=0,jet_pz=0;

  //this is the eventloop, normally this is where you analyze tree
  //branches, but since there's no input data 
  for(size_t i=0; i < N; i++  ){
    
  }
}
