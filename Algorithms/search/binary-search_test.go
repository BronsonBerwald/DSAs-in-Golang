package search

import (
	"testing"
)

func TestBinarySearch(t *testing.T) {
	// Test empty array
	if BinarySearch([]int{}, 5) != -1 {
		t.Errorf("Expected -1 for empty array")
	}

	// Test single element array
	if BinarySearch([]int{1}, 1) != 0 {
		t.Errorf("Expected 0 for single element array containing the target")
	}
	if BinarySearch([]int{1}, 2) != -1 {
		t.Errorf("Expected -1 for single element array not containing the target")
	}

	// Test multiple elements array
	testArr := []int{1, 2, 3, 4, 5}
	if BinarySearch(testArr, 3) != 2 {
		t.Errorf("Expected 2 for target present in the middle of the array")
	}
	if BinarySearch(testArr, 1) != 0 {
		t.Errorf("Expected 0 for target present at the start of the array")
	}
	if BinarySearch(testArr, 5) != 4 {
		t.Errorf("Expected 4 for target present at the end of the array")
	}
	if BinarySearch(testArr, 6) != -1 {
		t.Errorf("Expected -1 for target not present in the array")
	}

	// Test with negative numbers
	testArr = []int{-3, -2, -1, 0, 1}
	if BinarySearch(testArr, -2) != 1 {
		t.Errorf("Expected 1 for target (-2) present in the array")
	}
	if BinarySearch(testArr, 2) != -1 {
		t.Errorf("Expected -1 for target (2) not present in the array")
	}
}
