#pragma once
#ifndef Oil_H
#define Oil_H
#include<string>
#include"Resource.h"

class Oil : public Resource {

private:

	const std::string resName = "OIL";

public:

	Oil();
	Oil(Player * player);
	~Oil();

	void setOwner(Player * newOwner);
	
};


#endif Oil_H
