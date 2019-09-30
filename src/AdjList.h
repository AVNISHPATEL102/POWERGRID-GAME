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
	AdjListNode *getHead();
	void setHead(AdjListNode *ptr);
	void nullHead();

};

#endif AdjListNode_H
