#include "Account.h"
#include <iostream>

Account::Account(std::string name):
	name(name)
{
	std::cout << "constructing Account: " << name << std::endl;
}

Account::~Account()
{
	std::cout << "deconstructing Account: " << name << std::endl;
}

std::string Account::getName()
{
	return name;
}

void Account::deposit(float amt)
{
	amount += amt;
	Transaction t("Deposit", amt);
	transactions.push_back(t);
}

void Account::withdraw(float amt)
{
	amount -= amt;
	Transaction t("Withdraw", amt);
	transactions.push_back(t);
}

void Account::display()
{
	std::cout << name << ": " << amount << std::endl;
}