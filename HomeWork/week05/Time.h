
#pragma once

#ifndef TIME_H //���� ��ó���⸦ ����� TIME ��������� ����
#define TIME_H // ��������� �빮�ڷ� ����, '.'dot�� '_' under bar�� ǥ�����ֱ�

//Time Ŭ���� �������̽�
class Time {
public:
	Time(int = 0, int = 0, int = 0); //constructor

	void setTime(int, int, int);//set hour, minute, second
	void setHour(int);
	void setMinute(int);
	void setSecond(int);

	int getHour();
	int getMinute();
	int getSecond();

	void printUniversal();
	void printStandard();

	void tick();
private:
	int hour; // 0 - 23
	int minute; // 0 - 59
	int second; // 0 - 59
};
#endif 