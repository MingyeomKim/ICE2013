#include <iostream>
using namespace std;
#include "Date.h"

#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

int main()
{
	Date date1; //현재 날짜를 기준으로 멤버 변수 초기화
	Date date2(52, 2014); // ddd yyy 형식 입력
	Date date3(25, 12, 97); // dd mm yy 형식 입력
	Date date4("August", 31, 2001); //Month  dd, yyyy 형식 입력
	
	//각 개체의 데이터 멤버를(month/day/year) 형식으로  출력 
	date1.print(); // 4/14/2021
	date2.print(); // 2/21/2014
	date3.print(); // 12/25/1997
	date4.print(); // 8/31/2001
	cout << endl;

	//각 개체의 데이터 멤버를 DDD YYYY 형식으로 출력 
	date1.printDDDYYYY();  // 104 2021
	date2.printDDDYYYY(); // 52 2014
	date3.printDDDYYYY(); // 359 1997
	date4.printDDDYYYY(); // 243 2001
	cout << endl;
	
	// 각 개체의 데이터 멤버를 MMDDYY 형식으로 출력
	date1.printMMDDYY(); // 04/14/21
	date2.printMMDDYY(); // 02/21/14
	date3.printMMDDYY(); // 12/25/97 
	date4.printMMDDYY(); // 08/31/01
	cout << endl;

	//각 개체의 데이터 멤버를 Month DD, YYYY 형식으로 출력 
	date1.printMonthDDYYYY(); // April 14, 2021
	date2.printMonthDDYYYY(); // February 21, 2014
	date3.printMonthDDYYYY(); // December 25, 1997
	date4.printMonthDDYYYY(); // August 31, 2001
	cout << endl;

	return 0;
}

