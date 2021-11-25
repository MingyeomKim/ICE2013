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
// 분모와 분자가 주어졌을 때 두 수의 최대 공약수를 구하는 프로그램



RationalNumber::RationalNumber(int numer, int deno) { // 분모와 분자가 인자
	if (deno < 0) {
		cout << "invalid numerator!" << endl;
		exit(1);
	}
	else {
		numerator = numer;
		denominator = deno;
		reduction();
	} // 약분된 형태의 분자 분모 저장
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
		denominator * ref.denominator); // 분모 분자
	temp.reduction();
	if (temp.denominator < 0)
	{
		temp.denominator *= (-1);
		temp.numerator *= (-1);
	} // 출력할 temp 객체의 분모가 0보다 작은 경우 양수로 바꾸고 분자를 음수로 바꾼다. 

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
	// ref 객체의 분모와 분자를 먼저 약분된 형태로 저장
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