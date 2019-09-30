/*
 * Deck.h
 *
 *  Created on: Feb 28, 2019
 *      Author: trevt
 */

#ifndef DECK_H
#define DECK_H

#include"Cards.h"
#include<iostream>
#include<vector>
using namespace std;

//Class used to create a deck of cards
class Deck {
private:
	vector<Cards>deck; //vector to store cards
public:
	void addCard(Cards powerPlant); //Adds card to deck
	void shuffle(); //Shuffles the vector of cards
	string showDeck(); //Show deck cards order
	Cards peek(); //show card at top of deck
	void drawCard(); //draw the card
};



#endif DECK_H
