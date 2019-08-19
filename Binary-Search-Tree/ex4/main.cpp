#include <iostream>
#include "BinarySearchTree.h"
#include "time.h"

using namespace std;

int main()
{
	BinarySearchTree bst;

	
	for (int i=0; i < 10; i++)
		bst.add(rand()%20);

	cout << "Inorder Display: ";
	bst.display();
	cout << endl;

	cout << "Preorder Display: ";
	bst.preorderDisplay();
	cout << endl;

	cout << "Postorder Display: ";
	bst.postorderDisplay();
	cout << endl;
	system("PAUSE");
	return 0;
}