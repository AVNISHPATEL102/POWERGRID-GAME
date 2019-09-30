#include "BlackHouse.h"

//default constructor
BlackHouse::BlackHouse() {
	player = NULL; //Sets player to NULL
}

// Constructor that assigns player to object
BlackHouse::BlackHouse( Player* newPlayer) {	
	player = newPlayer;
}

//Deconstructor
BlackHouse::~BlackHouse() {
}

//Getter for color
std::string BlackHouse::getColor(){
	return color;
}