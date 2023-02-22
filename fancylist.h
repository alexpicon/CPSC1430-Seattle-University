// Alex Picon
// FancyList.h
// This file has the class declaring and constant value

#ifndef FANCYLIST_H
#define FANCYLIST_H

using namespace std;

// node struct
struct Node
{
  int data;
  Node* next;
  Node(int data)
  {
    this->data = data;
    next = NULL;    
  }
};

// fancy list class
class FancyList
{
public:
  // bool to stop program
  bool stop;
  // head pointer
  Node* head, *tail;
  // constructor
  FancyList();
  // destructor
  ~FancyList();
  //functions
  void createList(int);
  void displayList();
  void reverseList();
  void deleteNthNodeFromEnd(int);
  bool exitMenu();
  void menu();
};
#endif
