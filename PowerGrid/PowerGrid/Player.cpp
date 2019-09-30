/*
 * Player.cpp
 *
 *  Created on: Feb 9, 2019
 *      Author: t_lall
 */

#include "Player.h"
#include "City.h"
using namespace std;

//Default Constructor
Player::Player() {
	name = "";
	player_num = 0;
	elektro = 0;
	colour = "";
}

//Constructor to create new Player
Player::Player(int p_num, string player_name, Elektro* player_money, string player_colour) {
	name = player_name;
	player_num = p_num;
	elektro = player_money;
	colour = player_colour;
}

//set the players money
void Player::setElektro(int money_spent) {
	elektro->setPlayerMoney(money_spent);
}

//show a list of the cities the player owns
string Player::showCityOwned() {
	cout << "Controlled Cities: ";
	for (int i = 0; i < (int)cityOwned.size(); i++) {
		cout << cityOwned.at(i) << ", ";
	}
	return "\n";

}

//Show Player information. Displays Player name, money, cities owned, and resources
string Player::showInformation() {
	//Player Name
	cout << "\n----------\n" << getPlayer() << "\n----------\n" << endl;

	//Output for cities owned
	showCityOwned();

	//output for Money
	cout << "\nElektro: " << getElektro()->getPlayerMoney() << endl ;
	
	//Outout for Resources
	cout << 
		"\nResources\n"
		"----------\n"
		"Coal:    " << coal.size() << "\n"
		"Garbage: " << garbage.size() << "\n"
		"Oil:     " << oil.size() << "\n"
		"Uranium: " << uranium.size() << endl;

	return "";
}


//Getters
string Player::getPlayer() { return name; }
int Player::getPlayerNum() { return player_num; };
Elektro* Player::getElektro() { return elektro; }