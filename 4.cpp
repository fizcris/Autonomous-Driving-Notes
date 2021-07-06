/**
 * As before, no need to change anything here, but feel free to play 
 *   with the test case.
 */

#include <iostream>
#include "Doubler.h"

int main() {
  int value = 25;
    
  std::cout << "Original value: " << value << std::endl;
    
  Doubler(value);
    
  std::cout << "Doubled value: " << value << std::endl;
    
  return 0;
}


#ifndef DOUBLER_H
#define DOUBLER_H

// TODO: put the right arguments here too!
void Doubler(int &value);

#endif  // DOUBLER_H


/** 
 * You'll need to finish the Doubler function here AND fix the parameters 
 *   of its signature in Doubler.h.
 */

#include "Doubler.h"

// TODO: Add the relevant arguments into the function below
void Doubler(int &value) {
    value *= 2; 
  // TODO: your code for Doubler here!
}

