package datastructures

// A heap is a specialized tree-based data structure that satisfies the heap property: in a max
// heap, each parent node is greater than or equal to its child nodes; in a min heap, each parent
// node is less than or equal to its child nodes. This property makes heaps useful for implementing
// priority queues, where the highest (or lowest) priority element needs to be accessed quickly.

// IntHeap - represents a heap of integers
type IntHeap []int

// Len, Less, and Swap are necessary for the sort.Interface, which heap.Interface embeds.
func (h IntHeap) Len() int           { return len(h) }
func (h IntHeap) Less(i, j int) bool { return h[i] < h[j] } // Min-Heap
// func (h IntHeap) Less(i, j int) bool { return h[i] > h[j] } // Max-Heap
func (h IntHeap) Swap(i, j int) { h[i], h[j] = h[j], h[i] }

// Push - Adds an element to the heap
func (h *IntHeap) Push(x interface{}) {
	*h = append(*h, x.(int))
}

// Pop - Removes an element from the heap
func (h *IntHeap) Pop() interface{} {
	old := *h
	n := len(old)
	x := old[n-1]
	*h = old[0 : n-1]
	return x
}
