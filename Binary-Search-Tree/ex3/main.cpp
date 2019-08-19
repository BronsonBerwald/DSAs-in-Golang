#include <iostream>
#include "BinarySearchTree.h"
#include "time.h"

using namespace std;

int main()
{
	BinarySearchTree bst;
	
	bst.add(5);
	bst.add(4);
	bst.add(3);
	bst.add(2);
	bst.add(1);

	cout << "Height of the tree is: " << bst.getHeight() << endl;
	system("PAUSE");
	return 0;
}