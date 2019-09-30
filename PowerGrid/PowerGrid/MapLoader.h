#pragma once
#ifndef MapLoader_H
#define MapLoader_H
#include"Map.h"
#include"City.h"
#include <iostream>
#include <fstream>
#include<string>
#include <vector>

class MapLoader {

private:
	Map * graph;
	std::vector<City> city;


public:
	MapLoader();
	Map* loadMap(std::ifstream& file);
	void connectUsaCities();
	void connectCities();
	Map* getMap();
	std::vector<City> getCities();

	bool isACity(string s);

	City returnCity(string s);

	//bool isACity(vector<City> c, string s);

};
#endif MapLoader_H