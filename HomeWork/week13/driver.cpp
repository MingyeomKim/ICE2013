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

	for (int i = 0; i < 4; i++) // handle ���� ������ ó���ϴ� ����
	{
		TwoDimensionalShape* two_dimensional_shape = dynamic_cast<TwoDimensionalShape*> (handle[i]);
		ThreeDimensionalShape* three_dimensional_shape = dynamic_cast<ThreeDimensionalShape*>(handle[i]);

		if (two_dimensional_shape != 0) // handle�� TwoDimensionalShape�� �Ļ� Ŭ������ ��ü�̸� (Circle Ȥ�� Square�� ��ü�� ��)
		{
			cout << i + 1 << "��° ������ TwoDimensional Shape �Դϴ�. " << endl;
			two_dimensional_shape->print();
		}
		else if (three_dimensional_shape != 0) // handle�� ThreeDimensionalShape�� �Ļ� Ŭ������ ��ü�̸�
		{
			cout << i + 1 << "��° ������ ThreeDimensional Shape �Դϴ�." << endl;
			three_dimensional_shape->print();
		}
		else {
			cout << "���ǵ� ������ �ƴմϴ�. " << endl;
		} // �ڵ��� �������� ���� else��
	}

	return 0;
}