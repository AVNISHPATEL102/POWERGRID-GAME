/*
*  Player.h
*
*  Created  on: Feb 25, 2019
*  Authors: Trevor Lall, Stephen Smith, Avnish Patel, Wenbo Zhong
*  Purpose: Header file for Player Object. Used to represent players for the game.
*/



#ifndef PLAYER_H
#define PLAYER_H
#include "City.h"
#include"Elektro.h"
#include"House.h"
#include"Deck.h"
#include <iostream>
#include <vector>
using namespace std;

class City; //Class forwarding of a city object

class Player {
public:
	Player();
	Player(int player_num, string player_name, Elektro* player_money, string player_colour);

	//Setters
	void setPlayer(string Pname); //Sets player name
	void setElektro(int Pmoney); //Sets Player money
	void setColour(string colour); //Sets player colour
	void setPlayerNum(int p_num); //sets players number

	void setPlayerHouses(vector<House*> house);

	void addCard(Cards * card);

	//Getters
	string getPlayer(); //Gets the player name
	int getPlayerNum(); //Gets the player number
	Elektro* getElektro(); //gets the player money
	vector<string> cityOwned;//City cityOwned;
	string getPlayerColour();
	vector<House*> getHouse();

	vector<Cards*> getCards();

	vector<string> uranium;//player controlled uranium objects
	vector<string> oil; //player controlled oil objects
	vector<string> garbage; //player controlled garbage objects
	vector<string> coal; //players controlled coal objects

	string showCityOwned(); //Shows the controlled cities
	string showCards();
	string showInformation(); //shows all player information

private:
	string name; //player name
	Elektro* elektro;//player money
	string colour;//player game colour
	int player_num;//player id number
	vector<House*> houses;
	vector<Cards*> cards;

};



#endif PLAYER_H