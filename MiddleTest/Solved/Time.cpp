#include <iostream>
#include <iomanip>
using namespace std;
#include "Time.h"

int Time::count= 0; //static ��� ���� count�� �ʱ�ȭ

int Time::getCount() {
    return count;
}

Time::Time(int hr, int min, int sec) {
    setTime(hr, min, sec);
    count++;
}

void Time::setTime(int h, int m, int s) {
    setHour(h);
    setMinute(m);
    setSecond(s);
}

int Time::getHour()  {
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
        << setfill('0') << setw(2) << getMinute()<< ":"
        << setfill('0') << setw(2) << getSecond();
    cout << endl;
}

void Time::printStandard() {
    cout << setfill('0') << setw(2) << ((getHour() == 0 || getHour()== 12) ? 12 : getHour() % 12) << ":"
        << setfill('0') << setw(2) << getMinute() << ":"
        << setfill('0') << setw(2) << getSecond() << (hour < 12 ? " AM" : " PM");
    cout << endl; // ��� ����� ���߱� ���� ���� �߰�
}

void Time::setHour(int h) {
    hour = (h >= 0 && h < 24) ? h : 0;
}

void Time::setMinute(int m) {
    minute = (m >= 0 && m < 60) ? m : 0;
}

void Time::setSecond(int s) {
    second = (s >= 0 && s < 60) ? s : 0;
}

void Time::tick() {
    setSecond(getSecond() + 1);
    if (getSecond() == 0) 
    {
        setMinute(getMinute() + 1);
        if (getMinute() == 0)
        {
            setHour(getHour() + 1);
        }
    }
}
