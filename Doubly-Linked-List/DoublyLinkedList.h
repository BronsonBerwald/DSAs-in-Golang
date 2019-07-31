/*
* Linked list node.
*/
struct Node
{
	int info;		//element stored in this node
	Node* next;		//link to next node
	Node* prev;
};

/*
* Class implementing a linked list.
*/
class DoublyLinkedList {
public:
	DoublyLinkedList();
	~DoublyLinkedList();
	bool isEmpty();
	void display();
	void add(int);
	void remove(int);
	void addEnd(int);
	void displayInReverse();

private:
	Node* first;	//pointer to header (dummy) node
	Node* last;
};