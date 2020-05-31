#pragma once
#include "Transaction.h"
#include "Account.h"
#include <string>
#include <vector>
#include <iostream>

class Customer
{
private:
	std::string name;
	std::vector<Account> accounts;
public:
	Customer(std::string name);
	~Customer();
	void openAccount(std::string name);
	void deleteAccount(std::string name);
	void transfer(Account &from, Account &to);
	std::string getCustomerName() { return name; }
};

