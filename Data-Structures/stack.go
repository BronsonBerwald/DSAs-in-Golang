package datastructures

import (
	"errors"
)

// A stack is a linear data structure that follows the Last In, First Out (LIFO) principle. It
// allows elements to be added (pushed) and removed (popped) from only one end, commonly referred
// to as the top of the stack. This behavior is analogous to a stack of plates, where only the
// topmost plate can be easily removed or added. Stacks are fundamental in various computer science
// scenarios, particularly in function call management, undo mechanisms in software, and syntax
// parsing in compilers.

// Stack - represents a stack that holds a slice.
type Stack struct {
	elements []int
}

// NewStack - creates a new Stack.
func NewStack() *Stack {
	return &Stack{elements: []int{}}
}

// Push - adds an element to the top of the stack.
func (s *Stack) Push(element int) {
	s.elements = append(s.elements, element)
}

// Pop - removes and returns the top element of the stack.
func (s *Stack) Pop() (int, error) {
	if len(s.elements) == 0 {
		return 0, errors.New("stack is empty")
	}
	lastIndex := len(s.elements) - 1
	element := s.elements[lastIndex]
	s.elements = s.elements[:lastIndex]
	return element, nil
}

// Peek - returns the top element of the stack without removing it.
func (s *Stack) Peek() (int, error) {
	if len(s.elements) == 0 {
		return 0, errors.New("stack is empty")
	}
	return s.elements[len(s.elements)-1], nil
}

// Size - returns the number of elements in the stack.
func (s *Stack) Size() int {
	return len(s.elements)
}
