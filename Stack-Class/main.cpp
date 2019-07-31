#include <iostream>
#include "stack.h"

using namespace std;

int main()
{
	Stack s;

	cout<<"Checking pop function when the stack is empty:"<<endl;
	s.pop();

	cout<<"\n---------------------------------------------------------------------\n";

	cout<<"Checking peek function when the stack is empty:"<<endl;
	s.peek();
	cout<<"\n---------------------------------------------------------------------\n";

	cout << "Insertion of 10 characters in s" << endl;
	for (int i = 0; i < s.getSize(); i++)
	{
		char x = 32 + rand()%95;
		cout << x << endl;
		s.push(x);
	}

	cout << "Item at the top: " << s.peek() << endl;

	cout<<"Checking push function when the stack is full:"<<endl;
	cout<<"\n---------------------------------------------------------------------\n";
	s.push('*');
	s.push('*');

	cout << endl
		<< "Displaying and deleting elements from s" << endl;
	while(!s.isEmpty())
	{
		cout << "Item at the top: " << s.peek() << endl;

		s.pop();
	}

	system("PAUSE");
	return 0;
}