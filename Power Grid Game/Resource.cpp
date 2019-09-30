#include "Resource.h"
#include<cstdlib>

Resource::Resource() {
	player = NULL;
}



Resource::Resource( Player* newOwner) {
	player = newOwner;
}

Resource::~Resource() {

}


void Resource::setOwner(Player* newOwner) {
	player = newOwner;
}

bool Resource::isTaken() {
	if (player == NULL) {
		return false;
	}
	else {
		return true;
	}
}


Player* Resource::getOwner() {

	return player;
}