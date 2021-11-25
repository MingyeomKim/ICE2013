#pragma once
#include <iostream>
using namespace std;

class String {
	friend ostream& operator << (ostream& , const String&);
public:
	String(); // �⺻ ������
	String(const char *); // ������ �����ε�
	String(const String&); // ���� ������
	~String();
	String operator +(const String&);
	const String& operator =(const String&); // 
private:
	char* a; // ���ڿ�
	int size; // �迭�� ũ��
};