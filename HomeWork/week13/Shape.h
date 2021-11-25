#pragma once
#ifndef SHAPE_H
#define SHAPE_H

class Shape {
public:
	virtual void print() const = 0; // ������ ������ ����ϴ� print�Լ��� �����Լ��� ����
};

class TwoDimensionalShape : public Shape {
public:
	virtual double getArea() const = 0; // �����Լ��� getArea����
};

class ThreeDimensionalShape : public Shape {
public:
	virtual double getArea() const = 0;// �����Լ��� getArea����
	virtual double getVolume() const = 0;  // �����Լ��� getVolume ����
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