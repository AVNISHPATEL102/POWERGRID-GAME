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

class Deck {
private:
	vector<Cards>deck;
public:
	void addCard(Cards powerPlant);
	void shuffle();
	string showDeck();
	Cards peek();
	void drawCard();
};



#endif DECK_H
