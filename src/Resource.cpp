#include "Resource.h"

Resource::Resource() {
	tokens = 0;
	owner = "N/A";
}

Resource::Resource(int numOfTokens) {

	tokens = numOfTokens;
}

Resource::Resource(int numOfTokens, std::string newOwner) {

	tokens = numOfTokens;
	owner = newOwner;
}

Resource::~Resource() {

}

void Resource::setTokens(int numOfTokens) {

	tokens = numOfTokens;
}

void Resource::setOwner(std::string newOwner) {

	owner = newOwner;
}

int Resource::getTokens() {

	return tokens;
}

std::string Resource::getOwner() {

	return owner;
}