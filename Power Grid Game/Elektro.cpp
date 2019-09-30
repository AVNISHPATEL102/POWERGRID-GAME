#include"Elektro.h"

Elektro::Elektro() {

}

Elektro::Elektro(int newAmount) {

	amount = newAmount;
}

Elektro::~Elektro() {

}

void Elektro::setAmount(int newAmount) {

	amount = newAmount;
}

int Elektro::getAmount() {

	return amount;
}

Elektro Elektro::mult(int num) {

	Elektro temp;

	temp.amount = num * amount;
	return temp;

}


void Elektro::operator=(const Elektro& money) {

	this->amount = money.amount;

}

Elektro Elektro::operator+(const Elektro& money) {

	Elektro temp;

	temp.amount = this->amount + money.amount;
	return temp;
}

Elektro Elektro::operator-(const Elektro& money) {

	Elektro temp;

	temp.amount = this->amount - money.amount;
	return temp;
}
