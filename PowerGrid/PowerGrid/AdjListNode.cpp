#include "AdjListNode.h"
#include<string>
#include<cstdlib>

using namespace std;

//Creates a new city node from a city object
AdjListNode *AdjListNode::newAdjListNode(City& data){
	City* city_ptr = new City(data.getName(), data.getCost()); // creates a pointers to a city object
	AdjListNode *nptr = new AdjListNode; 
	nptr->data = city_ptr; //set pointer of data to city pointer
	nptr->next = NULL; //instantiates pointer of next to NULL
	return nptr;
}

// Return data of city node
City* AdjListNode::getData() {
	return data;
}

//return pointer to next city node
AdjListNode *AdjListNode::getNext() {
	return next;
}

// sets next of node to new node
void AdjListNode::setNext(AdjListNode *head) {
	next = head;
};
