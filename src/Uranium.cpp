#include"Uranium.h"


Uranium::Uranium() {

}

Uranium::Uranium(int numOfTokens) {

	tokens = numOfTokens;
}

Uranium::Uranium(int numOfTokens, std::string newOwner) {

	tokens = numOfTokens;
	owner = newOwner;
}

Uranium::~Uranium() {

}