#include <iostream>
#include <vector>
using namespace std;
#include "Shape.h"

int main()
{
	vector <Shape* > handle(4);

	handle[0] = new Circle(9);
	handle[1] = new Square(2);
	handle[2] = new Sphere(4.5);
	handle[3] = new Cube(2.2);

	for (int i = 0; i < 4; i++) // handle 내의 도형을 처리하는 루프
	{
		TwoDimensionalShape* two_dimensional_shape = dynamic_cast<TwoDimensionalShape*> (handle[i]);
		ThreeDimensionalShape* three_dimensional_shape = dynamic_cast<ThreeDimensionalShape*>(handle[i]);

		if (two_dimensional_shape != 0) // handle이 TwoDimensionalShape의 파생 클래스의 객체이면 (Circle 혹은 Square의 객체일 때)
		{
			cout << i + 1 << "번째 도형은 TwoDimensional Shape 입니다. " << endl;
			two_dimensional_shape->print();
		}
		else if (three_dimensional_shape != 0) // handle이 ThreeDimensionalShape의 파생 클래스의 객체이면
		{
			cout << i + 1 << "번째 도형은 ThreeDimensional Shape 입니다." << endl;
			three_dimensional_shape->print();
		}
		else {
			cout << "정의된 도형이 아닙니다. " << endl;
		} // 코드의 안정성을 위한 else문
	}

	return 0;
}