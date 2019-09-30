#pragma once
#ifndef House_H
#define House_H
#include<string>
#include"Player.h"




class Player;

class House {

protected:
	Player* player; 

public:

	House();
	House( Player* player);
	~House();
	void setOwner(Player* newPlayer);
	Player* getOwner();
	
};

#endif House_H