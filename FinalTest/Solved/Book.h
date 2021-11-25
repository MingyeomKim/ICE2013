#pragma once
#ifndef BOOK_H
#define BOOK_H
#include <iostream>
using namespace std;
#include <string>

class Book {
private:
	string book;
public:
	Book(string);
	virtual ~Book();
	void setbook(string);
	string getbook();
	virtual void print() const; // (1)
};

#endif
