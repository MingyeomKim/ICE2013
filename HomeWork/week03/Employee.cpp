#include <iostream>
#include <string>
using namespace std;
#include "Employee.h"

Employee::Employee(string f, string l, int s) {
	firstName = f;
	lastName = l;
	if (s <= 0)
	{
		monthlySalary = 0;
	}
	else
	{
		monthlySalary = s;
	}
}

void Employee::setFirstName(string f)
{
	firstName = f;
}
string Employee::getFirstName()
{
	return firstName;
}

void Employee::setLastName(string l)
{
	lastName = l;
}
string Employee::getLastName()
{
	return lastName;
}

void Employee::setMonthlySalary(int s)
{
	monthlySalary = s;
}
int Employee::getMonthlySalary()
{
	return monthlySalary;
}