package datastructures

import "fmt"

// A doubly linked list is similar to a singly linked list, but each node in a doubly linked
// list contains an additional reference to the previous node. This means each node has data,
// a reference to the next node, and a reference to the previous node. The first node (head)
// has null as its previous reference, and the last node (tail) has null as its next reference.

// Node - represents a node in the doubly linked list
type DoublyNode struct {
	Value int
	Prev  *DoublyNode
	Next  *DoublyNode
}

// DoublyLinkedList - represents the doubly linked list
type DoublyLinkedList struct {
	Head *DoublyNode
	Tail *DoublyNode
}

// Append - adds a node to the end of the doubly linked list
func (l *DoublyLinkedList) Append(value int) {
	newNode := &DoublyNode{Value: value}
	if l.Head == nil {
		l.Head = newNode
		l.Tail = newNode
		return
	}
	l.Tail.Next = newNode
	newNode.Prev = l.Tail
	l.Tail = newNode
}

// Insert - adds a node at a specific position
func (l *DoublyLinkedList) Insert(value int, position int) {
	newNode := &DoublyNode{Value: value}
	if position == 0 {
		if l.Head == nil {
			l.Head = newNode
			l.Tail = newNode
		} else {
			newNode.Next = l.Head
			l.Head.Prev = newNode
			l.Head = newNode
		}
		return
	}
	current := l.Head
	for i := 0; i < position && current != nil; i++ {
		current = current.Next
	}
	if current == nil {
		fmt.Println("Position out of range")
		return
	}
	newNode.Next = current
	newNode.Prev = current.Prev
	if current.Prev != nil {
		current.Prev.Next = newNode
	}
	current.Prev = newNode
	if current == l.Head {
		l.Head = newNode
	}
}

// Delete - removes a node from the doubly linked list
func (l *DoublyLinkedList) Delete(value int) {
	if l.Head == nil {
		fmt.Println("List is empty")
		return
	}
	current := l.Head
	for current != nil {
		if current.Value == value {
			if current.Prev != nil {
				current.Prev.Next = current.Next
			} else {
				l.Head = current.Next
			}
			if current.Next != nil {
				current.Next.Prev = current.Prev
			} else {
				l.Tail = current.Prev
			}
			return
		}
		current = current.Next
	}
	fmt.Println("Value not found in list")
}

// Print - displays the doubly linked list
func (l *DoublyLinkedList) Print() {
	current := l.Head
	for current != nil {
		fmt.Printf("%d ", current.Value)
		current = current.Next
	}
	fmt.Println()
}
