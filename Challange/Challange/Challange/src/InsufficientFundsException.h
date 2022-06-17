#pragma once
#include <iostream>

class InsufficientFundsExceptions : public std::exception
{
public:
	InsufficientFundsExceptions() noexcept = default;
	~InsufficientFundsExceptions() = default;
	virtual const  char* what() const noexcept {
		return "Insufficient Fund Exception";
	}
};
