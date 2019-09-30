#include "RedHouse.h"

RedHouse::RedHouse() {

}


RedHouse::RedHouse(int numOfHouses, Player* newPlayer) {

	houses = numOfHouses;
	player = newPlayer;
}

RedHouse::~RedHouse() {

}

std::string RedHouse::getColor()
{
	return color;
}
