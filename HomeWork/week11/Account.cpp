#include "Account.h"
#include <iostream>
using namespace std;

Account::Account(double balance) // Account클래스 생성자
{
	if (balance >= 0) // 유효성 검사를 위한 IF문 추가
		savingsBalance = balance;
	else
	{
		cout << "It is not a correct input, set balance to 0." << endl;
		savingsBalance = 0; // 잘못된 값이 들어오면 0으로 설정
	}
}
// Account 클래스는 기본적인 입출금 기능을 포함한다. 
void Account::credit(double money)
{
	savingsBalance += money;
} 

void Account::debit(double money)
{
	if (savingsBalance >= money)
	{
		savingsBalance -=  money;
		// Account 클래스에서는 CheckingAccount 클래스의 멤버 변수(Fee)에 접근할 수 없으므로, 
		// 수수료가 없다고 가정한다.(CheckingAccount에서는 수수료를 계산하여 잔고에서 차감)
	}
	else {
		cout << "잔고가 부족하여 거래에 실패하였습니다. " << endl;
	} 
}

double Account::getSavingsBalance()
{
	return savingsBalance;
} 


void CheckingAccount::credit(double money)
{ // 수수료와 상관없이 입금한 금액을 Account 클래스의 잔고에 더한다. 
	savingsBalance += money;
	// 잔고는 입금한 금액만큼 증가하고, 입금하는 경우이므로 수수료가 발생하지 않는다. 
}

void CheckingAccount::debit(double money)
{//출금하는 경우에는 출금 금액 + 수수료를 잔고에서 빼는 것으로 계산
	if (savingsBalance < TransactionFee + money)
	{
		cout << "The transaction was unsuccessful due to insufficient balance. Please retry transaction." << endl;
	}
	else {
		savingsBalance -= (TransactionFee + money);
	}
}

CheckingAccount::CheckingAccount(double balance, double fee)
	: Account(balance) // Account를 상속하고 있는 클래스이므로 Account생성자를 이용해 초기값 설정
{
	if (fee < 0) // TransactionFee 값 유효성 검사
	{
		cout << "It is not a correct input, set fee to 0." << endl;
		TransactionFee = 0.0;
	}
	else {
		TransactionFee = fee;
	}
}

SavingAccount::SavingAccount(double balance, double rate)
	: Account(balance) //  Account를 상속하고 있는 클래스이므로 Account생성자를 이용해 초기값 설정
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
	return savingsBalance * Rate; // 잔고와 이자율을 곱한 값(이자)을 반환
}
