#include <iostream>
#include <string>
using namespace std;
#include "String.h"

int main()
{
	String string2 = "happy";
	String string3 = " birth day"; 
	String string1 = string2 + string3;
	cout << string1 << endl;

	// 다중 결합
	String string4 = " to you";
	string1 = string2 + string3 + string4;
	cout << string1 << endl;
	return 0;
}