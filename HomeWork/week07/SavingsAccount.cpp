#include <iostream>
using namespace std;
#include "SavingsAccount.h"

double SavingsAccount::annualInterestRate = 0.03;
//static 멤버 변수 초기화

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
} // 월 이자를 계산하여 savingsBalance 멤버 변수에 할당


/*
void SavingsAccount::calculateMonthlyInterest()
{
	savingsBalance = savingsBalance * ((100 + (annualInterestRate / 12)) / 100);
} // 월 이자를 계산하여 savingsBalance 멤버 변수에 할당
*/
void SavingsAccount::modifyInterestRate(double rate) // static 멤버 함수
{
	if (rate >= 0)
	{
		annualInterestRate = rate;
	}
	else {
		annualInterestRate = 0.03;// default anuual Interest Rate
	}
} // 정적 annualInterestRate 멤버 변수를 입력한 새 값으로 설정 

void SavingsAccount::printBalance() const {
	cout << "balance : " << savingsBalance << endl;
} // balance를 출력하는 멤버 함수

