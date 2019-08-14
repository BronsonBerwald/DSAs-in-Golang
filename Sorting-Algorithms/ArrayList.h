/*
* Class implementing an array based list. Bubblesort and quicksort algorithms
* are implemented also.
*/
class ArrayList
{
public:
	ArrayList ();
	ArrayList (int);
	~ArrayList();
	bool  isEmpty();
	void  display();
	void  add(int);
	void  removeAt(int);
	void bubbleSort();
	void quicksort();
private:
	void quicksort(int, int);
	int findPivotLocation(int, int);
	int SIZE;		//size of the array that stores the list items
	int  *list;		//array to store the list items
	int  length;	//amount of elements in the list
};