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
	cout << "Circle 도형의 넓이는 " << getArea() << endl << endl;
}// print 오버라이딩, Circle 객체의 getArea를 호출해 도형의 넓이를 출력해준다. 

void Circle::setRadius(double ra)
{
	radius = (ra > 0.0) ? ra : 0.0; // radius 값 할당 유효성 검사
}

double Circle::getRadius() const
{
	return radius;
}

double Circle::getArea() const // 코드의 안정성을 위해 const로 리턴
{
	return pow(getRadius(), 2) *  PI; // radius를 직접 쓰기 보다는 getRadius() 함수를 써서 코드의 안정성을 높였다. 
}

Square::Square(double len)
{
	setLength(len);
}

void Square::print()const
{
	cout << "Square 도형의 넓이는 " << getArea() << endl << endl;
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
	cout << "Sphere 도형의 넓이 : " << getArea() << endl;
	cout << "Sphere 도형의 부피 : " << getVolume() << endl << endl;
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
	cout << "Cube 도형의 넓이 : " << getArea() << endl;
	cout << "Cube 도형의 부피 : " << getVolume() << endl << endl;
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
