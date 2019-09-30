#pragma once
#ifndef Resource_H
#define Resource_H
#include<string>

class Resource {

protected:

	int tokens;
	std::string owner;

public:

	Resource();
	Resource(int numOfTokens);
	Resource(int numOfTokens, std::string newOwner);
	~Resource();
	void setTokens(int numOfTokens);
	void setOwner(std::string newOwner);
	int getTokens();
	std::string getOwner();

};


#endif Coal_H