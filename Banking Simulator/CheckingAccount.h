#pragma once
#include "BankAccount.h"
using namespace std;

class CheckingAccount : public BankAccount {
protected:
	int transactionCount = 0;
	static const double TRANSACTION_FEE;

public:
	CheckingAccount(string name, double balance);
	void deductFees();
	void withdraw(double amount);
	void deposit(double amount);
};