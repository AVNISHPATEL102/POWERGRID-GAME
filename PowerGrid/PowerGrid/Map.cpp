#include "Map.h"
#include "City.h"
#include<cstdlib>
#include<iostream>

//Creates the Graph for the map
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

//Add connections between cities
void Map::addEdge(Map *map, City& src, City& dest) {
	City * c1 = &src; // Pointer to src city object
	City * c2 = &dest; // Pointer to dest city object

	//Checks if the connection has already been established. 
	//If available, create edge
	if (Map::checkAvailability(map, c1, c2) == true) {
		//Add an edge from src to dest. A new node added to the adjacency list of src
		//node added at beginning
		AdjListNode *nptr = AdjListNode::newAdjListNode(dest);
		nptr->setNext(map->arr[src.getId()].getHead());
		map->arr[src.getId()].setHead(nptr);
		//connect from dest to src (since undirected)
		nptr = AdjListNode::newAdjListNode(src);
		nptr->setNext(map->arr[dest.getId()].getHead());
		map->arr[dest.getId()].setHead(nptr);
		cout << "edge added between: " << src.getName() << "->" << dest.getName() << "\n";
	}
	else {
		cout << "";
	}
	
};

//Checks if edges have already been created between cities
bool Map::checkAvailability(Map *map, City* city1, City *city2) {
	AdjListNode *root = map->arr[city1->getId()].getHead(); //Get the head of city1
	
	//Cycle through root
	while (root != NULL) {
		bool ans = Map::checkDuplicate(root->getData(), city2); //Checks for duplicates between cities
		
		//If true, the connection is already done
		if (ans == true ) {
			cout << "Edge is already established between: " << city1->getName() << " -> " << city2->getName() <<  endl;
			return false;
		}
		//continue search
		else {
			root = root->getNext(); //cycle through linked list
		}
	}
	return true; //return the connection is available
	
}

//Checks for duplicates in the connections between cities
bool Map::checkDuplicate(City* city1, City *city2) {
	//return true if names are the same
	if (!city1->getName().compare(city2->getName())) {
		return true;
	}
	else {
		return false; //names of cities are different
	}
}


//
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

vector<City*> Map::getCityVector(Map* map) {
	vector<City*> city;
	for (int i = 0; i < map->V; i++) {
			AdjListNode *root = map->arr[i].getHead();
			city.push_back(root->getData());
	}
	return city;
}

void Map::addCity(Map * map, City & city) {
	AdjListNode *nptr = AdjListNode::newAdjListNode(city);
	nptr->setNext(map->arr[city.getId()].getHead());
	map->arr[city.getId()].setHead(nptr);
}
void Map::setPlayer(City & city, Player * player) {
	arr[city.getId()].getHead()->getData()->setPlayer(player);
};

//Set house 
void Map::setHouse(City & city, House * house) {
	if (house->getOwner() == NULL) {
		cout << "House has no player" << endl;;
	}
	else {
		arr[city.getId()].getHead()->getData()->setHouse(house);
	}
};

