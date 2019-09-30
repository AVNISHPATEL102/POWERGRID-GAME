#pragma once
#ifndef AdjListNode_H
#define AdjListNode_H
#include"City.h"
//class for an adjacency list
class AdjListNode
{
private:
	City* data;
	AdjListNode *next;

public:
	static AdjListNode* newAdjListNode(City& data);
	void setNext(AdjListNode *head);
	AdjListNode* getNext();
	City* getData();


};

#endif AdjListNode_H
