#include <iostream>
#include "BinarySearchTree.h"
#include "time.h"

using namespace std;

int main()
{
	BinarySearchTree bst;

	for (int i = 0; i < 10; i++)
		bst.add(rand() % 20);

	//bst.display();
	cout << bst.to_string() << endl;


	system("PAUSE");
	return 0;
}