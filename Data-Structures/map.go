package datastructures

import "fmt"

// A map, also known as an associative array or dictionary, is a data structure that stores
// data in key-value pairs. It allows for efficient data retrieval by using keys, making it
// possible to quickly access, add, or delete values based on their associated keys. Maps are
// commonly used for their fast lookup capabilities and the ability to dynamically grow and
// handle arbitrary types of data.

// AKA arrays in PHP, dictionaries in Python, objects in JavaScript, or hash tables in C.

// Map - Demonstrates the use of maps in Go
func Map() {
	// Initialize a map
	var myMap map[string]string

	// Initialize a map with values
	myMap = map[string]string{
		"firstKey":  "firstValue",
		"secondKey": "secondValue",
	}

	// Add a key/value pair to a map
	myMap["thirdKey"] = "thirdValue"

	// Get the value of a key in a map
	firstValue := myMap["firstKey"]

	// Delete a key/value pair from a map
	delete(myMap, "secondKey")

	// Update a key/value pair in a map
	myMap["thirdKey"] = "updatedThirdValue"

	// Get the length of a map
	length := len(myMap)

	// Print the map, its first value, length, and whether or not it contains a key
	fmt.Println("Map", myMap, firstValue, length, myMap["secondKey"])
}
