/*
 * Player.h
 *
 *  Created on: Feb 9, 2019
 *      Author: t_lall
 */

#ifndef PLAYER_H_
#define PLAYER_H_
#include "City.h"
#include <iostream>
#include <vector>
using namespace std;

class City;

class Player{
	public:
		Player();

		Player(int player_num, string player_name, int player_money, string player_colour);

		void setPlayer(string Pname);
		void setElektro(int Pmoney);
		void setColour(string colour);
		void setPlayerNum(int p_num);
		string getPlayer();
		int getPlayerNum();
		int getElektro();
		vector<string> cityOwned;//City cityOwned;
		string showCityOwned();

	private:
		string name;
		int elektro;
		string colour;
		int player_num;

};



#endif /* PLAYER_H_ */
