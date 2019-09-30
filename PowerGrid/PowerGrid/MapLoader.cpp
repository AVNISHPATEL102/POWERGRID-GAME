#include"MapLoader.h"
#include<iostream>
#include<sstream>





MapLoader::MapLoader() {

}



Map* MapLoader::loadMap(std::ifstream& file) {

	std::string line1 = "";
	std::string line2 = "";

	vector<std::string> edges;
	
	vector<int> iter;
	iter.push_back(0);

	vector<std::string> checkLine;

	if (file.is_open()) {

		if (file.peek() == EOF) { // check if file is empty.

			std::cout << "Invald. File is empty!" << endl;
			file.close();
			system("pause");
			exit(0);

		}
		else {
			while (!file.eof()) {
				while (getline(file, line1, ':') && getline(file, line2, '\n')) {
					for (int i = 0; i < checkLine.size(); i++) { //check for duplicate lines
						if (line2 == checkLine[i]) {
							std::cout << "Invald. File contains duplicates!" << endl;
							file.close();
							system("pause");
							exit(0);
						}
						else {
							checkLine.push_back(line1);
						}
					}
					string s;
					for (int i = 0; i < city.size();i++) {


					}
					city.push_back(City(line1, 10));
					std::istringstream iss(line2);
					while (getline(iss, s, '-')){
						edges.push_back(s);
					}
					iter.push_back(edges.size());
				}
			}
		}
	}
	else {
		std::cout << "File is closed!" << endl; // If file isn't open
		system("pause");
		exit(0);

	}

	file.close();

	//create a new graph
	Map* graph;
	graph = Map::createGraph(city.size());

	for (int i = 0; i < iter.size() - 1; i++) {
		int length = iter.at(i + 1) - iter.at(i);
		for (int j = 0; j < length; j++) {
			if (isACity(edges.at(j + iter.at(i)))) {
				City id = returnCity(edges.at(j + iter.at(i)));
				Map::addEdge(graph, city.at(i), id);
			}
		}
	}

	for (int i = 0; i < city.size(); i++)
		Map::addCity(graph, city[i]);
	
	cout <<  "\n----------------------------------\n";
	Map::printGraph(graph);
	cout << endl;
	return graph;
}

Map* MapLoader::getMap() {

	return graph;

}

std::vector<City> MapLoader::getCities() {

	return city;
}

bool MapLoader::isACity( string s) {
	for (int i = 0; i < city.size(); i++) {
		if (city.at(i).getName() == s) {
			return true;
		}
	}
	return false;
}

City MapLoader::returnCity(string s) {
	for (int i = 0; i < city.size(); i++) {
		if (city.at(i).getName() == s) {
			return city.at(i);
		}
	}
}