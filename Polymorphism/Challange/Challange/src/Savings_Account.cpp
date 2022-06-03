#include "Savings_Account.h"

Savings_Account::Savings_Account(std::string name, double balance, double int_rate) : Account{name,balance}, int_rate{int_rate}{}

bool Savings_Account::deposit(double amount)
{
	if (amount > 0) {
		amount += amount * (int_rate / 100);
		return Account::deposit(amount);
	}
	else {
		return false;
	}
}

bool Savings_Account::withdraw(double amount)
{
	return Account::withdraw(amount);
}

void Savings_Account::print(std::ostream& os) const
{
	os << "[Account: " << name << ": " << balance << "," << int_rate << "]";
}