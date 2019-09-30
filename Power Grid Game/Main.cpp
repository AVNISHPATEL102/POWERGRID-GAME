/*
 * main.cpp
 *
 *  Created on: Feb 25, 2019
 *      Author: t_lall
 */
#include"AdjList.h"
#include"City.h"
#include"AdjlistNode.h"
#include"Map.h"
#include"Player.h"
#include"House.h"
#include"Deck.h"
#include"Cards.h"
#include "SummaryCards.h"
#include<cstdlib>
#include<iostream>
#include"MapLoader.h"
#include<fstream>
#include"RedHouse.h"
#include"YellowHouse.h"
#include"GreenHouse.h"
#include"BlueHouse.h"
#include"PurpleHouse.h"
#include"BlackHouse.h"
#include"Resource.h"
#include"Uranium.h"
#include"Coal.h"
#include "Garbage.h"
#include"Oil.h"
#include"Elektro.h"

int main() {
	
	City city("memphis", 10);
	City city1("Miami", 10);
	City city2("New york", 10);
	City city3("Philly", 10);
	City city4("Boston", 10);

	cout << "City Count: " << City::cityCount << endl;

	//create a new graph
	int totalVertices = City::cityCount;
	Map *map;
	map = Map::createGraph(totalVertices);


	//connect edges
	Map::addEdge(map, city, city1);
	Map::addEdge(map, city, city2);
	Map::addEdge(map, city, city3);
	Map::addEdge(map, city4, city);
	Map::addEdge(map, city1, city3);
	Map::addEdge(map, city2, city3);

	Map::addCity(map, city);
	Map::addCity(map, city1);
	Map::addCity(map, city2);
	Map::addCity(map, city3);
	Map::addCity(map, city4);


	// print the adjacency list representation of graph
	Map::printGraph(map);
	//graph->getAdjlist(0);


	Elektro* elektro_fifty = new Elektro(50);
	Elektro* elektro_ten = new Elektro(10);
	Elektro* elektro_five = new Elektro(5);
	Elektro* elektro_one = new Elektro(1);

	//Part 4
	Player* player1 = new Player(1, "Trevor", elektro_fifty, "Red");
	Player* player2 = new Player(2, "Stephen", elektro_fifty, "Blue");

	map->setPlayer(city2, player1);
	map->setPlayer(city2, player2);

	vector <RedHouse*> rh;
	for (int i = 0; i < 22;i++) {
		rh.push_back(new RedHouse(player1));
	}

	vector <GreenHouse*> gh;
	for (int i = 0; i < 22; i++) {
		gh.push_back(new GreenHouse(player2));
	}

	vector <YellowHouse*> yh;
	for (int i = 0; i < 22; i++) {
		yh.push_back(new YellowHouse());
	}

	vector <BlueHouse*> blueh;
	for (int i = 0; i < 22; i++) {
		blueh.push_back(new BlueHouse());
	}

	vector <BlackHouse*> blh;
	for (int i = 0; i < 22; i++) {
		blh.push_back(new BlackHouse());
	}

	vector <PurpleHouse*> ph;
	for (int i = 0; i < 22; i++) {
		ph.push_back(new PurpleHouse());
	}

	map->setHouse(city1, rh.at(0));
	map->setHouse(city2, gh.at(0));


	//cout << player2->showCityOwned() << endl;
	
	vector <Uranium*> uranium;
	for (int i = 0; i < 12; i++) {
		uranium.push_back(new Uranium());
	}

	vector <Garbage*> garbage;
	for (int i = 0; i < 24; i++) {
		garbage.push_back(new Garbage());
	}

	vector <Oil*> oil;
	for (int i = 0; i < 24; i++) {
		oil.push_back(new Oil());
	}

	vector <Coal*> coal;
	for (int i = 0; i < 24; i++) {
		coal.push_back(new Coal());
	}

	uranium.at(0)->setOwner(player1);
	uranium.at(1)->setOwner(player1);
	uranium.at(2)->setOwner(player1);

	garbage.at(0)->setOwner(player1);

	cout << player1->showInformation() << endl;
	cout << player2->showInformation() << endl;

	//Part 5
	//Creating 43 Power Plant Cards
	Cards step3(0, "", 0, 0, "Step3");
	Cards ppc(3, "Oil", 2, 1, "Powerplant");
	Cards ppc2(4, "Coal", 2, 1, "Powerplant");
	Cards ppc3(5, "Hybrid", 2, 1, "Powerplant");
	Cards ppc4(6, "Garbage", 1, 1, "Powerplant");
	Cards ppc5(7, "Oil", 3, 2, "Powerplant");
	Cards ppc6(8, "Coal", 3, 2, "Powerplant");
	Cards ppc7(9, "Oil", 1, 1, "Powerplant");
	Cards ppc8(10, "Coal", 2, 2, "Powerplant");
	Cards ppc9(11, "Uranium", 1, 2, "Powerplant");
	Cards ppc10(12, "Hybrid", 2, 2, "Powerplant");

	/*PowerPlantCards ppc11(13,"Ecological", 0, 1, "Powerplant");
	Cards ppc12(14,"Garbage", 2, 2, "Powerplant");
	Cards ppc13(15,"Coal", 2, 3, "Powerplant");
	Cards ppc14(16,"Oil", 2, 3, "Powerplant");
	Cards ppc15(17,"Uranium", 1, 2, "Powerplant");
	Cards ppc16(18,"Ecological", 0, 2, "Powerplant");
	Cards ppc17(19,"Garbage", 2, 3, "Powerplant");
	Cards ppc18(20,"Coal", 3, 5, "Powerplant");
	Cards ppc19(21,"Hybrid", 2, 4, "Powerplant");
	Cards ppc20(22,"Ecological", 0, 2, "Powerplant");
	Cards ppc21(23,"Uranium", 1, 3, "Powerplant");
	Cards ppc22(24,"Garbage", 2, 4, "Powerplant");
	Cards ppc23(25,"Coal", 2, 5, "Powerplant");
	Cards ppc24(26,"Oil", 2, 5, "Powerplant");
	Cards ppc25(27,"Ecological", 0, 3, "Powerplant");
	Cards ppc26(28,"Uranium", 1, 4, "Powerplant");
	Cards ppc27(29,"Hybrid", 1, 4, "Powerplant");
	Cards ppc28(30,"Garbage", 3, 6, "Powerplant");
	Cards ppc29(31,"Hybrid", 1, 4, "Powerplant");
	Cards ppc30(32,"Oil", 3, 6, "Powerplant");
	Cards ppc31(33,"Ecological", 2, 2, "Powerplant");
	Cards ppc32(34,"Uranium", 1, 6, "Powerplant");
	Cards ppc33(35,"Oil", 1, 5, "Powerplant");
	Cards ppc34(36,"Coal", 3, 7, "Powerplant");
	Cards ppc35(37,"Ecological", 0, 4, "Powerplant");
	Cards ppc36(38,"Garbage", 3, 7, "Powerplant");
	Cards ppc37(39,"Uranium", 1, 6, "Powerplant");
	Cards ppc38(40,"Oil", 2, 6, "Powerplant");
	Cards ppc39(42,"Coal", 2, 6, "Powerplant");
	Cards ppc40(44,"Ecological", 0, 6, "Powerplant");
	Cards ppc41(46,"Hybrid", 3, 7, "Powerplant");
	Cards ppc42(50,"Fusion", 0, 6, "Powerplant");

	//Creating the deck to store power plant cards, and "step 3 cards"
	Deck deck;

	//Adding cards to deck
	deck.addCard(step3);
	deck.addCard(ppc);
	deck.addCard(ppc2);
	deck.addCard(ppc3);
	deck.addCard(ppc4);
	deck.addCard(ppc5);
	deck.addCard(ppc6);
	deck.addCard(ppc7);
	deck.addCard(ppc8);
	deck.addCard(ppc9);
	deck.addCard(ppc10);

	/*	deck.addCard(ppc11);
		deck.addCard(ppc12);
		deck.addCard(ppc13);
		deck.addCard(ppc14);
		deck.addCard(ppc15);
		deck.addCard(ppc16);
		deck.addCard(ppc17);
		deck.addCard(ppc18);
		deck.addCard(ppc19);
		deck.addCard(ppc20);
		deck.addCard(ppc21);
		deck.addCard(ppc22);
		deck.addCard(ppc23);
		deck.addCard(ppc24);
		deck.addCard(ppc25);
		deck.addCard(ppc26);
		deck.addCard(ppc27);
		deck.addCard(ppc28);
		deck.addCard(ppc29);
		deck.addCard(ppc30);
		deck.addCard(ppc31);
		deck.addCard(ppc32);
		deck.addCard(ppc33);
		deck.addCard(ppc34);
		deck.addCard(ppc35);
		deck.addCard(ppc36);
		deck.addCard(ppc37);
		deck.addCard(ppc38);
		deck.addCard(ppc39);
		deck.addCard(ppc40);
		deck.addCard(ppc41);
		deck.addCard(ppc42);*/


	/*	//show deck
	cout << deck.showDeck();

	//invoking shuffle method
	deck.shuffle();

	//showing shufffled deck
	cout << deck.showDeck();

	cout << deck.peek().getCardNum() << endl;

	deck.drawCard();
	//showing shufffled deck
	cout << deck.showDeck();*/

	/*
		SummaryCards sum;
		SummaryCards sum2;
		SummaryCards sum3;
		SummaryCards sum4;
		SummaryCards sum5;
		SummaryCards sum6;
		cout << sum.getDescription() << endl;

		*/

		/*
	
		string filename = "C:/Users/steve/Desktop/C++ Programming/UsaMap.txt";
		ifstream file;
		file.open(filename);
		MapLoader m = MapLoader();

		m.loadMap(file);
		m.connectCities();
		Graph::printGraph(m.getMap()); */
	




	system("pause");
	return 0;


}


