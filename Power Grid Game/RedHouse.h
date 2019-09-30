#pragma once
#ifndef RedHouse_H
#define RedHouse_H
#include<string>
#include"House.h"

class RedHouse : public House {

private:
	const std::string color = "RED";

public:

	RedHouse();
	RedHouse(Player* player);
	~RedHouse();
	std::string getColor();

};

#endif RedHouse_H