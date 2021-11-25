#include <iostream>
using namespace std;
#include "Complex.h"

int main()
{
	Complex <double> doubleFirst(15.0, 20.3);
	Complex <double> doubleSecond(5.5, 7.6);

	Complex <double> doubleSum = doubleFirst + doubleSecond;
	doubleSum.printComplex();

	cout << endl;

	Complex <int> intFirst(50, 10);
	Complex <int> intSecond(40, 66);

	Complex <int> intSubtract = intFirst - intSecond;
	intSubtract.printComplex();

	return 0;
}
