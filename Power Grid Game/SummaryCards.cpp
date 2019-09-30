#include "SummaryCards.h"
#include<iostream>

SummaryCards::SummaryCards()
{
	cardId = ++nextId;
	description = "Phase 1: Determine Turn Order\n"
		"Phase 2: Buy Power Plant\n"
		"Phase 3: Buy Raw Material\n"
		"Phase 4: Building\n"
		"Phase 5: Bureacracy";

}

string SummaryCards::getDescription()
{
	return description;
}

int SummaryCards::getId()
{
	return cardId;
}

int SummaryCards::nextId = 0;