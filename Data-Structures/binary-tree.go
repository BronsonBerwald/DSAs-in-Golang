package datastructures

// A binary tree is a tree data structure in which each node has at most two children, which 
// are referred to as the left child and the right child.

// While all binary search trees are binary trees, not all binary trees are binary search
// trees. The key difference lies in how nodes are inserted without considering their values
// relative to each other. This results in a tree that does not guarantee efficient searching,
// adding, or deleting operations like a binary search tree. Below is an example of a binary
// tree that is not a binary search tree:

// BinaryTreeNode - represents a node in the binary tree
type BinaryTreeNode struct {
	Value int
	Left  *BinaryTreeNode
	Right *BinaryTreeNode
}

// Insert - inserts a new node in the binary tree
func (n *BinaryTreeNode) Insert(value int) {
	if n == nil {
		return // Ideally, should not reach here
	}
	// Inserting without any order
	if n.Left == nil {
		n.Left = &BinaryTreeNode{Value: value}
	} else if n.Right == nil {
		n.Right = &BinaryTreeNode{Value: value}
	} else {
		// If both child nodes are filled, insert in left subtree (arbitrary choice)
		n.Left.Insert(value)
	}
}

// InOrderTraversal - traverses the tree in in-order (left, root, right)
func (n *BinaryTreeNode) InOrderTraversal() []int {
	var values []int
	if n != nil {
		values = append(values, n.Left.InOrderTraversal()...)
		values = append(values, n.Value)
		values = append(values, n.Right.InOrderTraversal()...)
	}
	return values
}
