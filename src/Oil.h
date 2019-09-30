#pragma once
#ifndef Oil_H
#define Oil_H
#include<string>
#include"Resource.h"

class Oil : public Resource {

public:

	Oil();
	Oil(int numOfTokens);
	Oil(int numOfTokens, std::string newOwner);
	~Oil();
	
};


#endif Oil_H
