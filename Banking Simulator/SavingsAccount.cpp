#include "SavingsAccount.h"
using namespace std;

SavingsAccount::SavingsAccount(string name, double balance, double interestRate) : BankAccount(name, balance) {
	this->interestRate = interestRate;
}

// add interest to the account
void SavingsAccount::addInterest() {
	double amount = balance * (this->interestRate / 100);
	balance += amount;
}