#include <iostream>
using namespace std;
#include "Account.h"

int main()
{
	SavingAccount saver1(2000.00, 0.03); // ���ݿ� ���� 
	CheckingAccount saver2(3000.00, 0.01); // ����ݿ� ����

	cout << saver1.CalculateInterest() << endl; // saver1�� ������ ��ȯ
	saver1.credit(10000);
	cout << saver1.getSavingsBalance() << endl;

	saver2.credit(1000); // ����ݿ� ���� saver2���� 1000��ŭ �Ա�
	cout << saver2.getSavingsBalance() << endl; // saver2�� �ܰ� ���
	saver2.debit(5000); // ����ݿ� ���� saver2���� 3000��ŭ ���
	// �ܰ� �����ϹǷ� ���� �޼����� ��µȴ�. 
	saver2.debit(100);
	cout << saver2.getSavingsBalance() << endl;

	return 0;
}