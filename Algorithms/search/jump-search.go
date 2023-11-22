package search

// DESCRIPTION:
// Jump Search is a searching algorithm for sorted arrays. The basic idea is to check fewer elements
// (than linear search) by jumping ahead by fixed steps and then performing linear search backward
// to find the target element.

// TIME COMPLEXITY:
// Best Case: O(1)
// Average & Worst Case: O(√n)

// SPACE COMPLEXITY:
// O(1)
// Jump Search is an iterative algorithm and only requires a constant amount of space for variables
// like start, end, blockSize, and a few others for control flow. Therefore, it uses a constant amount
// of space regardless of the size of the input array.

import (
	"math"
)

func JumpSearch(array []int, target int) int {
    blockSize := int(math.Sqrt(float64(len(array))))
    start := 0
    end := blockSize

    for end < len(array) && array[end-1] < target {
        start = end
        end += blockSize
        if end > len(array) {
            end = len(array)
        }
    }

    for i := start; i < end; i++ {
        if array[i] == target {
            return i // Target found
        }
    }

    return -1 // Target not found
}
