package search

// DESCRIPTION: 
// Binary Search is a search algorithm that finds the position of a target value within a sorted
// array. It compares the target with the middle element of the array; if they are not equal, the
// half in which the target cannot lie is eliminated, and the search continues on the remaining half
// until the target is found or the remaining half is empty.

// TIME COMPLEXITY:
// Best Case: O(1) 
// Average & Worst Case: O(log n)

// SPACE COMPLEXITY:
// O(1)
// The algorithm uses a constant amount of space. The space used by the input array is not typically
// counted for the space complexity of an algorithm, so the space complexity here refers to the space
// used for the pointers and the index (left, right, mid). These do not scale with the size of the 
// input array, making it a constant space complexity.

func BinarySearch(arr []int, target int) int {
	left := 0
	right := len(arr) - 1

	for left <= right {
		mid := (left + right) / 2

		if arr[mid] == target {
			return mid
		} else if arr[mid] < target {
			left = mid + 1
		} else if arr[mid] > target {
			right = mid - 1
		}
	}

	return -1
}