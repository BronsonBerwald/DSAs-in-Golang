package datastructures

import (
	"testing"

	helpers "github.com/BronsonBerwald/DSAs-in-Golang/helpers"
)

func TestBinarySearchTree(t *testing.T) {
	tree := &BinarySearchTreeNode{}

	// Test Insert
	tree.Insert(2)
	tree.Insert(3)
	tree.Insert(4)
	tree.Insert(5)
	tree.Insert(6)
	tree.Insert(7)

	// Test InOrderTraversal
	if !helpers.CompareIntSlices(tree.InOrderTraversal(), []int{2, 3, 4, 5, 6, 7}) {
		t.Errorf("InOrderTraversal failed. Expected [2 3 4 5 6 7], got %v", tree.InOrderTraversal())
	}

	// Test PreOrderTraversal
	if !helpers.CompareIntSlices(tree.PreOrderTraversal(), []int{5, 3, 2, 4, 6, 7}) {
		t.Errorf("PreOrderTraversal failed. Expected [5 3 2 4 6 7], got %v", tree.PreOrderTraversal())
	}

	// Test PostOrderTraversal
	if !helpers.CompareIntSlices(tree.PostOrderTraversal(), []int{2, 4, 3, 7, 6, 5}) {
		t.Errorf("PostOrderTraversal failed. Expected [2 4 3 7 6 5], got %v", tree.PostOrderTraversal())
	}
}