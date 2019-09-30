#include "Map.h"
#include "City.h"
#include<cstdlib>
#include<iostream>


Map *Map::createGraph(int V) {

	Map *map = new Map;
	map->V = V;
	//create an array of adjacency list. size of array - V
	map->arr = new AdjList[V];
	//initialize with NULL (e.g root=NULL)
	for (int i = 0; i < V; i++) {
		map->arr[i].nullHead();
	}
	return map;
};

void Map::addEdge(Map *map, City& src, City& dest) {

	//Add an edge from src to dest. A new node added to the adjacency list of src
	//node added at beginning
	AdjListNode *nptr = AdjListNode::newAdjListNode(dest);
	nptr->setNext(map->arr[src.getId()].getHead());
	map->arr[src.getId()].setHead(nptr);
	//connect from dest to src (since undirected)
	nptr = AdjListNode::newAdjListNode(src);
	nptr->setNext(map->arr[dest.getId()].getHead());
	map->arr[dest.getId()].setHead(nptr);
};

void Map::printGraph(Map *map) {

	//loop over each adjacent list
	for (int i = 0; i < map->V; i++) {
		AdjListNode *root = map->arr[i].getHead();

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
void Map::addCity(Map * map, City & city) {
	AdjListNode *nptr = AdjListNode::newAdjListNode(city);
	nptr->setNext(map->arr[city.getId()].getHead());
	map->arr[city.getId()].setHead(nptr);
}
void Map::setPlayer(City & city, Player * player) {
	arr[city.getId()].getHead()->getData()->setPlayer(player);
};

void Map::setHouse(City & city, House * house) {
	if (house->getOwner() == NULL) {
		cout << "House has no player" << endl;;
	}
	else {
		arr[city.getId()].getHead()->getData()->setHouse(house);
	}
};

/*void Map::printarr(Map *map) {
	//loop over each adjacent list
	for (int i = 0; i < Map->V; i++) {
		int root = map->arr[i].getHead()->getData()->getId();
		cout << root  << endl;
	}
};
*/
