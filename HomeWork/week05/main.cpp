#include <iostream>
using namespace std;
#include "Time.h"

int main()
{
	Time t1(19, 25, 57);  // 19�� 25�� 57��(����)
	Time t2(4, 59, 57); // 04�� 59�� 57��(����)
	Time t3(23, 59, 57);// 23�� 59�� 57��(����)

	for (int i = 0; i < 5; i++)// incrementing into the next minute
	{
		t1.tick();
		cout << endl;
	}
	cout << endl;

	for (int i = 0; i < 5; i++) //incrementing into the next hour
	{
		t2.tick();
		cout << endl;
	}
	cout << endl;

	for (int i = 0; i < 5; i++) // incrementing into the next day
	{
		t3.tick();
		cout << endl;
	}
	cout << endl;

	return 0;
}