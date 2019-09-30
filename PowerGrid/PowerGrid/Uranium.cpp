#include"Uranium.h"


Uranium::Uranium() {
	player = NULL;
}


Uranium::Uranium(Player * player) {
	player = player;
}

void Uranium::setOwner(Player * newOwner){
	if (isTaken() == true) {
		cout << "Resource already taken" << endl;
	}
	else {
		player = newOwner;
		player->uranium.push_back(resName);
	}
}

Uranium::~Uranium() {

}