#include "SummaryCards.h"
#include<iostream>

//Constuctor to set description of summary cards
SummaryCards::SummaryCards()
{
		description = "Phase 1: Determine Turn Order\n"
		"Phase 2: Buy Power Plant\n"
		"Phase 3: Buy Raw Material\n"
		"Phase 4: Building\n"
		"Phase 5: Bureacracy";
}

//Gets description of summary cards
string SummaryCards::getDescription()
{
	return description;
}

