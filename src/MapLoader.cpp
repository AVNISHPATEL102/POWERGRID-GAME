#include"MapLoader.h"
#include<sstream>

MapLoader::MapLoader() {
	
}


void MapLoader::loadMap(std::ifstream& file) {

	std::string line1 = "";
	std::string line2 = "";

	if (file.is_open())
		while (!file.eof()) {

			while (getline(file, line1, ',') && getline(file, line2,'\n')) {

				city.push_back(City(std::stoi(line1), line2));
				
			}
			for (int i = 0; i < city.size(); i++) {

				std::cout << city[i].getNum() << city[i].getName() << std::endl;
				
			}

			std::cout << " " << std::endl;
		}

	file.close();


	//create a new graph
	graph = Graph::createGraph(city.size());

	//connect edges
	Graph::addEdge(graph, city[0], city[1]);
	Graph::addEdge(graph, city[0], city[2]);
	Graph::addEdge(graph, city[0], city[3]);
	Graph::addEdge(graph, city[4], city[0]);
	Graph::addEdge(graph, city[1], city[3]);
	Graph::addEdge(graph, city[2], city[3]);

	
}

Graph* MapLoader::getMap() {

	return graph;

}