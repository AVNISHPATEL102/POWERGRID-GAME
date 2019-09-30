#include "House.h"

House::House() {

}


House::House(Player* newPlayer) {
	player = newPlayer;
}

House::~House() {

}


void House::setOwner(Player* newPlayer) {

	player = newPlayer;
}


Player* House::getOwner() {
	return player;
}