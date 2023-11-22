package search

import (
	"testing"
)

func TestJumpSearch(t *testing.T) {
    testArray := []int{1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21}

    // Test finding an existing value
    index := JumpSearch(testArray, 11)
    if index != 5 {
        t.Errorf("Expected to find 11 at index 5, got %d", index)
    }

    // Test finding a value at the beginning
    index = JumpSearch(testArray, 1)
    if index != 0 {
        t.Errorf("Expected to find 1 at index 0, got %d", index)
    }

    // Test finding a value at the end
    index = JumpSearch(testArray, 21)
    if index != 10 {
        t.Errorf("Expected to find 21 at index 10, got %d", index)
    }

    // Test finding a non-existing value
    index = JumpSearch(testArray, 4)
    if index != -1 {
        t.Errorf("Expected to not find 4, got index %d", index)
    }

    // Test empty array
    index = JumpSearch([]int{}, 1)
    if index != -1 {
        t.Errorf("Expected to not find 1 in empty array, got index %d", index)
    }
}