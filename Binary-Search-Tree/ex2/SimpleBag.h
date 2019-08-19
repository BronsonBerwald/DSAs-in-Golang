
#include "BinarySearchTree.h"
class SimpleBag
{
public:
	SimpleBag();
	bool isEmpty();
	void print();
	void clear();
	void add(int);
	int count(int);
	~SimpleBag();
private:
	BinarySearchTree* bst;
};

