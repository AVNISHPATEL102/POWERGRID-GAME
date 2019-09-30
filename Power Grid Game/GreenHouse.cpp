#include "GreenHouse.h"

GreenHouse::GreenHouse() {
	player = NULL;
}


GreenHouse::GreenHouse(Player* newPlayer) {
	player = newPlayer;
}

GreenHouse::~GreenHouse() {

}

std::string GreenHouse::getColor()
{
	return color;
}