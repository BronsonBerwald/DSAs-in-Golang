#include <iostream>
//#include "BinarySearchTree.h"
#include "time.h"

#include "SimpleBag.h"
using namespace std;

int main()
{
	SimpleBag bag;

	for (int i = 0; i < 20; i++)
		bag.add(rand() % 10);

	
	int option, x;

	do
	{
		cout << endl << endl;
		cout << "******************Testing the functions**********************" << endl;
		cout << "1 - Display the list elements" << endl;
		cout << "2 - Is it empty?" << endl;
		cout << "3 - Add an item" << endl;
		cout << "4 - Clear the bag" << endl;
		cout << "5 - Count the occurance" << endl;
		cout << "6 - Exit" << endl;
		cout << "*************************************************************" << endl;

		cout << endl << "Enter your choice: ";
		cin >> option;

		switch (option)
		{
		case 1:
			cout << "The items in the bag are: ";
			bag.print();
			break;

		case 2:
			if (bag.isEmpty()) cout << "Bag is empty" << endl;
			else cout << "Bag is not empty" << endl;
			break;

		case 3:
			cout << "Enter an element to the tree: ";
			cin >> x;
			bag.add(x);
			break;

		case 4:
			cout << "Removing bag items... "<< endl;
			bag.clear();
			cout << "All bag items have been removed" << endl;
			break;

		case 5:
			cout << "Enter an element to find its occurance in the bag: ";
			cin >> x;
			cout << "Total number of occurance of \'" << x << "\' in the bag: " << bag.count(x) << endl;
			break;
		case 6:
			break;

		default: cout << "Invalid choice!" << endl;
		}
		cout << endl;
		if(option != 6)
			system("PAUSE");
	} while (option != 6);

	system("PAUSE");
	return 0;
}