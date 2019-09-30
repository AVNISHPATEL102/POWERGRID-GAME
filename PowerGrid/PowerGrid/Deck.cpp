/*
 * Deck.cpp
 *
 *  Created on: Feb 28, 2019
 *      Author: trevt
 */
#include"Deck.h"
#include<algorithm>
#include<iostream>
#include <cstdlib>

using namespace std;

//Add card to deck
void Deck::addCard(Cards power_card) {
	deck.push_back(power_card);
}

//Shuffle the deck of cards
void Deck::shuffle() {
	random_shuffle(deck.begin(), deck.end());
}

//Shows deck of cards
string Deck::showDeck() {
	for (int i = 0; i < (int)deck.size(); i++) {
		cout << deck.at(i).getCardNum() << ", "; //displays number of the card
	}
	return "\n";
}

//Shows top card of the deck
Cards Deck::peek() {
	Cards card = deck.back();
	return card;
}

//Draws card from deck
void Deck::drawCard() {
	deck.pop_back();
}
