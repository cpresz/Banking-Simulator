#include "BankAccount.h"
#include "SavingsAccount.h"
#include "CheckingAccount.h"
using namespace std;

int main() {
	// 2 BankAccount objects created on the heap
	BankAccount* starter = new BankAccount("Carly", 0);
	BankAccount* advanced = new BankAccount("Joe", 500); 

	starter->deposit(1000);
	advanced->wihdraw(100);
	starter->transfer(advanced, 200);

	// print out both accounts
	cout << starter->toString() << endl;
	cout << advanced->toString() << endl;

	// release memory of objects constructed on the heap
	delete starter;
	delete advanced;
	
	SavingsAccount* s = new SavingsAccount("Mike", 0, 1.0); // create a savings account
	CheckingAccount* c = new CheckingAccount("Bob", 500); // create a checking account

	s->deposit(1000);
	c->withdraw(100);
	s->transfer(c, 200);

	// print out both accounts
	cout << s->toString() << endl;
	cout << c->toString() << endl;

	s->addInterest();
	c->deductFees();

	// print out both accounts
	cout << s->toString() << endl;
	cout << c->toString() << endl;

	// release memory of objects constructed on the heap
	delete s;
	delete c;

}