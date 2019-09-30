/*
 * Player.cpp
 *
 *  Created on: Feb 9, 2019
 *      Author: t_lall
 */

#include "Player.h"
#include "City.h"
using namespace std;

Player::Player() {
	name = "";
	player_num = 0;
	elektro = 0;
	colour = "";
}

Player::Player(int p_num, string player_name, Elektro* player_money, string player_colour) {
	name = player_name;
	player_num = p_num;
	elektro = player_money;
	colour = player_colour;
}

void Player::setElektro(int money_spent) {
	elektro->setAmount(money_spent);
}

string Player::showCityOwned() {
	cout << "Controlled Cities: ";
	for (int i = 0; i < (int)cityOwned.size(); i++) {
		cout << cityOwned.at(i) << ", ";
	}
	return "\n";

}

string Player::showInformation() {
	cout << "\n----------\n" << getPlayer() << "\n----------\n" << endl;

	showCityOwned();

	cout << "\nElektro: " << getElektro() << endl ;
	
	cout << 
		"\nResources\n"
		"----------\n"
		"Coal:    " << coal.size() << "\n"
		"Garbage: " << garbage.size() << "\n"
		"Oil:     " << oil.size() << "\n"
		"Uranium: " << uranium.size() << endl;

	return "";
}

string Player::getPlayer() { return name; }
int Player::getPlayerNum() { return player_num; };
int Player::getElektro() { return elektro->getAmount(); }