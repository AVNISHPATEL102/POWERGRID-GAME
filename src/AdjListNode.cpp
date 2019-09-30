#include "AdjListNode.h"
#include<string>
#include<cstdlib>

using namespace std;


AdjListNode *AdjListNode::newAdjListNode(City& data)
{
	//City c(data.getNum(), data.getName(), data.getFull());
	City* city_ptr = new City(data.getName(), data.getCost());
	AdjListNode *nptr = new AdjListNode;
	nptr->data =  city_ptr;
	nptr->next = NULL;
	return nptr;
}

City* AdjListNode::getData() {
	return data;
}

AdjListNode *AdjListNode::getNext() {

	return next;
}

void AdjListNode::setNext(AdjListNode *head) {

	next = head;
	
};

