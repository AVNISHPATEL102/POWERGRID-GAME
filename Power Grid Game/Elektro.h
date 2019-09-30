#pragma once
#ifndef Elektro_H
#define Elektro_H
#include<string>

class Elektro {

private:

	int amount;

public:

	Elektro();
	Elektro(int newAmount);
	~Elektro();
	void setAmount(int newAmount);
	int getAmount();
	Elektro mult(int num);
	void operator=(const Elektro& money);
	Elektro operator+(const Elektro& money);
	Elektro operator-(const Elektro& money);



};
#endif Elektro_H