#pragma once


#include <iostream>
#include <string>

class Elektro {

private:
	int player_money;

	int bill50 = 0;
	int bill10 = 0;
	int bill5 = 0;
	int bill1 = 0;
public:
	Elektro();
	Elektro(int new_amount);
	void setPlayerMoney(int amount);
	void addElektro(int amount);
	void subtractElektro(int amount);
	int getPlayerMoney();
	void show();
	void buy(int price, int player);

};






