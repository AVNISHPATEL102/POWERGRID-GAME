#include "PurpleHouse.h"

//default constructor
PurpleHouse::PurpleHouse() {
	player = NULL; //Sets player to NULLs
}

// Constructor that assigns player to object
PurpleHouse::PurpleHouse(Player* newPlayer) {
	player = newPlayer;
}

//Deconstructors
PurpleHouse::~PurpleHouse() {

}

//Getter for color
std::string PurpleHouse::getColor(){
	return color;
}