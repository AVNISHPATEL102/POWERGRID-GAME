#pragma once
#ifndef Coal_H
#define Coal_H
#include<string>
#include"Resource.h"

//Class used to represent the coal resource
class Coal : public Resource {
private:
	const std::string resName = "COAL"; //Name of resource
public:

	Coal(); //default constructor
	Coal(Player * newOwner); //Constructor that assigns player to object
	~Coal(); //Deconstructor
	void setOwner(Player * newOwner); //setter for Player
};


#endif Coal_H