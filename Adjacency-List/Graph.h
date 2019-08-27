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
	~Graph();
private:
	vector<list<int> > * adjacencyList;
	int totalVertices;
};

