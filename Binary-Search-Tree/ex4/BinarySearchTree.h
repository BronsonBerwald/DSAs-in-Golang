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
	void preorderDisplay();
	void postorderDisplay();
	bool search(int);
	void add(int);
	int getMinimum();
	~BinarySearchTree();

private:
	TreeNode* root;

	void inorderDisplay(TreeNode*);
	void preorderDisplay(TreeNode*);
	void postorderDisplay(TreeNode*);
	bool search(int, TreeNode*);
	void add(int, TreeNode* &);
	TreeNode* getMinimum(TreeNode*);
	void deallocateMemory(TreeNode* &);
};