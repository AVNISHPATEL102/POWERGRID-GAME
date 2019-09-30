#include "BlueHouse.h"

BlueHouse::BlueHouse() {

}


BlueHouse::BlueHouse(int numOfHouses, Player* newPlayer) {

	houses = numOfHouses;
	player = newPlayer;
}

BlueHouse::~BlueHouse() {

}

std::string BlueHouse::getColor()
{
	return color;
}