#include <iostream>
using namespace std;
#include "Book.h"
#include <iomanip>

Book::Book(string b)
{
	setbook(b);
	cout << "Base Book - Constructor for " << getbook() << endl;
}

void Book::setbook(string b) {
	book = b;
}

string Book::getbook() { // (2)
	return book;
}

void Book::print() const {
	cout << "Book" << endl;
}

Book::~Book() {
	cout << "Base Book - Destructor for " << getbook() << endl;
}
