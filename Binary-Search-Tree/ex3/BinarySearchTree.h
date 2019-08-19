/*
* Binary search tree node.
*/
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
	void display();
	bool search(int);
	void add(int);
	int getMinimum();
	int getHeight();
	~BinarySearchTree();

private:
	TreeNode* root;

	void inorderDisplay(TreeNode*);
	bool search(int, TreeNode*);
	void add(int, TreeNode* &);
	TreeNode* getMinimum(TreeNode*);
	void deallocateMemory(TreeNode* &);
	int getHeight(TreeNode*);
};