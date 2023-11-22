package datastructures

import "fmt"

// An array is a data structure consisting of a collection of elements, each identified by at
// least one array index or key. Arrays store elements in contiguous memory locations, enabling
// efficient access to elements via their indices. They are of fixed size, meaning the number
// of elements they can hold is set when the array is created and cannot be changed dynamically.

// Array - Demonstrates the use of arrays in Go
func Array() {
	// Initialize an array of 5 integers
	var arr [5]int

	// Set the first 3 elements
	arr[0] = 1
	arr[1] = 2
	arr[2] = 3

	// Get the length of the array
	length := len(arr)

	// Print the array and its length
	fmt.Println("Array:", arr, length)
}
