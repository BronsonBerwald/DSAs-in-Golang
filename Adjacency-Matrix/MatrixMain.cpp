#include <iostream>
using namespace std;
#include "Graph.h"
int main()
{

	Graph objGraph(6);

	objGraph.AddEdge(0, 2);
	objGraph.AddEdge(0, 3);
	objGraph.AddEdge(1, 2);
	objGraph.AddEdge(1, 5);
	objGraph.AddEdge(2, 4);
	objGraph.AddEdge(2, 5);
	objGraph.AddEdge(3, 4);
	objGraph.AddEdge(4, 5);

	objGraph.DisplayGraph();

	system("PAUSE");
	return 0;
}