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

//Class forwarding of Player and House
class Player;
class House;

//Class to create cities
class City {

private:
	static int nextId; //int that stores next ID when creating objects, so ID is unique
	string name; // name of city
	int cost; // cost of a city: 10-15-20
	bool isFull; // boolean if the city is full
	Player* player; //stores player that owns city
	House* house; //stores house on city map

public:
	//Constructors
	City(string name, int cost);
	City(int id, string name, int cost);

	//Setters
	void setNum(int num); //sets ID
	void setName(string name); //sets city name
	void setFull(bool isFull); //sets if city is full
	void setPlayer(Player* owner); //sets player that owns city
	void setHouse(House* house); //sets house on city

	//Getters
	int getId(); //Gets ID number
	int getCost(); //gets cost
	string getName(); //gets name
	bool getFull(); //gets whether its full
	Player* getPlayer(); //gets player

	static int cityCount; 	//The number of city objects that have been created

	int count; //Accessor for cityCount in constructor
	int id; //Id of a given city
};



#endif  CITY_H


