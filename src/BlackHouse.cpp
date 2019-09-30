#include "BlackHouse.h"

BlackHouse::BlackHouse() {

}


BlackHouse::BlackHouse(int numOfHouses, Player* newPlayer) {

	houses = numOfHouses;
	player = newPlayer;
}

BlackHouse::~BlackHouse() {

}

std::string BlackHouse::getColor()
{
	return color;
}