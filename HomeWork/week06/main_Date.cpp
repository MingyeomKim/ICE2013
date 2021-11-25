#include <iostream>
using namespace std;
#include "Date.h"

#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

int main()
{
	Date date1; //���� ��¥�� �������� ��� ���� �ʱ�ȭ
	Date date2(52, 2014); // ddd yyy ���� �Է�
	Date date3(25, 12, 97); // dd mm yy ���� �Է�
	Date date4("August", 31, 2001); //Month  dd, yyyy ���� �Է�
	
	//�� ��ü�� ������ �����(month/day/year) ��������  ��� 
	date1.print(); // 4/14/2021
	date2.print(); // 2/21/2014
	date3.print(); // 12/25/1997
	date4.print(); // 8/31/2001
	cout << endl;

	//�� ��ü�� ������ ����� DDD YYYY �������� ��� 
	date1.printDDDYYYY();  // 104 2021
	date2.printDDDYYYY(); // 52 2014
	date3.printDDDYYYY(); // 359 1997
	date4.printDDDYYYY(); // 243 2001
	cout << endl;
	
	// �� ��ü�� ������ ����� MMDDYY �������� ���
	date1.printMMDDYY(); // 04/14/21
	date2.printMMDDYY(); // 02/21/14
	date3.printMMDDYY(); // 12/25/97 
	date4.printMMDDYY(); // 08/31/01
	cout << endl;

	//�� ��ü�� ������ ����� Month DD, YYYY �������� ��� 
	date1.printMonthDDYYYY(); // April 14, 2021
	date2.printMonthDDYYYY(); // February 21, 2014
	date3.printMonthDDYYYY(); // December 25, 1997
	date4.printMonthDDYYYY(); // August 31, 2001
	cout << endl;

	return 0;
}

