/********************************************
*  Week 5 lesson:                           *
*   ArrayList class with search algorithms  *
*********************************************/

/*
 * Class implementing an array based list. Sequential search, sorted search, and
 * binary search algorithms are implemented also.
*/
class ArrayList
{
public:
	ArrayList ();
	~ArrayList();
	bool  isEmpty();
	void  display();
	void  add(int);
	void  removeAt(int);
	void bubbleSort();
	void quicksort();
	bool sequentialSearch(int);
	bool sortedSearch(int);
	bool binarySearch(int);
private:
	void quicksort(int, int);
	int findPivotLocation(int, int);
	int SIZE;		//size of the array that stores the list items
	int  *list;		//array to store the list items
	int  length;	//amount of elements in the list
};