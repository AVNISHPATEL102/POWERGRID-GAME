#pragma once
#include<string>
using namespace std;

class SummaryCards {

private:
	static int nextId;
	string description;

public:
	int cardId;
	SummaryCards();
	string getDescription();
	int getId();
};
