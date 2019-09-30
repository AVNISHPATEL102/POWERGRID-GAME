#pragma once
#ifndef Uranium_H
#define Uranium_H
#include<string>
#include"Resource.h"

class Uranium : public Resource {

private:

	const std::string resName = "URANIUM";

public:

	Uranium();
	Uranium(Player * player);
	void setOwner(Player * newOwner);

	~Uranium();


};
#endif Uranium_H
