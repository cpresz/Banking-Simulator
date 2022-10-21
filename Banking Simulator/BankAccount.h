#pragma once
#include <iostream>
#include <cstdio>
using namespace std;

class BankAccount {
protected:
	string name;
	double balance;
public:
	BankAccount(string name, double balance);
	string getName();
	double getBalance();
	void deposit(double amount);
	void wihdraw(double amount);
	void transfer(BankAccount* other, double amount);
	string toString();
};
