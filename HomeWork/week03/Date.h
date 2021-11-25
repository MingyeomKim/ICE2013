#pragma once
#include <iostream>
using namespace std;

class Date {
private:
	int month;
	int day;
	int year;
public:
	Date(int, int, int);
	void setMonth(int);
	int getMonth();
	void setDay(int);
	int getDay();
	void setYear(int);
	int getYear();
	void displayDate();
};