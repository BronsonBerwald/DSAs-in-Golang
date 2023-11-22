package datastructures

import (
	"testing"
)

func TestGraph(t *testing.T) {
    g := &Graph{}

    // Test AddVertex
    g.AddVertex(1)
    g.AddVertex(2)
    if !containsVertex(g.vertices, 1) || !containsVertex(g.vertices, 2) {
        t.Errorf("Vertices were not added correctly")
    }

    // Test AddEdge
    g.AddEdge(1, 2)
    if !containsEdge(g.getVertex(1), 2) {
        t.Errorf("Edge from 1 to 2 was not added correctly")
    }

    // Test AddEdge with non-existing vertex
    g.AddEdge(1, 3)
    if containsEdge(g.getVertex(1), 3) {
        t.Errorf("Edge should not be added with non-existing vertex")
    }

    // Test AddVertex with existing key
    g.AddVertex(1)
    if len(g.vertices) != 2 {
        t.Errorf("Vertex with existing key should not be added")
    }
}

// Helper function to check if a vertex exists in the graph
func containsVertex(vertices []*Vertex, k int) bool {
	for _, v := range vertices {
		if v.Key == k {
			return true
		}
	}
	return false
}

// Helper function to check if an edge exists between vertices
func containsEdge(fromVertex *Vertex, to int) bool {
	for _, v := range fromVertex.Adjacent {
		if v.Key == to {
			return true
		}
	}
	return false
}