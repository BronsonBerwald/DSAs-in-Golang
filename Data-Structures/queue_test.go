package datastructures

import (
	"errors"
	"testing"
)

func TestQueueOperations(t *testing.T) {
    queue := NewQueue()

    // Test Enqueue
    queue.Enqueue(1)
    queue.Enqueue(2)

    if queue.Size() != 2 {
        t.Errorf("Expected queue size of 2, got %d", queue.Size())
    }

    // Test Peek
    frontElement, _ := queue.Peek()
    if frontElement != 1 {
        t.Errorf("Expected front element to be 1, got %d", frontElement)
    }

    // Test Dequeue
    dequeuedElement, _ := queue.Dequeue()
    if dequeuedElement != 1 {
        t.Errorf("Expected dequeued element to be 1, got %d", dequeuedElement)
    }

    if queue.Size() != 1 {
        t.Errorf("Expected queue size of 1 after dequeue, got %d", queue.Size())
    }

    // Test Dequeue on empty queue
    queue.Dequeue() // Dequeue the last element
    _, err := queue.Dequeue()
    if !errors.Is(err, errors.New("queue is empty")) {
        t.Errorf("Expected 'queue is empty' error, got %v", err)
    }

    // Test Peek on empty queue
    _, err = queue.Peek()
    if !errors.Is(err, errors.New("queue is empty")) {
        t.Errorf("Expected 'queue is empty' error when peeking, got %v", err)
    }
}