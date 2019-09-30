#pragma once
#include"MarketSpace.h"

class ResourceMarket
{
private:
	vector<MarketSpace*> market;

public:
	ResourceMarket();
	~ResourceMarket();
	vector<MarketSpace*> getMarket();
};