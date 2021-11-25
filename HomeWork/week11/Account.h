#pragma once
#ifndef ACCOUNT_H
#define ACCOUNT_H
#include <iostream>
using namespace std;

class Account {
protected:
	double savingsBalance; // �����ڰ� ���� ���� �ܰ� ������ �ݾ�
public:
	Account(double);
	void credit(double);
	void debit(double);
	double getSavingsBalance(); // main���� �ܰ� ����ϱ� ���� get�Լ�

};


class CheckingAccount : public Account // ����� ����
{
public:
	CheckingAccount(double, double);
	void credit(double);
	void debit(double);
protected:
	double TransactionFee;
};

class SavingAccount : public Account // ���� ����
{
public:
	SavingAccount(double, double);
	double CalculateInterest(); // ���¿� ������ ���ڰ� ��ȯ
private:
	double Rate;
};


#endif
