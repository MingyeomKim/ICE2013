#include <iostream>
#include <cstdlib>
using namespace std;
#include "RationalNumber.h"

int gcd(int a, int b)
{
	int c;
	while (b != 0)
	{
		c = a % b;
		a = b;
		b = c;
	}
	return a;
} 
// �и�� ���ڰ� �־����� �� �� ���� �ִ� ������� ���ϴ� ���α׷�



RationalNumber::RationalNumber(int numer, int deno) { // �и�� ���ڰ� ����
	if (deno < 0) {
		cout << "invalid numerator!" << endl;
		exit(1);
	}
	else {
		numerator = numer;
		denominator = deno;
		reduction();
	} // ��е� ������ ���� �и� ����
}

RationalNumber RationalNumber:: operator+(const RationalNumber& ref)
{
	RationalNumber temp(numerator * ref.denominator + denominator * ref.numerator,
		denominator * ref.denominator);
	temp.reduction();
	
	return temp;
}


RationalNumber RationalNumber::operator-(const RationalNumber& ref)
{
	RationalNumber temp(numerator * ref.denominator - denominator * ref.numerator,
		denominator * ref.denominator); // �и� ����
	temp.reduction();
	if (temp.denominator < 0)
	{
		temp.denominator *= (-1);
		temp.numerator *= (-1);
	} // ����� temp ��ü�� �и� 0���� ���� ��� ����� �ٲٰ� ���ڸ� ������ �ٲ۴�. 

	return temp;
}

RationalNumber RationalNumber::operator*(const RationalNumber& ref) {

	RationalNumber temp(numerator * ref.numerator, denominator * ref.denominator);
	temp.reduction();
	return temp;
}

RationalNumber RationalNumber::operator/(const RationalNumber& ref) {

	RationalNumber temp(numerator * ref.denominator, denominator * ref.numerator);
	temp.reduction();
	return temp;
}


bool RationalNumber::operator>(const RationalNumber&ref) const {
	if (numerator * ref.denominator > ref.numerator * denominator)
		return true;
	else
		return false;
}

bool RationalNumber :: operator<(const RationalNumber&ref) const {
	if (*this > ref)
		return false;
	else
		return true;
}

bool RationalNumber :: operator>=(const RationalNumber& ref) const {
	if (numerator * ref.denominator >= ref.numerator * denominator)
		return true;
	else
		return false;
}

bool RationalNumber:: operator<=(const RationalNumber& ref) const {
	if (*this >= ref)
		return false;
	else
		return true;
}


bool RationalNumber::operator==(const RationalNumber&ref) const {
	int new_numer = ref.numerator / gcd(ref.numerator, ref.denominator);
	int new_deno = ref.denominator / gcd(ref.numerator, ref.denominator);
	// ref ��ü�� �и�� ���ڸ� ���� ��е� ���·� ����
	if (new_numer == numerator && new_deno == denominator)
		return true;
	else 
		return false;
}

bool RationalNumber::operator!=(const RationalNumber&ref) const {
	return !(*this == ref);
}

void RationalNumber::printRational() const {
	cout << numerator << "/" << denominator<< endl;
}

void RationalNumber::reduction() {
	int g = gcd(numerator, denominator);
	numerator /= g;
	denominator /= g;
}