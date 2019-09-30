#pragma once
#include<string>
using namespace std;


class Cards {
private:
	int cardNumber;
	string resourceType;
	int numResources;
	string cardType;
	//Resource resource;
	int powerToCities;
public:
	Cards();
	Cards(int card, string type, int res, int power);
	Cards(int card, string type, int res, int power, string cardType);
	void setCardNum(int set);
	void setResourceNum(int res);
	void setPowerCitiesNum(int pow);
	int getCardNum();
	int getResourceNum();
	int getPowerNum();

};