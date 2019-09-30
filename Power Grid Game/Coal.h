#pragma once
#ifndef Coal_H
#define Coal_H
#include<string>
#include"Resource.h"

class Coal : public Resource {
private:
	const std::string resName = "COAL";
public:

	Coal();
	Coal(Player * newOwner);
	~Coal();
	void setOwner(Player * newOwner);



};


#endif Coal_H