// Alex Picon
// hw3.cpp
// This file has the main() function

#include <iostream>
#include "FancyList.h"

using namespace std;

int main() {
  FancyList *list = new FancyList();
  
  // loop that helps run game/program
  while (list->stop != true) {
    // decided to make a separate function "menu" that runs all other functions
    // when called and helps make main as small as it is
    list->menu();
  }
  
  delete list;
  return 0;
}
