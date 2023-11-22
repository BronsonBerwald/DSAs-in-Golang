package search

import (
	"errors"
	"testing"

	datastructures "github.com/BronsonBerwald/DSAs-in-Golang/Data-Structures"
)

func TestBinaryTreeNodeBFS(t *testing.T) {
    // Create a binary tree for testing
    root := &datastructures.BinaryTreeNode{Value: 1}
    root.Left = &datastructures.BinaryTreeNode{Value: 2}
    root.Right = &datastructures.BinaryTreeNode{Value: 3}
    root.Left.Left = &datastructures.BinaryTreeNode{Value: 4}

    // Test finding an existing value
    node, err := BinaryTreeNodeBFS(root, 3)
    if err != nil || node == nil || node.Value != 3 {
        t.Errorf("Expected to find node with value 3")
    }

    // Test finding a non-existing value
    _, err = BinaryTreeNodeBFS(root, 5)
    if err == nil || !errors.Is(err, errors.New("target not found")) {
        t.Errorf("Expected 'target not found' error, got %v", err)
    }
}

func TestBinarySearchTreeNodeBFS(t *testing.T) {
    // Create a binary search tree for testing
    root := &datastructures.BinarySearchTreeNode{Value: 1}
    root.Left = &datastructures.BinarySearchTreeNode{Value: 0}
    root.Right = &datastructures.BinarySearchTreeNode{Value: 2}

    // Test finding an existing value
    node, err := BinarySearchTreeNodeBFS(root, 2)
    if err != nil || node == nil || node.Value != 2 {
        t.Errorf("Expected to find node with value 2")
    }

    // Test finding a non-existing value
    _, err = BinarySearchTreeNodeBFS(root, 3)
    if err == nil || !errors.Is(err, errors.New("target not found")) {
        t.Errorf("Expected 'target not found' error, got %v", err)
    }
}