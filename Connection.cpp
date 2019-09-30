#include "Connection.h"

Connection::Connection()
{
}

Connection::Connection(City* newStart, City* newDestination, Elektro* newCost)
{
	start = newStart;
	destination = newDestination;
	cost = newCost;
}

Connection::~Connection()
{
}

City* Connection::getStart()
{
	return start;
}

City* Connection::getDestination()
{
	return destination;
}

Elektro* Connection::getCost()
{
	return cost;
}

Elektro* Connection::returnCost(City* newStart, City* newDestination)
{
	if (start->getName() == newStart->getName() && destination->getName() == newDestination->getName())
		return cost;
	else
		cout << "connection doesn't exist!" <<endl;
}
