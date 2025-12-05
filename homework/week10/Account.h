#pragma once

#include <string>

class Account {
private:
	std::string full_name;
	std::string number;
	long crnt_balance;

public:
	Account(std::string name, std::string num, long amnt)
		: full_name(std::move(name)), number(std::move(num)), crnt_balance(amnt) {}

	std::string name() const { return full_name; }
	std::string no() const { return number; }
	long balance() const { return crnt_balance; }

	void deposit(long amnt) {
		if (amnt > 0) crnt_balance += amnt;
	}

	void withdraw(long amnt) {
		if (amnt > 0 && amnt <= crnt_balance) crnt_balance -= amnt;
	}
};