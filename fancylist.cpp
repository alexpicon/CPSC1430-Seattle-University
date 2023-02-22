// Alex Picon
// FancyList.cpp
// This file has the class definitions

#include <iostream>
#include "FancyList.h"

using namespace std;

// FancyList constructor definition
FancyList::FancyList()
{
  head = NULL;
  tail = NULL;
}

// FancyList destructor definition
FancyList::~FancyList()
{
  Node* current = head;
  Node* temp;
  cout << "Deallocating..." << endl;
  while (current != NULL) {
    temp = current;
    current = current->next;
    cout << "Deleting " << temp->data << endl;
    delete temp;
  }
  cout << endl;
}

// createList function definition
void FancyList::createList(int data)
{
  Node* append = new Node(data);
  Node* current;
  if (head == NULL) {
    head = append;
  } else {
    current = head;
    while (current->next != NULL) {
      current = current->next;
    }
    current->next = append;
  }
}

// displayList function definition
void FancyList::displayList()
{
  Node* current = head;
  while (current != NULL){
    cout << current->data << " ";
    current = current->next;
  }
  cout << endl;
}

// reverseList function definition
void FancyList::reverseList()
{
  Node* previous = NULL;
  Node* next = NULL;
  Node* current = head;
  while (current != NULL){
    next = current->next;
    current->next = previous;
    previous = current;
    current = next;
  }
  head = previous;
}

// deleteNthNodeFromEnd function definition
void FancyList::deleteNthNodeFromEnd(int num)
{
  Node* temp = head;
  Node* temp2 = head;
  Node* temp3 = head;
  int count = 0;
  while (temp != NULL){
    if (count >= num){
      temp2 = temp2->next;
    }
    temp = temp->next;
    count++;
  }
  if (temp2 == head){
    head = head->next;
  } else {
    temp3 = head;
    while (temp3->next != temp2){
      temp3 = temp3->next;
    }
    temp3->next = temp2->next;
  }
  delete temp2;
}

// exitMenu function definition
bool FancyList::exitMenu()
{
  cout << endl << "Exiting..." << endl << endl;;
  return true;
}

// menu function definition
void FancyList::menu()
{
  // declare variables
  string input;
  int choice;
  // display the menu
  cout << endl;
  cout << "********* FancyList Menu *********" << endl;
  cout << "1. Create a list" << endl;
  cout << "2. Display the list" << endl;
  cout << "3. Reverse the list" << endl;
  cout << "4. Delete the n-th node from the end of the list" << endl;
  cout << "5. Exit the program" << endl << endl;
  cout << "Enter your choice: ";
  
  // take choice from user
  cin >> choice;
  // switch case to perform operations
  switch (choice)
    {
      // if user enters 1...
    case 1:
      {
	while (1)
	  {
	    // asks user to type a number
	    cout << "Type a number for appending (type x to stop): ";
	    cin >> input;
	    if (input == "x"){
	      break;
	    } else {
	      // creates a list with the input number(s)
	      createList(stoi(input));
	    }
	  }
	break;
      }
      // if user enters 2...
    case 2:
      {
	cout << "Current list is: ";
	// displays current list
	displayList();
	break;
      }
      // if user enters 3...
    case 3:
      {   
	// reverses list
	reverseList();
	cout << "Current list after reversing is: ";
	// displays current list
	displayList();
	break;
      }
      // if user enters 4...
    case 4:
      {
	int num;
	// asks user to type a number
	cout << "Delete num-th node from the end of the list, your num is: ";
	cin >> num;
	// removes number-th node from current list
	deleteNthNodeFromEnd(num);
	cout << "Current list after deleting the " << num << "-th node from the end is: ";
	displayList();
	break;
      }
      // if user enters 5...
    case 5:
      {   
	// stops loop running in main function
	stop = exitMenu();
	break;  
      }
      // if user enters a number less than 1 or grater than 5
    default:
      {
	cout << "Invalid choice" << endl;
	break;
      }
    }
}
