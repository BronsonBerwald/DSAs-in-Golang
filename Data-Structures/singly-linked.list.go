package datastructures

import "fmt"

// A singly linked list is a collection of nodes, where each node contains data and a reference
// (or pointer) to the next node in the sequence. The first node is known as the head, and the 
// last node points to null (or nil), indicating the end of the list.

// Node - represents a node in the linked list
type SinglyNode struct {
    Value int
    Next  *SinglyNode
}

// LinkedList - represents the linked list
type SinglyLinkedList struct {
    Head *SinglyNode
}

// Append - adds a node to the end of the linked list
func (l *SinglyLinkedList) Append(value int) {
    newNode := &SinglyNode{Value: value}
    if l.Head == nil {
        l.Head = newNode
        return
    }
    last := l.Head
    for last.Next != nil {
        last = last.Next
    }
    last.Next = newNode
}

// Insert - adds a node at a specific position
func (l *SinglyLinkedList) Insert(value int, position int) {
    newNode := &SinglyNode{Value: value}
    if position == 0 {
        newNode.Next = l.Head
        l.Head = newNode
        return
    }
    current := l.Head
    for i := 0; i < position-1 && current != nil; i++ {
        current = current.Next
    }
    if current == nil {
        fmt.Println("Position out of range")
        return
    }
    newNode.Next = current.Next
    current.Next = newNode
}

// Delete - removes a node from the linked list
func (l *SinglyLinkedList) Delete(value int) {
    if l.Head == nil {
        fmt.Println("List is empty")
        return
    }
    if l.Head.Value == value {
        l.Head = l.Head.Next
        return
    }
    current := l.Head
    for current.Next != nil {
        if current.Next.Value == value {
            current.Next = current.Next.Next
            return
        }
        current = current.Next
    }
    fmt.Println("Value not found in list")
}

// Print - displays the linked list
func (l *SinglyLinkedList) Print() {
    current := l.Head
    for current != nil {
        fmt.Printf("%d ", current.Value)
        current = current.Next
    }
    fmt.Println()
}

