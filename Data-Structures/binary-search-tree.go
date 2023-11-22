package datastructures

// A binary search tree is a binary tree in which every node fits a specific 
// ordering property: all left descendents <= n < all right descendents.

// BinarySearchTreeNode - represents a node in the binary tree
type BinarySearchTreeNode struct {
    Value int
    Left  *BinarySearchTreeNode
    Right *BinarySearchTreeNode
}

// Insert - inserts a new node in the binary tree
func (n *BinarySearchTreeNode) Insert(value int) {
    if n == nil {
        return
    } else if value <= n.Value {
        if n.Left == nil {
            n.Left = &BinarySearchTreeNode{Value: value}
        } else {
            n.Left.Insert(value)
        }
    } else {
        if n.Right == nil {
            n.Right = &BinarySearchTreeNode{Value: value}
        } else {
            n.Right.Insert(value)
        }
    }
}

// InOrderTraversal - traverses the tree in in-order (left, root, right)
func (n *BinarySearchTreeNode) InOrderTraversal() []int {
    var values []int
    if n != nil {
        values = append(values, n.Left.InOrderTraversal()...)
        values = append(values, n.Value)
        values = append(values, n.Right.InOrderTraversal()...)
    }
    return values
}

// PreOrderTraversal - traverses the tree in pre-order (root, left, right)
func (n *BinarySearchTreeNode) PreOrderTraversal() []int {
    var values []int
    if n != nil {
        values = append(values, n.Value)
        values = append(values, n.Left.PreOrderTraversal()...)
        values = append(values, n.Right.PreOrderTraversal()...)
    }
    return values
}

// PostOrderTraversal - traverses the tree in post-order (left, right, root)
func (n *BinarySearchTreeNode) PostOrderTraversal() []int {
    var values []int
    if n != nil {
        values = append(values, n.Left.PostOrderTraversal()...)
        values = append(values, n.Right.PostOrderTraversal()...)
        values = append(values, n.Value)
    }
    return values
}