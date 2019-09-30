#include"Coal.h"

Coal::Coal() {
	player = NULL;
}



Coal::Coal(Player * newOwner) {

	player = newOwner;
}

Coal::~Coal() {

}

void Coal::setOwner(Player * newOwner) {
	player = newOwner;
	player->coal.push_back(resName);
}