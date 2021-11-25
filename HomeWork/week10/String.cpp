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
	// ���� ��ü�� ���ڿ� a�� �Է��� ��ŭ �����Ҵ��Ѵ�.
	strcpy(this->a, a); // �����Ҵ��� �迭�� ���� �Ҵ��Ѵ�. 
}

String::String(const String& ref) // ���� ������
{
	size = ref.size;
	a = new char[size];
	strcpy(a, ref.a);
}

const String& String::operator=(const String& ref) 
// ���� ������ �����ε�
{
	if (a != NULL)
		delete[] a;
	// ���� a�� �̹� ���� �Ҵ�Ǿ� ������ �����Ѵ�. 

	size = ref.size; // ���ڿ��� ũ�⸦ ���� ��ġ��Ų��.
	a = new char[size]; // ��ġ��Ų ũ�⸸ŭ ���� �����Ҵ��ϰ�
	strcpy(a, ref.a); //���� �����Ѵ�.

	return *this; // ���� ��ü�� ��ȯ���ش�. 
}


String String::operator+(const String& ref)
{
	char* temp = new char[size + ref.size - 1];
	// �ǿ������� ���ڿ��� ũ�⸦ ��ģ ��ŭ ���� �迭�� �����Ҵ�
	strcpy(temp, a); 
	// 0�ε��� ���� ���� �Ҵ��� temp �迭�� ���� ��ü�� ��� ���� a�� �Ҵ�
	strcat(temp, ref.a);
	// ���ڿ��� �̾� ���̴� strcat �Լ��� �̿��� temp �迭�� ref�� �迭�� �߰�
	String tempString(temp);
	delete[] temp; 

	return tempString;
}

String::~String() {
	delete[] a;
	a = NULL; // ���� ������ ���� NULL ����
}

ostream& operator << (ostream& output, const String& ref)
{
	output << ref.a;
	return output;
}