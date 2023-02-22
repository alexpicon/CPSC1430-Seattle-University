// Alex Picon
// OrderedList.cpp
// This file has the definitions

#include <iostream>
#include "OrderedList.h"

using namespace std;

OrderedList::OrderedList()
{
  head = NULL;
}

// copy constructor that will help us copy a list to another
OrderedList::OrderedList(OrderedList &list)
{
  head = NULL;
  Node *temp = list.head;
  while (temp != NULL){
    insert(temp->value);
    temp = temp->next;
  }
}

// destructor that deallocates and shows what values are being deleted
OrderedList::~OrderedList()
{   
  Node *next;
  Node *temp = head;
  
  cout << "Deallocating..." << endl << endl;
  while (temp != NULL){
    cout << "Deleting " << temp->value << endl << endl;
    next = temp->next;
    delete temp;
    temp = next;
  }
  cout << endl;
}

// inserts numbers input into an organized list (ascending)
void OrderedList::insert(int value)
{
  Node *temp;
  Node *previous;
  Node *newNode = new Node;
  newNode->value = value;
  newNode->next = NULL;
  
  if (head == NULL){
    head = newNode;
  } else if (head->value > value) {
    newNode->next = head;
    head = newNode;
  } else {
    temp = head;
    previous = head;
    while (temp != NULL && temp->value < value){
      previous = temp;
      temp = temp->next;
    }
    newNode->next = previous->next;
    previous->next = newNode;
  }
}

// function that prints each number with a space in between 
void OrderedList::printList()
{
  Node *temp = head;
  while (temp != NULL){
    cout << temp->value << " ";
    temp = temp->next;
  }
  cout << endl;
}
