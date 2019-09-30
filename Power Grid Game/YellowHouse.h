#pragma once
#ifndef YellowHouse_H
#define YellowHouse_H
#include<string>
#include"House.h"

class YellowHouse : public House {

private:

	const std::string color = "YELLOW";

public:

	YellowHouse();
	YellowHouse(Player* player);
	~YellowHouse();
	std::string getColor();


};

#endif YellowHouse_H
