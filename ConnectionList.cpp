#include "ConnectionList.h"

using namespace std;

ConnectionList::ConnectionList()
{
}

ConnectionList::~ConnectionList()
{
}

void ConnectionList::loadConnections(MapLoader& loader, ifstream& file)
{
	string line1 = ""; //stores starting City name
	string line2 = ""; //stores destination City name
	string line3 = ""; // stores the cost of the connection

	if (file.is_open()) 
	{
		if (file.peek() == EOF) 
		{ // check if file is empty.
			std::cout << "Invald. File is empty!" << endl; //Outputs error
			file.close();
			system("pause");
			exit(0);
		}
		//If file not empty
		else 
		{
			while (!file.eof()) 
			{
				//Gets line in textfile
				//Line 1 searches until ',' is found. Represents starting city to create
				//Line 2 searches until ',' is found.Represents destination city to create
				//Line 3 searches until the end of the line. Represents the cost
				while (getline(file, line1, ',') && getline(file, line2, ',') && getline(file, line3, '\n')) 
				{
					if(loader.isACity(line1) && loader.isACity(line2))
						list.push_back(new Connection(&loader.returnCity(line1), &loader.returnCity(line2), new Elektro(stoi(line3)))); //Create Connection with line 1,2 and 3.
				}
			}
		}
	}
	else 
	{
		std::cout << "Error.Incorrect file name or file is closed!" << endl; // Output If file isn't open
		system("pause");
		exit(0);
	}

	file.close(); //Close file
}

vector<Connection*> ConnectionList::getList()
{
	return list;
}

Elektro * ConnectionList::returnCost(City * newStart, City * newDestination)
{
	for(int i = 0; i < list.size(); i++)
	{
	
		if (newStart->getName() == list[i]->getStart()->getName() && newDestination->getName() == list[i]->getDestination()->getName()
			|| newStart->getName() == list[i]->getDestination()->getName() && newDestination->getName() == list[i]->getStart()->getName())
		{
			return list[i]->getCost();
			break;
		}
	
	}
}
