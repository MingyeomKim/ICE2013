#include <iostream>
using namespace std;
#include "Book.h"
#include "Novel.h"
#include "Biography.h"

int main()
{
	Book* novel = new Novel("The Alchemist");
	Book* biography = new Biography("Paulo Coelho");
	novel->print();
	biography->print();
	delete novel;
	delete biography;

	return 0;

}
