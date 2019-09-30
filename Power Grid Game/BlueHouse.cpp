#include "BlueHouse.h"

BlueHouse::BlueHouse() {
	player = NULL;
}


BlueHouse::BlueHouse(Player* newPlayer) {
	player = newPlayer;
}

BlueHouse::~BlueHouse() {

}

std::string BlueHouse::getColor()
{
	return color;
}