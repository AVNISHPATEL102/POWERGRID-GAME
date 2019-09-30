#include "GreenHouse.h"

GreenHouse::GreenHouse() {

}


GreenHouse::GreenHouse(int numOfHouses, Player* newPlayer) {

	houses = numOfHouses;
	player = newPlayer;
}

GreenHouse::~GreenHouse() {

}

std::string GreenHouse::getColor()
{
	return color;
}