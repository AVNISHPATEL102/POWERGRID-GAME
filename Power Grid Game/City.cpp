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

int City::cityCount = 0;

City::City(int ids, string names, int costs) {
	id = ids;
	name = names;
	cost = costs;
	isFull = false;
	player = new Player;
	house = new House;
}

City::City(string names, int costs) {
	id = ++nextId;
	name = names;
	cost = costs;
	isFull = false;
	player = new Player;
	house = new House;
	++cityCount;
}



int City::nextId = -1;


void City::setNum(int num) {
	id = num;
}

void City::setName(string names) {
	name = names;
}

void City::setFull(bool isFulls) {
	isFull = isFulls;
}

void City::setPlayer(Player* owner) {
	if (getFull() == false) {
		cout << owner->getPlayer() << " Visits : " << getName() << endl;
	}
	else {
		cout << "City is already owned" << endl;
	}
}

void City::setHouse(House* houses) {
	if (getFull() == false) {
		house = houses;
		player = house->getOwner();
		player->cityOwned.push_back(getName());
		cout << house->getOwner()->getPlayer() << " set a house in " << getName() << endl;
		setFull(true);
	}
	else {
		cout << "City is already Full" << endl;
	}
}

int City::getId() { return id; }
int City::getCost() { return cost; }
string City::getName() { return name; }
bool City::getFull() { return isFull; }
Player* City::getPlayer() { return player; }