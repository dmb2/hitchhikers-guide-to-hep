#include <cstdlib>
#include <iostream>
#include "analysis.h"
#include <vector>
#include <string>

int main(const int argc, const char* argv[]){
  //Parse command line arguments
  std::vector<std::string> arg_list;
  for(int i=0; i < argc; i++){
    arg_list.push_back(std::string(argv[i]));
    std::cout<<"Got argument: "<<argv[i]<<std::endl;
  }
  //Initialize any objects required for the analysis
  
  //Call the analysis drivers
  doAnalysis();
  
  //Clean up and exit
  return 0;
}
