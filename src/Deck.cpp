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

void Deck::addCard(Cards power_card){
	deck.push_back(power_card);
}

void Deck::shuffle(){
	random_shuffle(deck.begin(), deck.end());
}

string Deck::showDeck(){
	for (int i = 0; i < (int)deck.size(); i++){
		cout << deck.at(i).getCardNum() << ", ";
	 }
	return "\n";
}

Cards Deck::peek() {
	Cards card = deck.back();
	return card;
}

void Deck::drawCard() {
	deck.pop_back();
}



