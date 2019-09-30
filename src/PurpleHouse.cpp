#include "PurpleHouse.h"

PurpleHouse::PurpleHouse() {

}


PurpleHouse::PurpleHouse(int numOfHouses, Player* newPlayer) {

	houses = numOfHouses;
	player = newPlayer;
}

PurpleHouse::~PurpleHouse() {

}

std::string PurpleHouse::getColor()
{
	return color;
}