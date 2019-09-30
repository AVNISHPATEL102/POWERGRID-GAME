#include "House.h"

House::House() {

}


House::House(int numOfHouses, Player* newPlayer) {

	houses = numOfHouses;
	player = newPlayer;
}

House::~House() {

}

void House::setHouses(int numOfHouses) {

	houses = numOfHouses;
}



void House::setOwner(Player* newPlayer) {

	player = newPlayer;
}

int House::getHouses() {

	return houses;
}

Player* House::getOwner() {

	return player;
}