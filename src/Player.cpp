/*
 * Player.cpp
 *
 *  Created on: Feb 9, 2019
 *      Author: t_lall
 */

#include "Player.h"
#include "City.h"
using namespace std;

Player::Player(){
	name = "";
	player_num = 0;
	elektro = 0;
	colour = "";
}

Player::Player(int p_num, string player_name, int player_money, string player_colour){
	name = player_name;
	player_num = p_num;
	elektro = player_money;
	colour = player_colour;
}

void Player::setElektro(int money_spent){
	elektro = elektro - money_spent;
}

string Player::showCityOwned(){
	cout << getPlayer() << " owns: ";
	 for (int i = 0; i < (int)cityOwned.size(); i++){
	        cout<< cityOwned.at(i) << ", ";
	 }
	 return "\n";

}

string Player::getPlayer(){return name;}
int Player::getPlayerNum(){return player_num;};
int Player::getElektro(){return elektro;}



