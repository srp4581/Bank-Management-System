#pragma once
#include "Transaction.h"
#include <string>
#include <vector>
#include <iostream>

class Account
{
private:
	std::string name;
	float amount = 0;
	std::vector<Transaction> transactions;
public:
	Account(std::string name);
	~Account();
	std::string getName();
	void deposit(float amt);
	void withdraw(float amt);
	void display();
};

