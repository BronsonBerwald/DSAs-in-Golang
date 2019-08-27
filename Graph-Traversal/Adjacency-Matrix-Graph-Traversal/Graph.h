#pragma once
class Graph
{
public:
	Graph();
	Graph(int);
	void AddEdge(int, int);
	void RemoveEdge(int, int);
	void DisplayGraph();
	void DepthFirstSearch(int);
	~Graph();
private:
	void DepthFirstSearch(bool[], int);
	int totalVertices;
	bool** adjacencyMatrix;
	
};

