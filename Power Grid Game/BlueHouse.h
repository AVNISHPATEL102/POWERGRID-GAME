#pragma once
#ifndef BlueHouse_H
#define BlueHouse_H
#include<string>
#include"House.h"

class BlueHouse : public House {

private:

	const std::string color = "BLUE";

public:

	BlueHouse();
	BlueHouse(Player* player);
	~BlueHouse();
	std::string getColor();


};

#endif BlueHouse_H
