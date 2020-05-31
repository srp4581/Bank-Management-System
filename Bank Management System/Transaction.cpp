#include "Transaction.h"

Transaction::Transaction(std::string name, float amount):
	name(name), amount(amount)
{
	std::cout << "constructing Transaction: " << name << ", " << amount <<  std::endl;
}

Transaction::~Transaction()
{
	std::cout << "deconstructing Transaction: " << name << ", " << amount << std::endl;
}

Transaction::Transaction(const Transaction &old)
{
	amount = old.amount;
}