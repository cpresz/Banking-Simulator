#pragma once
#include "BankAccount.h"
using namespace std;

class SavingsAccount : public BankAccount {
protected:
	double interestRate;
public:
	SavingsAccount(string name, double balance, double interestRate);
	void addInterest();
};