#pragma once
class Graph
{
public:
	Graph();
	Graph(int);
	void AddEdge(int, int);
	void RemoveEdge(int, int);
	void DisplayGraph();
	~Graph();
private:
	int totalVertices;
	bool** adjacencyMatrix;
};

