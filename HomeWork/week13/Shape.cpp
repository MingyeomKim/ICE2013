#include "Shape.h"
#include <iostream>
using namespace std;
#define PI 3.141592
#include <cmath>

Circle::Circle(double r)
{
	setRadius(r);
}


void Circle::print() const
{
	cout << "Circle ������ ���̴� " << getArea() << endl << endl;
}// print �������̵�, Circle ��ü�� getArea�� ȣ���� ������ ���̸� ������ش�. 

void Circle::setRadius(double ra)
{
	radius = (ra > 0.0) ? ra : 0.0; // radius �� �Ҵ� ��ȿ�� �˻�
}

double Circle::getRadius() const
{
	return radius;
}

double Circle::getArea() const // �ڵ��� �������� ���� const�� ����
{
	return pow(getRadius(), 2) *  PI; // radius�� ���� ���� ���ٴ� getRadius() �Լ��� �Ἥ �ڵ��� �������� ������. 
}

Square::Square(double len)
{
	setLength(len);
}

void Square::print()const
{
	cout << "Square ������ ���̴� " << getArea() << endl << endl;
}

double Square::getLength() const
{
	return length;
}

void Square::setLength(double len)
{
	length = (len > 0.0) ? len : 0.0;
}

double Square::getArea()const
{
	return pow(getLength(), 2);
}

Sphere::Sphere(double ra)
{
	setRadius(ra);
}

void Sphere::print()const
{
	cout << "Sphere ������ ���� : " << getArea() << endl;
	cout << "Sphere ������ ���� : " << getVolume() << endl << endl;
}

void Sphere::setRadius(double ra)
{
	radius = (ra > 0.0) ? ra : 0.0;
}

double Sphere::getRadius() const
{
	return radius;
}


double Sphere::getArea()const
{
	return 4 * PI * pow(getRadius(), 2);
}

double Sphere::getVolume()const
{
	return 4 / 3 * PI * pow(getRadius(), 2);
}

Cube::Cube(double len)
{
	setLength(len);
}

void Cube::print()const
{
	cout << "Cube ������ ���� : " << getArea() << endl;
	cout << "Cube ������ ���� : " << getVolume() << endl << endl;
}

void Cube::setLength(double len)
{
	length = (len > 0.0) ? len : 0.0;
}

double Cube::getLength() const
{
	return length;
}

double Cube::getArea()const
{
	return 6 * pow(getLength(), 2);
}

double Cube::getVolume() const
{
	return pow(getLength(), 3);
}
