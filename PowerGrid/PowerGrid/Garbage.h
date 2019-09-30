#pragma once
#ifndef Garbage_H
#define Garbage_H
#include<string>
#include"Resource.h"

//Class used to represent the coal resource
class Garbage : public Resource {
private:
	const std::string resName = "GARBAGE"; //Name of resource

public:

	Garbage(); //default constructor
	Garbage(Player * newOwner); //Constructor that assigns player to object
	~Garbage(); //Deconstructor
	void setOwner(Player * newOwner); //Getter for name
};


#endif Grabage_H