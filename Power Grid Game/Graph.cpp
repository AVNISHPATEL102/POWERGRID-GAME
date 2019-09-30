#include "Graph.h"
#include "City.h"
#include<cstdlib>
#include<iostream>


Graph *Graph::createGraph(int V) {

	Graph *graph = new Graph;
	graph->V = V;
	//create an array of adjacency list. size of array - V
	graph->arr = new AdjList[V];
	//initialize with NULL (e.g root=NULL)
	for (int i = 0; i < V; i++) {
		graph->arr[i].nullHead();
	}
	return graph;
};

void Graph::addEdge(Graph *graph, City& src, City& dest) {

	//Add an edge from src to dest. A new node added to the adjacency list of src
	//node added at beginning
	AdjListNode *nptr = AdjListNode::newAdjListNode(dest);
	nptr->setNext(graph->arr[src.getId()].getHead());
	graph->arr[src.getId()].setHead(nptr);
	//connect from dest to src (since undirected)
	nptr = AdjListNode::newAdjListNode(src);
	nptr->setNext(graph->arr[dest.getId()].getHead());
	graph->arr[dest.getId()].setHead(nptr);
};

void Graph::printGraph(Graph *graph) {

	//loop over each adjacent list
	for (int i = 0; i < graph->V; i++) {
		AdjListNode *root = graph->arr[i].getHead();

		std::cout << "Adjacency list of City:  " << root->getData()->getName() << std::endl;
		//loop over each node in list
		root = root->getNext();
		while (root != NULL) {
			std::cout << root->getData()->getName() << " -> ";
			root = root->getNext();
		}
		std::cout << std::endl << endl;
	}
}
void Graph::addCity(Graph * graph, City & city) {
	AdjListNode *nptr = AdjListNode::newAdjListNode(city);
	nptr->setNext(graph->arr[city.getId()].getHead());
	graph->arr[city.getId()].setHead(nptr);
}
void Graph::setPlayer(City & city, Player * player) {
	arr[city.getId()].getHead()->getData()->setPlayer(player);
};

void Graph::setHouse(City & city, House * house) {
	if (house->getOwner() == NULL) {
		cout << "House has no player" << endl;;
	}
	else {
		arr[city.getId()].getHead()->getData()->setHouse(house);
	}
};

/*void Graph::printarr(Graph *graph) {
	//loop over each adjacent list
	for (int i = 0; i < graph->V; i++) {
		int root = graph->arr[i].getHead()->getData()->getId();
		cout << root  << endl;
	}
};
*/
