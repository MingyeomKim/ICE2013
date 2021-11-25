#include <iostream>
using namespace std;
#include "SavingsAccount.h"

int main() {
	SavingsAccount saver1(2000.00);
	SavingsAccount saver2(3000.00);

	saver1.printBalance();
	saver2.printBalance();

	saver1.calculateMonthlyInterest();
	saver2.calculateMonthlyInterest();
	cout << endl;

	saver1.printBalance();
	saver2.printBalance();

	saver1.modifyInterestRate(0.04);
	saver2.modifyInterestRate(0.04);

	saver1.calculateMonthlyInterest();
	saver2.calculateMonthlyInterest();
	cout << endl;

	saver1.printBalance();
	saver2.printBalance();

	return 0;
}