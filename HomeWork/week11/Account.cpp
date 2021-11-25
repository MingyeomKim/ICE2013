#include "Account.h"
#include <iostream>
using namespace std;

Account::Account(double balance) // AccountŬ���� ������
{
	if (balance >= 0) // ��ȿ�� �˻縦 ���� IF�� �߰�
		savingsBalance = balance;
	else
	{
		cout << "It is not a correct input, set balance to 0." << endl;
		savingsBalance = 0; // �߸��� ���� ������ 0���� ����
	}
}
// Account Ŭ������ �⺻���� ����� ����� �����Ѵ�. 
void Account::credit(double money)
{
	savingsBalance += money;
} 

void Account::debit(double money)
{
	if (savingsBalance >= money)
	{
		savingsBalance -=  money;
		// Account Ŭ���������� CheckingAccount Ŭ������ ��� ����(Fee)�� ������ �� �����Ƿ�, 
		// �����ᰡ ���ٰ� �����Ѵ�.(CheckingAccount������ �����Ḧ ����Ͽ� �ܰ��� ����)
	}
	else {
		cout << "�ܰ� �����Ͽ� �ŷ��� �����Ͽ����ϴ�. " << endl;
	} 
}

double Account::getSavingsBalance()
{
	return savingsBalance;
} 


void CheckingAccount::credit(double money)
{ // ������� ������� �Ա��� �ݾ��� Account Ŭ������ �ܰ� ���Ѵ�. 
	savingsBalance += money;
	// �ܰ�� �Ա��� �ݾ׸�ŭ �����ϰ�, �Ա��ϴ� ����̹Ƿ� �����ᰡ �߻����� �ʴ´�. 
}

void CheckingAccount::debit(double money)
{//����ϴ� ��쿡�� ��� �ݾ� + �����Ḧ �ܰ��� ���� ������ ���
	if (savingsBalance < TransactionFee + money)
	{
		cout << "The transaction was unsuccessful due to insufficient balance. Please retry transaction." << endl;
	}
	else {
		savingsBalance -= (TransactionFee + money);
	}
}

CheckingAccount::CheckingAccount(double balance, double fee)
	: Account(balance) // Account�� ����ϰ� �ִ� Ŭ�����̹Ƿ� Account�����ڸ� �̿��� �ʱⰪ ����
{
	if (fee < 0) // TransactionFee �� ��ȿ�� �˻�
	{
		cout << "It is not a correct input, set fee to 0." << endl;
		TransactionFee = 0.0;
	}
	else {
		TransactionFee = fee;
	}
}

SavingAccount::SavingAccount(double balance, double rate)
	: Account(balance) //  Account�� ����ϰ� �ִ� Ŭ�����̹Ƿ� Account�����ڸ� �̿��� �ʱⰪ ����
{
	if (rate >= 0)
		Rate = rate;
	else
	{
		cout << "It is not a correct input, set rate to 0." << endl;
		Rate = 0.03;
	}
}

double SavingAccount::CalculateInterest()
{
	return savingsBalance * Rate; // �ܰ�� �������� ���� ��(����)�� ��ȯ
}
