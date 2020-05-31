#include "Customer.h"

Customer::Customer(std::string name) :
	name(name)
{
	std::cout << "constructing Customer " << name << std::endl;
}

Customer::~Customer()
{
	std::cout << "deconstructing Customer " << name << std::endl;
}

void Customer::openAccount(std::string name)
{
	Account a(name);
	accounts.push_back(a);
}

void Customer::deleteAccount(std::string name)
{

}

void Customer::transfer(Account& from, Account& to)
{
}
