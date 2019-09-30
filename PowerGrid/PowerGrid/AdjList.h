#pragma once
#ifndef AdjList_H
#define AdjList_H
#include "AdjListNode.h"

//class for an adjacency list node
class AdjList
{
private:
	AdjListNode *head;//pointer to head node of list

public:
	AdjListNode *getHead(); //gets the head of the adjacency list
	void setHead(AdjListNode *ptr); //Sets the head of the list to city ptr
	void nullHead(); //Clears linked list
};

#endif AdjListNode_H
