#include <iostream>
using namespace std;
#include "Date.h"

Date::Date(int m, int d, int y)
{
	if (month >= 1 && month <= 12)
	{
		month = m;
	}
	else {
		month = 1;
	}
	month = m;
	day = d;
	year = y;
}

void Date::setMonth(int m) {
	month = m;
}
int Date::getMonth() {
	return month;
}

void Date::setDay(int d) {
	day = d;
}
int Date::getDay() {
	return day;
}

void Date::setYear(int y) {
	year = y;
}
int Date::getYear() {
	return year;
}

void Date::displayDate() {
	cout << month << "/" << day << "/" << year << endl;
}
