#include "House.h"
//Default Constructor
House::House() {

}

//House Constructor
House::House(Player* newPlayer) {
	player = newPlayer;
}

//Deconstructor
House::~House() {

}

//Sets the owner of the house to player pointer
void House::setOwner(Player* newPlayer) {

	player = newPlayer;
}

//Get pointer to house owner
Player* House::getOwner() {
	return player;
}