package search

// DESCRIPTION:
// Linear Search is a straightforward method of searching for a value within a list or array. It
// checks each element in sequence until the desired element is found or the list ends.

// TIME COMPLEXITY:
// Best Case: O(1)
// Average & Worst Case: O(n)

// SPACE COMPLEXITY:
// O(1)
// Linear Search is an in-place algorithm that does not require any additional space that grows with
// the input size. The space used is only for the iterator and a few variables for control flow, which
// are constant.

func LinearSearch(array []int, target int) int {
	for i, value := range array {
		if value == target {
			return i // Target found
		}
	}
	return -1 // Target not found
}
