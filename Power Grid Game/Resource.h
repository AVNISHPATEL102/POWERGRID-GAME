#pragma once
#ifndef Resource_H
#define Resource_H
#include<string>
#include"Player.h"

class Resource {

protected:
	Player * player;

public:

	Resource();
	Resource(Player * player);
	~Resource();
	void setOwner(Player * newOwner);
	bool isTaken();
	Player * getOwner();

};


#endif Coal_H