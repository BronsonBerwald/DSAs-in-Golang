package datastructures

import (
	"errors"
)

// A queue is a linear data structure that follows the First In, First Out (FIFO) principle,
// where elements are added (enqueued) at one end, called the rear, and removed (dequeued) from
// the other end, called the front. This behavior is akin to a line of customers waiting in a
// queue, where the first customer in line is the first to be served. Queues are widely used in
// various computing scenarios, including task scheduling and handling asynchronous data (like
// in IO buffers).

// Queue - represents a queue that holds a slice.
type Queue struct {
	elements []int
}

// NewQueue - creates a new Queue.
func NewQueue() *Queue {
	return &Queue{elements: []int{}}
}

// Enqueue - adds an element to the end of the queue.
func (q *Queue) Enqueue(element int) {
	q.elements = append(q.elements, element)
}

// Dequeue - removes and returns the front element of the queue.
func (q *Queue) Dequeue() (int, error) {
	if len(q.elements) == 0 {
		return 0, errors.New("queue is empty")
	}
	element := q.elements[0]
	q.elements = q.elements[1:]
	return element, nil
}

// Peek - returns the front element of the queue without removing it.
func (q *Queue) Peek() (int, error) {
	if len(q.elements) == 0 {
		return 0, errors.New("queue is empty")
	}
	return q.elements[0], nil
}

// Size - returns the number of elements in the queue.
func (q *Queue) Size() int {
	return len(q.elements)
}
