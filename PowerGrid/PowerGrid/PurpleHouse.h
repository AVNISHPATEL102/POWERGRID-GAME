#pragma once
#ifndef PurpleHouse_H
#define PurpleHouse_H
#include<string>
#include"House.h"

//Class used to represent purple house object
class PurpleHouse : public House {

private:

const std::string color = "PURPLE";// color of house

public:

	PurpleHouse(); //default constructor
	PurpleHouse(Player* player); // Constructor that assigns player to object
	~PurpleHouse(); //Deconstructor
	std::string getColor(); //Getter for color
	

};

#endif PurpleHouse_H
