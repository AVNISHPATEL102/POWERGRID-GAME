#include "Resource.h"
#include<cstdlib>

//Default constructor
Resource::Resource() {
	player = NULL; //sets resource owner to NULL
}

//Constructor
Resource::Resource( Player* newOwner) {
	player = newOwner;
}

//Deconstructor
Resource::~Resource() {

}

//Sets the owner of a given resouce
void Resource::setOwner(Player* newOwner) {
	player = newOwner;
}

//Checks if house is already taken
bool Resource::isTaken() {
	if (player == NULL) {
		return false;
	}
	else {
		return true;
	}
}

//Gets pointer to player that owns resource object
Player* Resource::getOwner() {
	return player;
}