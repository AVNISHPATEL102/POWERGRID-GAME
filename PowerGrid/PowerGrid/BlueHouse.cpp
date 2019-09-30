#include "BlueHouse.h"
//default constructor
BlueHouse::BlueHouse() {
	player = NULL;
}

// Constructor that assigns player to object
BlueHouse::BlueHouse(Player* newPlayer) {
	player = newPlayer;
}

//Deconstructor
BlueHouse::~BlueHouse() {

}

//Getter for color
std::string BlueHouse::getColor(){
	return color;
}