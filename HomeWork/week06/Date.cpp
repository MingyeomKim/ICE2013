#include <iostream>
#include <string>
#include <iomanip>
#include <ctime> 
using namespace std;
#include "Date.h"
#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

const int DaysPerMonth[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
const string MonthToEnglish[12] = { "January", "February","March", "April", "May", "June", "July", "August", "September" , "October" , "November" ,"December" };

//시스템 날짜를 읽고 Data 멤버를 설정하는 Date 생성자
Date::Date() {
	
	time_t timer = time(NULL);
	//1970년 1월 1일 0시 0분 0초를 기점으로 현재까지 흐른 시간을 초단위로 반환
	struct tm* t = localtime(&timer);
	// localtime()함수를 이용해 정수형인 timer 변수를 struct 구조체 타입으로 포맷한다.
	/*
	* struct tm 구조체
	* int tm_mday
	* int tm_mon
	* int tm_year
	*/
	month = 1 + t->tm_mon; // 1월 부터 현재의 월을 할당한다. 
	day = t->tm_mday;
	year = 1900 + t->tm_year; // 1900년부터의 해를 표시한다. 
}

Date::Date(int dy, int yr) 
// 입력된 3-digit day를 M월 D일의 형태로 바꾸는 함수
{
	year = yr;
	setMMDDFromDDD(dy);
}

Date::Date(int dy, int mn, int yy) 
// dy, mn, yy형태의 입력을 dy, mn, yyyy 형태로 set
{
	setYYYYFromYY(yy); // 매개변수 yy를 yyyy의 형태로 바꾼다
	setMonth(mn); 
	setDay(dy);
}

Date:: Date(string mn, int dy, int yr)
{
	setMMFromMonth(mn);
	day = dy;
	year = yr;
}

void Date:: print() const {
	cout << month << "/" << day << "/" << year << endl;
}

void Date::setDay(int dy)
{
	day = checkDay(dy);
}

void Date::setMonth(int mn)
{
	if (mn > 0 && mn <= 12)
		month = mn;
	else {
		month = 1;
		cout << "Invalid month (" << mn << ") set to 1.\n";
	}
}

void Date::printDDDYYYY() const {
	// 현재 멤버변수를 DDDYYYY 형태로 바꾸어 출력한다. 
	cout << convertDDToDDD() << " " << year << endl;
}

void Date::printMMDDYY() const {
	cout << setfill('0') << setw(2) << month << "/" <<
		setfill('0') << setw(2) << day << "/" <<
		setfill('0') << setw(2) << convertYYYYToYY() << endl;
}

void Date::printMonthDDYYYY() const {
	cout << convertMMToMonth(month) << " " << day << " , " << year << endl;
}

int Date::checkDay(int testDay) const {
	if (testDay > 0 && testDay <= DaysPerMonth[month - 1])
		return testDay;
	// 입력값이 month의 최대 day보다 작고 0보다 크면 옳다. 
	if (month == 2 && testDay == 29 && isLeapYear())
		return testDay;
	//윤년 계산
	cout << "Invalid day (" << testDay << ") set to 1.\n";
	return 1;
}

int Date::daysInMonth(int m) const {
	if (isLeapYear() && m == 2)
		return 29; // 윤년이면 29	
	return DaysPerMonth[m + 1]; // 윤년이 아니면 원래대로 출력
}

bool Date::isLeapYear() const {
	if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) return true;
	else return false;
}

int Date::convertDDToDDD() const{
	
	int result = 0;
	for (int i = 0; i < month - 1; i++)
	{
		result += DaysPerMonth[i];
	} // 배열의 index는 0부터 시작하므로 month-2까지 루프를 돈다.
	result += day; // 해당 month에서 day를 더해준다. 
	return result;
	// month = 4이면 31 + 28 + 31 + day = DDD
}

void Date::setMMDDFromDDD(int dy) {
	// set month and day based on 3-digit day
	int i = 0; // DaysPerMonth 배열의 인덱스
	while (dy - DaysPerMonth[i] > 0)
	{
		dy -= DaysPerMonth[i];
		i++;
	} //while에서 빠져나온 i가 해당 월
	setMonth(i + 1);  // index는 0부터 시작하므로 1을 더한 값을 month로 세팅
	setDay(dy); // 남은 날만큼을 day로 지정
}

string Date::convertMMToMonth(int mn) const {
	return MonthToEnglish[mn-1];
}

void Date::setMMFromMonth(string mn)
{
	for (int i = 0; i < 12; i++)
	{
		if (MonthToEnglish[i] == mn)
			// 비교 연산자를 통해 배열 속 mn과 일치하는 문자를 찾는다. 
		{
			setMonth(i + 1);
		}//입력한 Month와 일치하는 인덱스에서 1보다 큰 수를 month멤버 변수에 넣는다. 
	}
}

int Date::convertYYYYToYY() const
{
	return (year >= 2000 ? year - 2000 : year - 1900);
}

void Date::setYYYYFromYY(int yy)
{
	// 숫자가 21보다 작거나 같으면 2000s으로 가정
	// 숫자가 21보다 크면 1900s으로 가정
	year = (yy < 21 ? yy + 2000 : yy + 1900);
}

Date::~Date()
{
	cout << "Date object destructor for date ";
	print();
} // Date 클래스의 소멸자