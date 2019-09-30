#pragma once
#include<string>
#include"Elektro.h"
#include"City.h"

using namespace std;

class City;
class Elektro;

class Connection
{

private:
	City* start;
	City* destination;
	Elektro* cost;

public:
	Connection();
	Connection(City* newStart, City* newDestination , Elektro* newCost);
	~Connection();
	City* getStart();
	City* getDestination();
	Elektro* getCost();
	Elektro* returnCost(City* newStart, City* newDestination);
};