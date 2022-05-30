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

std::ostream& operator<<(std::ostream& os, const Savings_Account& account)
{
	os << "[Account: " << account.name << ": " << account.balance << "," << account.int_rate << "]";
	return os;
}
