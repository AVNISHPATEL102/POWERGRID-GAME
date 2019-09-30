#pragma once
#ifndef GreenHouse_H
#define GreenHouse_H
#include<string>
#include"House.h"
//Class used to represent blackhouse object
class GreenHouse : public House {

private:

	const std::string color = "GREEN";  // color of house

public:

	GreenHouse(); //default constructor
	GreenHouse(Player* player); // Constructor that assigns player to object
	~GreenHouse(); //Deconstructor
	std::string getColor();//Getter for color


};

#endif GreenHouse_H

