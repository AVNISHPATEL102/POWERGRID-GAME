#pragma once
#ifndef BlackHouse_H
#define BlackHouse_H
#include<string>
#include"House.h"

class BlackHouse : public House {

private:

	const std::string color = "BLACK";

public:

	BlackHouse();
	BlackHouse( Player* player);
	~BlackHouse();
	std::string getColor();


};

#endif BlackHouse_H
