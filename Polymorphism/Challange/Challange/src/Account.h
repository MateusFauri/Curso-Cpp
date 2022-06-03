#pragma once
#include "I_Printable.h"
#include <iostream>
#include <string>

class Account : public I_Printable
{
	static constexpr const char* def_name = "Unnamed";
	static constexpr double def_balance = 0.0;
protected:
	std::string name;
	double balance;
public:
	Account(std::string name = def_name, double balance = def_balance);
	virtual ~Account() = default;
	virtual void print(std::ostream& os) const override;
	virtual bool deposit(double amount) = 0;
	virtual bool withdraw(double amount) = 0;
};

