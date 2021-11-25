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

//�ý��� ��¥�� �а� Data ����� �����ϴ� Date ������
Date::Date() {
	
	time_t timer = time(NULL);
	//1970�� 1�� 1�� 0�� 0�� 0�ʸ� �������� ������� �帥 �ð��� �ʴ����� ��ȯ
	struct tm* t = localtime(&timer);
	// localtime()�Լ��� �̿��� �������� timer ������ struct ����ü Ÿ������ �����Ѵ�.
	/*
	* struct tm ����ü
	* int tm_mday
	* int tm_mon
	* int tm_year
	*/
	month = 1 + t->tm_mon; // 1�� ���� ������ ���� �Ҵ��Ѵ�. 
	day = t->tm_mday;
	year = 1900 + t->tm_year; // 1900������� �ظ� ǥ���Ѵ�. 
}

Date::Date(int dy, int yr) 
// �Էµ� 3-digit day�� M�� D���� ���·� �ٲٴ� �Լ�
{
	year = yr;
	setMMDDFromDDD(dy);
}

Date::Date(int dy, int mn, int yy) 
// dy, mn, yy������ �Է��� dy, mn, yyyy ���·� set
{
	setYYYYFromYY(yy); // �Ű����� yy�� yyyy�� ���·� �ٲ۴�
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
	// ���� ��������� DDDYYYY ���·� �ٲپ� ����Ѵ�. 
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
	// �Է°��� month�� �ִ� day���� �۰� 0���� ũ�� �Ǵ�. 
	if (month == 2 && testDay == 29 && isLeapYear())
		return testDay;
	//���� ���
	cout << "Invalid day (" << testDay << ") set to 1.\n";
	return 1;
}

int Date::daysInMonth(int m) const {
	if (isLeapYear() && m == 2)
		return 29; // �����̸� 29	
	return DaysPerMonth[m + 1]; // ������ �ƴϸ� ������� ���
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
	} // �迭�� index�� 0���� �����ϹǷ� month-2���� ������ ����.
	result += day; // �ش� month���� day�� �����ش�. 
	return result;
	// month = 4�̸� 31 + 28 + 31 + day = DDD
}

void Date::setMMDDFromDDD(int dy) {
	// set month and day based on 3-digit day
	int i = 0; // DaysPerMonth �迭�� �ε���
	while (dy - DaysPerMonth[i] > 0)
	{
		dy -= DaysPerMonth[i];
		i++;
	} //while���� �������� i�� �ش� ��
	setMonth(i + 1);  // index�� 0���� �����ϹǷ� 1�� ���� ���� month�� ����
	setDay(dy); // ���� ����ŭ�� day�� ����
}

string Date::convertMMToMonth(int mn) const {
	return MonthToEnglish[mn-1];
}

void Date::setMMFromMonth(string mn)
{
	for (int i = 0; i < 12; i++)
	{
		if (MonthToEnglish[i] == mn)
			// �� �����ڸ� ���� �迭 �� mn�� ��ġ�ϴ� ���ڸ� ã�´�. 
		{
			setMonth(i + 1);
		}//�Է��� Month�� ��ġ�ϴ� �ε������� 1���� ū ���� month��� ������ �ִ´�. 
	}
}

int Date::convertYYYYToYY() const
{
	return (year >= 2000 ? year - 2000 : year - 1900);
}

void Date::setYYYYFromYY(int yy)
{
	// ���ڰ� 21���� �۰ų� ������ 2000s���� ����
	// ���ڰ� 21���� ũ�� 1900s���� ����
	year = (yy < 21 ? yy + 2000 : yy + 1900);
}

Date::~Date()
{
	cout << "Date object destructor for date ";
	print();
} // Date Ŭ������ �Ҹ���