#pragma once
#ifndef ACCOUNT_H
#define ACCOUNT_H
#include <iostream>
using namespace std;

class Account {
protected:
	double savingsBalance; // 예금자가 현재 예금 잔고에 보유한 금액
public:
	Account(double);
	void credit(double);
	void debit(double);
	double getSavingsBalance(); // main에서 잔고를 출력하기 위한 get함수

};


class CheckingAccount : public Account // 입출금 계좌
{
public:
	CheckingAccount(double, double);
	void credit(double);
	void debit(double);
protected:
	double TransactionFee;
};

class SavingAccount : public Account // 예금 계좌
{
public:
	SavingAccount(double, double);
	double CalculateInterest(); // 계좌에 적립된 이자값 반환
private:
	double Rate;
};


#endif
