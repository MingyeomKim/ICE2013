#include <iostream>
using namespace std;
#include "SavingsAccount.h"

double SavingsAccount::annualInterestRate = 0.03;
//static ��� ���� �ʱ�ȭ

SavingsAccount::SavingsAccount(double balance) {
	if (balance >= 0)
	{
		savingsBalance = balance;
	}
	else
	{
		cout << "it isn't a correct input, set balance to $0." << endl;
		savingsBalance = 0;
	}
}

void SavingsAccount::calculateMonthlyInterest()
{
	savingsBalance = savingsBalance * (1 + (annualInterestRate / 12));
} // �� ���ڸ� ����Ͽ� savingsBalance ��� ������ �Ҵ�


/*
void SavingsAccount::calculateMonthlyInterest()
{
	savingsBalance = savingsBalance * ((100 + (annualInterestRate / 12)) / 100);
} // �� ���ڸ� ����Ͽ� savingsBalance ��� ������ �Ҵ�
*/
void SavingsAccount::modifyInterestRate(double rate) // static ��� �Լ�
{
	if (rate >= 0)
	{
		annualInterestRate = rate;
	}
	else {
		annualInterestRate = 0.03;// default anuual Interest Rate
	}
} // ���� annualInterestRate ��� ������ �Է��� �� ������ ���� 

void SavingsAccount::printBalance() const {
	cout << "balance : " << savingsBalance << endl;
} // balance�� ����ϴ� ��� �Լ�

