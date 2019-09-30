#pragma once
#ifndef BlueHouse_H
#define BlueHouse_H
#include<string>
#include"House.h"

//Class used to represent blue house object
class BlueHouse : public House {

private:

	const std::string color = "BLUE"; // color of house

public:

	BlueHouse(); //default constructor
	BlueHouse(Player* player); // Constructo that assigns player to object
	~BlueHouse(); //Deconstructor
	std::string getColor();//Getter for color


};

#endif BlueHouse_H
