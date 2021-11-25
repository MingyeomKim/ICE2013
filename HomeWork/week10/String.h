#pragma once
#include <iostream>
using namespace std;

class String {
	friend ostream& operator << (ostream& , const String&);
public:
	String(); // 기본 생성자
	String(const char *); // 생성자 오버로딩
	String(const String&); // 복사 생성자
	~String();
	String operator +(const String&);
	const String& operator =(const String&); // 
private:
	char* a; // 문자열
	int size; // 배열의 크기
};