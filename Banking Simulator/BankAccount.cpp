#include "BankAccount.h"
#include <string>
using namespace std;

BankAccount::BankAccount(string name, double balance) {
	this->name = name;
	this->balance = balance;
}

// return the account holder's name
string BankAccount::getName() {
	return this->name;
}

// return the account's balance
double BankAccount::getBalance() {
	return this->balance;
}

// deposit an amount into the account
void BankAccount::deposit(double amount) {
	this->balance += amount;
}

// withdraw an amount from the account
void BankAccount::wihdraw(double amount) {
	this->balance -= amount;
}

// transfer an amount to a different account
void BankAccount::transfer(BankAccount* other, double amount) {
	this->balance -= amount;
	other->balance += amount;
}

// return a string containing the account's name and balance
string BankAccount::toString() {
	return "Name: " + this->name + ", Balance: " + to_string(this->balance) + "\n";
}