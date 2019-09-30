#include "Garbage.h"

Garbage::Garbage() {
	player = NULL;
}


Garbage::Garbage(Player* newOwner) {
	player = newOwner;
}

Garbage::~Garbage() {

}

void Garbage::setOwner(Player * newOwner) {
	player = newOwner;
	player->garbage.push_back(resName);
}