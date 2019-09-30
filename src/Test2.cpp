#include<fstream>
#include<string>
#include<iostream>
#include"MapLoader.h"
#include"Graph.h"


int main(){

	std::string filename = "C:/Users/steve/Desktop/C++ Programming/Arizona.txt";
	std::ifstream file;
	file.open(filename);
	MapLoader m = MapLoader();

	m.loadMap(file);
	Graph::printGraph(m.getMap());

	system("pause");
	return 0;
}