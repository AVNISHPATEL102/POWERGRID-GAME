/*
 * City.cpp
 *
 *  Created on: Feb 25, 2019
 *      Author: t_lall
 */

#include "City.h"
#include "Map.h"
#include "Player.h"
#include<cstdlib>
#include<iostream>

int City::cityCount = 0; //Amount of cities created

//Constructor for a city object
City::City(int ids, string names, int costs) {
	id = ids;
	name = names;
	cost = costs;
	isFull = false;
	player = new Player; //sets owner of a city
	house = new House; //sets house situated in a city
}

//Constructor for a city object
City::City(string names, int costs) {
	id = ++nextId; //increments ID
	name = names;
	cost = costs;
	isFull = false;
	player = new Player;//sets owner of a city
	house = new House; //sets house situated in a city
	++cityCount; 
}

int City::nextId = -1; //The unique ID for each created City object

//Setter for id
void City::setNum(int num) {
	id = num;
}

//setter for city name
void City::setName(string names) {
	name = names;
}

//Setter for whether a city is occupied
void City::setFull(bool isFulls) {
	isFull = isFulls;
}

//Set Player to a city
void City::setPlayer(Player* owner) {
	if (getFull() == false) {
		cout << owner->getPlayer() << " Visits : " << getName() << endl;
	}
	else {
		cout << "City is already owned" << endl;
	}
}

//Sets house to a city
void City::setHouse(House* houses) {
	//if city isn't full, set the house
	if (getFull() == false) {
		house = houses;
		player = house->getOwner(); //sets city owner to owner of house
		player->cityOwned.push_back(getName()); //adds the city name to list of controlled cities for player
		cout << house->getOwner()->getPlayer() << " set a house in " << getName() << endl; // output that player set a house
		setFull(true); //sets city to being occupied
	}
	else {
		cout << "City is already Full" << endl;
	}
}

//getters
int City::getId() { return id; } 
int City::getCost() { return cost; }
string City::getName() { return name; }
bool City::getFull() { return isFull; }
Player* City::getPlayer() { return player; }