#pragma once
#ifndef RedHouse_H
#define RedHouse_H
#include<string>
#include"House.h"

//Class used to represent red house object
class RedHouse : public House {

private:
	const std::string color = "RED"; // color of house

public:

	RedHouse(); //default constructor
	RedHouse(Player* player); // Constructor that assigns player to object
	~RedHouse(); //Deconstructor
	std::string getColor(); //Getter for color

};

#endif RedHouse_H