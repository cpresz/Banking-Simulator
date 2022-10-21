#include "CheckingAccount.h"
using namespace std;

const double CheckingAccount::TRANSACTION_FEE = 3.0;

CheckingAccount::CheckingAccount(string name, double balance) : BankAccount(name, balance) {

}

// increment transactionCount when a withdrawal is made
void CheckingAccount::withdraw(double amount) {
	BankAccount::wihdraw(amount);
	transactionCount++;
}

// increment transactionCount when a deposit is made
void CheckingAccount::deposit(double amount) {
	BankAccount::deposit(amount);
	transactionCount++;
}

// deduct transaction fees from the account
void CheckingAccount::deductFees() {
	double num = TRANSACTION_FEE * transactionCount;
	balance -= num;
	transactionCount = 0; // reset transaction count to 0
}