#pragma once
#ifndef Uranium_H
#define Uranium_H
#include<string>
#include"Resource.h"

class Uranium : public Resource {

public:

	Uranium();
	Uranium(int numOfTokens);
	Uranium(int numOfTokens, std::string newOwner);
	~Uranium();


};
#endif Uranium_H
