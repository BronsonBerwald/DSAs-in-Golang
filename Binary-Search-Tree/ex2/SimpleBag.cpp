#include "SimpleBag.h"



SimpleBag::SimpleBag()
{
	bst = new BinarySearchTree();
}

bool SimpleBag::isEmpty()
{
	return bst->isEmpty();
}

void SimpleBag::print()
{
	return bst->display();
}

void SimpleBag::clear()
{
	bst->clear();
}
void SimpleBag::add(int item)
{
	bst->add(item);
}

int SimpleBag::count(int item)
{
	return bst->count(item);
}

SimpleBag::~SimpleBag()
{
}
