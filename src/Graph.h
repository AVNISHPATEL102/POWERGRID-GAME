#pragma once
#ifndef Graph_H
#define Graph_H
#include "AdjList.h"
#include "City.h"

//Class for a graph. A graph as an array of adjacency lists
//Size of array will be V (total vertices)

class Graph {

private:
	AdjList *arr;
	int V;


public:
	static Graph *createGraph(int V);
	static void addEdge(Graph *graph, City& src, City& dest);
	static void printGraph(Graph *graph);
	//static void printarr(Graph *graph);
	void getAdjlist(int id);
	static void addCity(Graph *graph, City& city);
	void setPlayer(City& city, Player* player);
	//AdjList *cityList;
	//vector<City>cities;
};

#endif Graph_H
