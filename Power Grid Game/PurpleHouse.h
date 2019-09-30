#pragma once
#ifndef PurpleHouse_H
#define PurpleHouse_H
#include<string>
#include"House.h"

class PurpleHouse : public House {

private:

const std::string color = "PURPLE";

public:

	PurpleHouse();
	PurpleHouse(Player* player);
	~PurpleHouse();
	std::string getColor();
	

};

#endif PurpleHouse_H
