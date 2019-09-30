#include "YellowHouse.h"

YellowHouse::YellowHouse() {

}


YellowHouse::YellowHouse(int numOfHouses, Player* newPlayer) {

	houses = numOfHouses;
	player = newPlayer;
}

YellowHouse::~YellowHouse() {

}

std::string YellowHouse::getColor()
{
	return color;
}