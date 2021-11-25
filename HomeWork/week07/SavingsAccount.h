#pragma once
#include <iostream>
using namespace std;

class SavingsAccount {
private:
	double savingsBalance; // �����ڰ� ���� ���� �ܰ� ������ �ݾ�
	static double annualInterestRate; // �������� ������
public:
	SavingsAccount(double);
	void calculateMonthlyInterest();
	static void modifyInterestRate(double);
	void printBalance() const;
};