#pragma once
#ifndef RATIONALNUMBER_H
#define RATIONALNUMBER_H

class RationalNumber {
public:
	RationalNumber(int = 0, int = 1); // default constructor
	RationalNumber operator+(const RationalNumber&); // addition
	RationalNumber operator-(const RationalNumber&); // subtraction
	RationalNumber operator*(const RationalNumber&); // multiplication
	RationalNumber operator/(const RationalNumber&); // division

	// relational operators
	bool operator>(const RationalNumber&) const;
	bool operator<(const RationalNumber&) const;
	bool operator>=(const RationalNumber&) const;
	bool operator<=(const RationalNumber&) const;

	// equality operators
	bool operator==(const RationalNumber&) const; 
	bool operator!=(const RationalNumber&) const;
	void printRational() const; // display rational number
private:
	int numerator; // private variable numerator (분자)
	int denominator; // private variable denominator (분모)
	void reduction(); // function for fraction reduction
}; // end class RationalNumbe
#endif