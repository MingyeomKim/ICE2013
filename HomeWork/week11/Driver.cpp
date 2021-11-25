#include <iostream>
using namespace std;
#include "Account.h"

int main()
{
	SavingAccount saver1(2000.00, 0.03); // 예금용 통장 
	CheckingAccount saver2(3000.00, 0.01); // 입출금용 통장

	cout << saver1.CalculateInterest() << endl; // saver1의 이자율 반환
	saver1.credit(10000);
	cout << saver1.getSavingsBalance() << endl;

	saver2.credit(1000); // 입출금용 통장 saver2에서 1000만큼 입금
	cout << saver2.getSavingsBalance() << endl; // saver2의 잔고를 출력
	saver2.debit(5000); // 입출금용 통장 saver2에서 3000만큼 출금
	// 잔고가 부족하므로 에러 메세지가 출력된다. 
	saver2.debit(100);
	cout << saver2.getSavingsBalance() << endl;

	return 0;
}