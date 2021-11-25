#include <iostream>
using namespace std;
#include "Biography.h" // (7)

Biography::Biography(string Bio)
	:Book(Bio)
{
	setbook(Bio); // (8)
	cout << "derived Biography - Constructor for " << getbook() << endl;
}

void Biography::print() const { // (9)
	cout << "Biography" << endl;
}

Biography:: ~Biography() {
	cout << "derived Biography - Destructor for " << getbook() << endl; // (10) 
}
