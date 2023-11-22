package search

// DESCRIPTION:
// Depth-First Search (DFS) in a binary tree is a traversal method that explores as far as possible
// along each branch before backtracking. Your implementation specifically searches for a node with
// a target value in the binary tree.

// TIME COMPLEXITY:
// Best Case: O(1)
// Average & Worst Case: O(n)

// SPACE COMPLEXITY:
// O(n)
// The primary space-consuming structure in this algorithm is the stack. In the worst-case scenario,
// particularly in a tree that resembles a linked list (very unbalanced), the stack might need to
// hold all 'n' nodes of the tree at the same time.

import (
	datastructures "github.com/BronsonBerwald/DSAs-in-Golang/Data-Structures"
	"errors"
)

func BinaryTreeNodeDFS(root *datastructures.BinaryTreeNode, target int) (*datastructures.BinaryTreeNode, error) {
	stack := []*datastructures.BinaryTreeNode{root}

	for len(stack) > 0 {
		current := stack[len(stack)-1]
		stack = stack[:len(stack)-1]

		if current.Value == target {
			return current, nil
		}

		if current.Left != nil {
			stack = append(stack, current.Left)
		}

		if current.Right != nil {
			stack = append(stack, current.Right)
		}
	}

	return nil, errors.New("target not found")
}

func BinarySearchTreeNodeDFS(root *datastructures.BinarySearchTreeNode, target int) (*datastructures.BinarySearchTreeNode, error) {
	stack := []*datastructures.BinarySearchTreeNode{root}

	for len(stack) > 0 {
		current := stack[len(stack)-1]
		stack = stack[:len(stack)-1]

		if current.Value == target {
			return current, nil
		}

		if current.Left != nil {
			stack = append(stack, current.Left)
		}

		if current.Right != nil {
			stack = append(stack, current.Right)
		}
	}

	return nil, errors.New("target not found")
}