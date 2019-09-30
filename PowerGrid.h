#pragma once
#include "MapLoader.h"
#include "Deck.h"
#include "Player.h"
#include"Elektro.h"

class Player;
class Map;

class PowerGrid {

private:
	Map* map;
	vector<Player*> players;


public:
	PowerGrid();
	~PowerGrid();
	void startGame();


};
