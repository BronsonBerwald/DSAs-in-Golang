/*
* Binary search tree node.
*/

#include<string>
using namespace std;
struct TreeNode
{
	int info;			//element stored in this node
	TreeNode *left;		//link to left child
	TreeNode *right;	//link to right child
};

/*
* Class implementing a binary search tree.
*/
class BinarySearchTree
{
public:
	BinarySearchTree();
	bool isEmpty();
	string to_string();
	void display();
	bool search(int);
	void add(int);
	int getMinimum();	
	void clear();
	int count(int);
	~BinarySearchTree();

private:
	TreeNode* root;

	void inorderDisplay(TreeNode*);
	bool search(int, TreeNode*);
	void add(int, TreeNode* &);
	void clear(TreeNode*);
	TreeNode* getMinimum(TreeNode*);
	void deallocateMemory(TreeNode* &);
	void to_string(TreeNode*, string&);
	void count(TreeNode*, int, int&);
};