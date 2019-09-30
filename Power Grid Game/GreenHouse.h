#pragma once
#ifndef GreenHouse_H
#define GreenHouse_H
#include<string>
#include"House.h"

class GreenHouse : public House {

private:

	const std::string color = "GREEN";

public:

	GreenHouse();
	GreenHouse(Player* player);
	~GreenHouse();
	std::string getColor();


};

#endif GreenHouse_H

