#include "YellowHouse.h"

YellowHouse::YellowHouse() {
	player = NULL;
}


YellowHouse::YellowHouse( Player* newPlayer) {

	player = newPlayer;
}

YellowHouse::~YellowHouse() {

}

std::string YellowHouse::getColor()
{
	return color;
}