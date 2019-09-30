#include "Oil.h"

Oil::Oil() {
	player = NULL;
}

Oil::Oil(Player * player) {
	player = player;
}

Oil::~Oil() {

}

void Oil::setOwner(Player * newOwner) {
	player = newOwner;
	player->oil.push_back(resName);
}