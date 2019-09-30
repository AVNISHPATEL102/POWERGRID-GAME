#include "Oil.h"

Oil::Oil() {

}

Oil::Oil(int numOfTokens) {

	tokens = numOfTokens;
}

Oil::Oil(int numOfTokens, std::string newOwner) {

	tokens = numOfTokens;
	owner = newOwner;
}

Oil::~Oil() {

}