#include"AdjList.h"
#include<cstdlib>

AdjListNode *AdjList::getHead() {

	return head;
};

void AdjList::setHead(AdjListNode *ptr) {

	head = ptr;

};

void AdjList::nullHead() {

	head = NULL;

};