#include <iostream>
using namespace std;
#include "Date.h"

int main()
{
	Date a(5, 6, 1981);
	
	cout << "Month : " << a.getMonth() << endl;
	cout << "Day : " << a.getDay() << endl;
	cout << "Year : " << a.getYear() << endl << endl;
	
	cout << "Original date : " << endl;
	a.displayDate();
	cout << endl;

	a.setDay(1);
	a.setMonth(1);
	a.setYear(2005);
	cout << "New date : " << endl;
	a.displayDate();
}
