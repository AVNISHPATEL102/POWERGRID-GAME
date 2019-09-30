#include "Garbage.h"

Garbage::Garbage() {

}

Garbage::Garbage(int numOfTokens) {

	tokens = numOfTokens;
}

Garbage::Garbage(int numOfTokens, std::string newOwner) {

	tokens = numOfTokens;
	owner = newOwner;
}

Garbage::~Garbage() {

}