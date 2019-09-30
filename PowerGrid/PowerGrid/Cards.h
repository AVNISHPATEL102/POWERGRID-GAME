#pragma once
#include<string>
using namespace std;

//Class used to create cards in the deck
class Cards {
private:
	int cardNumber; //Card number, important for powerplants especially
	string resourceType; // type of resource: coal, oil, garbage, uranium
	int numResources; //The number of resources it takes to power the plant
	string cardType; //Step 3 Or Powerplant card
	int powerToCities; //The number of cities a card can power
public:
	Cards(); //Default constructor
	Cards(int card, string type, int res, int power); //Constructor for creating card
	Cards(int card, string type, int res, int power, string cardType); //Constructor for creating card with given card type
	
	//Setters
	void setCardNum(int set); //sets card number
	void setResourceNum(int res); //sets resource number
	void setPowerCitiesNum(int pow); //sets power to cities number

	//Getters
	int getCardNum(); //gets card number
	int getResourceNum(); //gets resource number
	int getPowerNum(); //gets power to cities number

};
