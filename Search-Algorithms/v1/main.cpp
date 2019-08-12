/********************************************
*  Week 5 lesson:                           *
*   ArrayList class with search algorithms  *
*********************************************/

#include <iostream>
#include "ArrayList.h"
#include <time.h>
#include <chrono>
using namespace std;

/*
* Program to test the ArrayList class.
*/

void SequentialSearch(int TotalSearches, int totalElements, ArrayList& numbers)
{
	int x;
	auto start = chrono::steady_clock::now();
	for (int i = 0; i < TotalSearches; i++)
	{

		x = rand() % totalElements;
		numbers.sequentialSearch(x);
	}

	auto end = chrono::steady_clock::now();
	chrono::duration<double> timeElapsed = chrono::duration_cast<chrono::duration<double>>(end - start);
	cout << "For total "<< TotalSearches <<" searches, Sequential Search time: " << timeElapsed.count() << " seconds" << endl;

}

void BinarySearch(int TotalSearches, int totalElements, ArrayList& numbers)
{
	int x;
	auto start = chrono::steady_clock::now();
	for (int i = 0; i < TotalSearches; i++)
	{

		x = rand() % totalElements;
		numbers.binarySearch(x);
	}

	auto end = chrono::steady_clock::now();
	chrono::duration<double> timeElapsed = chrono::duration_cast<chrono::duration<double>>(end - start);
	cout << "For total " << TotalSearches << " searches, Binary Search time: " << timeElapsed.count() << " seconds" << endl;

}

int main()
{
	cout << "\n\n";
	int TOTAL_ELEMENTS = 10000;
	srand((unsigned)time(0));

	//list creation
	ArrayList numbers;
	for (int i = 0; i < TOTAL_ELEMENTS; i++)
	{
		numbers.add(rand() % 1000);
	}


	SequentialSearch(500, TOTAL_ELEMENTS, numbers);
	BinarySearch(500, TOTAL_ELEMENTS, numbers);
	cout << "*************************************************************\n\n";

	SequentialSearch(1000, TOTAL_ELEMENTS, numbers);
	BinarySearch(1000, TOTAL_ELEMENTS, numbers);
	cout << "*************************************************************\n\n";
	
	SequentialSearch(1500, TOTAL_ELEMENTS, numbers);
	BinarySearch(1500, TOTAL_ELEMENTS, numbers);
	cout << "*************************************************************\n\n";


	SequentialSearch(2000, TOTAL_ELEMENTS, numbers);
	BinarySearch(2000, TOTAL_ELEMENTS, numbers);
	cout << "*************************************************************\n\n";
	
	SequentialSearch(5000, TOTAL_ELEMENTS, numbers);
	BinarySearch(5000, TOTAL_ELEMENTS, numbers);
	cout << "*************************************************************\n\n";
	
	SequentialSearch(10000, TOTAL_ELEMENTS, numbers);
	BinarySearch(10000, TOTAL_ELEMENTS, numbers);
	cout << "*************************************************************\n\n";
	
	SequentialSearch(15000, TOTAL_ELEMENTS, numbers);
	BinarySearch(15000, TOTAL_ELEMENTS, numbers);
	cout << "*************************************************************\n\n";
	
	SequentialSearch(20000, TOTAL_ELEMENTS, numbers);
	BinarySearch(20000, TOTAL_ELEMENTS, numbers);
	cout << "*************************************************************\n\n";
	
	SequentialSearch(25000, TOTAL_ELEMENTS, numbers);
	BinarySearch(25000, TOTAL_ELEMENTS, numbers);
	cout << "*************************************************************\n\n";
	
	SequentialSearch(30000, TOTAL_ELEMENTS, numbers);
	BinarySearch(30000, TOTAL_ELEMENTS, numbers);
	cout << "*************************************************************\n\n";

	system("PAUSE");
	return 0;
}
