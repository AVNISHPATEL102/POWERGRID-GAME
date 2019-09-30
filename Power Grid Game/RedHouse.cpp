#include "RedHouse.h"

RedHouse::RedHouse() {
	player = NULL;
}


RedHouse::RedHouse(Player* newPlayer) {

	player = newPlayer;
}

RedHouse::~RedHouse() {

}

std::string RedHouse::getColor()
{
	return color;
}
