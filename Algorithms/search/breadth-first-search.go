package search

// DESCRIPTION:
// Breadth-First Search (BFS) in a binary tree is a traversal method where you visit all the
// nodes at the current depth level before moving on to the nodes at the next depth level. This
// function specifically searches for a target value in the nodes of a binary tree.

// TIME COMPLEXITY:
// Best Case: O(1)
// Average & Worst Case: O(n)

// SPACE COMPLEXITY:
// O(n)
// The main space-consuming structure in this algorithm is the queue. In the worst-case scenario
// (a completely unbalanced tree), the queue might need to hold all 'n' nodes of the tree at the same
// time, particularly if the target is located near the end of the traversal or is not present.

import (
	datastructures "github.com/BronsonBerwald/DSAs-in-Golang/Data-Structures"
	"errors"
)

func BinaryTreeNodeBFS(root *datastructures.BinaryTreeNode, target int) (*datastructures.BinaryTreeNode, error) {
	queue := []*datastructures.BinaryTreeNode{root}

	for len(queue) > 0 {
		current := queue[0]
		queue = queue[1:]

		if current.Value == target {
			return current, nil
		}

		if current.Left != nil {
			queue = append(queue, current.Left)
		}

		if current.Right != nil {
			queue = append(queue, current.Right)
		}
	}

	return nil, errors.New("target not found")
}

func BinarySearchTreeNodeBFS(root *datastructures.BinarySearchTreeNode, target int) (*datastructures.BinarySearchTreeNode, error) {
	queue := []*datastructures.BinarySearchTreeNode{root}

	for len(queue) > 0 {
		current := queue[0]
		queue = queue[1:]

		if current.Value == target {
			return current, nil
		}

		if current.Left != nil {
			queue = append(queue, current.Left)
		}

		if current.Right != nil {
			queue = append(queue, current.Right)
		}
	}

	return nil, errors.New("target not found")
}
