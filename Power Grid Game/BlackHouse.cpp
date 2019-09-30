#include "BlackHouse.h"

BlackHouse::BlackHouse() {
	player = NULL;
}


BlackHouse::BlackHouse( Player* newPlayer) {	
	player = newPlayer;
}

BlackHouse::~BlackHouse() {

}

std::string BlackHouse::getColor()
{
	return color;
}