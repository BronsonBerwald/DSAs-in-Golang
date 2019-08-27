#include "Graph.h"
#include<iostream>
using namespace std;


Graph::Graph()
{
}

Graph::Graph(int vcount)
{
	totalVertices = vcount;
	adjacencyList = new vector<list<int> >(totalVertices + 1);
}


void Graph::AddEdge(int i, int j)
{
	(*adjacencyList)[i].push_back(j);//consider it 2 ways
	(*adjacencyList)[j].push_back(i);//consider it 2 ways
}

void Graph::DisplayGraph()
{
	list<int>::iterator itl;


	for (int j = 0; j < totalVertices; j++)
	{
		cout << "\n Adjacency list of vertex "
			<< j << "\n " << j << ": ";

		list<int> lst = adjacencyList[0][j];
		for (itl = lst.begin(); itl != lst.end(); itl++)
		{
			cout << "-> " << *itl;
		}
		cout << endl;
	}

	cout << endl << endl;
}

Graph::~Graph()
{
}
