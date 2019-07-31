#include <iostream>
#include "DoublyLinkedList.cpp"

using namespace std;

int main()
{
	DoublyLinkedList myList;
	int x;

	//Add 5 random numbers to list
	for (int i = 0; i < 5; i++)
		myList.add(rand() % 20);

	cout << "1 - Display the list elements" << endl;
	cout << "2 - Is it empty?" << endl;
	cout << "3 - Add element" << endl;
	cout << "4 - Delete element" << endl;
	cout << "5 - Add element to the end" << endl;
	cout << "6 - Displau the elements in reverse" << endl;
	cout << "7 - Exit" << endl;

	int option;

	//Loop to test the LinkedList class methods
	do
	{
		cout << endl << "Enter your choice: ";
		cin >> option;

		switch (option)
		{
		case 1:
			cout << "List elements: ";
			myList.display();
			break;

		case 2:
			if (myList.isEmpty()) cout << "List is empty" << endl;
			else cout << "List is not empty" << endl;
			break;

		case 3:
			cout << "Enter an element to add at the beginning of the list: ";
			cin >> x;
			myList.add(x);
			break;

		case 4:
			cout << "Enter an element to delete from the list: ";
			cin >> x;
			myList.remove(x);
			break;
		case 5:
			cout << "Enter an element to add to the end of the list: ";
			cin >> x;
			myList.addEnd(x);
			break;

		case 6:
			cout << "List elements in reverse: ";
			myList.displayInReverse();
			break;

		case 7:
			cout << "All done!" << endl;
			break;

		default: cout << "Invalid choice!" << endl;
		}

	} while (option != 7);

	return 0;
}