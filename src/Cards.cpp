#include "Cards.h"

Cards::Cards() {
	cardNumber = 0;
	numResources = 0;
	resourceType = "";
	cardType = "";
	//vector<Resource>
	powerToCities = 0;
}

Cards::Cards(int card, string type, int res, int power) {
	cardNumber = card;
	resourceType = type;
	numResources = res;
	powerToCities = power;
	cardType = "";
}

Cards::Cards(int card, string type, int res, int power, string cardTypes) {
	cardNumber = card;
	numResources = res;
	powerToCities = power;
	cardType= cardTypes;
}

void Cards::setCardNum(int set) {
	cardNumber = set;
}

void Cards::setResourceNum(int res) {
	numResources = res;
}

void Cards::setPowerCitiesNum(int pow) {
	powerToCities = pow;
}

int Cards::getCardNum() {
	return cardNumber;
}

int Cards::getResourceNum() {
	return numResources;
}

int Cards::getPowerNum() {
	return powerToCities;
}

