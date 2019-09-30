#pragma once
#ifndef Oil_H
#define Oil_H
#include<string>
#include"Resource.h"

//Class used to represent the coal resource
class Oil : public Resource {

private:
	const std::string resName = "OIL"; //Name of resource

public:

	Oil(); //default constructor
	Oil(Player * player);//Constructor that assigns player to object
	~Oil(); //Deconstructor

	void setOwner(Player * newOwner);//setter for owner
	
};


#endif Oil_H
