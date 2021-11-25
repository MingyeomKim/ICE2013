#include <iostream>
using namespace std;
#include "RationalNumber.h"

void printTrueOrFalse(bool input)
{
	if (input == 0)
		cout << "False" << endl;
	else
		cout << "True" << endl;
}

int main()
{
	RationalNumber first(1,5);  // 1/5
	RationalNumber second(2,5); // 2/5
	RationalNumber third(2, 5); // 2/5

	RationalNumber FirstPlusSecond = first + second;
	RationalNumber FirstMinusSecond = first - second;
	RationalNumber FirstMulSecond = first * second;
	RationalNumber FirstDivSecond = first / second;
	
	FirstPlusSecond.printRational();  // 3/5
	FirstMinusSecond.printRational(); // -1/5
	FirstMulSecond.printRational(); // 2/25
	FirstDivSecond.printRational(); // 1/2

	cout << endl;
	//relational operators
	printTrueOrFalse(first > second); // False
	printTrueOrFalse(first < second); // True
	printTrueOrFalse(second >= third); // True 
	printTrueOrFalse(first >= second); // False

	cout << endl;
	//equality operators
	printTrueOrFalse(first == third); // False
	printTrueOrFalse(first != third); // True

	return 0;
}