#pragma once
#include <list>
#include <vector>
using namespace std;
class Graph
{
public:
	Graph();
	Graph(int);
	void AddEdge(int, int);
	void DisplayGraph();
	void DepthFirstSearch(int);
	~Graph();
private:
	void DepthFirstSearch(bool[], int);
	vector<list<int> > * adjacencyList;
	int totalVertices;
};

