#include "Queue.h"
#include <iostream>

using namespace std;

int main()
{
	Queue q;

	cout<<"Checking dequeue function when the queue is empty:"<<endl;
	q.dequeue();

	cout<<"\n---------------------------------------------------------------------\n";

	cout<<"Checking the front function when the queue is empty:"<<endl;
	q.getFront();
	cout<<"\n---------------------------------------------------------------------\n";


	cout << "Insertion of 10 characters in q" << endl;
	for(int i=0; i < q.getSize(); i++)
	{
		char x = 32 + rand()%95;
		cout << x << endl;
		q.enqueue(x);
	}

	cout<<"Checking the enqueue function when the queue is full:"<<endl;
	q.enqueue('*');
	cout<<"\n---------------------------------------------------------------------\n";

	cout << endl
		 << "Displaying and deleting elements from q" << endl;
	while(!q.isEmpty())
	{
		cout << "Item at the front: " << q.getFront() << endl;
		q.dequeue();
	}
	system("PAUSE");
	return 0;
}