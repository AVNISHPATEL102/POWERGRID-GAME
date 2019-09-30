#pragma once
#ifndef BlackHouse_H
#define BlackHouse_H
#include<string>
#include"House.h"
//Class used to represent blackhouse object
class BlackHouse : public House {

private:

	const std::string color = "BLACK"; // color of house

public:

	BlackHouse(); //default constructor
	BlackHouse( Player* player); // Constructor that assigns player to object
	~BlackHouse(); //Deconstructor
	std::string getColor(); //Getter for color
};

#endif BlackHouse_H
