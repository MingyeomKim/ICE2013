#include <iostream>
using namespace std;
#include "Employee.h"

int main()
{
	Employee emp1("Roberts", "Lisa", 4500);
	Employee emp2("Stein", "Mark", 4000);

	cout << "Employees' yearly salaries : " << endl;
	cout << emp1.getLastName() << " " << emp1.getFirstName() << " : $" << emp1.getMonthlySalary() * 12 << endl;
	cout << emp2.getLastName() << " " << emp2.getFirstName() << " : $" << emp2.getMonthlySalary() * 12 << endl;
	cout << endl;

	cout << "Employees' yearly salaries after 10% raise : " << endl;
	cout << emp1.getLastName() << " " << emp1.getFirstName() << " : $" << emp1.getMonthlySalary() * 12 * 1.1 << endl;
	cout << emp2.getLastName() << " " << emp2.getFirstName() << " : $" << emp2.getMonthlySalary() * 12 * 1.1 << endl;

	return 0;
}