#include <iostream>
#include "DoublyLinkedList.h"

using namespace std;

/*
* Initializes the list to empty creating a dummy header node.
*/
DoublyLinkedList::DoublyLinkedList()
{
	first = new Node;
  	last = new Node;

	first->next = last;
  	first->prev = NULL;

  	last->prev = first;
  	last->next = NULL;
}

/*
* Destructor. Deallocates all the nodes of the linked list,
* including the header node.
*/
DoublyLinkedList::~DoublyLinkedList()
{
	Node* temp;

	while (first != NULL)
	{
		temp = first;
		first = first->next;
		delete temp;
	}
}

/*
* Determines whether the list is empty.
*
* Returns true if the list is empty, false otherwise.
*/
bool DoublyLinkedList::isEmpty()
{
	return first->next == last;
}

/*
* Prints the list elements.
*/
void DoublyLinkedList::display()
{
	Node* current = first->next;

	while (current != last)
	{
		cout << current->info << " ";
		current = current->next;
	}

	cout << endl;
}

/*
* Adds the element x to the beginning of the list.
*
* x: element to be added to the list.
*/
void DoublyLinkedList::add(int x)
{
	Node* pLeft = first;
	Node* pRight = first->next;

	Node* p = new Node;

	p->info = x;
	p->next = pRight;
	p->prev = pLeft;

	pLeft->next = p;
	pRight->prev = p;
}

/*
* Removes the first occurrence of x from the list. If x is not found,
* the list remains unchanged.
*
* x: element to be removed from the list.
*/
void DoublyLinkedList::remove(int x)
{
	Node* old = first->next,
		* p = first;

	//Finding the address of the node before the one to be deleted
	bool found = false;
	while (old != NULL && !found)
	{
		if (old->info == x) found = true;
		else
		{
			p = old;
			old = p->next;
		}
	}

	//if x is in the list, remove it.
	if (found)
	{
		p->next = old->next;
		delete old;
	}
}

// Add x to the end of the list
void DoublyLinkedList::addEnd(int x) {
  Node* pLeft = last->prev;
  Node* pRight = last;
  
	Node* p = new Node;

	p->info = x;
	p->next = pRight;
  p->prev = pLeft;
  
  pLeft->next = p;
  pRight->prev = p;
}

// Display the list elements from the last item to the first one
void DoublyLinkedList::displayInReverse() {
	Node* current = last->prev;

    while (current != first){
        cout << current->info << " ";
        current = current->prev;
    }

    cout << endl;

}


