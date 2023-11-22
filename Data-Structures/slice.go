package datastructures

import "fmt"

// A slice in Go is a flexible and powerful data structure that provides a more convenient and
// efficient way to work with sequences of data than arrays. Slices are built on top of arrays
// and provide a dynamically-sized, flexible view into the elements of an array. Unlike arrays,
// slices can be resized, offering more versatility and ease of use, particularly when dealing
// with lists of elements whose size may change over time.

// Slice - Demonstrates the use of slices in Go
func Slice() {
	// Initialize a slice
	var slice []string

	// Adding elements to a slice
	slice = append(slice, "some item")
	slice = append(slice, "another item") // Appending like this adds to the end of the slice
	slice = append(slice, "yet another item")
	slice = append(slice, "last item")
	slice = append([]string{"first item"}, slice...) // This adds an element to the beginning of the slice

	// Removing elements from a slice
	slice = slice[1:] // Remove the first element from the slice
	slice = slice[:len(slice)-1] // Remove the last element from the slice
	slice = append(slice[:1], slice[2:]...) // Remove the second element from the slice

	// Get the length of the slice
	length := len(slice)

	// Print the slice and its length
	fmt.Println("Slice", slice, length)
}