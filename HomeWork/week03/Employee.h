#pragma once
#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
	string firstName;
	string lastName;
	int monthlySalary;
public:
	Employee(string, string, int);
	void setFirstName(string);
	string getFirstName();
	void setLastName(string);
	string getLastName();
	void setMonthlySalary(int);
	int getMonthlySalary();
};