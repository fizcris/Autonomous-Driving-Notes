

/**
 * This header file defines the function signature for PrintString.
 */

#ifndef PRINTSTRING_H
#define PRINTSTRING_H

#include <string>

#endif  // PRINTSTRING_H



#include <iostream>
#include <string>

void PrintString(std::string str, int n) {
  for (int i = 0; i < n; ++i) {
    std::cout << str << std::endl;
  }
}