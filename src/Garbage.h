#pragma once
#ifndef Garbage_H
#define Garbage_H
#include<string>
#include"Resource.h"

class Garbage : public Resource {

public:

	Garbage();
	Garbage(int numOfTokens);
	Garbage(int numOfTokens, std::string newOwner);
	~Garbage();


};


#endif Grabage_H