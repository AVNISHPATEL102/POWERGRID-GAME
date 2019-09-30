#include "Cards.h"

//Default Contructor
Cards::Cards() {
	cardNumber = 0; 
	numResources = 0;
	resourceType = "";
	cardType = "";
	powerToCities = 0;
}

//Constructor, doesnt assign a card type
Cards::Cards(int card, string type, int res, int power) {
	cardNumber = card;
	resourceType = type;
	numResources = res;
	powerToCities = power;
	cardType = "";
}

//Constructor, assigns card type(Powerplant/Step 3)
Cards::Cards(int card, string type, int res, int power, string cardTypes) {
	cardNumber = card;
	numResources = res;
	powerToCities = power;
	cardType = cardTypes;
}

//Setter for card number
void Cards::setCardNum(int set) {
	cardNumber = set;
}

//setter for resource number
void Cards::setResourceNum(int res) {
	numResources = res;
}

//setter for amount of cities card powers
void Cards::setPowerCitiesNum(int pow) {
	powerToCities = pow;
}

//getter for card number
int Cards::getCardNum() {
	return cardNumber;
}

//getter for resource number
int Cards::getResourceNum() {
	return numResources;
}

//getter for power number
int Cards::getPowerNum() {
	return powerToCities;
}
