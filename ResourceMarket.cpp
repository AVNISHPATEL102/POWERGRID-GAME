#include "ResourceMarket.h"

ResourceMarket::ResourceMarket()
{
	for (int i = 0; i < 12; i++) 
	{
		if (i < 8)
			market.push_back(new MarketSpace(i + 1, 3, 3, 3, 1));
		else if(i = 8)
			market.push_back(new MarketSpace(i + 2, 1));
		else if(i = 9)
			market.push_back(new MarketSpace(i + 3, 1));
		else if (i = 10)
			market.push_back(new MarketSpace(i + 4, 1));
		else if (i = 11)
			market.push_back(new MarketSpace(i + 5, 1));
	}
}

ResourceMarket::~ResourceMarket()
{
}

vector<MarketSpace*> ResourceMarket::getMarket()
{
	return market;
}
