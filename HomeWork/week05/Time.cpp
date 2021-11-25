#include <iostream>
#include <iomanip>
using namespace std;

#include "Time.h"

//생성자에서 디폴트 인자를 설정해주면 Time 객체 선언시 아무것도 입력 안하면 0 0 0 세팅
Time::Time(int hr, int min, int sec)
{
	setTime(hr, min, sec);
}

void Time::setTime(int h, int m, int s)
{
	setHour(h);
	setMinute(m);
	setSecond(s);
}

void Time::setHour(int h) {
	hour = (h >= 0 && h < 24) ? h : 0;
}

void Time::setMinute(int m) {
	minute = (m >= 0 && m < 60) ? m : 0;
}

void Time::setSecond(int s)
{
	second = (s >= 0 && s < 60) ? s : 0;
}

int Time::getHour() {
	return hour;
}

int Time::getMinute() {
	return minute;
}

int Time::getSecond() {
	return second;
}

void Time::printUniversal() {
	cout << setfill('0') << setw(2) << getHour() << ":"
		<< setw(2) << getMinute() << ":" << setw(2) << getSecond();
}

void Time::printStandard()
{
	cout << ((getHour() == 0 || getHour() == 12) ? 12 : getHour() % 12)
		<< ":" << setfill('0') << setw(2) << getMinute()
		<< ":" << setw(2) << getSecond() << (hour < 12 ? " AM" : " PM");
}


void Time::tick() {
	second++;
	if (second == 60)
	{
		minute++;
		second = 0;
	}
	if (minute == 60)
	{
		hour++;
		minute = 0;
	}//next minute
	if (hour == 24)
	{
		hour = 0;
		minute = 0;
		second = 0;
	} //next day
	
	printStandard();
}
void Time::tick() {
	second++;
	if (second == 60 && minute == 60 && hour == 24)
	{
		setTime(0, 0, 0);
	}
	else if (minute == 60)
	{
		hour++;
		setTime(hour, 0, 0);
	}
	else if (second == 60)
	{
		minute++;
		setTime(hour, minute, 0);
	}
	printUniversal();
}
