package datastructures

import (
	"reflect"
	"testing"
)

func TestLinkedListOperations(t *testing.T) {
    list := &SinglyLinkedList{}

    // Test Append
    list.Append(1)
    list.Append(2)
    if !reflect.DeepEqual(getSinglyLinkedListValues(list), []int{1, 2}) {
        t.Errorf("Append failed. Expected [1 2], got %v", getSinglyLinkedListValues(list))
    }

    // Test Insert at beginning
    list.Insert(0, 0)
    if !reflect.DeepEqual(getSinglyLinkedListValues(list), []int{0, 1, 2}) {
        t.Errorf("Insert at beginning failed. Expected [0 1 2], got %v", getSinglyLinkedListValues(list))
    }

    // Test Insert at middle
    list.Insert(1, 2)
    if !reflect.DeepEqual(getSinglyLinkedListValues(list), []int{0, 1, 1, 2}) {
        t.Errorf("Insert in middle failed. Expected [0 1 1 2], got %v", getSinglyLinkedListValues(list))
    }

    // Test Delete
    list.Delete(1)
    if !reflect.DeepEqual(getSinglyLinkedListValues(list), []int{0, 1, 2}) {
        t.Errorf("Delete failed. Expected [0 1 2], got %v", getSinglyLinkedListValues(list))
    }
}

// Helper function to extract list values into a slice for easy comparison
func getSinglyLinkedListValues(list *SinglyLinkedList) []int {
    var values []int
    current := list.Head
    for current != nil {
        values = append(values, current.Value)
        current = current.Next
    }
    return values
}