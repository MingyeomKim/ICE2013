
#pragma once

#ifndef TIME_H //포함 전처리기를 사용해 TIME 헤더파일을 선언
#define TIME_H // 헤더파일은 대문자로 선언, '.'dot은 '_' under bar로 표현해주기

//Time 클래스 인터페이스
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