#include "PowerGrid.h"
#include <iostream>
#include <fstream>

using namespace std;

PowerGrid::PowerGrid()
{
}

PowerGrid::~PowerGrid()
{
}

void PowerGrid::startGame()
{
	int number;
	vector<string> colors = { "RED","GREEN","BLUE","BLACK","PURPLE","YELLOW"};
	string answer;
	string response;
	string fileName;
	ifstream file;
	MapLoader loader = MapLoader();

	// Part 1: Selecting and loading map --------------------------------------------------------------------------------------------------------------------
	do
	{
		cout << "select a map: ";
		cin >> answer;

		fileName = "C:/Users/steve/Desktop/Maps/" + answer + ".txt";
		file.open(fileName);

		if (!file)
			cout << "Map doesn't exist! " << endl;

	} 
	while (!file);
	
	file.open(fileName);
	map = loader.loadMap(file);
	cout << "Map has been loaded." << endl;
	Map::printGraph(map);

	cout << "-------------------------------------------------------------------------------------------------------------------------------------" << endl;
	cout << endl;

	// Part 2: the creation of players ----------------------------------------------------------------------------------------------------------------------
	do 
	{
		cout << "Enter the number of players (2-6): ";
		cin >> number;

		if ((number < 2 || number > 6))
			cout << "Only numbers 2-6 are acceptable!" << endl;

	} 
	while (number < 2 || number > 6);
	
	for (int i = 0; i < number; i++) 
	{
		cout << "Enter your name: ";
		cin >> answer;
		
		players.push_back(new Player(i, answer, new Elektro(50), colors[i]));
	}

	//Part 3: placement of players houses -------------------------------------------------------------------------------------------------------------------
	for (int i = 0; i < number; i++) 
	{

		if(i == 0)
		{
			do
			{
				cout << players[i]->getPlayer() + "choose a city on the map:";
				cin >> answer;

				if (!loader.isACity(answer))
					cout << "city does not exist!" << endl;
				else
					loader.returnCity(answer).setPlayer(players[i]);
			} 
			while (!loader.isACity(answer));
		}
		else 
		{
			bool isAdj = false; // bool thats true if city is adjacent to other players.
			
				do
				{
					cout << players[i]->getPlayer() + "choose a city on the map that is adjacent to other player(s):";
					cin >> answer;

					if (!loader.isACity(answer)) // if string entered is not a city, error will displayed.
						cout << "city does not exist!" << endl;

					else 
					{
						for (int j = 0; j < i; j++)  // checks if the city entered is adjacent to any other player, if it is the players house is placed.
						{
							for (int k = 0; k < players[j]->cityOwned.size(); k++)
							{
								if (!Map::checkAvailability(map, &loader.returnCity(answer), &loader.returnCity(players[j]->cityOwned[k])))
								{
									loader.returnCity(answer).setPlayer(players[i]);
									isAdj = true;
									break;
								}
							}
						}

						if (isAdj == false)
							cout << "city entered is not adjacent to any other players." << endl;
					} 
					
				} while (!loader.isACity(answer) || isAdj == false);
			
		}



	}
		
}
