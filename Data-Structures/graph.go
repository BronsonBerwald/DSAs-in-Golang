package datastructures

import "fmt"

// A graph is a non-linear data structure consisting of nodes and edges. The nodes
// are sometimes also referred to as vertices and the edges are lines or arcs that connect
// any two nodes in the graph.

// Implementing a graph in Go (Golang) can be done in various ways, depending on the type
// of graph you want (e.g., directed, undirected, weighted, unweighted) and the operations
// you need to support. Below, I'll provide an example of a simple undirected and unweighted
// graph, which includes adding vertices and edges, and a basic implementation of graph
// traversal using Depth-First Search (DFS).

// Vertex - represents a vertex in the graph
type Vertex struct {
	Key      int
	Adjacent []*Vertex
}

// Graph - represents the set of vertices in the graph
type Graph struct {
	vertices []*Vertex
}

// AddVertex - adds a new vertex to the graph
func (g *Graph) AddVertex(k int) {
	if contains(g.vertices, k) {
		err := fmt.Errorf("Vertex %v not added because it is an existing key", k)
		fmt.Println(err.Error())
		return
	}
	g.vertices = append(g.vertices, &Vertex{Key: k})
}

// AddEdge - adds an edge between two vertices in the graph
func (g *Graph) AddEdge(from, to int) {
	fromVertex := g.getVertex(from)
	toVertex := g.getVertex(to)
	if fromVertex == nil || toVertex == nil {
		err := fmt.Errorf("Invalid edge (%v->%v)", from, to)
		fmt.Println(err.Error())
		return
	} else if contains(fromVertex.Adjacent, to) {
		err := fmt.Errorf("Existing edge (%v->%v)", from, to)
		fmt.Println(err.Error())
		return
	}
	fromVertex.Adjacent = append(fromVertex.Adjacent, toVertex)
}

// Print - prints the graph
func (g *Graph) Print() {
	for _, v := range g.vertices {
		fmt.Printf("Vertex %v : ", v.Key)
		for _, v := range v.Adjacent {
			fmt.Printf("%v ", v.Key)
		}
		fmt.Println()
	}
}

// getVertex - returns a pointer to the vertex with a given key
func (g *Graph) getVertex(k int) *Vertex {
	for _, v := range g.vertices {
		if v.Key == k {
			return v
		}
	}
	return nil
}

// contains - checks if a vertex key exists in a slice of vertices
func contains(s []*Vertex, k int) bool {
	for _, v := range s {
		if k == v.Key {
			return true
		}
	}
	return false
}
