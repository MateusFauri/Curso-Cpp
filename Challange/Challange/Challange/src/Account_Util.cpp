#include "Account_Util.h"

void display(const std::vector<Account* >& accounts)
{
	std::cout << "\n===Accounts =======================================================" << std::endl;
	for (const auto account : accounts)
		std::cout << *account << std::endl;
}

void deposit(std::vector<Account* >& accounts, double amount)
{
	std::cout << "\n===Deposit to Accounts =============================================" << std::endl;
	for (auto account : accounts)
	{
		if (account->deposit(amount))
			std::cout << "Deposited" << amount << " to " << *account << std::endl;
		else
			std::cout << "Failed Deposit of " << amount << " to " << *account << std::endl;
	}

}

void withdraw(std::vector<Account* >& accounts, double amount)
{
	std::cout << "\n===Withdraw to Accounts =============================================" << std::endl;
	for (auto account : accounts)
	{
		if (account->withdraw(amount))
			std::cout << "Withdrew" << amount << " to " << *account << std::endl;
		else
			std::cout << "Failed Withdrawal of " << amount << " to " << *account << std::endl;
	}
}

