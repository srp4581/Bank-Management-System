#pragma once
#include <string>
#include <iostream>

class Transaction
{
private:
	std::string name;
	float amount;
public:
	Transaction(std::string name, float amount);
	~Transaction();
	Transaction(const Transaction& old);
	void const display() { std::cout << name << " " << amount << std::endl; }
};

