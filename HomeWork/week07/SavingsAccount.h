#pragma once
#include <iostream>
using namespace std;

class SavingsAccount {
private:
	double savingsBalance; // 예금자가 현재 예금 잔고에 보유한 금액
	static double annualInterestRate; // 예금자의 연이율
public:
	SavingsAccount(double);
	void calculateMonthlyInterest();
	static void modifyInterestRate(double);
	void printBalance() const;
};