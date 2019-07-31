#include <iostream>
#include "stack.h"

using namespace std;


/*
* Constructor. Initializes the stack.
*/
Stack::Stack()
{
	top = 0;
}

/*
* Determines whether the stack is empty.
*
* Returns true if the stack is empty, false otherwise.
*/
bool Stack::isEmpty()
{
	return top == 0;
}

/*
* Adds an element to the top of the stack.
*
* x: element to be added to the stack.
*/
void Stack::push(char x)
{
	if(top == SIZE)
	{
		cout<<"The stack is full. Cannot add more elements!!!\n";
		return;
	}
	list[top] = x;
	top++;
}

/*
* Removes the element at the top of the stack.
*/
void Stack::pop()
{
	if(top == 0)
	{
		cout<<"The stack is empty. Cannot remove more elements!!!\n";
		return;
	}
	top--;
}

/*
* Returns the element at the top of the stack. Does not remove it.
*/
char Stack::peek()
{
	if(isEmpty())
	{
		cout<<"The stack is empty. Cannot peek!!!\n";
		return -1;
	}
	return list[top-1];
}

/*
* Returns the size of the stack.
*/
int Stack::getSize()
{
	return SIZE;
}