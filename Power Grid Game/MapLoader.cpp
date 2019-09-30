#include"MapLoader.h"
#include<iostream>


MapLoader::MapLoader() {
	
}

void MapLoader::connectUsaCities() {

	if (city.size() == 42) {

		//Santa Fe
		Graph::addEdge(graph, city[0], city[1]);
		Graph::addEdge(graph, city[0], city[4]);
		Graph::addEdge(graph, city[0], city[6]);
		Graph::addEdge(graph, city[0], city[7]);
		Graph::addEdge(graph, city[0], city[21]);
		Graph::addEdge(graph, city[0], city[22]);
		Graph::addEdge(graph, city[0], city[24]);
		Graph::addEdge(graph, city[0], city[25]);
		//Phoenix
		Graph::addEdge(graph, city[1], city[2]);
		Graph::addEdge(graph, city[1], city[4]);
		//San Diego
		Graph::addEdge(graph, city[2], city[3]);
		Graph::addEdge(graph, city[2], city[4]);
		//Los Angelos
		Graph::addEdge(graph, city[3], city[4]);
		Graph::addEdge(graph, city[3], city[5]);
		//Las Vegas
		Graph::addEdge(graph, city[4], city[5]);
		Graph::addEdge(graph, city[4], city[6]);
		//San Francisco
		Graph::addEdge(graph, city[5], city[6]);
		Graph::addEdge(graph, city[5], city[9]);
		Graph::addEdge(graph, city[5], city[10]);
		//Salt Lake City
		Graph::addEdge(graph, city[6], city[7]);
		Graph::addEdge(graph, city[6], city[9]);
		//Denver
		Graph::addEdge(graph, city[7], city[21]);
		//Cheyenne
		Graph::addEdge(graph, city[8], city[9]);
		Graph::addEdge(graph, city[8], city[12]);
		Graph::addEdge(graph, city[8], city[13]);
		Graph::addEdge(graph, city[8], city[16]);
		//Boise
		Graph::addEdge(graph, city[9], city[10]);
		Graph::addEdge(graph, city[9], city[11]);
		Graph::addEdge(graph, city[9], city[12]);
		//Portland
		Graph::addEdge(graph, city[10], city[11]);
		//Seattle
		Graph::addEdge(graph, city[11], city[12]);
		//Billings
		Graph::addEdge(graph, city[12], city[14]);
		Graph::addEdge(graph, city[12], city[16]);
		//Omaha
		Graph::addEdge(graph, city[13], city[16]);
		Graph::addEdge(graph, city[13], city[17]);
		Graph::addEdge(graph, city[13], city[21]);
		//Fargo
		Graph::addEdge(graph, city[14], city[15]);
		Graph::addEdge(graph, city[14], city[16]);
		//Duluth
		Graph::addEdge(graph, city[15], city[16]);
		Graph::addEdge(graph, city[15], city[41]);
		//Minneapolis
		Graph::addEdge(graph, city[16], city[17]);
		//Chicago
		Graph::addEdge(graph, city[17], city[18]);
		Graph::addEdge(graph, city[17], city[19]);
		Graph::addEdge(graph, city[17], city[21]);
		Graph::addEdge(graph, city[17], city[41]);
		//St. Louis
		Graph::addEdge(graph, city[18], city[19]);
		Graph::addEdge(graph, city[18], city[21]);
		Graph::addEdge(graph, city[18], city[23]);
		Graph::addEdge(graph, city[18], city[28]);
		//Cinncinnati
		Graph::addEdge(graph, city[19], city[20]);
		Graph::addEdge(graph, city[19], city[39]);
		Graph::addEdge(graph, city[19], city[41]);
		//Knoxville
		Graph::addEdge(graph, city[20], city[28]);
		//Kansas City
		Graph::addEdge(graph, city[21], city[22]);
		Graph::addEdge(graph, city[21], city[23]);
		//Oklahoma City
		Graph::addEdge(graph, city[22], city[23]);
		Graph::addEdge(graph, city[22], city[24]);
		//Memphis
		Graph::addEdge(graph, city[23], city[24]);
		Graph::addEdge(graph, city[23], city[26]);
		Graph::addEdge(graph, city[23], city[27]);
		//Dallas
		Graph::addEdge(graph, city[24], city[25]);
		Graph::addEdge(graph, city[24], city[26]);
		//Houston
		Graph::addEdge(graph, city[25], city[26]);
		// New Orleans
		Graph::addEdge(graph, city[26], city[31]);
		//Birmingham
		Graph::addEdge(graph, city[27], city[28]);
		Graph::addEdge(graph, city[27], city[31]);
		//Atlanta
		Graph::addEdge(graph, city[28], city[32]);
		Graph::addEdge(graph, city[28], city[33]);
		//Miami
		Graph::addEdge(graph, city[29], city[30]);
		//Tampa
		Graph::addEdge(graph, city[30], city[31]);
		//Jacksonville
		Graph::addEdge(graph, city[31], city[32]);
		//Savannah
		Graph::addEdge(graph, city[32], city[33]);
		//Raleigh
		Graph::addEdge(graph, city[33], city[34]);
		Graph::addEdge(graph, city[33], city[39]);
		//Norfolk
		Graph::addEdge(graph, city[34], city[35]);
		//Washington D.C
		Graph::addEdge(graph, city[35], city[36]);
		Graph::addEdge(graph, city[35], city[39]);
		//Philadelphia
		Graph::addEdge(graph, city[36], city[37]);
		//New York
		Graph::addEdge(graph, city[37], city[38]);
		Graph::addEdge(graph, city[37], city[40]);
		//Boston done already.
		//Pittsburgh
		Graph::addEdge(graph, city[38], city[40]);
		Graph::addEdge(graph, city[38], city[41]);
		//Buffalo
		Graph::addEdge(graph, city[40], city[41]);
		//Detroit done aleady

		for(int i = 0;i < city.size(); i++)
			Graph::addCity(graph, city[i]);
		

	}
	else
		std::cout << "Error. Too many or too little cities" << std::endl;


}

void MapLoader::connectCities() {

	int num1;
	int num2;
	std::string ans;

	std::cout << "Want to connect 2 cities? ";
	std::cin >> ans;
	std::cout << endl;

	while (ans == "yes" || ans == "Yes" || ans == "YES") {

		if (ans == "yes"|| ans == "Yes"|| ans == "YES") {
			do {
				std::cout << "Enter the first city number: ";
				std::cin >> num1;
				std::cout << endl;
				std::cout << "Enter the second city number: ";
				std::cin >> num2;
				std::cout << endl;

				if (num1 < 0 || num1 > city.size() - 1 || num2 < 0 || num2 >city.size() - 1) {

					std::cout << "ONE or BOTH city numbers are invalid! " << std::endl;
					std::cout << endl;
				}
					


			} while (num1 < 0||num1 > city.size()-1||num2 < 0||num2 >city.size() - 1);

			Graph::addEdge(graph, city[num1], city[num2]);
			std::cout << "Cities" + city[num1].getName() + " and " + city[num2].getName() + "are connected." << std::endl;
			std::cout << endl;

			std::cout << "Want to connect 2 more cities? ";
			std::cin >> ans;
			std::cout << endl;
		}

		else
			break;	

	} 

	for (int i = 0; i < city.size(); i++)
		Graph::addCity(graph, city[i]);
}


void MapLoader::loadMap(std::ifstream& file) {

	std::string line1 = "";
	std::string line2 = "";
	vector<std::string> checkLine(42," Santa Fe");
	
	if (file.is_open()) {

		if (file.peek() == EOF) { // check if file is empty.

			std::cout << "Invald. File is empty!" << endl;
			file.close();
			system("pause");
			exit(0);
			
		}
		else {

			while (!file.eof()) {

				while (getline(file, line1, ',') && getline(file, line2, '\n')) {

					
					for (int i = 0; i < checkLine.size(); i++) { //check for duplicate lines

						if (line2 == checkLine[i]) {

							std::cout << "Invald. File contains duplicates!" << endl;
							file.close();
							system("pause");
							exit(0);
						}
						else
							checkLine.push_back(line2);

					}
					city.push_back(City(line2, 10));
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
	graph = Graph::createGraph(city.size());

}

Graph* MapLoader::getMap() {

	return graph;

}

std::vector<City> MapLoader::getCities() {

	return city;
}
