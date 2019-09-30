#pragma once
#ifndef Garbage_H
#define Garbage_H
#include<string>
#include"Resource.h"

class Garbage : public Resource {
private:
	const std::string resName = "GARBAGE";

public:

	Garbage();
	Garbage(Player * newOwner);
	~Garbage();

	void setOwner(Player * newOwner);


};


#endif Grabage_H