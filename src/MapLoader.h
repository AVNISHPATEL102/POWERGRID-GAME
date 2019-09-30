#pragma once
#ifndef MapLoader_H
#define MapLoader_H
#include"Graph.h"
#include"City.h"
#include <iostream>
#include <fstream>
#include<string>
#include <vector>

class MapLoader{

private:
	Graph* graph;
	std::vector<City> city;


public:
	MapLoader();
	void loadMap(std::ifstream& file);
	Graph* getMap();


};
#endif MapLoader_H
