package datastructures

import (
	"container/heap"
	"testing"
)

func TestIntHeap(t *testing.T) {
    h := &IntHeap{}
    heap.Init(h)

    // Test Push
    heap.Push(h, 3)
    heap.Push(h, 1)
    heap.Push(h, 2)

    if (*h)[0] != 1 {
        t.Errorf("Expected min element to be 1, got %d", (*h)[0])
    }

    // Test Pop
    if heap.Pop(h).(int) != 1 {
        t.Errorf("Expected Pop to return 1")
    }
    if heap.Pop(h).(int) != 2 {
        t.Errorf("Expected Pop to return 2")
    }
    if heap.Pop(h).(int) != 3 {
        t.Errorf("Expected Pop to return 3")
    }

    // Test empty heap after popping all elements
    if h.Len() != 0 {
        t.Errorf("Expected heap to be empty, but has %d elements", h.Len())
    }
}