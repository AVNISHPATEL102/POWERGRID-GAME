#pragma once
#ifndef Resource_H
#define Resource_H
#include<string>
#include"Player.h"

//Class used to represent Resource object
class Resource {

protected:
	Player * player; // color of house

public:
	Resource(); //default constructor
	Resource(Player * player); // Constructor that assigns player to object
	~Resource(); //Deconstructor
	void setOwner(Player * newOwner);
	bool isTaken(); //check if resource is taken
	Player * getOwner(); //setter for owner

};


#endif Coal_H