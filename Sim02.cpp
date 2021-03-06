#include <iostream>
#include <fstream>
#include <cstdlib>
#include <algorithm>
#include <string>
#include <vector>
#include <sstream>
#include "Simulator.h"
#include "OutputLog.h"
#include "Timer.h"

//Global log object
OutputLog global_log;

int main(int argc, char* argv[]) {

  //Checking argument count - outputs error if there are not enough / too many command line args
  if (argc != 2) {
     std::cout << "Error: incorrect input - expected 1 CL arg"<< std::endl;
     return EXIT_FAILURE;
  }

  //Get cmmdl arg and run simulator
  std::string config_file = argv[1];
  Simulator sim(config_file);
 
  return 0;  
}
