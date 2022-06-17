#include <iostream>
#include <vector>
#include "Savings_Account.h"
#include "Account_Util.h"
#include "Checking_Account.h"
#include "Trust_Account.h"
#include "InsufficientFundsException.h"
#include "IllegalBalanceException.h"


int main()
{
	try {
		Account* ptr = new Trust_Account("Leo", -1000, 2.6);
		std::cout << *ptr << std::endl;
	}
	catch(const IllegalBalanceException& exp)
	{
		std::cerr << exp.what() << std::endl;
	}
	catch(const InsufficientFundsExceptions& exp)
	{
		std::cerr << exp.what() << std::endl;
	}
	catch (...)
	{
		std::cerr << "Some error occurred" << std::endl;
	}

	//	std::vector<Account> accounts;
	//	accounts.push_back(Account{});
	//	accounts.push_back(Account{ "Larry" });
	//	accounts.push_back(Account{ "Moe", 2000 });
	//	accounts.push_back(Account{ "Curly", 5000 });

	//	display(accounts);
	//	deposit(accounts, 1000);
	//	withdraw(accounts, 2000);

	//	std::vector<Savings_Account> sav_accounts;
	//	sav_accounts.push_back(Savings_Account{});
	//	sav_accounts.push_back(Savings_Account{ "Superman" });
	//	sav_accounts.push_back(Savings_Account{ "Batman", 2000 });
	//	sav_accounts.push_back(Savings_Account{ "Wonderwoman", 5000, 5.0 });

	//	display(sav_accounts);
	//	deposit(sav_accounts, 1000);
	//	withdraw(sav_accounts, 2000);

	//	std::vector<Checking_Account> check_accounts;
	//	check_accounts.push_back(Checking_Account{});
	//	check_accounts.push_back(Checking_Account{ "Kirk" });
	//	check_accounts.push_back(Checking_Account{ "Spock", 2000 });
	//	check_accounts.push_back(Checking_Account{ "Spock", 5000 });

	//	std::vector<Trust_Account> trust_accounts;
	//	trust_accounts.push_back(Trust_Account{});
	//	trust_accounts.push_back(Trust_Account{ "Athos", 1000, 5.0 });
	//	trust_accounts.push_back(Trust_Account{ "Porthos", 20000, 4.0 });
	//	trust_accounts.push_back(Trust_Account{ "Aramis", 30000 });

	return 0;
}