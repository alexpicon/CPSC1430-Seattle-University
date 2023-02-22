// Alex Picon
// OrderedList.h
// This file has the class declaring and constant value

#ifndef ORDEREDLIST_H
#define ORDEREDLIST_H

using namespace std;

class OrderedList
{
private:
  struct Node
  {
    int value;
    Node *next;
  };
  Node *head;
  
public:
// constructors
  OrderedList();
  OrderedList(OrderedList &);
// destructor
  ~OrderedList();
// functions
  void insert(int);
  void printList();
};
#endif
