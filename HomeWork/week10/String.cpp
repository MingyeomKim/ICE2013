#include <iostream>
#include <string>
using namespace std;
#include "String.h"
#pragma warning(disable:4996)

String::String()
{
	a = NULL;
	size = 0;
}

String::String(const char * input) {
	size = strlen(input) + 1;
	this->a = new char[size];  
	// 현재 객체의 문자열 a를 입력한 만큼 동적할당한다.
	strcpy(this->a, a); // 동적할당한 배열에 값을 할당한다. 
}

String::String(const String& ref) // 복사 생성자
{
	size = ref.size;
	a = new char[size];
	strcpy(a, ref.a);
}

const String& String::operator=(const String& ref) 
// 대입 연산자 오버로딩
{
	if (a != NULL)
		delete[] a;
	// 만약 a에 이미 값이 할당되어 있으면 해제한다. 

	size = ref.size; // 문자열의 크기를 먼저 일치시킨다.
	a = new char[size]; // 일치시킨 크기만큼 새로 동적할당하고
	strcpy(a, ref.a); //값을 복사한다.

	return *this; // 현재 객체를 반환해준다. 
}


String String::operator+(const String& ref)
{
	char* temp = new char[size + ref.size - 1];
	// 피연산자의 문자열의 크기를 합친 만큼 새로 배열을 동적할당
	strcpy(temp, a); 
	// 0인덱스 부터 새로 할당한 temp 배열에 현재 객체의 멤버 변수 a를 할당
	strcat(temp, ref.a);
	// 문자열을 이어 붙이는 strcat 함수를 이용해 temp 배열에 ref의 배열을 추가
	String tempString(temp);
	delete[] temp; 

	return tempString;
}

String::~String() {
	delete[] a;
	a = NULL; // 에러 방지를 위한 NULL 삽입
}

ostream& operator << (ostream& output, const String& ref)
{
	output << ref.a;
	return output;
}