#pragma once
#ifndef Coal_H
#define Coal_H
#include<string>
#include"Resource.h"

class Coal : public Resource {

public:

	Coal();
	Coal(int numOfTokens);
	Coal(int numOfTokens, std::string newOwner);
	~Coal();


};


#endif Coal_H