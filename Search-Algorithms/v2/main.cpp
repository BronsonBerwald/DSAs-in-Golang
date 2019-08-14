#include <iostream>
#include "ArrayList.h"
#include <time.h>
#include <chrono>
using namespace std;

/*
* Program to test the ArrayList class.
*/
void sortedSearch(ArrayList& list1, ArrayList& list2)
{
	auto start = chrono::steady_clock::now();

	bool isFound = false;
	for (int i = 0; i < list1.GetLength(); i++)
	{
		isFound = list2.binarySearch(list1.GetElement(i));
		if (!isFound)
		{
			cout << "\nList 1 is not completely contained in List 2" << endl;
			break;
		}
	}
	if (isFound)
		cout << "\nList 1 is completely contained in List 2" << endl;

	auto end = chrono::steady_clock::now();
	chrono::duration<double> timeElapsed = chrono::duration_cast<chrono::duration<double>>(end - start);
	cout << "Using sorted search,  total time elapsed: " << timeElapsed.count() << " seconds" << endl;
}

void unsortedSearch(ArrayList& list1, ArrayList& list2)
{
	auto start = chrono::steady_clock::now();

	bool isFound = false;
	for(int i = 0 ; i < list1.GetLength(); i++)
	{
		isFound = list2.sequentialSearch(list1.GetElement(i));
		if (!isFound)
		{	
			cout << "\nList 1 is not completely contained in List 2" << endl;
			break;
		}
	}
	if (isFound)
		cout << "\nList 1 is completely contained in List 2" << endl;

	auto end = chrono::steady_clock::now();
	chrono::duration<double> timeElapsed = chrono::duration_cast<chrono::duration<double>>(end - start);
	cout << "Using unsorted search,  total time elapsed: " << timeElapsed.count() << " seconds" << endl;

}

int main()
{
	cout << "\n";
	int TOTAL_ELEMENTS_BIGLIST = 50000;
	int TOTAL_ELEMENTS_SMALLLIST = 40000;
	srand((unsigned)time(0));

	//list creation
	ArrayList list2;

	ArrayList list1;
	for (int i = 0; i < TOTAL_ELEMENTS_BIGLIST; i++)
	{
		list2.add(rand() % 10000);
	}

	for (int i = 0; i < TOTAL_ELEMENTS_SMALLLIST; i++)
	{
		list1.add(rand() % 10000);
	}
	cout << endl;
	unsortedSearch(list1, list2);

	list1.bubbleSort();
	list2.bubbleSort();

	sortedSearch(list1, list2);

	cout << "\n\n";
	system("PAUSE");
	return 0;
}
