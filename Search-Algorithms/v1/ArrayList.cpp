#include <iostream>
#include "ArrayList.h"

using namespace std;

/*
* Default constructor. Sets length to 0, initializing the list as an empty
* list. Default size of array is 20.
*/
ArrayList::ArrayList()
{
	SIZE = 10000;
	list = new int[SIZE];
	length = 0;
}

/*
* Destructor. Deallocates the dynamic array list.
*/
ArrayList::~ArrayList()
{
	delete [] list;
	list = NULL;
}

/*
* Determines whether the list is empty.
*
* Returns true if the list is empty, false otherwise.
*/
bool ArrayList::isEmpty()
{
	return length == 0;
}

/*
* Prints the list elements.
*/
void ArrayList::display()
{
	for (int i=0; i < length; i++)
		cout << list[i] << " ";
	cout << endl;
}

/*
* Adds the element x to the end of the list. List length is increased by 1.
*
* x: element to be added to the list
*/
void ArrayList::add(int x)
{
	if (length == SIZE)
	{
		cout << "Insertion Error: list is full" << endl;
	}
	else
	{
		list[length] = x;
		length++;
	}
}

/*
* Removes the element at the given location from the list. List length is
* decreased by 1.
*
* pos: location of the item to be removed
*/
void ArrayList::removeAt(int pos)
{
	if (pos < 0 || pos >= length)
	{
		cout << "Removal Error: invalid position" << endl;
	}
	else
	{
		for ( int i = pos; i < length - 1; i++ )
			list[i] = list[i+1];
		length--;
	}
}

/*
* Bubble-sorts this ArrayList
*/
void ArrayList::bubbleSort()
{
	for (int i = 0; i < length - 1; i++)
		for (int j = 0; j < length - i - 1; j++)
			if (list[j] > list[j + 1])
			{
				//swap list[j] and list[j+1]
				int temp = list[j];
				list[j] = list[j + 1];
				list[j + 1] = temp;
			}
}

/*
* Quick-sorts this ArrayList.
*/
void ArrayList::quicksort()
{
	quicksort(0, length - 1);
}

/*
* Recursive quicksort algorithm.
* 
* begin: initial index of sublist to be quick-sorted.
* end: last index of sublist to be quick-sorted.
*/
void ArrayList::quicksort(int begin, int end)
{
	int temp;
	int pivot = findPivotLocation(begin, end);

	// swap list[pivot] and list[end]
	temp = list[pivot];
	list[pivot] = list[end];
	list[end] = temp;

	pivot = end;

	int i = begin,
		j = end - 1;

	bool iterationCompleted = false;
	while (!iterationCompleted)
	{
		while (list[i] < list[pivot])
			i++;
		while ((j >= 0) && (list[pivot] < list[j]))
			j--;

		if (i < j)
		{
			//swap list[i] and list[j]
			temp = list[i];
			list[i] = list[j];
			list[j] = temp;

			i++;
			j--;
		} else
			iterationCompleted = true;
	}

	//swap list[i] and list[pivot]
	temp = list[i];
	list[i] = list[pivot];
	list[pivot] = temp;

	if (begin < i - 1)
		quicksort(begin, i - 1);
	if (i + 1 < end)
		quicksort(i + 1, end);
}

/*
* Computes the pivot location.
*/
int ArrayList::findPivotLocation(int b, int e)
{
	return (b + e) / 2;
}

/*
* Determines if an item exists in the array list using sequential (linear)
* search.
*
* x: item to be found.
*
* Returns true if x is found in the list, false otherwise.
*/
bool ArrayList::sequentialSearch(int x)
{
	for (int i=0; i < length; i++)
		if (list[i] == x)
			return true;	// x is in the array

	return false;			// x is not in the array
}

/*
* Determines if an item exists in the array list using sorted search.
* Precondition: list must be sorted.
*
* x: item to be found.
*
* Returns true if x is found in the list, false otherwise.
*/
bool ArrayList::sortedSearch(int x)
{
	int i = 0;
	while (i < length && list[i] < x)
		i++;

	if (i < length && list[i] == x)
		return true;	// x is in the array
	else
		return false;	// x is not in the array
}

/*
* Determines if an item exists in the array list using binary search.
* Precondition: list must be sorted.
*
* x: item to be found.
*
* Returns true if x is found in the list, false otherwise.
*/
bool ArrayList::binarySearch(int x)
{
	int first = 0, last = length - 1, pivot;

	bool found = false;
	while (first <= last && !found)
	{
		pivot = (first + last) / 2;
		if (list[pivot] == x)
			found = true;
		else if (x < list[pivot])
			last = pivot - 1;
		else
			first = pivot + 1;
	}

	if (found)
		return true;
	else
		return false;
}