package datastructures

import (
	"testing"

	helpers "github.com/BronsonBerwald/DSAs-in-Golang/helpers"
)

func TestBinaryTreeOperations(t *testing.T) {
	tree := &BinaryTreeNode{}

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
}
