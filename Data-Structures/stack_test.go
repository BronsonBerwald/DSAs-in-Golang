package datastructures

import (
	"testing"
)

func TestStackOperations(t *testing.T) {
	stack := NewStack()

	// Test Push
	stack.Push(1)
	stack.Push(2)

	if stack.Size() != 2 {
		t.Errorf("Expected stack size of 2, got %d", stack.Size())
	}

	// Test Peek
	topElement, _ := stack.Peek()
	if topElement != 2 {
		t.Errorf("Expected top element to be 2, got %d", topElement)
	}

	// Test Pop
	poppedElement, _ := stack.Pop()
	if poppedElement != 2 {
		t.Errorf("Expected popped element to be 2, got %d", poppedElement)
	}

	if stack.Size() != 1 {
		t.Errorf("Expected stack size of 1, got %d", stack.Size())
	}

	// Test Pop on empty stack
	stack.Pop() // Pop the last element
	_, err := stack.Pop()
	if err == nil {
		t.Errorf("Expected an error when popping from empty stack, got nil")
	}

	// Test Peek on empty stack
	_, err = stack.Peek()
	if err == nil {
		t.Errorf("Expected an error when peeking on empty stack, got nil")
	}
}
