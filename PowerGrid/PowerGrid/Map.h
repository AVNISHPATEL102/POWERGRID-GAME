#pragma once
#ifndef Map_H
#define Map_H
#include "AdjList.h"
#include "City.h"

//Class for a Map. A Map as an array of adjacency lists
//Size of array will be V (total vertices)

class Map {

private:
	AdjList *arr;
	int V;


public:
	static Map *createGraph(int V);
	static void addEdge(Map *Map, City& src, City& dest);
	static bool checkAvailability(Map * map, City * city1, City * city2);
	static bool checkDuplicate(City* city1, City* city2);
	static void printGraph(Map *Map);
	static vector<City*> getCityVector(Map* map);
	//static void printarr(Map *Map);
	//void getAdjlist(Map* map,int id);
	static void addCity(Map *Map, City& city);
	void setPlayer(City& city, Player* player);
	void setHouse(City& city, House* player);
	//AdjList *cityList;
	//vector<City>cities;
};

#endif Map_H
