/*******************************
*  Week 2 lesson:              *
*   a simple Queue class       *
*******************************/

/*
* Class implementing a Queue ADT.
*/
class Queue
{
public:
	Queue();
	bool isEmpty();
	void enqueue(char);
	void dequeue();
	char getFront();
	int getSize();

private:
	static const int SIZE = 10;	//size of the queue array
	char list[SIZE];			//array to store the queue items
	int count;					//number of items in the queue
	int front, back;			//front and back locations
};