/*
 * City.h
 *
 *  Created on: Feb 25, 2019
 *      Author: t_lall
 */


#ifndef CITY_H
#define CITY_H

#include<string>
#include"Player.h"
#include "House.h"
using namespace std;

class Player;
class House;

class City {

private:
	static int nextId;
	string name;
	int cost;
	bool isFull;
	Player* player;
	House* house;

public:
	City(string name, int cost);
	City(int id, string name, int cost);
	void setNum(int num);
	void setName(string name);
	void setFull(bool isFull);
	void setPlayer(Player* owner);
	void setHouse(House* house);
	int getId();
	int getCost();
	string getName();
	bool getFull();
	Player* getPlayer();
	static int cityCount;

	int count;
	int id;
};



#endif  CITY_H


