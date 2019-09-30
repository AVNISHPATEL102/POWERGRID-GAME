#pragma once
#ifndef House_H
#define House_H
#include<string>
#include"Player.h"

class House {

protected:

	int houses;
	Player* player; 

public:

	House();
	House(int numOfHouses, Player* player);
	~House();
	void setHouses(int numOfHouses);
	void setOwner(Player* newPlayer);
	int getHouses();
	Player* getOwner();
	
};

#endif House_H