#include <iostream>
#include <string>
using namespace std;
#pragma once
#ifndef DATE_H
#define DATE_H

class Date {
public:
	Date(); // default »ý¼ºÀÚ - read the current system date
	Date(int, int); // ddd yyyy format(ex) 254,1998
	Date(int, int, int); // dd/mm/yy format (Ex) 23/1/1998
	Date(string, int, int); // Month dd, yyyy format January,20, 1998
	void print() const; // print data in month/day/year format
	void setDay(int); 
	void setMonth(int);
	void printDDDYYYY() const;// ddd yyyy
	void printMMDDYY()	const; // mm/dd/yy format
	void printMonthDDYYYY() const; // Month dd, yyyy format
	int checkDay(int) const; // check if day is proper for month and year
	int daysInMonth(int) const; // returns number of days in given month
	bool isLeapYear() const; // indicates whether date is in a leap year(À±³â)
	int convertDDToDDD() const; // get 3-digit day based on month and day
	void setMMDDFromDDD(int); // set month and day based on 3-digit day
	string convertMMToMonth(int) const; // conver mm to month name
	void setMMFromMonth(string); // convert month name to mm
	int convertYYYYToYY() const; // get 2 digit year base on 4-digit year
	void setYYYYFromYY(int); // set year based on 2-digit year
	~Date();
private:
	int month;
	int day;
	int year; //any year
	
	//end class Date
};

#endif