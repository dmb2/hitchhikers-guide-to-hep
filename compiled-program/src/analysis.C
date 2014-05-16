#include <cstdlib>
#include "TFile.h"
#include "TH1F.h"
#include "TLorentzVector.h"
#include <iostream>
using std::cout;
using std::cerr;
using std::endl;
double randomP(double min, double max){
  return (max-min)*((double)rand())/RAND_MAX+min;
}

int doAnalysis(){
  //This is the analysis driver, we initialize a number of events to
  //process, create variables to hold relevant quantities, and execute
  //the event loop.  Typically there will be selection criteria
  //applied at this stage.  Histograms and other output are also
  //usually produced here.


  const int N=100;
  double jet_E=0.,jet_px=0.,jet_py=0.,jet_pz=0.;

  //initialize random seed, use a fixed number to make the results
  //repeatable, be especially careful that you choose unique seeds if
  //you are generating random numbers in batch systems!
  srand(42);

  TLorentzVector jet;
  for(size_t i=0; i < N; i++  ){
    jet_E=randomP(0,100);
    jet_px=randomP(0,100);
    jet_py=randomP(0,100);
    jet_pz=randomP(0,100);
    jet.SetPxPyPzE(jet_px,jet_py,jet_pz,jet_E);
    if (jet.M() < 0){
      continue;
    }
    cout <<"Jet Mass: "<<jet.M()<<" [GeV]"<<endl;
  }
  return 42;
}
