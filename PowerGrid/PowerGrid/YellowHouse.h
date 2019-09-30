#pragma once
#ifndef YellowHouse_H
#define YellowHouse_H
#include<string>
#include"House.h"

//Class used to represent yellow house object
class YellowHouse : public House {

private:

	const std::string color = "YELLOW"; // color of house

public:

	YellowHouse(); //default constructor
	YellowHouse(Player* player); // Constructor that assigns player to object
	~YellowHouse(); //Deconstructor
	std::string getColor(); //Getter for color


};

#endif YellowHouse_H
