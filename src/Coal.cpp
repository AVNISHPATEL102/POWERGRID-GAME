#include"Coal.h"

Coal::Coal() {

}

Coal::Coal(int numOfTokens) {

	tokens = numOfTokens;
}

Coal::Coal(int numOfTokens, std::string newOwner) {

	tokens = numOfTokens;
	owner = newOwner;
}

Coal::~Coal() {

}