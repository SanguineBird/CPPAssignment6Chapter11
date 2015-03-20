/*
Meghan Moore
March 21, 2015
CIT 245 - Data Structures and Programming C++
Assignment 4 - Chapter 7
Purpose: Create a project composed of 5 files: one application file (this),
  two implementation files, and two interface files.
*/

#include <cstdlib> //system
using namespace std;
#include "f.h"
#include "g.h"

int main(){
  FMMoore::hello();
  GMMoore::hello();
  
  system("pause");
  return 0;
} //end main
