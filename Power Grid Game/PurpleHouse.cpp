#include "PurpleHouse.h"

PurpleHouse::PurpleHouse() {
	player = NULL;
}


PurpleHouse::PurpleHouse(Player* newPlayer) {

	player = newPlayer;
}

PurpleHouse::~PurpleHouse() {

}

std::string PurpleHouse::getColor()
{
	return color;
}