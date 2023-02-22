// Alex Picon
// lab6.cpp
// This file has the main() function

#include <iostream>
#include <iomanip>
#include "OrderedList.h"

using namespace std;

int main()
{   
  string input = "0";
  int value;
  
  OrderedList listA;
  cout << endl << "Asking user to type and create ListA..." << endl << endl;
  
  // asks user for input and inserts into the list 
  while (input != "x"){
    cout << "Type a number for insertation (type x to stop): ";
    cin >> input;
    cout << endl;
    if(input != "x"){
      value = stoi(input);
      listA.insert(value);
    }
  }
  
  cout << endl << endl;
  cout << "listA is: " << setw(19);
  listA.printList();
  cout << endl;
  
  // copies list A into list B
  OrderedList listB(listA);
  cout << "listB is copied from listA: ";
  listB.printList();
  cout << endl << endl;
  
  // asks user for input and inserts into the list 
  cout << "Asking user to type and create ListB..." << endl << endl;
  cout << "Type a number for insertation (type x to stop): ";
  cin >> input;
  cout << endl;
  
  // asks user for input and inserts into the list 
  while (input != "x"){
    value = stoi(input);
    listB.insert(value);
    cout << "Type a number for insertation (type x to stop): ";
    cin >> input;
    cout << endl;
    
  }
  
  // prints both list A and list B
  cout << endl << endl;
  cout << "listA now is: ";
  listA.printList();
  
  cout << endl;
  cout << "listB now is: ";
  listB.printList();
  cout << endl << endl;
  
  // after printing, the program will show the deallocation
  return 0;
}
