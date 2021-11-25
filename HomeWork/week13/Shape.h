#pragma once
#ifndef SHAPE_H
#define SHAPE_H

class Shape {
public:
	virtual void print() const = 0; // 도형의 정보를 출력하는 print함수를 가상함수로 선언
};

class TwoDimensionalShape : public Shape {
public:
	virtual double getArea() const = 0; // 가상함수의 getArea설정
};

class ThreeDimensionalShape : public Shape {
public:
	virtual double getArea() const = 0;// 가상함수의 getArea설정
	virtual double getVolume() const = 0;  // 가상함수의 getVolume 설정
};

class Circle : public TwoDimensionalShape {
private:
	double radius;

public:
	Circle(double = 0);

	void print() const override;
	void setRadius(double);
	double getRadius() const;
	double getArea() const override;
};

class Square : public TwoDimensionalShape {
private:
	double length;
public:
	Square(double);
	void print() const override;
	double getLength() const;
	void setLength(double);
	double getArea() const override;
};


class Sphere :public ThreeDimensionalShape {
private:
	double radius;
public:
	Sphere(double);
	void print() const override;
	void setRadius(double);
	double getRadius() const;
	double getArea() const override;
	double getVolume() const override;
};

class Cube : public ThreeDimensionalShape {
private:
	double length;
public:
	Cube(double);
	void print() const override;
	void setLength(double);
	double getLength() const;
	double getArea() const override;
	double getVolume() const override;
};

#endif